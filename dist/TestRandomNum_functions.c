#include "omc_simulation_settings.h"
#include "TestRandomNum_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "TestRandomNum_includes.h"


modelica_integer omc_GetRandomNum_runRandomNum(threadData_t *threadData)
{
  int _randomNumber_ext;
  modelica_integer _randomNumber;
  // _randomNumber has no default value.
  _randomNumber_ext = getRandomNumCFunction();
  _randomNumber = (modelica_integer)_randomNumber_ext;
  return _randomNumber;
}
modelica_metatype boxptr_GetRandomNum_runRandomNum(threadData_t *threadData)
{
  modelica_integer _randomNumber;
  modelica_metatype out_randomNumber;
  _randomNumber = omc_GetRandomNum_runRandomNum(threadData);
  out_randomNumber = mmc_mk_icon(_randomNumber);
  return out_randomNumber;
}

#ifdef __cplusplus
}
#endif
