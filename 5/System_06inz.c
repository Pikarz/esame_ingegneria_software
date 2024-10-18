/* Initialization */
#include "System_model.h"
#include "System_11mix.h"
#include "System_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void System_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
m.r[1] = 10.0
*/
void System_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[39]/* m.r[1] variable */)  = 10.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
m.r[2] = 20.0
*/
void System_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[40]/* m.r[2] variable */)  = 20.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
m.r[3] = 30.0
*/
void System_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[41]/* m.r[3] variable */)  = 30.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
user.r[1] = 10.0
*/
void System_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[51]/* user.r[1] variable */)  = 10.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
user.r[2] = 20.0
*/
void System_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[52]/* user.r[2] variable */)  = 20.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
user.r[3] = 30.0
*/
void System_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[53]/* user.r[3] variable */)  = 30.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
$PRE.m.e[3] = $START.m.e[3]
*/
void System_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  (data->simulationInfo->realVarsPre[59]/* m.e[3] DISCRETE */)  = (data->modelData->realVarsData[59]/* m.e[3] DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
m.e[3] = $PRE.m.e[3]
*/
void System_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->realVars[59]/* m.e[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[59]/* m.e[3] DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_95(DATA *data, threadData_t *threadData);


/*
equation index: 10
type: SIMPLE_ASSIGN
m.mean3.u = m.std3.variance.u
*/
void System_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[38]/* m.mean3.u variable */)  = (data->localData[0]->realVars[47]/* m.std3.variance.u variable */) ;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
m.mean3.mu = m.mean3.u
*/
void System_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  (data->localData[0]->realVars[2]/* m.mean3.mu STATE(1) */)  = (data->localData[0]->realVars[38]/* m.mean3.u variable */) ;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
m.mean3.t_0 = time
*/
void System_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  (data->simulationInfo->realParameter[13]/* m.mean3.t_0 PARAM */)  = data->localData[0]->timeValue;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
$DER.m.mean3.mu = if noEvent(time >= m.mean3.t_0 + m.mean3.t_eps) then (m.mean3.u - m.mean3.mu) / (time - m.mean3.t_0) else 0.0
*/
void System_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  modelica_boolean tmp0;
  tmp0 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[13]/* m.mean3.t_0 PARAM */)  + (data->simulationInfo->realParameter[14]/* m.mean3.t_eps PARAM */) );
  (data->localData[0]->realVars[17]/* der(m.mean3.mu) STATE_DER */)  = (tmp0?DIVISION_SIM((data->localData[0]->realVars[38]/* m.mean3.u variable */)  - (data->localData[0]->realVars[2]/* m.mean3.mu STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[13]/* m.mean3.t_0 PARAM */) ,"time - m.mean3.t_0",equationIndexes):0.0);
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
m.AvgErr[3] = if noEvent(time >= m.mean3.t_0 + m.mean3.t_eps) then m.mean3.mu else m.mean3.u
*/
void System_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  modelica_boolean tmp1;
  tmp1 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[13]/* m.mean3.t_0 PARAM */)  + (data->simulationInfo->realParameter[14]/* m.mean3.t_eps PARAM */) );
  (data->localData[0]->realVars[32]/* m.AvgErr[3] variable */)  = (tmp1?(data->localData[0]->realVars[2]/* m.mean3.mu STATE(1) */) :(data->localData[0]->realVars[38]/* m.mean3.u variable */) );
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
m.std3.variance.var = 0.0
*/
void System_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[8]/* m.std3.variance.var STATE(1) */)  = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
m.std3.variance.mu = m.std3.variance.u
*/
void System_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[7]/* m.std3.variance.mu STATE(1) */)  = (data->localData[0]->realVars[47]/* m.std3.variance.u variable */) ;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
m.std3.variance.t_0 = time
*/
void System_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  (data->simulationInfo->realParameter[29]/* m.std3.variance.t_0 PARAM */)  = data->localData[0]->timeValue;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
$DER.m.std3.variance.mu = if noEvent(time >= m.std3.variance.t_0 + m.std3.variance.t_eps) then (m.std3.variance.u - m.std3.variance.mu) / (time - m.std3.variance.t_0) else 0.0
*/
void System_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  modelica_boolean tmp2;
  tmp2 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[29]/* m.std3.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[30]/* m.std3.variance.t_eps PARAM */) );
  (data->localData[0]->realVars[22]/* der(m.std3.variance.mu) STATE_DER */)  = (tmp2?DIVISION_SIM((data->localData[0]->realVars[47]/* m.std3.variance.u variable */)  - (data->localData[0]->realVars[7]/* m.std3.variance.mu STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[29]/* m.std3.variance.t_0 PARAM */) ,"time - m.std3.variance.t_0",equationIndexes):0.0);
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
$DER.m.std3.variance.var = if noEvent(time >= m.std3.variance.t_0 + m.std3.variance.t_eps) then ((m.std3.variance.u - m.std3.variance.mu) ^ 2.0 - m.std3.variance.var) / (time - m.std3.variance.t_0) else 0.0
*/
void System_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp3 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[29]/* m.std3.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[30]/* m.std3.variance.t_eps PARAM */) );
  tmp5 = (modelica_boolean)tmp3;
  if(tmp5)
  {
    tmp4 = (data->localData[0]->realVars[47]/* m.std3.variance.u variable */)  - (data->localData[0]->realVars[7]/* m.std3.variance.mu STATE(1) */) ;
    tmp6 = DIVISION_SIM((tmp4 * tmp4) - (data->localData[0]->realVars[8]/* m.std3.variance.var STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[29]/* m.std3.variance.t_0 PARAM */) ,"time - m.std3.variance.t_0",equationIndexes);
  }
  else
  {
    tmp6 = 0.0;
  }
  (data->localData[0]->realVars[23]/* der(m.std3.variance.var) STATE_DER */)  = tmp6;
  TRACE_POP
}
extern void System_eqFunction_76(DATA *data, threadData_t *threadData);

