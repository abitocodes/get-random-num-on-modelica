import subprocess
import re
import matplotlib.pyplot as plt
import time

# 명령어를 실행하고 결과에서 'Vps 값'을 추출하는 함수
def get_vps_value():
    result = subprocess.run(['./dist-runSimpleCircuitWithNoise/SimpleCircuitWithNoise'], capture_output=True, text=True)
    output = result.stdout
    match = re.search(r'Vps 값:\s*(\d+\.?\d*)', output)
    if match:
        return float(match.group(1))
    else:
        raise ValueError("Vps 값을 찾을 수 없습니다.")

# 그래프 초기 설정
plt.ion()  # interactive mode 활성화
fig, ax = plt.subplots()
vps_values = []

for i in range(10):
    vps = get_vps_value()
    vps_values.append(vps)

    ax.clear()
    ax.plot(vps_values, marker='o', linestyle='-', color='b')
    ax.set_title("Real-time Vps Values")
    ax.set_xlabel("Execution Count")
    ax.set_ylabel("Vps Value")
    ax.grid(True)

    plt.pause(0.5)  # 그래프가 갱신되는 것을 보기 위한 짧은 대기

plt.ioff()
plt.show()
