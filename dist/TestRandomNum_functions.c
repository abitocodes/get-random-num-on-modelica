#include "omc_simulation_settings.h"
#include "TestRandomNum_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "TestRandomNum_includes.h"


modelica_integer omc_GetRandomNum_runRandomNum(threadData_t *threadData)
{
  int _status_ext;
  modelica_integer _status;
  // _status has no default value.
  _status_ext = getRandomNumCFunction();
  _status = (modelica_integer)_status_ext;
  return _status;
}
modelica_metatype boxptr_GetRandomNum_runRandomNum(threadData_t *threadData)
{
  modelica_integer _status;
  modelica_metatype out_status;
  _status = omc_GetRandomNum_runRandomNum(threadData);
  out_status = mmc_mk_icon(_status);
  return out_status;
}

#ifdef __cplusplus
}
#endif