extern void System_eqFunction_77(DATA *data, threadData_t *threadData);


/*
equation index: 22
type: SIMPLE_ASSIGN
$PRE.m.e[2] = $START.m.e[2]
*/
void System_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  (data->simulationInfo->realVarsPre[58]/* m.e[2] DISCRETE */)  = (data->modelData->realVarsData[58]/* m.e[2] DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
m.e[2] = $PRE.m.e[2]
*/
void System_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->realVars[58]/* m.e[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[58]/* m.e[2] DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_90(DATA *data, threadData_t *threadData);


/*
equation index: 25
type: SIMPLE_ASSIGN
m.mean2.u = m.std2.variance.u
*/
void System_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->realVars[37]/* m.mean2.u variable */)  = (data->localData[0]->realVars[45]/* m.std2.variance.u variable */) ;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
m.mean2.mu = m.mean2.u
*/
void System_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[1]/* m.mean2.mu STATE(1) */)  = (data->localData[0]->realVars[37]/* m.mean2.u variable */) ;
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
m.mean2.t_0 = time
*/
void System_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  (data->simulationInfo->realParameter[11]/* m.mean2.t_0 PARAM */)  = data->localData[0]->timeValue;
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
$DER.m.mean2.mu = if noEvent(time >= m.mean2.t_0 + m.mean2.t_eps) then (m.mean2.u - m.mean2.mu) / (time - m.mean2.t_0) else 0.0
*/
void System_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  modelica_boolean tmp7;
  tmp7 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[11]/* m.mean2.t_0 PARAM */)  + (data->simulationInfo->realParameter[12]/* m.mean2.t_eps PARAM */) );
  (data->localData[0]->realVars[16]/* der(m.mean2.mu) STATE_DER */)  = (tmp7?DIVISION_SIM((data->localData[0]->realVars[37]/* m.mean2.u variable */)  - (data->localData[0]->realVars[1]/* m.mean2.mu STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[11]/* m.mean2.t_0 PARAM */) ,"time - m.mean2.t_0",equationIndexes):0.0);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
