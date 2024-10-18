/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "System_model.h"
#include "simulation/solver/events.h"

/* FIXME these defines are ugly and hard to read, why not use direct function pointers instead? */
#define prefixedName_performSimulation System_performSimulation
#define prefixedName_updateContinuousSystem System_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation System_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int System_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int System_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int System_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int System_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int System_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int System_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int System_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int System_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 76
type: SIMPLE_ASSIGN
m.std3.sqrt1.u = if noEvent(time >= m.std3.variance.t_0 + m.std3.variance.t_eps) then max(m.std3.variance.var, 0.0) else 0.0
*/
void System_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  modelica_boolean tmp0;
  tmp0 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[29]/* m.std3.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[30]/* m.std3.variance.t_eps PARAM */) );
  (data->localData[0]->realVars[46]/* m.std3.sqrt1.u variable */)  = (tmp0?fmax((data->localData[0]->realVars[8]/* m.std3.variance.var STATE(1) */) ,0.0):0.0);
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
m.StdDevErr[3] = sqrt(m.std3.sqrt1.u)
*/
void System_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  modelica_real tmp1;
  tmp1 = (data->localData[0]->realVars[46]/* m.std3.sqrt1.u variable */) ;
  if(!(tmp1 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(m.std3.sqrt1.u) was %g should be >= 0", tmp1);
    }
  }
  (data->localData[0]->realVars[35]/* m.StdDevErr[3] variable */)  = sqrt(tmp1);
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
m.std2.sqrt1.u = if noEvent(time >= m.std2.variance.t_0 + m.std2.variance.t_eps) then max(m.std2.variance.var, 0.0) else 0.0
*/
void System_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  modelica_boolean tmp2;
  tmp2 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[26]/* m.std2.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[27]/* m.std2.variance.t_eps PARAM */) );
  (data->localData[0]->realVars[44]/* m.std2.sqrt1.u variable */)  = (tmp2?fmax((data->localData[0]->realVars[6]/* m.std2.variance.var STATE(1) */) ,0.0):0.0);
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
m.StdDevErr[2] = sqrt(m.std2.sqrt1.u)
*/
void System_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  modelica_real tmp3;
  tmp3 = (data->localData[0]->realVars[44]/* m.std2.sqrt1.u variable */) ;
  if(!(tmp3 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(m.std2.sqrt1.u) was %g should be >= 0", tmp3);
    }
  }
  (data->localData[0]->realVars[34]/* m.StdDevErr[2] variable */)  = sqrt(tmp3);
  TRACE_POP
}
/*
equation index: 80
type: SIMPLE_ASSIGN
m.std1.sqrt1.u = if noEvent(time >= m.std1.variance.t_0 + m.std1.variance.t_eps) then max(m.std1.variance.var, 0.0) else 0.0
*/
void System_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  modelica_boolean tmp4;
  tmp4 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[23]/* m.std1.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[24]/* m.std1.variance.t_eps PARAM */) );
  (data->localData[0]->realVars[42]/* m.std1.sqrt1.u variable */)  = (tmp4?fmax((data->localData[0]->realVars[4]/* m.std1.variance.var STATE(1) */) ,0.0):0.0);
  TRACE_POP
}
/*
equation index: 81
type: SIMPLE_ASSIGN
m.StdDevErr[1] = sqrt(m.std1.sqrt1.u)
*/
void System_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  modelica_real tmp5;
  tmp5 = (data->localData[0]->realVars[42]/* m.std1.sqrt1.u variable */) ;
  if(!(tmp5 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(m.std1.sqrt1.u) was %g should be >= 0", tmp5);
    }
  }
  (data->localData[0]->realVars[33]/* m.StdDevErr[1] variable */)  = sqrt(tmp5);
  TRACE_POP
}
void System_eqFunction_82(DATA*, threadData_t*);
void System_eqFunction_85(DATA*, threadData_t*);
void System_eqFunction_84(DATA*, threadData_t*);
void System_eqFunction_83(DATA*, threadData_t*);
/*
equation index: 86
indexNonlinear: 0
type: NONLINEAR

vars: {m.AvgErr[3], m.AvgErr[2], m.AvgErr[1]}
eqns: {82, 85, 84, 83}
*/
void System_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 86 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[32]/* m.AvgErr[3] variable */) ;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = (data->localData[0]->realVars[31]/* m.AvgErr[2] variable */) ;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = (data->localData[0]->realVars[30]/* m.AvgErr[1] variable */) ;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,86};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 86 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[32]/* m.AvgErr[3] variable */)  = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  (data->localData[0]->realVars[31]/* m.AvgErr[2] variable */)  = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  (data->localData[0]->realVars[30]/* m.AvgErr[1] variable */)  = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  TRACE_POP
}
/*
equation index: 87
type: SIMPLE_ASSIGN
$DER.m.mean2.mu = if noEvent(time >= m.mean2.t_0 + m.mean2.t_eps) then (m.e[2] - m.mean2.mu) / (time - m.mean2.t_0) else 0.0
*/
void System_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  modelica_boolean tmp0;
  tmp0 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[11]/* m.mean2.t_0 PARAM */)  + (data->simulationInfo->realParameter[12]/* m.mean2.t_eps PARAM */) );
  (data->localData[0]->realVars[16]/* der(m.mean2.mu) STATE_DER */)  = (tmp0?DIVISION_SIM((data->localData[0]->realVars[58]/* m.e[2] DISCRETE */)  - (data->localData[0]->realVars[1]/* m.mean2.mu STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[11]/* m.mean2.t_0 PARAM */) ,"time - m.mean2.t_0",equationIndexes):0.0);
  TRACE_POP
}
/*
equation index: 88
type: SIMPLE_ASSIGN
$DER.m.std2.variance.var = if noEvent(time >= m.std2.variance.t_0 + m.std2.variance.t_eps) then ((m.e[2] - m.std2.variance.mu) ^ 2.0 - m.std2.variance.var) / (time - m.std2.variance.t_0) else 0.0
*/
void System_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp1 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[26]/* m.std2.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[27]/* m.std2.variance.t_eps PARAM */) );
  tmp3 = (modelica_boolean)tmp1;
  if(tmp3)
  {
    tmp2 = (data->localData[0]->realVars[58]/* m.e[2] DISCRETE */)  - (data->localData[0]->realVars[5]/* m.std2.variance.mu STATE(1) */) ;
    tmp4 = DIVISION_SIM((tmp2 * tmp2) - (data->localData[0]->realVars[6]/* m.std2.variance.var STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[26]/* m.std2.variance.t_0 PARAM */) ,"time - m.std2.variance.t_0",equationIndexes);
  }
  else
  {
    tmp4 = 0.0;
  }
  (data->localData[0]->realVars[21]/* der(m.std2.variance.var) STATE_DER */)  = tmp4;
  TRACE_POP
}
/*
equation index: 89
type: SIMPLE_ASSIGN
$DER.m.std2.variance.mu = if noEvent(time >= m.std2.variance.t_0 + m.std2.variance.t_eps) then (m.e[2] - m.std2.variance.mu) / (time - m.std2.variance.t_0) else 0.0
*/
void System_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  modelica_boolean tmp5;
  tmp5 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[26]/* m.std2.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[27]/* m.std2.variance.t_eps PARAM */) );
  (data->localData[0]->realVars[20]/* der(m.std2.variance.mu) STATE_DER */)  = (tmp5?DIVISION_SIM((data->localData[0]->realVars[58]/* m.e[2] DISCRETE */)  - (data->localData[0]->realVars[5]/* m.std2.variance.mu STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[26]/* m.std2.variance.t_0 PARAM */) ,"time - m.std2.variance.t_0",equationIndexes):0.0);
  TRACE_POP
}
/*
equation index: 90
type: SIMPLE_ASSIGN
m.std2.variance.u = m.e[2]
*/
void System_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->realVars[45]/* m.std2.variance.u variable */)  = (data->localData[0]->realVars[58]/* m.e[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 91
type: SIMPLE_ASSIGN
m.mean2.u = m.e[2]
*/
void System_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  (data->localData[0]->realVars[37]/* m.mean2.u variable */)  = (data->localData[0]->realVars[58]/* m.e[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 92
type: SIMPLE_ASSIGN
$DER.m.std3.variance.var = if noEvent(time >= m.std3.variance.t_0 + m.std3.variance.t_eps) then ((m.e[3] - m.std3.variance.mu) ^ 2.0 - m.std3.variance.var) / (time - m.std3.variance.t_0) else 0.0
*/
void System_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp6 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[29]/* m.std3.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[30]/* m.std3.variance.t_eps PARAM */) );
  tmp8 = (modelica_boolean)tmp6;
  if(tmp8)
  {
    tmp7 = (data->localData[0]->realVars[59]/* m.e[3] DISCRETE */)  - (data->localData[0]->realVars[7]/* m.std3.variance.mu STATE(1) */) ;
    tmp9 = DIVISION_SIM((tmp7 * tmp7) - (data->localData[0]->realVars[8]/* m.std3.variance.var STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[29]/* m.std3.variance.t_0 PARAM */) ,"time - m.std3.variance.t_0",equationIndexes);
  }
  else
  {
    tmp9 = 0.0;
  }
  (data->localData[0]->realVars[23]/* der(m.std3.variance.var) STATE_DER */)  = tmp9;
  TRACE_POP
}
/*
equation index: 93
type: SIMPLE_ASSIGN
$DER.m.std3.variance.mu = if noEvent(time >= m.std3.variance.t_0 + m.std3.variance.t_eps) then (m.e[3] - m.std3.variance.mu) / (time - m.std3.variance.t_0) else 0.0
*/
void System_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  modelica_boolean tmp10;
  tmp10 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[29]/* m.std3.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[30]/* m.std3.variance.t_eps PARAM */) );
  (data->localData[0]->realVars[22]/* der(m.std3.variance.mu) STATE_DER */)  = (tmp10?DIVISION_SIM((data->localData[0]->realVars[59]/* m.e[3] DISCRETE */)  - (data->localData[0]->realVars[7]/* m.std3.variance.mu STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[29]/* m.std3.variance.t_0 PARAM */) ,"time - m.std3.variance.t_0",equationIndexes):0.0);
  TRACE_POP
}
/*
equation index: 94
type: SIMPLE_ASSIGN
$DER.m.mean3.mu = if noEvent(time >= m.mean3.t_0 + m.mean3.t_eps) then (m.e[3] - m.mean3.mu) / (time - m.mean3.t_0) else 0.0
*/
void System_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  modelica_boolean tmp11;
  tmp11 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[13]/* m.mean3.t_0 PARAM */)  + (data->simulationInfo->realParameter[14]/* m.mean3.t_eps PARAM */) );
  (data->localData[0]->realVars[17]/* der(m.mean3.mu) STATE_DER */)  = (tmp11?DIVISION_SIM((data->localData[0]->realVars[59]/* m.e[3] DISCRETE */)  - (data->localData[0]->realVars[2]/* m.mean3.mu STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[13]/* m.mean3.t_0 PARAM */) ,"time - m.mean3.t_0",equationIndexes):0.0);
  TRACE_POP
}
/*
equation index: 95
type: SIMPLE_ASSIGN
m.std3.variance.u = m.e[3]
*/
void System_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  (data->localData[0]->realVars[47]/* m.std3.variance.u variable */)  = (data->localData[0]->realVars[59]/* m.e[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 96
type: SIMPLE_ASSIGN
m.mean3.u = m.e[3]
*/
void System_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->realVars[38]/* m.mean3.u variable */)  = (data->localData[0]->realVars[59]/* m.e[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 97
type: SIMPLE_ASSIGN
$DER.m.mean1.mu = if noEvent(time >= m.mean1.t_0 + m.mean1.t_eps) then (m.e[1] - m.mean1.mu) / (time - m.mean1.t_0) else 0.0
*/
void System_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  modelica_boolean tmp12;
  tmp12 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[9]/* m.mean1.t_0 PARAM */)  + (data->simulationInfo->realParameter[10]/* m.mean1.t_eps PARAM */) );
  (data->localData[0]->realVars[15]/* der(m.mean1.mu) STATE_DER */)  = (tmp12?DIVISION_SIM((data->localData[0]->realVars[57]/* m.e[1] DISCRETE */)  - (data->localData[0]->realVars[0]/* m.mean1.mu STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[9]/* m.mean1.t_0 PARAM */) ,"time - m.mean1.t_0",equationIndexes):0.0);
  TRACE_POP
}
/*
equation index: 98
type: SIMPLE_ASSIGN
$DER.m.std1.variance.var = if noEvent(time >= m.std1.variance.t_0 + m.std1.variance.t_eps) then ((m.e[1] - m.std1.variance.mu) ^ 2.0 - m.std1.variance.var) / (time - m.std1.variance.t_0) else 0.0
*/
void System_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  tmp13 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[23]/* m.std1.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[24]/* m.std1.variance.t_eps PARAM */) );
  tmp15 = (modelica_boolean)tmp13;
  if(tmp15)
  {
    tmp14 = (data->localData[0]->realVars[57]/* m.e[1] DISCRETE */)  - (data->localData[0]->realVars[3]/* m.std1.variance.mu STATE(1) */) ;
    tmp16 = DIVISION_SIM((tmp14 * tmp14) - (data->localData[0]->realVars[4]/* m.std1.variance.var STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[23]/* m.std1.variance.t_0 PARAM */) ,"time - m.std1.variance.t_0",equationIndexes);
  }
  else
  {
    tmp16 = 0.0;
  }
  (data->localData[0]->realVars[19]/* der(m.std1.variance.var) STATE_DER */)  = tmp16;
  TRACE_POP
}
/*
equation index: 99
type: SIMPLE_ASSIGN
$DER.m.std1.variance.mu = if noEvent(time >= m.std1.variance.t_0 + m.std1.variance.t_eps) then (m.e[1] - m.std1.variance.mu) / (time - m.std1.variance.t_0) else 0.0
*/
void System_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  modelica_boolean tmp17;
  tmp17 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[23]/* m.std1.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[24]/* m.std1.variance.t_eps PARAM */) );
  (data->localData[0]->realVars[18]/* der(m.std1.variance.mu) STATE_DER */)  = (tmp17?DIVISION_SIM((data->localData[0]->realVars[57]/* m.e[1] DISCRETE */)  - (data->localData[0]->realVars[3]/* m.std1.variance.mu STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[23]/* m.std1.variance.t_0 PARAM */) ,"time - m.std1.variance.t_0",equationIndexes):0.0);
  TRACE_POP
}
/*
equation index: 100
type: SIMPLE_ASSIGN
m.std1.variance.u = m.e[1]
*/
void System_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  (data->localData[0]->realVars[43]/* m.std1.variance.u variable */)  = (data->localData[0]->realVars[57]/* m.e[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 101
type: SIMPLE_ASSIGN
m.mean1.u = m.e[1]
*/
void System_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[36]/* m.mean1.u variable */)  = (data->localData[0]->realVars[57]/* m.e[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 102
type: SIMPLE_ASSIGN
$DER.plant.x[3] = plant.v[3]
*/
void System_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  (data->localData[0]->realVars[29]/* der(plant.x[3]) STATE_DER */)  = (data->localData[0]->realVars[11]/* plant.v[3] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 103
type: SIMPLE_ASSIGN
$DER.plant.x[2] = plant.v[2]
*/
void System_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  (data->localData[0]->realVars[28]/* der(plant.x[2]) STATE_DER */)  = (data->localData[0]->realVars[10]/* plant.v[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 104
type: SIMPLE_ASSIGN
$DER.plant.x[1] = plant.v[1]
*/
void System_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->realVars[27]/* der(plant.x[1]) STATE_DER */)  = (data->localData[0]->realVars[9]/* plant.v[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 105
type: ALGORITHM

  wind.wind_value2 := pre(wind.wind_value2);
  wind.wind_value1 := pre(wind.wind_value1);
  $whenCondition1 := pre($whenCondition1);
  $whenCondition1 := sample(3, 0.0, Prm.Tw);
  when false then
    wind.wind_value1 := simulate_wind();
    wind.wind_value2 := simulate_wind();
  elsewhen $whenCondition1 then
    wind.wind_value1 := simulate_wind();
    wind.wind_value2 := simulate_wind();
  end when;
*/
void System_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  (data->localData[0]->realVars[61]/* wind.wind_value2 DISCRETE */)  = (data->simulationInfo->realVarsPre[61]/* wind.wind_value2 DISCRETE */) ;

  (data->localData[0]->realVars[60]/* wind.wind_value1 DISCRETE */)  = (data->simulationInfo->realVarsPre[60]/* wind.wind_value1 DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = data->simulationInfo->samples[2];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[60]/* wind.wind_value1 DISCRETE */)  = omc_simulate__wind(threadData);

      (data->localData[0]->realVars[61]/* wind.wind_value2 DISCRETE */)  = omc_simulate__wind(threadData);
    }
    else if(((data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[60]/* wind.wind_value1 DISCRETE */)  = omc_simulate__wind(threadData);

      (data->localData[0]->realVars[61]/* wind.wind_value2 DISCRETE */)  = omc_simulate__wind(threadData);
    }
  }
  TRACE_POP
}
/*
equation index: 106
type: ALGORITHM

  ctr.u[3] := pre(ctr.u[3]);
  ctr.u[2] := pre(ctr.u[2]);
  ctr.u[1] := pre(ctr.u[1]);
  $whenCondition4 := pre($whenCondition4);
  $whenCondition4 := sample(1, 0.0, Prm.T);
  when $whenCondition4 then
    ctr.u[1] := ctr.p.k1 * (-10.0 + plant.x[1]) + ctr.p.k2 * plant.v[1];
    ctr.u[2] := ctr.p.k1 * (-20.0 + plant.x[2]) + ctr.p.k2 * plant.v[2];
    ctr.u[3] := ctr.p.g + ctr.p.k1 * (-30.0 + plant.x[3]) + ctr.p.k2 * plant.v[3];
  end when;
*/
void System_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  (data->localData[0]->realVars[56]/* ctr.u[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[56]/* ctr.u[3] DISCRETE */) ;

  (data->localData[0]->realVars[55]/* ctr.u[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[55]/* ctr.u[2] DISCRETE */) ;

  (data->localData[0]->realVars[54]/* ctr.u[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[54]/* ctr.u[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[3]/* $whenCondition4 DISCRETE */) ;

  (data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  = data->simulationInfo->samples[0];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[3]/* $whenCondition4 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[54]/* ctr.u[1] DISCRETE */)  = ((data->simulationInfo->realParameter[6]/* ctr.p.k1 PARAM */) ) * (-10.0 + (data->localData[0]->realVars[12]/* plant.x[1] STATE(1,plant.v[1]) */) ) + ((data->simulationInfo->realParameter[7]/* ctr.p.k2 PARAM */) ) * ((data->localData[0]->realVars[9]/* plant.v[1] STATE(1) */) );

      (data->localData[0]->realVars[55]/* ctr.u[2] DISCRETE */)  = ((data->simulationInfo->realParameter[6]/* ctr.p.k1 PARAM */) ) * (-20.0 + (data->localData[0]->realVars[13]/* plant.x[2] STATE(1,plant.v[2]) */) ) + ((data->simulationInfo->realParameter[7]/* ctr.p.k2 PARAM */) ) * ((data->localData[0]->realVars[10]/* plant.v[2] STATE(1) */) );

      (data->localData[0]->realVars[56]/* ctr.u[3] DISCRETE */)  = (data->simulationInfo->realParameter[5]/* ctr.p.g PARAM */)  + ((data->simulationInfo->realParameter[6]/* ctr.p.k1 PARAM */) ) * (-30.0 + (data->localData[0]->realVars[14]/* plant.x[3] STATE(1,plant.v[3]) */) ) + ((data->simulationInfo->realParameter[7]/* ctr.p.k2 PARAM */) ) * ((data->localData[0]->realVars[11]/* plant.v[3] STATE(1) */) );
    }
  }
  TRACE_POP
}
/*
equation index: 107
type: SIMPLE_ASSIGN
$DER.plant.v[3] = ctr.u[3] - plant.p.g
*/
void System_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->realVars[26]/* der(plant.v[3]) STATE_DER */)  = (data->localData[0]->realVars[56]/* ctr.u[3] DISCRETE */)  - (data->simulationInfo->realParameter[34]/* plant.p.g PARAM */) ;
  TRACE_POP
}
/*
equation index: 108
type: SIMPLE_ASSIGN
$DER.plant.v[2] = ctr.u[2] + wind.wind_value2
*/
void System_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  (data->localData[0]->realVars[25]/* der(plant.v[2]) STATE_DER */)  = (data->localData[0]->realVars[55]/* ctr.u[2] DISCRETE */)  + (data->localData[0]->realVars[61]/* wind.wind_value2 DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 109
type: SIMPLE_ASSIGN
$DER.plant.v[1] = ctr.u[1] + wind.wind_value1
*/
void System_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  (data->localData[0]->realVars[24]/* der(plant.v[1]) STATE_DER */)  = (data->localData[0]->realVars[54]/* ctr.u[1] DISCRETE */)  + (data->localData[0]->realVars[60]/* wind.wind_value1 DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 110
type: SIMPLE_ASSIGN
m.x[3] = plant.x[3]
*/
void System_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  (data->localData[0]->realVars[50]/* m.x[3] variable */)  = (data->localData[0]->realVars[14]/* plant.x[3] STATE(1,plant.v[3]) */) ;
  TRACE_POP
}
/*
equation index: 111
type: SIMPLE_ASSIGN
m.x[2] = plant.x[2]
*/
void System_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->realVars[49]/* m.x[2] variable */)  = (data->localData[0]->realVars[13]/* plant.x[2] STATE(1,plant.v[2]) */) ;
  TRACE_POP
}
/*
equation index: 112
type: SIMPLE_ASSIGN
m.x[1] = plant.x[1]
*/
void System_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  (data->localData[0]->realVars[48]/* m.x[1] variable */)  = (data->localData[0]->realVars[12]/* plant.x[1] STATE(1,plant.v[1]) */) ;
  TRACE_POP
}

