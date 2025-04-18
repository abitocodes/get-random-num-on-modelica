#ifndef TestRandomNum__H
#define TestRandomNum__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif


DLLDirection
modelica_integer omc_GetRandomNum_runRandomNum(threadData_t *threadData);
DLLDirection
modelica_metatype boxptr_GetRandomNum_runRandomNum(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_GetRandomNum_runRandomNum,2,0) {(void*) boxptr_GetRandomNum_runRandomNum,0}};
#define boxvar_GetRandomNum_runRandomNum MMC_REFSTRUCTLIT(boxvar_lit_GetRandomNum_runRandomNum)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int getRandomNumCFunction();
 */
#include "TestRandomNum_model.h"


#ifdef __cplusplus
}
#endif
#endif