m.AvgErr[2] = if noEvent(time >= m.mean2.t_0 + m.mean2.t_eps) then m.mean2.mu else m.mean2.u
*/
void System_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  modelica_boolean tmp8;
  tmp8 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[11]/* m.mean2.t_0 PARAM */)  + (data->simulationInfo->realParameter[12]/* m.mean2.t_eps PARAM */) );
  (data->localData[0]->realVars[31]/* m.AvgErr[2] variable */)  = (tmp8?(data->localData[0]->realVars[1]/* m.mean2.mu STATE(1) */) :(data->localData[0]->realVars[37]/* m.mean2.u variable */) );
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
m.std2.variance.var = 0.0
*/
void System_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->realVars[6]/* m.std2.variance.var STATE(1) */)  = 0.0;
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
m.std2.variance.mu = m.std2.variance.u
*/
void System_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[5]/* m.std2.variance.mu STATE(1) */)  = (data->localData[0]->realVars[45]/* m.std2.variance.u variable */) ;
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
m.std2.variance.t_0 = time
*/
void System_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  (data->simulationInfo->realParameter[26]/* m.std2.variance.t_0 PARAM */)  = data->localData[0]->timeValue;
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
$DER.m.std2.variance.mu = if noEvent(time >= m.std2.variance.t_0 + m.std2.variance.t_eps) then (m.std2.variance.u - m.std2.variance.mu) / (time - m.std2.variance.t_0) else 0.0
*/
void System_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  modelica_boolean tmp9;
  tmp9 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[26]/* m.std2.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[27]/* m.std2.variance.t_eps PARAM */) );
  (data->localData[0]->realVars[20]/* der(m.std2.variance.mu) STATE_DER */)  = (tmp9?DIVISION_SIM((data->localData[0]->realVars[45]/* m.std2.variance.u variable */)  - (data->localData[0]->realVars[5]/* m.std2.variance.mu STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[26]/* m.std2.variance.t_0 PARAM */) ,"time - m.std2.variance.t_0",equationIndexes):0.0);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
$DER.m.std2.variance.var = if noEvent(time >= m.std2.variance.t_0 + m.std2.variance.t_eps) then ((m.std2.variance.u - m.std2.variance.mu) ^ 2.0 - m.std2.variance.var) / (time - m.std2.variance.t_0) else 0.0
*/
void System_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  tmp10 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[26]/* m.std2.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[27]/* m.std2.variance.t_eps PARAM */) );
  tmp12 = (modelica_boolean)tmp10;
  if(tmp12)
  {
    tmp11 = (data->localData[0]->realVars[45]/* m.std2.variance.u variable */)  - (data->localData[0]->realVars[5]/* m.std2.variance.mu STATE(1) */) ;
    tmp13 = DIVISION_SIM((tmp11 * tmp11) - (data->localData[0]->realVars[6]/* m.std2.variance.var STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[26]/* m.std2.variance.t_0 PARAM */) ,"time - m.std2.variance.t_0",equationIndexes);
  }
  else
  {
    tmp13 = 0.0;
  }
  (data->localData[0]->realVars[21]/* der(m.std2.variance.var) STATE_DER */)  = tmp13;
  TRACE_POP
}
extern void System_eqFunction_78(DATA *data, threadData_t *threadData);

extern void System_eqFunction_79(DATA *data, threadData_t *threadData);