OMC_DISABLE_OPT
int System_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  System_functionLocalKnownVars(data, threadData);
  System_eqFunction_76(data, threadData);

  System_eqFunction_77(data, threadData);

  System_eqFunction_78(data, threadData);

  System_eqFunction_79(data, threadData);

  System_eqFunction_80(data, threadData);

  System_eqFunction_81(data, threadData);

  System_eqFunction_86(data, threadData);

  System_eqFunction_87(data, threadData);

  System_eqFunction_88(data, threadData);

  System_eqFunction_89(data, threadData);

  System_eqFunction_90(data, threadData);

  System_eqFunction_91(data, threadData);

  System_eqFunction_92(data, threadData);

  System_eqFunction_93(data, threadData);

  System_eqFunction_94(data, threadData);

  System_eqFunction_95(data, threadData);

  System_eqFunction_96(data, threadData);

  System_eqFunction_97(data, threadData);

  System_eqFunction_98(data, threadData);

  System_eqFunction_99(data, threadData);

  System_eqFunction_100(data, threadData);

  System_eqFunction_101(data, threadData);

  System_eqFunction_102(data, threadData);

  System_eqFunction_103(data, threadData);

  System_eqFunction_104(data, threadData);

  System_eqFunction_105(data, threadData);

  System_eqFunction_106(data, threadData);

  System_eqFunction_107(data, threadData);

  System_eqFunction_108(data, threadData);

  System_eqFunction_109(data, threadData);

  System_eqFunction_110(data, threadData);

  System_eqFunction_111(data, threadData);

  System_eqFunction_112(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int System_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void System_eqFunction_76(DATA* data, threadData_t *threadData);
extern void System_eqFunction_77(DATA* data, threadData_t *threadData);
extern void System_eqFunction_78(DATA* data, threadData_t *threadData);
extern void System_eqFunction_79(DATA* data, threadData_t *threadData);
extern void System_eqFunction_80(DATA* data, threadData_t *threadData);
extern void System_eqFunction_81(DATA* data, threadData_t *threadData);
extern void System_eqFunction_86(DATA* data, threadData_t *threadData);
extern void System_eqFunction_87(DATA* data, threadData_t *threadData);
extern void System_eqFunction_88(DATA* data, threadData_t *threadData);
extern void System_eqFunction_89(DATA* data, threadData_t *threadData);
extern void System_eqFunction_92(DATA* data, threadData_t *threadData);
extern void System_eqFunction_93(DATA* data, threadData_t *threadData);
extern void System_eqFunction_94(DATA* data, threadData_t *threadData);
extern void System_eqFunction_97(DATA* data, threadData_t *threadData);
extern void System_eqFunction_98(DATA* data, threadData_t *threadData);
extern void System_eqFunction_99(DATA* data, threadData_t *threadData);
extern void System_eqFunction_102(DATA* data, threadData_t *threadData);
extern void System_eqFunction_103(DATA* data, threadData_t *threadData);
extern void System_eqFunction_104(DATA* data, threadData_t *threadData);
extern void System_eqFunction_105(DATA* data, threadData_t *threadData);
extern void System_eqFunction_106(DATA* data, threadData_t *threadData);
extern void System_eqFunction_107(DATA* data, threadData_t *threadData);
extern void System_eqFunction_108(DATA* data, threadData_t *threadData);
extern void System_eqFunction_109(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
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
    System_eqFunction_86(data, threadData);
    threadData->lastEquationSolved = 86;
  }
  {
    System_eqFunction_87(data, threadData);
    threadData->lastEquationSolved = 87;
  }
  {
    System_eqFunction_88(data, threadData);
    threadData->lastEquationSolved = 88;
  }
  {
    System_eqFunction_89(data, threadData);
    threadData->lastEquationSolved = 89;
  }
  {
    System_eqFunction_92(data, threadData);
    threadData->lastEquationSolved = 92;
  }
  {
    System_eqFunction_93(data, threadData);
    threadData->lastEquationSolved = 93;
  }
  {
    System_eqFunction_94(data, threadData);
    threadData->lastEquationSolved = 94;
  }
  {
    System_eqFunction_97(data, threadData);
    threadData->lastEquationSolved = 97;
  }
  {
    System_eqFunction_98(data, threadData);
    threadData->lastEquationSolved = 98;
  }
  {
    System_eqFunction_99(data, threadData);
    threadData->lastEquationSolved = 99;
  }
  {
    System_eqFunction_102(data, threadData);
    threadData->lastEquationSolved = 102;
  }
  {
    System_eqFunction_103(data, threadData);
    threadData->lastEquationSolved = 103;
  }
  {
    System_eqFunction_104(data, threadData);
    threadData->lastEquationSolved = 104;
  }
  {
    System_eqFunction_105(data, threadData);
    threadData->lastEquationSolved = 105;
  }
  {
    System_eqFunction_106(data, threadData);
    threadData->lastEquationSolved = 106;
  }
  {
    System_eqFunction_107(data, threadData);
    threadData->lastEquationSolved = 107;
  }
  {
    System_eqFunction_108(data, threadData);
    threadData->lastEquationSolved = 108;
  }
  {
    System_eqFunction_109(data, threadData);
    threadData->lastEquationSolved = 109;
  }
}

