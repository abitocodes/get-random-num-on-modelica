#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

// 응답 데이터를 동적으로 저장할 구조체 정의
struct MemoryStruct {
    char *memory;
    size_t size;
};

// libcurl 콜백 함수: 서버로부터 받은 데이터를 누적하여 저장
static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    size_t realSize = size * nmemb;
    struct MemoryStruct *mem = (struct MemoryStruct *)userp;
    
    char *ptr = realloc(mem->memory, mem->size + realSize + 1);
    if (ptr == NULL) {
        fprintf(stderr, "메모리 할당 실패\n");
        return 0;
    }
    
    mem->memory = ptr;
    memcpy(&(mem->memory[mem->size]), contents, realSize);
    mem->size += realSize;
    mem->memory[mem->size] = '\0';
    
    return realSize;
}

int getRandomNumCFunction(void) {
    CURL *curlHandle;
    CURLcode res;
    float number = 0;
    
    // 응답 데이터를 저장할 구조체 초기화
    struct MemoryStruct chunk;
    chunk.memory = malloc(1);  // 빈 버퍼 할당
    chunk.size = 0;
    
    // libcurl 초기화
    curl_global_init(CURL_GLOBAL_ALL);
    curlHandle = curl_easy_init();
    if(curlHandle) {
        // 요청 URL 설정
        curl_easy_setopt(curlHandle, CURLOPT_URL, "http://www.randomnumberapi.com/api/v1.0/random?min=1&max=5&count=1");
        // 데이터를 저장할 콜백 함수 설정
        curl_easy_setopt(curlHandle, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curlHandle, CURLOPT_WRITEDATA, (void *)&chunk);
        
        // HTTP 요청 수행
        res = curl_easy_perform(curlHandle);
        if(res != CURLE_OK) {
            fprintf(stderr, "요청 실패: %s\n", curl_easy_strerror(res));
        } else {
            // 간단하게 sscanf를 이용하여 JSON 배열 내부의 숫자만 파싱
            if(sscanf(chunk.memory, "[%f]", &number) == 1) {
                number = number / 100;
                printf("randomNumber:%.2f\n", number);
            } else {
                fprintf(stderr, "응답 파싱 실패\n");
            }
        }
        // curl 정리
        curl_easy_cleanup(curlHandle);
    }
    
    free(chunk.memory);
    curl_global_cleanup();
    return number;
}