/*
equation index: 37
type: SIMPLE_ASSIGN
$PRE.m.e[1] = $START.m.e[1]
*/
void System_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  (data->simulationInfo->realVarsPre[57]/* m.e[1] DISCRETE */)  = (data->modelData->realVarsData[57]/* m.e[1] DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
m.e[1] = $PRE.m.e[1]
*/
void System_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[57]/* m.e[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[57]/* m.e[1] DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_100(DATA *data, threadData_t *threadData);


/*
equation index: 40
type: SIMPLE_ASSIGN
m.mean1.u = m.std1.variance.u
*/
void System_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->realVars[36]/* m.mean1.u variable */)  = (data->localData[0]->realVars[43]/* m.std1.variance.u variable */) ;
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
m.mean1.mu = m.mean1.u
*/
void System_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[0]/* m.mean1.mu STATE(1) */)  = (data->localData[0]->realVars[36]/* m.mean1.u variable */) ;
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
m.mean1.t_0 = time
*/
void System_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  (data->simulationInfo->realParameter[9]/* m.mean1.t_0 PARAM */)  = data->localData[0]->timeValue;
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
$DER.m.mean1.mu = if noEvent(time >= m.mean1.t_0 + m.mean1.t_eps) then (m.mean1.u - m.mean1.mu) / (time - m.mean1.t_0) else 0.0
*/
void System_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  modelica_boolean tmp14;
  tmp14 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[9]/* m.mean1.t_0 PARAM */)  + (data->simulationInfo->realParameter[10]/* m.mean1.t_eps PARAM */) );
  (data->localData[0]->realVars[15]/* der(m.mean1.mu) STATE_DER */)  = (tmp14?DIVISION_SIM((data->localData[0]->realVars[36]/* m.mean1.u variable */)  - (data->localData[0]->realVars[0]/* m.mean1.mu STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[9]/* m.mean1.t_0 PARAM */) ,"time - m.mean1.t_0",equationIndexes):0.0);
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
m.AvgErr[1] = if noEvent(time >= m.mean1.t_0 + m.mean1.t_eps) then m.mean1.mu else m.mean1.u
*/
void System_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  modelica_boolean tmp15;
  tmp15 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[9]/* m.mean1.t_0 PARAM */)  + (data->simulationInfo->realParameter[10]/* m.mean1.t_eps PARAM */) );
  (data->localData[0]->realVars[30]/* m.AvgErr[1] variable */)  = (tmp15?(data->localData[0]->realVars[0]/* m.mean1.mu STATE(1) */) :(data->localData[0]->realVars[36]/* m.mean1.u variable */) );
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
m.std1.variance.var = 0.0
*/
void System_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  (data->localData[0]->realVars[4]/* m.std1.variance.var STATE(1) */)  = 0.0;
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
m.std1.variance.mu = m.std1.variance.u
*/
void System_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[3]/* m.std1.variance.mu STATE(1) */)  = (data->localData[0]->realVars[43]/* m.std1.variance.u variable */) ;
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
m.std1.variance.t_0 = time
*/
void System_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  (data->simulationInfo->realParameter[23]/* m.std1.variance.t_0 PARAM */)  = data->localData[0]->timeValue;
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
$DER.m.std1.variance.mu = if noEvent(time >= m.std1.variance.t_0 + m.std1.variance.t_eps) then (m.std1.variance.u - m.std1.variance.mu) / (time - m.std1.variance.t_0) else 0.0
*/
void System_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  modelica_boolean tmp16;
  tmp16 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[23]/* m.std1.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[24]/* m.std1.variance.t_eps PARAM */) );
  (data->localData[0]->realVars[18]/* der(m.std1.variance.mu) STATE_DER */)  = (tmp16?DIVISION_SIM((data->localData[0]->realVars[43]/* m.std1.variance.u variable */)  - (data->localData[0]->realVars[3]/* m.std1.variance.mu STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[23]/* m.std1.variance.t_0 PARAM */) ,"time - m.std1.variance.t_0",equationIndexes):0.0);
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
$DER.m.std1.variance.var = if noEvent(time >= m.std1.variance.t_0 + m.std1.variance.t_eps) then ((m.std1.variance.u - m.std1.variance.mu) ^ 2.0 - m.std1.variance.var) / (time - m.std1.variance.t_0) else 0.0
*/
void System_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  modelica_boolean tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  tmp17 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[23]/* m.std1.variance.t_0 PARAM */)  + (data->simulationInfo->realParameter[24]/* m.std1.variance.t_eps PARAM */) );
  tmp19 = (modelica_boolean)tmp17;
  if(tmp19)
  {
    tmp18 = (data->localData[0]->realVars[43]/* m.std1.variance.u variable */)  - (data->localData[0]->realVars[3]/* m.std1.variance.mu STATE(1) */) ;
    tmp20 = DIVISION_SIM((tmp18 * tmp18) - (data->localData[0]->realVars[4]/* m.std1.variance.var STATE(1) */) ,data->localData[0]->timeValue - (data->simulationInfo->realParameter[23]/* m.std1.variance.t_0 PARAM */) ,"time - m.std1.variance.t_0",equationIndexes);
  }
  else
  {
    tmp20 = 0.0;
  }
  (data->localData[0]->realVars[19]/* der(m.std1.variance.var) STATE_DER */)  = tmp20;
  TRACE_POP
}
extern void System_eqFunction_80(DATA *data, threadData_t *threadData);