int System_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  System_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "System_12jac.h"
#include "System_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks System_callback = {
   (int (*)(DATA *, threadData_t *, void *)) System_performSimulation,    /* performSimulation */
   (int (*)(DATA *, threadData_t *, void *)) System_performQSSSimulation,    /* performQSSSimulation */
   System_updateContinuousSystem,    /* updateContinuousSystem */
   System_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   System_initialNonLinearSystem,    /* initialNonLinearSystem */
   NULL,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   System_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   System_initializeDAEmodeData,
   System_functionODE,
   System_functionAlgebraics,
   System_functionDAE,
   System_functionLocalKnownVars,
   System_input_function,
   System_input_function_init,
   System_input_function_updateStartValues,
   System_data_function,
   System_output_function,
   System_setc_function,
   System_function_storeDelayed,
   System_function_storeSpatialDistribution,
   System_function_initSpatialDistribution,
   System_updateBoundVariableAttributes,
   System_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   NULL,
   System_functionRemovedInitialEquations,
   System_updateBoundParameters,
   System_checkForAsserts,
   System_function_ZeroCrossingsEquations,
   System_function_ZeroCrossings,
   System_function_updateRelations,
   System_zeroCrossingDescription,
   System_relationDescription,
   System_function_initSample,
   System_INDEX_JAC_A,
   System_INDEX_JAC_B,
   System_INDEX_JAC_C,
   System_INDEX_JAC_D,
   System_INDEX_JAC_F,
   System_initialAnalyticJacobianA,
   System_initialAnalyticJacobianB,
   System_initialAnalyticJacobianC,
   System_initialAnalyticJacobianD,
   System_initialAnalyticJacobianF,
   System_functionJacA_column,
   System_functionJacB_column,
   System_functionJacC_column,
   System_functionJacD_column,
   System_functionJacF_column,
   System_linear_model_frame,
   System_linear_model_datarecovery_frame,
   System_mayer,
   System_lagrange,
   System_pickUpBoundsForInputsInOptimization,
   System_setInputData,
   System_getTimeGrid,
   System_symbolicInlineSystem,
   System_function_initSynchronous,
   System_function_updateSynchronous,
   System_function_equationsSynchronous,
   System_inputNames,
   System_dataReconciliationInputNames,
   NULL,
   NULL,
   NULL,
   -1,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "/home/pikarz1/.openmodelica/libraries/Complex 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,60,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Controller"
