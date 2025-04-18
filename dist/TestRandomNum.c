/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TestRandomNum_model.h"
#include "simulation/solver/events.h"

/* FIXME these defines are ugly and hard to read, why not use direct function pointers instead? */
#define prefixedName_performSimulation TestRandomNum_performSimulation
#define prefixedName_updateContinuousSystem TestRandomNum_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation TestRandomNum_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TestRandomNum_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestRandomNum_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestRandomNum_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestRandomNum_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestRandomNum_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TestRandomNum_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestRandomNum_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestRandomNum_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestRandomNum_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestRandomNum_setb_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


OMC_DISABLE_OPT
int TestRandomNum_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TestRandomNum_functionLocalKnownVars(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TestRandomNum_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int TestRandomNum_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TestRandomNum_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

void TestRandomNum_computeVarIndices(size_t* realIndex, size_t* integerIndex, size_t* booleanIndex, size_t* stringIndex)
{
  TRACE_PUSH

  size_t i_real = 0;
  size_t i_integer = 0;
  size_t i_boolean = 0;
  size_t i_string = 0;

  realIndex[0] = 0;
  integerIndex[0] = 0;
  booleanIndex[0] = 0;
  stringIndex[0] = 0;

  /* stateVars */
  
  /* derivativeVars */
  
  /* algVars */
  
  /* discreteAlgVars */
  
  /* realOptimizeConstraintsVars */
  
  /* realOptimizeFinalConstraintsVars */
  
  
  /* intAlgVars */
  
  /* boolAlgVars */
  
  /* stringAlgVars */
  
  TRACE_POP
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TestRandomNum_12jac.h"
#include "TestRandomNum_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TestRandomNum_callback = {
   (int (*)(DATA *, threadData_t *, void *)) TestRandomNum_performSimulation,    /* performSimulation */
   (int (*)(DATA *, threadData_t *, void *)) TestRandomNum_performQSSSimulation,    /* performQSSSimulation */
   TestRandomNum_updateContinuousSystem,    /* updateContinuousSystem */
   TestRandomNum_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   NULL,    /* initialNonLinearSystem */
   NULL,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   TestRandomNum_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   TestRandomNum_initializeDAEmodeData,
   TestRandomNum_computeVarIndices,
   TestRandomNum_functionODE,
   TestRandomNum_functionAlgebraics,
   TestRandomNum_functionDAE,
   TestRandomNum_functionLocalKnownVars,
   TestRandomNum_input_function,
   TestRandomNum_input_function_init,
   TestRandomNum_input_function_updateStartValues,
   TestRandomNum_data_function,
   TestRandomNum_output_function,
   TestRandomNum_setc_function,
   TestRandomNum_setb_function,
   TestRandomNum_function_storeDelayed,
   TestRandomNum_function_storeSpatialDistribution,
   TestRandomNum_function_initSpatialDistribution,
   TestRandomNum_updateBoundVariableAttributes,
   TestRandomNum_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   NULL,
   TestRandomNum_functionRemovedInitialEquations,
   TestRandomNum_updateBoundParameters,
   TestRandomNum_checkForAsserts,
   TestRandomNum_function_ZeroCrossingsEquations,
   TestRandomNum_function_ZeroCrossings,
   TestRandomNum_function_updateRelations,
   TestRandomNum_zeroCrossingDescription,
   TestRandomNum_relationDescription,
   TestRandomNum_function_initSample,
   TestRandomNum_INDEX_JAC_A,
   TestRandomNum_INDEX_JAC_B,
   TestRandomNum_INDEX_JAC_C,
   TestRandomNum_INDEX_JAC_D,
   TestRandomNum_INDEX_JAC_F,
   TestRandomNum_INDEX_JAC_H,
   TestRandomNum_initialAnalyticJacobianA,
   TestRandomNum_initialAnalyticJacobianB,
   TestRandomNum_initialAnalyticJacobianC,
   TestRandomNum_initialAnalyticJacobianD,
   TestRandomNum_initialAnalyticJacobianF,
   TestRandomNum_initialAnalyticJacobianH,
   TestRandomNum_functionJacA_column,
   TestRandomNum_functionJacB_column,
   TestRandomNum_functionJacC_column,
   TestRandomNum_functionJacD_column,
   TestRandomNum_functionJacF_column,
   TestRandomNum_functionJacH_column,
   TestRandomNum_linear_model_frame,
   TestRandomNum_linear_model_datarecovery_frame,
   TestRandomNum_mayer,
   TestRandomNum_lagrange,
   TestRandomNum_pickUpBoundsForInputsInOptimization,
   TestRandomNum_setInputData,
   TestRandomNum_getTimeGrid,
   TestRandomNum_symbolicInlineSystem,
   TestRandomNum_function_initSynchronous,
   TestRandomNum_function_updateSynchronous,
   TestRandomNum_function_equationsSynchronous,
   TestRandomNum_inputNames,
   TestRandomNum_dataReconciliationInputNames,
   TestRandomNum_dataReconciliationUnmeasuredVariables,
   NULL,
   NULL,
   NULL,
   NULL,
   -1,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "GetRandomNum"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/VD/Github/simulate-simple-mo/get-random-num-on-modelica/src/GetRandomNum"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,12,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,75,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "TestRandomNum"
#define _OMC_LIT_RESOURCE_1_dir_data "C:/VD/Github/simulate-simple-mo/get-random-num-on-modelica/src"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,13,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,62,_OMC_LIT_RESOURCE_1_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,4,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir)}};
void TestRandomNum_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TestRandomNum_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TestRandomNum";
  data->modelData->modelFilePrefix = "TestRandomNum";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/VD/Github/simulate-simple-mo/get-random-num-on-modelica/src";
  data->modelData->modelGUID = "{c4618953-4644-4f30-80b6-9e95b22ff6d1}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "TestRandomNum_init.c"
    ;
  static const char contents_info[] =
    #include "TestRandomNum_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "TestRandomNum_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "TestRandomNum_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->modelDataXml.fileName = "TestRandomNum_info.json";
  data->modelData->resourcesDir = NULL;
  data->modelData->runTestsuite = 0;
  data->modelData->nStates = 0;
  data->modelData->nVariablesRealArray = 0;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesIntegerArray = 0;
  data->modelData->nVariablesBooleanArray = 0;
  data->modelData->nVariablesStringArray = 0;
  data->modelData->nParametersReal = 0;
  data->modelData->nParametersInteger = 0;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  data->modelData->nAliasReal = 0;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 1;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 2;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 0;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 6;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  data->modelData->nDelayExpressions = 0;
  data->modelData->nBaseClocks = 0;
  data->modelData->nSpatialDistributions = 0;
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->nSetbVars = 0;
  data->modelData->nRelatedBoundaryConditions = 0;
  data->modelData->linearizationDumpLanguage = OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}


#if defined(__MINGW32__) || defined(_MSC_VER)

#if !defined(_UNICODE)
#define _UNICODE
#endif
#if !defined(UNICODE)
#define UNICODE
#endif

#include <windows.h>
char** omc_fixWindowsArgv(int argc, wchar_t **wargv)
{
  char** newargv;
  /* Support for non-ASCII characters
  * Read the unicode command line arguments and translate it to char*
  */
  newargv = (char**)malloc(argc*sizeof(char*));
  for (int i = 0; i < argc; i++) {
    newargv[i] = omc_wchar_to_multibyte_str(wargv[i]);
  }
  return newargv;
}

#define OMC_MAIN wmain
#define OMC_CHAR wchar_t
#define OMC_EXPORT __declspec(dllexport) extern

#else
#define omc_fixWindowsArgv(N, A) (A)
#define OMC_MAIN main
#define OMC_CHAR char
#define OMC_EXPORT extern
#endif

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
#if defined(OMC_DLL_MAIN_DEFINE)
OMC_EXPORT int omcDllMain(int argc, OMC_CHAR **argv)
#else
int OMC_MAIN(int argc, OMC_CHAR** argv)
#endif
{
  char** newargv = omc_fixWindowsArgv(argc, argv);
  /*
    Set the error functions to be used for simulation.
    The default value for them is 'functions' version. Change it here to 'simulation' versions
  */
  omc_assert = omc_assert_simulation;
  omc_assert_withEquationIndexes = omc_assert_simulation_withEquationIndexes;

  omc_assert_warning_withEquationIndexes = omc_assert_warning_simulation_withEquationIndexes;
  omc_assert_warning = omc_assert_warning_simulation;
  omc_terminate = omc_terminate_simulation;
  omc_throw = omc_throw_simulation;

  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    TestRandomNum_setupDataStruc(&data, threadData);
    res = _main_initRuntimeAndSimulation(argc, newargv, &data, threadData);
    if(res == 0) {
      res = _main_SimulationRuntime(argc, newargv, &data, threadData);
    }
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  return res;
}

#ifdef __cplusplus
}
#endif