extern void System_eqFunction_81(DATA *data, threadData_t *threadData);


/*
equation index: 52
type: SIMPLE_ASSIGN
$PRE.ctr.u[3] = $START.ctr.u[3]
*/
void System_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  (data->simulationInfo->realVarsPre[56]/* ctr.u[3] DISCRETE */)  = (data->modelData->realVarsData[56]/* ctr.u[3] DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
ctr.u[3] = $PRE.ctr.u[3]
*/
void System_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->realVars[56]/* ctr.u[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[56]/* ctr.u[3] DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_107(DATA *data, threadData_t *threadData);


/*
equation index: 55
type: ALGORITHM

  wind.wind_value2 := $START.wind.wind_value2;
  wind.wind_value1 := $START.wind.wind_value1;
  $whenCondition1 := $START.$whenCondition1;
  $whenCondition1 := false;
  wind.wind_value1 := simulate_wind();
  wind.wind_value2 := simulate_wind();
*/
void System_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  (data->localData[0]->realVars[61]/* wind.wind_value2 DISCRETE */)  = (data->modelData->realVarsData[61]/* wind.wind_value2 DISCRETE */).attribute .start;

  (data->localData[0]->realVars[60]/* wind.wind_value1 DISCRETE */)  = (data->modelData->realVarsData[60]/* wind.wind_value1 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->modelData->booleanVarsData[0]/* $whenCondition1 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = 0;

  (data->localData[0]->realVars[60]/* wind.wind_value1 DISCRETE */)  = omc_simulate__wind(threadData);

  (data->localData[0]->realVars[61]/* wind.wind_value2 DISCRETE */)  = omc_simulate__wind(threadData);
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
$PRE.ctr.u[2] = $START.ctr.u[2]
*/
void System_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  (data->simulationInfo->realVarsPre[55]/* ctr.u[2] DISCRETE */)  = (data->modelData->realVarsData[55]/* ctr.u[2] DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
ctr.u[2] = $PRE.ctr.u[2]
*/
void System_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  (data->localData[0]->realVars[55]/* ctr.u[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[55]/* ctr.u[2] DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_108(DATA *data, threadData_t *threadData);


/*
equation index: 59
type: SIMPLE_ASSIGN
$PRE.ctr.u[1] = $START.ctr.u[1]
*/
void System_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  (data->simulationInfo->realVarsPre[54]/* ctr.u[1] DISCRETE */)  = (data->modelData->realVarsData[54]/* ctr.u[1] DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
ctr.u[1] = $PRE.ctr.u[1]
*/
void System_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  (data->localData[0]->realVars[54]/* ctr.u[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[54]/* ctr.u[1] DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_109(DATA *data, threadData_t *threadData);


/*
equation index: 62
type: SIMPLE_ASSIGN
plant.v[3] = 0.0
*/
void System_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->realVars[11]/* plant.v[3] STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_102(DATA *data, threadData_t *threadData);


/*
equation index: 64
type: SIMPLE_ASSIGN
plant.v[2] = 0.0
*/
void System_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  (data->localData[0]->realVars[10]/* plant.v[2] STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_103(DATA *data, threadData_t *threadData);


/*
equation index: 66
type: SIMPLE_ASSIGN
plant.v[1] = 0.0
*/
void System_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  (data->localData[0]->realVars[9]/* plant.v[1] STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_104(DATA *data, threadData_t *threadData);


/*
equation index: 68
type: ALGORITHM

  $whenCondition3 := $START.$whenCondition3;
  $whenCondition2 := $START.$whenCondition2;
  $whenCondition2 := false;
  $whenCondition3 := time > m.p.HORIZON;
*/
void System_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  modelica_boolean tmp21;
  (data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  = (data->modelData->booleanVarsData[2]/* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  = (data->modelData->booleanVarsData[1]/* $whenCondition2 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  = 0;

  tmp21 = Greater(data->localData[0]->timeValue,(data->simulationInfo->realParameter[15]/* m.p.HORIZON PARAM */) );
  (data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  = tmp21;
  TRACE_POP
}

/*
equation index: 69
type: ALGORITHM

  $whenCondition4 := $START.$whenCondition4;
  $whenCondition4 := false;
*/
void System_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  (data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  = (data->modelData->booleanVarsData[3]/* $whenCondition4 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
plant.x[3] = 0.0
*/
void System_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->realVars[14]/* plant.x[3] STATE(1,plant.v[3]) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_110(DATA *data, threadData_t *threadData);


/*
equation index: 72
type: SIMPLE_ASSIGN
plant.x[2] = 0.0
*/
void System_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  (data->localData[0]->realVars[13]/* plant.x[2] STATE(1,plant.v[2]) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_111(DATA *data, threadData_t *threadData);


/*
equation index: 74
type: SIMPLE_ASSIGN
plant.x[1] = 0.0
*/
void System_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->realVars[12]/* plant.x[1] STATE(1,plant.v[1]) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_112(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void System_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  System_eqFunction_1(data, threadData);
  System_eqFunction_2(data, threadData);
  System_eqFunction_3(data, threadData);
  System_eqFunction_4(data, threadData);
  System_eqFunction_5(data, threadData);
  System_eqFunction_6(data, threadData);
  System_eqFunction_7(data, threadData);
  System_eqFunction_8(data, threadData);
  System_eqFunction_95(data, threadData);
  System_eqFunction_10(data, threadData);
  System_eqFunction_11(data, threadData);
  System_eqFunction_12(data, threadData);
  System_eqFunction_13(data, threadData);
  System_eqFunction_14(data, threadData);
  System_eqFunction_15(data, threadData);
  System_eqFunction_16(data, threadData);
  System_eqFunction_17(data, threadData);
  System_eqFunction_18(data, threadData);
  System_eqFunction_19(data, threadData);
  System_eqFunction_76(data, threadData);
  System_eqFunction_77(data, threadData);
  System_eqFunction_22(data, threadData);
  System_eqFunction_23(data, threadData);
  System_eqFunction_90(data, threadData);
  System_eqFunction_25(data, threadData);
  System_eqFunction_26(data, threadData);
  System_eqFunction_27(data, threadData);
  System_eqFunction_28(data, threadData);
  System_eqFunction_29(data, threadData);
  System_eqFunction_30(data, threadData);
  System_eqFunction_31(data, threadData);
  System_eqFunction_32(data, threadData);
  System_eqFunction_33(data, threadData);
  System_eqFunction_34(data, threadData);
  System_eqFunction_78(data, threadData);
  System_eqFunction_79(data, threadData);
  System_eqFunction_37(data, threadData);
  System_eqFunction_38(data, threadData);
  System_eqFunction_100(data, threadData);
  System_eqFunction_40(data, threadData);
  System_eqFunction_41(data, threadData);
  System_eqFunction_42(data, threadData);
  System_eqFunction_43(data, threadData);
  System_eqFunction_44(data, threadData);
  System_eqFunction_45(data, threadData);
  System_eqFunction_46(data, threadData);
  System_eqFunction_47(data, threadData);
  System_eqFunction_48(data, threadData);
  System_eqFunction_49(data, threadData);
  System_eqFunction_80(data, threadData);
  System_eqFunction_81(data, threadData);
  System_eqFunction_52(data, threadData);
  System_eqFunction_53(data, threadData);
  System_eqFunction_107(data, threadData);
  System_eqFunction_55(data, threadData);
  System_eqFunction_56(data, threadData);
  System_eqFunction_57(data, threadData);
  System_eqFunction_108(data, threadData);
  System_eqFunction_59(data, threadData);
  System_eqFunction_60(data, threadData);
  System_eqFunction_109(data, threadData);
  System_eqFunction_62(data, threadData);
  System_eqFunction_102(data, threadData);
  System_eqFunction_64(data, threadData);
  System_eqFunction_103(data, threadData);
  System_eqFunction_66(data, threadData);
  System_eqFunction_104(data, threadData);
  System_eqFunction_68(data, threadData);
  System_eqFunction_69(data, threadData);
  System_eqFunction_70(data, threadData);
  System_eqFunction_110(data, threadData);
  System_eqFunction_72(data, threadData);
  System_eqFunction_111(data, threadData);
  System_eqFunction_74(data, threadData);
  System_eqFunction_112(data, threadData);
  TRACE_POP
}

int System_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  System_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No System_functionInitialEquations_lambda0 function */

int System_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