#define _OMC_LIT_RESOURCE_1_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,10,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,64,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "InputBoolean"
#define _OMC_LIT_RESOURCE_2_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,12,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,64,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "InputInteger"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,12,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,64,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "InputReal"
#define _OMC_LIT_RESOURCE_4_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,9,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,64,_OMC_LIT_RESOURCE_4_dir_data);

#define _OMC_LIT_RESOURCE_5_name_data "Modelica"
#define _OMC_LIT_RESOURCE_5_dir_data "/home/pikarz1/.openmodelica/libraries/Modelica 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_name,8,_OMC_LIT_RESOURCE_5_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir,61,_OMC_LIT_RESOURCE_5_dir_data);

#define _OMC_LIT_RESOURCE_6_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_6_dir_data "/home/pikarz1/.openmodelica/libraries/ModelicaServices 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_name,16,_OMC_LIT_RESOURCE_6_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir,69,_OMC_LIT_RESOURCE_6_dir_data);

#define _OMC_LIT_RESOURCE_7_name_data "Monitor"
#define _OMC_LIT_RESOURCE_7_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_name,7,_OMC_LIT_RESOURCE_7_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir,64,_OMC_LIT_RESOURCE_7_dir_data);

#define _OMC_LIT_RESOURCE_8_name_data "OutputBoolean"
#define _OMC_LIT_RESOURCE_8_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_name,13,_OMC_LIT_RESOURCE_8_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir,64,_OMC_LIT_RESOURCE_8_dir_data);

