/* Algebraic */
#include "System_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void System_eqFunction_110(DATA* data, threadData_t *threadData);
extern void System_eqFunction_111(DATA* data, threadData_t *threadData);
extern void System_eqFunction_112(DATA* data, threadData_t *threadData);
extern void System_eqFunction_113(DATA* data, threadData_t *threadData);
extern void System_eqFunction_114(DATA* data, threadData_t *threadData);
extern void System_eqFunction_115(DATA* data, threadData_t *threadData);
extern void System_eqFunction_116(DATA* data, threadData_t *threadData);
extern void System_eqFunction_117(DATA* data, threadData_t *threadData);
extern void System_eqFunction_118(DATA* data, threadData_t *threadData);
extern void System_eqFunction_119(DATA* data, threadData_t *threadData);
extern void System_eqFunction_120(DATA* data, threadData_t *threadData);
extern void System_eqFunction_121(DATA* data, threadData_t *threadData);
extern void System_eqFunction_122(DATA* data, threadData_t *threadData);
extern void System_eqFunction_123(DATA* data, threadData_t *threadData);
extern void System_eqFunction_124(DATA* data, threadData_t *threadData);
extern void System_eqFunction_125(DATA* data, threadData_t *threadData);
extern void System_eqFunction_126(DATA* data, threadData_t *threadData);
extern void System_eqFunction_127(DATA* data, threadData_t *threadData);
extern void System_eqFunction_128(DATA* data, threadData_t *threadData);
extern void System_eqFunction_129(DATA* data, threadData_t *threadData);
extern void System_eqFunction_130(DATA* data, threadData_t *threadData);
extern void System_eqFunction_131(DATA* data, threadData_t *threadData);
extern void System_eqFunction_132(DATA* data, threadData_t *threadData);
extern void System_eqFunction_133(DATA* data, threadData_t *threadData);
extern void System_eqFunction_134(DATA* data, threadData_t *threadData);
extern void System_eqFunction_135(DATA* data, threadData_t *threadData);
extern void System_eqFunction_136(DATA* data, threadData_t *threadData);
extern void System_eqFunction_137(DATA* data, threadData_t *threadData);
extern void System_eqFunction_138(DATA* data, threadData_t *threadData);
extern void System_eqFunction_139(DATA* data, threadData_t *threadData);
extern void System_eqFunction_140(DATA* data, threadData_t *threadData);
extern void System_eqFunction_141(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
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
  {
    System_eqFunction_113(data, threadData);
    threadData->lastEquationSolved = 113;
  }
  {
    System_eqFunction_114(data, threadData);
    threadData->lastEquationSolved = 114;
  }
  {
    System_eqFunction_115(data, threadData);
    threadData->lastEquationSolved = 115;
  }
  {
    System_eqFunction_116(data, threadData);
    threadData->lastEquationSolved = 116;
  }
  {
    System_eqFunction_117(data, threadData);
    threadData->lastEquationSolved = 117;
  }
  {
    System_eqFunction_118(data, threadData);
    threadData->lastEquationSolved = 118;
  }
  {
    System_eqFunction_119(data, threadData);
    threadData->lastEquationSolved = 119;
  }
  {
    System_eqFunction_120(data, threadData);
    threadData->lastEquationSolved = 120;
  }
  {
    System_eqFunction_121(data, threadData);
    threadData->lastEquationSolved = 121;
  }
  {
    System_eqFunction_122(data, threadData);
    threadData->lastEquationSolved = 122;
  }
  {
    System_eqFunction_123(data, threadData);
    threadData->lastEquationSolved = 123;
  }
  {
    System_eqFunction_124(data, threadData);
    threadData->lastEquationSolved = 124;
  }
  {
    System_eqFunction_125(data, threadData);
    threadData->lastEquationSolved = 125;
  }
  {
    System_eqFunction_126(data, threadData);
    threadData->lastEquationSolved = 126;
  }
  {
    System_eqFunction_127(data, threadData);
    threadData->lastEquationSolved = 127;
  }
  {
    System_eqFunction_128(data, threadData);
    threadData->lastEquationSolved = 128;
  }
  {
    System_eqFunction_129(data, threadData);
    threadData->lastEquationSolved = 129;
  }
  {
    System_eqFunction_130(data, threadData);
    threadData->lastEquationSolved = 130;
  }
  {
    System_eqFunction_131(data, threadData);
    threadData->lastEquationSolved = 131;
  }
  {
    System_eqFunction_132(data, threadData);
    threadData->lastEquationSolved = 132;
  }
  {
    System_eqFunction_133(data, threadData);
    threadData->lastEquationSolved = 133;
  }
  {
    System_eqFunction_134(data, threadData);
    threadData->lastEquationSolved = 134;
  }
  {
    System_eqFunction_135(data, threadData);
    threadData->lastEquationSolved = 135;
  }
  {
    System_eqFunction_136(data, threadData);
    threadData->lastEquationSolved = 136;
  }
  {
    System_eqFunction_137(data, threadData);
    threadData->lastEquationSolved = 137;
  }
  {
    System_eqFunction_138(data, threadData);
    threadData->lastEquationSolved = 138;
  }
  {
    System_eqFunction_139(data, threadData);
    threadData->lastEquationSolved = 139;
  }
  {
    System_eqFunction_140(data, threadData);
    threadData->lastEquationSolved = 140;
  }
  {
    System_eqFunction_141(data, threadData);
    threadData->lastEquationSolved = 141;
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
