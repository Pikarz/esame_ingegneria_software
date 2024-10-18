/* Algebraic */
#include "System_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void System_eqFunction_90(DATA* data, threadData_t *threadData);
extern void System_eqFunction_91(DATA* data, threadData_t *threadData);
extern void System_eqFunction_95(DATA* data, threadData_t *threadData);
extern void System_eqFunction_96(DATA* data, threadData_t *threadData);
extern void System_eqFunction_100(DATA* data, threadData_t *threadData);
extern void System_eqFunction_101(DATA* data, threadData_t *threadData);
extern void System_eqFunction_110(DATA* data, threadData_t *threadData);
extern void System_eqFunction_111(DATA* data, threadData_t *threadData);
extern void System_eqFunction_112(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
  {
    System_eqFunction_90(data, threadData);
    threadData->lastEquationSolved = 90;
  }
  {
    System_eqFunction_91(data, threadData);
    threadData->lastEquationSolved = 91;
  }
  {
    System_eqFunction_95(data, threadData);
    threadData->lastEquationSolved = 95;
  }
  {
    System_eqFunction_96(data, threadData);
    threadData->lastEquationSolved = 96;
  }
  {
    System_eqFunction_100(data, threadData);
    threadData->lastEquationSolved = 100;
  }
  {
    System_eqFunction_101(data, threadData);
    threadData->lastEquationSolved = 101;
  }
  {
    System_eqFunction_110(data, threadData);
    threadData->lastEquationSolved = 110;
  }
  {
    System_eqFunction_111(data, threadData);
    threadData->lastEquationSolved = 111;
  }
  {
    System_eqFunction_112(data, threadData);
    threadData->lastEquationSolved = 112;
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