#define _OMC_LIT_RESOURCE_9_name_data "OutputInteger"
#define _OMC_LIT_RESOURCE_9_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_name,13,_OMC_LIT_RESOURCE_9_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir,64,_OMC_LIT_RESOURCE_9_dir_data);

#define _OMC_LIT_RESOURCE_10_name_data "OutputReal"
#define _OMC_LIT_RESOURCE_10_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_name,10,_OMC_LIT_RESOURCE_10_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir,64,_OMC_LIT_RESOURCE_10_dir_data);

#define _OMC_LIT_RESOURCE_11_name_data "Plant"
#define _OMC_LIT_RESOURCE_11_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_name,5,_OMC_LIT_RESOURCE_11_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir,64,_OMC_LIT_RESOURCE_11_dir_data);

#define _OMC_LIT_RESOURCE_12_name_data "Prm"
#define _OMC_LIT_RESOURCE_12_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_name,3,_OMC_LIT_RESOURCE_12_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir,64,_OMC_LIT_RESOURCE_12_dir_data);

#define _OMC_LIT_RESOURCE_13_name_data "System"
#define _OMC_LIT_RESOURCE_13_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_name,6,_OMC_LIT_RESOURCE_13_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir,64,_OMC_LIT_RESOURCE_13_dir_data);

