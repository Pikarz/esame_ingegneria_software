/* Algebraic */
#include "System_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void System_eqFunction_64(DATA* data, threadData_t *threadData);
extern void System_eqFunction_65(DATA* data, threadData_t *threadData);
extern void System_eqFunction_66(DATA* data, threadData_t *threadData);
extern void System_eqFunction_67(DATA* data, threadData_t *threadData);
extern void System_eqFunction_68(DATA* data, threadData_t *threadData);
extern void System_eqFunction_69(DATA* data, threadData_t *threadData);
extern void System_eqFunction_70(DATA* data, threadData_t *threadData);
extern void System_eqFunction_71(DATA* data, threadData_t *threadData);
extern void System_eqFunction_72(DATA* data, threadData_t *threadData);
extern void System_eqFunction_73(DATA* data, threadData_t *threadData);
extern void System_eqFunction_74(DATA* data, threadData_t *threadData);
extern void System_eqFunction_75(DATA* data, threadData_t *threadData);
extern void System_eqFunction_76(DATA* data, threadData_t *threadData);
extern void System_eqFunction_77(DATA* data, threadData_t *threadData);
extern void System_eqFunction_78(DATA* data, threadData_t *threadData);
extern void System_eqFunction_79(DATA* data, threadData_t *threadData);
extern void System_eqFunction_80(DATA* data, threadData_t *threadData);
extern void System_eqFunction_81(DATA* data, threadData_t *threadData);
extern void System_eqFunction_82(DATA* data, threadData_t *threadData);
extern void System_eqFunction_83(DATA* data, threadData_t *threadData);
extern void System_eqFunction_84(DATA* data, threadData_t *threadData);
extern void System_eqFunction_85(DATA* data, threadData_t *threadData);
extern void System_eqFunction_86(DATA* data, threadData_t *threadData);
extern void System_eqFunction_87(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
  {
    System_eqFunction_64(data, threadData);
    threadData->lastEquationSolved = 64;
  }
  {
    System_eqFunction_65(data, threadData);
    threadData->lastEquationSolved = 65;
  }
  {
    System_eqFunction_66(data, threadData);
    threadData->lastEquationSolved = 66;
  }
  {
    System_eqFunction_67(data, threadData);
    threadData->lastEquationSolved = 67;
  }
  {
    System_eqFunction_68(data, threadData);
    threadData->lastEquationSolved = 68;
  }
  {
    System_eqFunction_69(data, threadData);
    threadData->lastEquationSolved = 69;
  }
  {
    System_eqFunction_70(data, threadData);
    threadData->lastEquationSolved = 70;
  }
  {
    System_eqFunction_71(data, threadData);
    threadData->lastEquationSolved = 71;
  }
  {
    System_eqFunction_72(data, threadData);
    threadData->lastEquationSolved = 72;
  }
  {
    System_eqFunction_73(data, threadData);
    threadData->lastEquationSolved = 73;
  }
  {
    System_eqFunction_74(data, threadData);
    threadData->lastEquationSolved = 74;
  }
  {
    System_eqFunction_75(data, threadData);
    threadData->lastEquationSolved = 75;
  }
  {
    System_eqFunction_76(data, threadData);
    threadData->lastEquationSolved = 76;
  }
  {
    System_eqFunction_77(data, threadData);
    threadData->lastEquationSolved = 77;
  }
  {
    System_eqFunction_78(data, threadData);
    threadData->lastEquationSolved = 78;
  }
  {
    System_eqFunction_79(data, threadData);
    threadData->lastEquationSolved = 79;
  }
  {
    System_eqFunction_80(data, threadData);
    threadData->lastEquationSolved = 80;
  }
  {
    System_eqFunction_81(data, threadData);
    threadData->lastEquationSolved = 81;
  }
  {
    System_eqFunction_82(data, threadData);
    threadData->lastEquationSolved = 82;
  }
  {
    System_eqFunction_83(data, threadData);
    threadData->lastEquationSolved = 83;
  }
  {
    System_eqFunction_84(data, threadData);
    threadData->lastEquationSolved = 84;
  }
  {
    System_eqFunction_85(data, threadData);
    threadData->lastEquationSolved = 85;
  }
  {
    System_eqFunction_86(data, threadData);
    threadData->lastEquationSolved = 86;
  }
  {
    System_eqFunction_87(data, threadData);
    threadData->lastEquationSolved = 87;
  }
}
/* for continuous time variables */
int System_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  System_function_savePreSynchronous(data, threadData);
  
  functionAlg_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
