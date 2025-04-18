/* Initialization */
#include "TestRandomNum_model.h"
#include "TestRandomNum_11mix.h"
#include "TestRandomNum_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TestRandomNum_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: ALGORITHM

  GetRandomNum.runRandomNum();
*/
void TestRandomNum_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  omc_GetRandomNum_runRandomNum(threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
void TestRandomNum_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TestRandomNum_eqFunction_1(data, threadData);
  TRACE_POP
}

int TestRandomNum_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TestRandomNum_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No TestRandomNum_functionInitialEquations_lambda0 function */

int TestRandomNum_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