#define _OMC_LIT_RESOURCE_14_name_data "User"
#define _OMC_LIT_RESOURCE_14_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_name,4,_OMC_LIT_RESOURCE_14_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir,64,_OMC_LIT_RESOURCE_14_dir_data);

#define _OMC_LIT_RESOURCE_15_name_data "Wind"
#define _OMC_LIT_RESOURCE_15_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_name,4,_OMC_LIT_RESOURCE_15_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir,64,_OMC_LIT_RESOURCE_15_dir_data);

#define _OMC_LIT_RESOURCE_16_name_data "myrandom"
#define _OMC_LIT_RESOURCE_16_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_name,8,_OMC_LIT_RESOURCE_16_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir,64,_OMC_LIT_RESOURCE_16_dir_data);

#define _OMC_LIT_RESOURCE_17_name_data "simulate_wind"
#define _OMC_LIT_RESOURCE_17_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_name,13,_OMC_LIT_RESOURCE_17_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir,64,_OMC_LIT_RESOURCE_17_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,36,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_8_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_9_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_10_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_11_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_12_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_13_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_14_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_15_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_16_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_17_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir)}};
void System_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &System_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "System";
  data->modelData->modelFilePrefix = "System";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5";
  data->modelData->modelGUID = "{8772a482-2616-44e6-a016-6a71da249581}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "System_init.c"
    ;
  static const char contents_info[] =
    #include "System_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "System_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "System_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 15;
  data->modelData->nVariablesReal = 62;
  data->modelData->nDiscreteReal = 8;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 4;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 38;
  data->modelData->nParametersInteger = 6;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 29;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 1;
  data->modelData->nSamples = 3;
  data->modelData->nRelations = 1;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "System_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 14;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 140;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 1;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 5;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nBaseClocks = 0;
  
  data->modelData->nSpatialDistributions = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->linearizationDumpLanguage =
  OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
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
  
    System_setupDataStruc(&data, threadData);
    res = _main_initRuntimeAndSimulation(argc, argv, &data, threadData);
    if(res == 0) {
      res = _main_SimulationRuntime(argc, argv, &data, threadData);
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
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


