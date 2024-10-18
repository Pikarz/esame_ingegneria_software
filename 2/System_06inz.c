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
m1.ct.values[3] = $START.m1.ct.values[3]
*/
void System_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[2]/* m1.ct.values[3] variable */)  = (data->modelData->realVarsData[2]/* m1.ct.values[3] variable */).attribute .start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
env.req[3] = m1.ct.values[3]
*/
void System_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->integerVars[324]/* env.req[3] DISCRETE */)  = (data->localData[0]->realVars[2]/* m1.ct.values[3] variable */) ;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
m1.ct.values[2] = $START.m1.ct.values[2]
*/
void System_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[1]/* m1.ct.values[2] variable */)  = (data->modelData->realVarsData[1]/* m1.ct.values[2] variable */).attribute .start;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
env.req[2] = m1.ct.values[2]
*/
void System_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->integerVars[323]/* env.req[2] DISCRETE */)  = (data->localData[0]->realVars[1]/* m1.ct.values[2] variable */) ;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
m1.ct.values[1] = $START.m1.ct.values[1]
*/
void System_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[0]/* m1.ct.values[1] variable */)  = (data->modelData->realVarsData[0]/* m1.ct.values[1] variable */).attribute .start;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
env.req[1] = m1.ct.values[1]
*/
void System_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->integerVars[322]/* env.req[1] DISCRETE */)  = (data->localData[0]->realVars[0]/* m1.ct.values[1] variable */) ;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
m1.ct.z = 0.0
*/
void System_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[17]/* m1.ct.z DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
$PRE.m1.ct.z = m1.ct.z
*/
void System_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  (data->simulationInfo->realVarsPre[17]/* m1.ct.z DISCRETE */)  = (data->localData[0]->realVars[17]/* m1.ct.z DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_84(DATA *data, threadData_t *threadData);


/*
equation index: 10
type: SIMPLE_ASSIGN
m1.ct.y = 0.0
*/
void System_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[15]/* m1.ct.y DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
$PRE.m1.ct.y = m1.ct.y
*/
void System_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  (data->simulationInfo->realVarsPre[15]/* m1.ct.y DISCRETE */)  = (data->localData[0]->realVars[15]/* m1.ct.y DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_85(DATA *data, threadData_t *threadData);


/*
equation index: 13
type: ALGORITHM

  env.newreq := $START.env.newreq;
  env.ValueFromClient := $START.env.ValueFromClient;
  env.inputdata1[3] := $START.env.inputdata1[3];
  env.inputdata1[2] := $START.env.inputdata1[2];
  env.inputdata1[1] := $START.env.inputdata1[1];
  env.fifox := $START.env.fifox;
  env.writesignal1 := $START.env.writesignal1;
  env.state := $START.env.state;
  $whenCondition6 := $START.$whenCondition6;
  $whenCondition6 := false;
  env.state := 0;
  env.writesignal1 := false;
  env.fifox := 0;
  env.inputdata1[1] := 0;
  env.inputdata1[2] := 0;
  env.inputdata1[3] := 0;
  env.ValueFromClient := 0;
  env.newreq := false;
*/
void System_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->booleanVars[15]/* env.newreq DISCRETE */)  = (data->modelData->booleanVarsData[15]/* env.newreq DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[317]/* env.ValueFromClient DISCRETE */)  = (data->modelData->integerVarsData[317]/* env.ValueFromClient DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[321]/* env.inputdata1[3] DISCRETE */)  = (data->modelData->integerVarsData[321]/* env.inputdata1[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[320]/* env.inputdata1[2] DISCRETE */)  = (data->modelData->integerVarsData[320]/* env.inputdata1[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[319]/* env.inputdata1[1] DISCRETE */)  = (data->modelData->integerVarsData[319]/* env.inputdata1[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[318]/* env.fifox DISCRETE */)  = (data->modelData->integerVarsData[318]/* env.fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[17]/* env.writesignal1 DISCRETE */)  = (data->modelData->booleanVarsData[17]/* env.writesignal1 DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[325]/* env.state DISCRETE */)  = (data->modelData->integerVarsData[325]/* env.state DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[5]/* $whenCondition6 DISCRETE */)  = (data->modelData->booleanVarsData[5]/* $whenCondition6 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[5]/* $whenCondition6 DISCRETE */)  = 0;

  (data->localData[0]->integerVars[325]/* env.state DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[17]/* env.writesignal1 DISCRETE */)  = 0;

  (data->localData[0]->integerVars[318]/* env.fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[319]/* env.inputdata1[1] DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[320]/* env.inputdata1[2] DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[321]/* env.inputdata1[3] DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[317]/* env.ValueFromClient DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[15]/* env.newreq DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_82(DATA *data, threadData_t *threadData);

extern void System_eqFunction_74(DATA *data, threadData_t *threadData);

extern void System_eqFunction_69(DATA *data, threadData_t *threadData);

extern void System_eqFunction_73(DATA *data, threadData_t *threadData);

extern void System_eqFunction_72(DATA *data, threadData_t *threadData);


/*
equation index: 19
type: SIMPLE_ASSIGN
$PRE.m1.ct.delivery = $START.m1.ct.delivery
*/
void System_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  (data->simulationInfo->booleanVarsPre[18]/* m1.ct.delivery DISCRETE */)  = (data->modelData->booleanVarsData[18]/* m1.ct.delivery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 20
type: ALGORITHM

  $whenCondition1 := $START.$whenCondition1;
  $whenCondition1 := m1.ct.delivery and not $PRE.m1.ct.delivery;
*/
void System_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->modelData->booleanVarsData[0]/* $whenCondition1 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = ((data->localData[0]->booleanVars[18]/* m1.ct.delivery DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[18]/* m1.ct.delivery DISCRETE */) ));
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
$PRE.dq.fifosize = $START.dq.fifosize
*/
void System_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  (data->simulationInfo->integerVarsPre[300]/* dq.fifosize DISCRETE */)  = (data->modelData->integerVarsData[300]/* dq.fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
$PRE.dq.writesignal = $START.dq.writesignal
*/
void System_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  (data->simulationInfo->booleanVarsPre[12]/* dq.writesignal DISCRETE */)  = (data->modelData->booleanVarsData[12]/* dq.writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
dq.writesigint = not $PRE.dq.writesignal == dq.writesignal
*/
void System_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->booleanVars[11]/* dq.writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[12]/* dq.writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[12]/* dq.writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[12]/* dq.writesignal DISCRETE */)  && (data->localData[0]->booleanVars[12]/* dq.writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
$PRE.dq.readsignal = $START.dq.readsignal
*/
void System_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  (data->simulationInfo->booleanVarsPre[9]/* dq.readsignal DISCRETE */)  = (data->modelData->booleanVarsData[9]/* dq.readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
dqt.readsignal = $START.dqt.readsignal
*/
void System_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->booleanVars[14]/* dqt.readsignal DISCRETE */)  = (data->modelData->booleanVarsData[14]/* dqt.readsignal DISCRETE */).attribute .start;
  TRACE_POP
}
extern void System_eqFunction_65(DATA *data, threadData_t *threadData);


/*
equation index: 27
type: SIMPLE_ASSIGN
dq.readsigint = not $PRE.dq.readsignal == dq.readsignal
*/
void System_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->booleanVars[8]/* dq.readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[9]/* dq.readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[9]/* dq.readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[9]/* dq.readsignal DISCRETE */)  && (data->localData[0]->booleanVars[9]/* dq.readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 28
type: ALGORITHM

  dq.fifo[100,3] := $START.dq.fifo[100,3];
  dq.fifo[100,2] := $START.dq.fifo[100,2];
  dq.fifo[100,1] := $START.dq.fifo[100,1];
  dq.fifo[99,3] := $START.dq.fifo[99,3];
  dq.fifo[99,2] := $START.dq.fifo[99,2];
  dq.fifo[99,1] := $START.dq.fifo[99,1];
  dq.fifo[98,3] := $START.dq.fifo[98,3];
  dq.fifo[98,2] := $START.dq.fifo[98,2];
  dq.fifo[98,1] := $START.dq.fifo[98,1];
  dq.fifo[97,3] := $START.dq.fifo[97,3];
  dq.fifo[97,2] := $START.dq.fifo[97,2];
  dq.fifo[97,1] := $START.dq.fifo[97,1];
  dq.fifo[96,3] := $START.dq.fifo[96,3];
  dq.fifo[96,2] := $START.dq.fifo[96,2];
  dq.fifo[96,1] := $START.dq.fifo[96,1];
  dq.fifo[95,3] := $START.dq.fifo[95,3];
  dq.fifo[95,2] := $START.dq.fifo[95,2];
  dq.fifo[95,1] := $START.dq.fifo[95,1];
  dq.fifo[94,3] := $START.dq.fifo[94,3];
  dq.fifo[94,2] := $START.dq.fifo[94,2];
  dq.fifo[94,1] := $START.dq.fifo[94,1];
  dq.fifo[93,3] := $START.dq.fifo[93,3];
  dq.fifo[93,2] := $START.dq.fifo[93,2];
  dq.fifo[93,1] := $START.dq.fifo[93,1];
  dq.fifo[92,3] := $START.dq.fifo[92,3];
  dq.fifo[92,2] := $START.dq.fifo[92,2];
  dq.fifo[92,1] := $START.dq.fifo[92,1];
  dq.fifo[91,3] := $START.dq.fifo[91,3];
  dq.fifo[91,2] := $START.dq.fifo[91,2];
  dq.fifo[91,1] := $START.dq.fifo[91,1];
  dq.fifo[90,3] := $START.dq.fifo[90,3];
  dq.fifo[90,2] := $START.dq.fifo[90,2];
  dq.fifo[90,1] := $START.dq.fifo[90,1];
  dq.fifo[89,3] := $START.dq.fifo[89,3];
  dq.fifo[89,2] := $START.dq.fifo[89,2];
  dq.fifo[89,1] := $START.dq.fifo[89,1];
  dq.fifo[88,3] := $START.dq.fifo[88,3];
  dq.fifo[88,2] := $START.dq.fifo[88,2];
  dq.fifo[88,1] := $START.dq.fifo[88,1];
  dq.fifo[87,3] := $START.dq.fifo[87,3];
  dq.fifo[87,2] := $START.dq.fifo[87,2];
  dq.fifo[87,1] := $START.dq.fifo[87,1];
  dq.fifo[86,3] := $START.dq.fifo[86,3];
  dq.fifo[86,2] := $START.dq.fifo[86,2];
  dq.fifo[86,1] := $START.dq.fifo[86,1];
  dq.fifo[85,3] := $START.dq.fifo[85,3];
  dq.fifo[85,2] := $START.dq.fifo[85,2];
  dq.fifo[85,1] := $START.dq.fifo[85,1];
  dq.fifo[84,3] := $START.dq.fifo[84,3];
  dq.fifo[84,2] := $START.dq.fifo[84,2];
  dq.fifo[84,1] := $START.dq.fifo[84,1];
  dq.fifo[83,3] := $START.dq.fifo[83,3];
  dq.fifo[83,2] := $START.dq.fifo[83,2];
  dq.fifo[83,1] := $START.dq.fifo[83,1];
  dq.fifo[82,3] := $START.dq.fifo[82,3];
  dq.fifo[82,2] := $START.dq.fifo[82,2];
  dq.fifo[82,1] := $START.dq.fifo[82,1];
  dq.fifo[81,3] := $START.dq.fifo[81,3];
  dq.fifo[81,2] := $START.dq.fifo[81,2];
  dq.fifo[81,1] := $START.dq.fifo[81,1];
  dq.fifo[80,3] := $START.dq.fifo[80,3];
  dq.fifo[80,2] := $START.dq.fifo[80,2];
  dq.fifo[80,1] := $START.dq.fifo[80,1];
  dq.fifo[79,3] := $START.dq.fifo[79,3];
  dq.fifo[79,2] := $START.dq.fifo[79,2];
  dq.fifo[79,1] := $START.dq.fifo[79,1];
  dq.fifo[78,3] := $START.dq.fifo[78,3];
  dq.fifo[78,2] := $START.dq.fifo[78,2];
  dq.fifo[78,1] := $START.dq.fifo[78,1];
  dq.fifo[77,3] := $START.dq.fifo[77,3];
  dq.fifo[77,2] := $START.dq.fifo[77,2];
  dq.fifo[77,1] := $START.dq.fifo[77,1];
  dq.fifo[76,3] := $START.dq.fifo[76,3];
  dq.fifo[76,2] := $START.dq.fifo[76,2];
  dq.fifo[76,1] := $START.dq.fifo[76,1];
  dq.fifo[75,3] := $START.dq.fifo[75,3];
  dq.fifo[75,2] := $START.dq.fifo[75,2];
  dq.fifo[75,1] := $START.dq.fifo[75,1];
  dq.fifo[74,3] := $START.dq.fifo[74,3];
  dq.fifo[74,2] := $START.dq.fifo[74,2];
  dq.fifo[74,1] := $START.dq.fifo[74,1];
  dq.fifo[73,3] := $START.dq.fifo[73,3];
  dq.fifo[73,2] := $START.dq.fifo[73,2];
  dq.fifo[73,1] := $START.dq.fifo[73,1];
  dq.fifo[72,3] := $START.dq.fifo[72,3];
  dq.fifo[72,2] := $START.dq.fifo[72,2];
  dq.fifo[72,1] := $START.dq.fifo[72,1];
  dq.fifo[71,3] := $START.dq.fifo[71,3];
  dq.fifo[71,2] := $START.dq.fifo[71,2];
  dq.fifo[71,1] := $START.dq.fifo[71,1];
  dq.fifo[70,3] := $START.dq.fifo[70,3];
  dq.fifo[70,2] := $START.dq.fifo[70,2];
  dq.fifo[70,1] := $START.dq.fifo[70,1];
  dq.fifo[69,3] := $START.dq.fifo[69,3];
  dq.fifo[69,2] := $START.dq.fifo[69,2];
  dq.fifo[69,1] := $START.dq.fifo[69,1];
  dq.fifo[68,3] := $START.dq.fifo[68,3];
  dq.fifo[68,2] := $START.dq.fifo[68,2];
  dq.fifo[68,1] := $START.dq.fifo[68,1];
  dq.fifo[67,3] := $START.dq.fifo[67,3];
  dq.fifo[67,2] := $START.dq.fifo[67,2];
  dq.fifo[67,1] := $START.dq.fifo[67,1];
  dq.fifo[66,3] := $START.dq.fifo[66,3];
  dq.fifo[66,2] := $START.dq.fifo[66,2];
  dq.fifo[66,1] := $START.dq.fifo[66,1];
  dq.fifo[65,3] := $START.dq.fifo[65,3];
  dq.fifo[65,2] := $START.dq.fifo[65,2];
  dq.fifo[65,1] := $START.dq.fifo[65,1];
  dq.fifo[64,3] := $START.dq.fifo[64,3];
  dq.fifo[64,2] := $START.dq.fifo[64,2];
  dq.fifo[64,1] := $START.dq.fifo[64,1];
  dq.fifo[63,3] := $START.dq.fifo[63,3];
  dq.fifo[63,2] := $START.dq.fifo[63,2];
  dq.fifo[63,1] := $START.dq.fifo[63,1];
  dq.fifo[62,3] := $START.dq.fifo[62,3];
  dq.fifo[62,2] := $START.dq.fifo[62,2];
  dq.fifo[62,1] := $START.dq.fifo[62,1];
  dq.fifo[61,3] := $START.dq.fifo[61,3];
  dq.fifo[61,2] := $START.dq.fifo[61,2];
  dq.fifo[61,1] := $START.dq.fifo[61,1];
  dq.fifo[60,3] := $START.dq.fifo[60,3];
  dq.fifo[60,2] := $START.dq.fifo[60,2];
  dq.fifo[60,1] := $START.dq.fifo[60,1];
  dq.fifo[59,3] := $START.dq.fifo[59,3];
  dq.fifo[59,2] := $START.dq.fifo[59,2];
  dq.fifo[59,1] := $START.dq.fifo[59,1];
  dq.fifo[58,3] := $START.dq.fifo[58,3];
  dq.fifo[58,2] := $START.dq.fifo[58,2];
  dq.fifo[58,1] := $START.dq.fifo[58,1];
  dq.fifo[57,3] := $START.dq.fifo[57,3];
  dq.fifo[57,2] := $START.dq.fifo[57,2];
  dq.fifo[57,1] := $START.dq.fifo[57,1];
  dq.fifo[56,3] := $START.dq.fifo[56,3];
  dq.fifo[56,2] := $START.dq.fifo[56,2];
  dq.fifo[56,1] := $START.dq.fifo[56,1];
  dq.fifo[55,3] := $START.dq.fifo[55,3];
  dq.fifo[55,2] := $START.dq.fifo[55,2];
  dq.fifo[55,1] := $START.dq.fifo[55,1];
  dq.fifo[54,3] := $START.dq.fifo[54,3];
  dq.fifo[54,2] := $START.dq.fifo[54,2];
  dq.fifo[54,1] := $START.dq.fifo[54,1];
  dq.fifo[53,3] := $START.dq.fifo[53,3];
  dq.fifo[53,2] := $START.dq.fifo[53,2];
  dq.fifo[53,1] := $START.dq.fifo[53,1];
  dq.fifo[52,3] := $START.dq.fifo[52,3];
  dq.fifo[52,2] := $START.dq.fifo[52,2];
  dq.fifo[52,1] := $START.dq.fifo[52,1];
  dq.fifo[51,3] := $START.dq.fifo[51,3];
  dq.fifo[51,2] := $START.dq.fifo[51,2];
  dq.fifo[51,1] := $START.dq.fifo[51,1];
  dq.fifo[50,3] := $START.dq.fifo[50,3];
  dq.fifo[50,2] := $START.dq.fifo[50,2];
  dq.fifo[50,1] := $START.dq.fifo[50,1];
  dq.fifo[49,3] := $START.dq.fifo[49,3];
  dq.fifo[49,2] := $START.dq.fifo[49,2];
  dq.fifo[49,1] := $START.dq.fifo[49,1];
  dq.fifo[48,3] := $START.dq.fifo[48,3];
  dq.fifo[48,2] := $START.dq.fifo[48,2];
  dq.fifo[48,1] := $START.dq.fifo[48,1];
  dq.fifo[47,3] := $START.dq.fifo[47,3];
  dq.fifo[47,2] := $START.dq.fifo[47,2];
  dq.fifo[47,1] := $START.dq.fifo[47,1];
  dq.fifo[46,3] := $START.dq.fifo[46,3];
  dq.fifo[46,2] := $START.dq.fifo[46,2];
  dq.fifo[46,1] := $START.dq.fifo[46,1];
  dq.fifo[45,3] := $START.dq.fifo[45,3];
  dq.fifo[45,2] := $START.dq.fifo[45,2];
  dq.fifo[45,1] := $START.dq.fifo[45,1];
  dq.fifo[44,3] := $START.dq.fifo[44,3];
  dq.fifo[44,2] := $START.dq.fifo[44,2];
  dq.fifo[44,1] := $START.dq.fifo[44,1];
  dq.fifo[43,3] := $START.dq.fifo[43,3];
  dq.fifo[43,2] := $START.dq.fifo[43,2];
  dq.fifo[43,1] := $START.dq.fifo[43,1];
  dq.fifo[42,3] := $START.dq.fifo[42,3];
  dq.fifo[42,2] := $START.dq.fifo[42,2];
  dq.fifo[42,1] := $START.dq.fifo[42,1];
  dq.fifo[41,3] := $START.dq.fifo[41,3];
  dq.fifo[41,2] := $START.dq.fifo[41,2];
  dq.fifo[41,1] := $START.dq.fifo[41,1];
  dq.fifo[40,3] := $START.dq.fifo[40,3];
  dq.fifo[40,2] := $START.dq.fifo[40,2];
  dq.fifo[40,1] := $START.dq.fifo[40,1];
  dq.fifo[39,3] := $START.dq.fifo[39,3];
  dq.fifo[39,2] := $START.dq.fifo[39,2];
  dq.fifo[39,1] := $START.dq.fifo[39,1];
  dq.fifo[38,3] := $START.dq.fifo[38,3];
  dq.fifo[38,2] := $START.dq.fifo[38,2];
  dq.fifo[38,1] := $START.dq.fifo[38,1];
  dq.fifo[37,3] := $START.dq.fifo[37,3];
  dq.fifo[37,2] := $START.dq.fifo[37,2];
  dq.fifo[37,1] := $START.dq.fifo[37,1];
  dq.fifo[36,3] := $START.dq.fifo[36,3];
  dq.fifo[36,2] := $START.dq.fifo[36,2];
  dq.fifo[36,1] := $START.dq.fifo[36,1];
  dq.fifo[35,3] := $START.dq.fifo[35,3];
  dq.fifo[35,2] := $START.dq.fifo[35,2];
  dq.fifo[35,1] := $START.dq.fifo[35,1];
  dq.fifo[34,3] := $START.dq.fifo[34,3];
  dq.fifo[34,2] := $START.dq.fifo[34,2];
  dq.fifo[34,1] := $START.dq.fifo[34,1];
  dq.fifo[33,3] := $START.dq.fifo[33,3];
  dq.fifo[33,2] := $START.dq.fifo[33,2];
  dq.fifo[33,1] := $START.dq.fifo[33,1];
  dq.fifo[32,3] := $START.dq.fifo[32,3];
  dq.fifo[32,2] := $START.dq.fifo[32,2];
  dq.fifo[32,1] := $START.dq.fifo[32,1];
  dq.fifo[31,3] := $START.dq.fifo[31,3];
  dq.fifo[31,2] := $START.dq.fifo[31,2];
  dq.fifo[31,1] := $START.dq.fifo[31,1];
  dq.fifo[30,3] := $START.dq.fifo[30,3];
  dq.fifo[30,2] := $START.dq.fifo[30,2];
  dq.fifo[30,1] := $START.dq.fifo[30,1];
  dq.fifo[29,3] := $START.dq.fifo[29,3];
  dq.fifo[29,2] := $START.dq.fifo[29,2];
  dq.fifo[29,1] := $START.dq.fifo[29,1];
  dq.fifo[28,3] := $START.dq.fifo[28,3];
  dq.fifo[28,2] := $START.dq.fifo[28,2];
  dq.fifo[28,1] := $START.dq.fifo[28,1];
  dq.fifo[27,3] := $START.dq.fifo[27,3];
  dq.fifo[27,2] := $START.dq.fifo[27,2];
  dq.fifo[27,1] := $START.dq.fifo[27,1];
  dq.fifo[26,3] := $START.dq.fifo[26,3];
  dq.fifo[26,2] := $START.dq.fifo[26,2];
  dq.fifo[26,1] := $START.dq.fifo[26,1];
  dq.fifo[25,3] := $START.dq.fifo[25,3];
  dq.fifo[25,2] := $START.dq.fifo[25,2];
  dq.fifo[25,1] := $START.dq.fifo[25,1];
  dq.fifo[24,3] := $START.dq.fifo[24,3];
  dq.fifo[24,2] := $START.dq.fifo[24,2];
  dq.fifo[24,1] := $START.dq.fifo[24,1];
  dq.fifo[23,3] := $START.dq.fifo[23,3];
  dq.fifo[23,2] := $START.dq.fifo[23,2];
  dq.fifo[23,1] := $START.dq.fifo[23,1];
  dq.fifo[22,3] := $START.dq.fifo[22,3];
  dq.fifo[22,2] := $START.dq.fifo[22,2];
  dq.fifo[22,1] := $START.dq.fifo[22,1];
  dq.fifo[21,3] := $START.dq.fifo[21,3];
  dq.fifo[21,2] := $START.dq.fifo[21,2];
  dq.fifo[21,1] := $START.dq.fifo[21,1];
  dq.fifo[20,3] := $START.dq.fifo[20,3];
  dq.fifo[20,2] := $START.dq.fifo[20,2];
  dq.fifo[20,1] := $START.dq.fifo[20,1];
  dq.fifo[19,3] := $START.dq.fifo[19,3];
  dq.fifo[19,2] := $START.dq.fifo[19,2];
  dq.fifo[19,1] := $START.dq.fifo[19,1];
  dq.fifo[18,3] := $START.dq.fifo[18,3];
  dq.fifo[18,2] := $START.dq.fifo[18,2];
  dq.fifo[18,1] := $START.dq.fifo[18,1];
  dq.fifo[17,3] := $START.dq.fifo[17,3];
  dq.fifo[17,2] := $START.dq.fifo[17,2];
  dq.fifo[17,1] := $START.dq.fifo[17,1];
  dq.fifo[16,3] := $START.dq.fifo[16,3];
  dq.fifo[16,2] := $START.dq.fifo[16,2];
  dq.fifo[16,1] := $START.dq.fifo[16,1];
  dq.fifo[15,3] := $START.dq.fifo[15,3];
  dq.fifo[15,2] := $START.dq.fifo[15,2];
  dq.fifo[15,1] := $START.dq.fifo[15,1];
  dq.fifo[14,3] := $START.dq.fifo[14,3];
  dq.fifo[14,2] := $START.dq.fifo[14,2];
  dq.fifo[14,1] := $START.dq.fifo[14,1];
  dq.fifo[13,3] := $START.dq.fifo[13,3];
  dq.fifo[13,2] := $START.dq.fifo[13,2];
  dq.fifo[13,1] := $START.dq.fifo[13,1];
  dq.fifo[12,3] := $START.dq.fifo[12,3];
  dq.fifo[12,2] := $START.dq.fifo[12,2];
  dq.fifo[12,1] := $START.dq.fifo[12,1];
  dq.fifo[11,3] := $START.dq.fifo[11,3];
  dq.fifo[11,2] := $START.dq.fifo[11,2];
  dq.fifo[11,1] := $START.dq.fifo[11,1];
  dq.fifo[10,3] := $START.dq.fifo[10,3];
  dq.fifo[10,2] := $START.dq.fifo[10,2];
  dq.fifo[10,1] := $START.dq.fifo[10,1];
  dq.fifo[9,3] := $START.dq.fifo[9,3];
  dq.fifo[9,2] := $START.dq.fifo[9,2];
  dq.fifo[9,1] := $START.dq.fifo[9,1];
  dq.fifo[8,3] := $START.dq.fifo[8,3];
  dq.fifo[8,2] := $START.dq.fifo[8,2];
  dq.fifo[8,1] := $START.dq.fifo[8,1];
  dq.fifo[7,3] := $START.dq.fifo[7,3];
  dq.fifo[7,2] := $START.dq.fifo[7,2];
  dq.fifo[7,1] := $START.dq.fifo[7,1];
  dq.fifo[6,3] := $START.dq.fifo[6,3];
  dq.fifo[6,2] := $START.dq.fifo[6,2];
  dq.fifo[6,1] := $START.dq.fifo[6,1];
  dq.fifo[5,3] := $START.dq.fifo[5,3];
  dq.fifo[5,2] := $START.dq.fifo[5,2];
  dq.fifo[5,1] := $START.dq.fifo[5,1];
  dq.fifo[4,3] := $START.dq.fifo[4,3];
  dq.fifo[4,2] := $START.dq.fifo[4,2];
  dq.fifo[4,1] := $START.dq.fifo[4,1];
  dq.fifo[3,3] := $START.dq.fifo[3,3];
  dq.fifo[3,2] := $START.dq.fifo[3,2];
  dq.fifo[3,1] := $START.dq.fifo[3,1];
  dq.fifo[2,3] := $START.dq.fifo[2,3];
  dq.fifo[2,2] := $START.dq.fifo[2,2];
  dq.fifo[2,1] := $START.dq.fifo[2,1];
  dq.fifo[1,3] := $START.dq.fifo[1,3];
  dq.fifo[1,2] := $START.dq.fifo[1,2];
  dq.fifo[1,1] := $START.dq.fifo[1,1];
  dq.outputdata[3] := $START.dq.outputdata[3];
  dq.outputdata[2] := $START.dq.outputdata[2];
  dq.outputdata[1] := $START.dq.outputdata[1];
  dq.newest := $START.dq.newest;
  dq.oldest := $START.dq.oldest;
  dq.fifosize := $START.dq.fifosize;
  dq.spaceavailable := $START.dq.spaceavailable;
  dq.datavailable := $START.dq.datavailable;
  $whenCondition5 := $START.$whenCondition5;
  $whenCondition4 := $START.$whenCondition4;
  $whenCondition3 := $START.$whenCondition3;
  $whenCondition3 := dq.readsigint and dq.writesigint;
  $whenCondition4 := dq.readsigint and not dq.writesigint and $PRE.dq.fifosize >= 1;
  $whenCondition5 := not dq.readsigint and dq.writesigint and $PRE.dq.fifosize < 100;
  dq.datavailable := false;
  dq.spaceavailable := true;
  dq.fifosize := 0;
  dq.oldest := 1;
  dq.newest := 1;
  for j in 1:3 loop
    dq.outputdata[j] := 0;
  end for;
  for i in 1:100 loop
    for j in 1:3 loop
      dq.fifo[i,j] := 0;
    end for;
  end for;
*/
void System_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  (data->localData[0]->integerVars[299]/* dq.fifo[100,3] DISCRETE */)  = (data->modelData->integerVarsData[299]/* dq.fifo[100,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[298]/* dq.fifo[100,2] DISCRETE */)  = (data->modelData->integerVarsData[298]/* dq.fifo[100,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[297]/* dq.fifo[100,1] DISCRETE */)  = (data->modelData->integerVarsData[297]/* dq.fifo[100,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[296]/* dq.fifo[99,3] DISCRETE */)  = (data->modelData->integerVarsData[296]/* dq.fifo[99,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[295]/* dq.fifo[99,2] DISCRETE */)  = (data->modelData->integerVarsData[295]/* dq.fifo[99,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[294]/* dq.fifo[99,1] DISCRETE */)  = (data->modelData->integerVarsData[294]/* dq.fifo[99,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[293]/* dq.fifo[98,3] DISCRETE */)  = (data->modelData->integerVarsData[293]/* dq.fifo[98,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[292]/* dq.fifo[98,2] DISCRETE */)  = (data->modelData->integerVarsData[292]/* dq.fifo[98,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[291]/* dq.fifo[98,1] DISCRETE */)  = (data->modelData->integerVarsData[291]/* dq.fifo[98,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[290]/* dq.fifo[97,3] DISCRETE */)  = (data->modelData->integerVarsData[290]/* dq.fifo[97,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[289]/* dq.fifo[97,2] DISCRETE */)  = (data->modelData->integerVarsData[289]/* dq.fifo[97,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[288]/* dq.fifo[97,1] DISCRETE */)  = (data->modelData->integerVarsData[288]/* dq.fifo[97,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[287]/* dq.fifo[96,3] DISCRETE */)  = (data->modelData->integerVarsData[287]/* dq.fifo[96,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[286]/* dq.fifo[96,2] DISCRETE */)  = (data->modelData->integerVarsData[286]/* dq.fifo[96,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[285]/* dq.fifo[96,1] DISCRETE */)  = (data->modelData->integerVarsData[285]/* dq.fifo[96,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[284]/* dq.fifo[95,3] DISCRETE */)  = (data->modelData->integerVarsData[284]/* dq.fifo[95,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[283]/* dq.fifo[95,2] DISCRETE */)  = (data->modelData->integerVarsData[283]/* dq.fifo[95,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[282]/* dq.fifo[95,1] DISCRETE */)  = (data->modelData->integerVarsData[282]/* dq.fifo[95,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[281]/* dq.fifo[94,3] DISCRETE */)  = (data->modelData->integerVarsData[281]/* dq.fifo[94,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[280]/* dq.fifo[94,2] DISCRETE */)  = (data->modelData->integerVarsData[280]/* dq.fifo[94,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[279]/* dq.fifo[94,1] DISCRETE */)  = (data->modelData->integerVarsData[279]/* dq.fifo[94,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[278]/* dq.fifo[93,3] DISCRETE */)  = (data->modelData->integerVarsData[278]/* dq.fifo[93,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[277]/* dq.fifo[93,2] DISCRETE */)  = (data->modelData->integerVarsData[277]/* dq.fifo[93,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[276]/* dq.fifo[93,1] DISCRETE */)  = (data->modelData->integerVarsData[276]/* dq.fifo[93,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[275]/* dq.fifo[92,3] DISCRETE */)  = (data->modelData->integerVarsData[275]/* dq.fifo[92,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[274]/* dq.fifo[92,2] DISCRETE */)  = (data->modelData->integerVarsData[274]/* dq.fifo[92,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[273]/* dq.fifo[92,1] DISCRETE */)  = (data->modelData->integerVarsData[273]/* dq.fifo[92,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[272]/* dq.fifo[91,3] DISCRETE */)  = (data->modelData->integerVarsData[272]/* dq.fifo[91,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[271]/* dq.fifo[91,2] DISCRETE */)  = (data->modelData->integerVarsData[271]/* dq.fifo[91,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[270]/* dq.fifo[91,1] DISCRETE */)  = (data->modelData->integerVarsData[270]/* dq.fifo[91,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[269]/* dq.fifo[90,3] DISCRETE */)  = (data->modelData->integerVarsData[269]/* dq.fifo[90,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[268]/* dq.fifo[90,2] DISCRETE */)  = (data->modelData->integerVarsData[268]/* dq.fifo[90,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[267]/* dq.fifo[90,1] DISCRETE */)  = (data->modelData->integerVarsData[267]/* dq.fifo[90,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[266]/* dq.fifo[89,3] DISCRETE */)  = (data->modelData->integerVarsData[266]/* dq.fifo[89,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[265]/* dq.fifo[89,2] DISCRETE */)  = (data->modelData->integerVarsData[265]/* dq.fifo[89,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[264]/* dq.fifo[89,1] DISCRETE */)  = (data->modelData->integerVarsData[264]/* dq.fifo[89,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[263]/* dq.fifo[88,3] DISCRETE */)  = (data->modelData->integerVarsData[263]/* dq.fifo[88,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[262]/* dq.fifo[88,2] DISCRETE */)  = (data->modelData->integerVarsData[262]/* dq.fifo[88,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[261]/* dq.fifo[88,1] DISCRETE */)  = (data->modelData->integerVarsData[261]/* dq.fifo[88,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[260]/* dq.fifo[87,3] DISCRETE */)  = (data->modelData->integerVarsData[260]/* dq.fifo[87,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[259]/* dq.fifo[87,2] DISCRETE */)  = (data->modelData->integerVarsData[259]/* dq.fifo[87,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[258]/* dq.fifo[87,1] DISCRETE */)  = (data->modelData->integerVarsData[258]/* dq.fifo[87,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[257]/* dq.fifo[86,3] DISCRETE */)  = (data->modelData->integerVarsData[257]/* dq.fifo[86,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[256]/* dq.fifo[86,2] DISCRETE */)  = (data->modelData->integerVarsData[256]/* dq.fifo[86,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[255]/* dq.fifo[86,1] DISCRETE */)  = (data->modelData->integerVarsData[255]/* dq.fifo[86,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[254]/* dq.fifo[85,3] DISCRETE */)  = (data->modelData->integerVarsData[254]/* dq.fifo[85,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[253]/* dq.fifo[85,2] DISCRETE */)  = (data->modelData->integerVarsData[253]/* dq.fifo[85,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[252]/* dq.fifo[85,1] DISCRETE */)  = (data->modelData->integerVarsData[252]/* dq.fifo[85,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[251]/* dq.fifo[84,3] DISCRETE */)  = (data->modelData->integerVarsData[251]/* dq.fifo[84,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[250]/* dq.fifo[84,2] DISCRETE */)  = (data->modelData->integerVarsData[250]/* dq.fifo[84,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[249]/* dq.fifo[84,1] DISCRETE */)  = (data->modelData->integerVarsData[249]/* dq.fifo[84,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[248]/* dq.fifo[83,3] DISCRETE */)  = (data->modelData->integerVarsData[248]/* dq.fifo[83,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[247]/* dq.fifo[83,2] DISCRETE */)  = (data->modelData->integerVarsData[247]/* dq.fifo[83,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[246]/* dq.fifo[83,1] DISCRETE */)  = (data->modelData->integerVarsData[246]/* dq.fifo[83,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[245]/* dq.fifo[82,3] DISCRETE */)  = (data->modelData->integerVarsData[245]/* dq.fifo[82,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[244]/* dq.fifo[82,2] DISCRETE */)  = (data->modelData->integerVarsData[244]/* dq.fifo[82,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[243]/* dq.fifo[82,1] DISCRETE */)  = (data->modelData->integerVarsData[243]/* dq.fifo[82,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[242]/* dq.fifo[81,3] DISCRETE */)  = (data->modelData->integerVarsData[242]/* dq.fifo[81,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[241]/* dq.fifo[81,2] DISCRETE */)  = (data->modelData->integerVarsData[241]/* dq.fifo[81,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[240]/* dq.fifo[81,1] DISCRETE */)  = (data->modelData->integerVarsData[240]/* dq.fifo[81,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[239]/* dq.fifo[80,3] DISCRETE */)  = (data->modelData->integerVarsData[239]/* dq.fifo[80,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[238]/* dq.fifo[80,2] DISCRETE */)  = (data->modelData->integerVarsData[238]/* dq.fifo[80,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[237]/* dq.fifo[80,1] DISCRETE */)  = (data->modelData->integerVarsData[237]/* dq.fifo[80,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[236]/* dq.fifo[79,3] DISCRETE */)  = (data->modelData->integerVarsData[236]/* dq.fifo[79,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[235]/* dq.fifo[79,2] DISCRETE */)  = (data->modelData->integerVarsData[235]/* dq.fifo[79,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[234]/* dq.fifo[79,1] DISCRETE */)  = (data->modelData->integerVarsData[234]/* dq.fifo[79,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[233]/* dq.fifo[78,3] DISCRETE */)  = (data->modelData->integerVarsData[233]/* dq.fifo[78,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[232]/* dq.fifo[78,2] DISCRETE */)  = (data->modelData->integerVarsData[232]/* dq.fifo[78,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[231]/* dq.fifo[78,1] DISCRETE */)  = (data->modelData->integerVarsData[231]/* dq.fifo[78,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[230]/* dq.fifo[77,3] DISCRETE */)  = (data->modelData->integerVarsData[230]/* dq.fifo[77,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[229]/* dq.fifo[77,2] DISCRETE */)  = (data->modelData->integerVarsData[229]/* dq.fifo[77,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[228]/* dq.fifo[77,1] DISCRETE */)  = (data->modelData->integerVarsData[228]/* dq.fifo[77,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[227]/* dq.fifo[76,3] DISCRETE */)  = (data->modelData->integerVarsData[227]/* dq.fifo[76,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[226]/* dq.fifo[76,2] DISCRETE */)  = (data->modelData->integerVarsData[226]/* dq.fifo[76,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[225]/* dq.fifo[76,1] DISCRETE */)  = (data->modelData->integerVarsData[225]/* dq.fifo[76,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[224]/* dq.fifo[75,3] DISCRETE */)  = (data->modelData->integerVarsData[224]/* dq.fifo[75,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[223]/* dq.fifo[75,2] DISCRETE */)  = (data->modelData->integerVarsData[223]/* dq.fifo[75,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[222]/* dq.fifo[75,1] DISCRETE */)  = (data->modelData->integerVarsData[222]/* dq.fifo[75,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[221]/* dq.fifo[74,3] DISCRETE */)  = (data->modelData->integerVarsData[221]/* dq.fifo[74,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[220]/* dq.fifo[74,2] DISCRETE */)  = (data->modelData->integerVarsData[220]/* dq.fifo[74,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[219]/* dq.fifo[74,1] DISCRETE */)  = (data->modelData->integerVarsData[219]/* dq.fifo[74,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[218]/* dq.fifo[73,3] DISCRETE */)  = (data->modelData->integerVarsData[218]/* dq.fifo[73,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[217]/* dq.fifo[73,2] DISCRETE */)  = (data->modelData->integerVarsData[217]/* dq.fifo[73,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[216]/* dq.fifo[73,1] DISCRETE */)  = (data->modelData->integerVarsData[216]/* dq.fifo[73,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[215]/* dq.fifo[72,3] DISCRETE */)  = (data->modelData->integerVarsData[215]/* dq.fifo[72,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[214]/* dq.fifo[72,2] DISCRETE */)  = (data->modelData->integerVarsData[214]/* dq.fifo[72,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[213]/* dq.fifo[72,1] DISCRETE */)  = (data->modelData->integerVarsData[213]/* dq.fifo[72,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[212]/* dq.fifo[71,3] DISCRETE */)  = (data->modelData->integerVarsData[212]/* dq.fifo[71,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[211]/* dq.fifo[71,2] DISCRETE */)  = (data->modelData->integerVarsData[211]/* dq.fifo[71,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[210]/* dq.fifo[71,1] DISCRETE */)  = (data->modelData->integerVarsData[210]/* dq.fifo[71,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[209]/* dq.fifo[70,3] DISCRETE */)  = (data->modelData->integerVarsData[209]/* dq.fifo[70,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[208]/* dq.fifo[70,2] DISCRETE */)  = (data->modelData->integerVarsData[208]/* dq.fifo[70,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[207]/* dq.fifo[70,1] DISCRETE */)  = (data->modelData->integerVarsData[207]/* dq.fifo[70,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[206]/* dq.fifo[69,3] DISCRETE */)  = (data->modelData->integerVarsData[206]/* dq.fifo[69,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[205]/* dq.fifo[69,2] DISCRETE */)  = (data->modelData->integerVarsData[205]/* dq.fifo[69,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[204]/* dq.fifo[69,1] DISCRETE */)  = (data->modelData->integerVarsData[204]/* dq.fifo[69,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[203]/* dq.fifo[68,3] DISCRETE */)  = (data->modelData->integerVarsData[203]/* dq.fifo[68,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[202]/* dq.fifo[68,2] DISCRETE */)  = (data->modelData->integerVarsData[202]/* dq.fifo[68,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[201]/* dq.fifo[68,1] DISCRETE */)  = (data->modelData->integerVarsData[201]/* dq.fifo[68,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[200]/* dq.fifo[67,3] DISCRETE */)  = (data->modelData->integerVarsData[200]/* dq.fifo[67,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[199]/* dq.fifo[67,2] DISCRETE */)  = (data->modelData->integerVarsData[199]/* dq.fifo[67,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[198]/* dq.fifo[67,1] DISCRETE */)  = (data->modelData->integerVarsData[198]/* dq.fifo[67,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[197]/* dq.fifo[66,3] DISCRETE */)  = (data->modelData->integerVarsData[197]/* dq.fifo[66,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[196]/* dq.fifo[66,2] DISCRETE */)  = (data->modelData->integerVarsData[196]/* dq.fifo[66,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[195]/* dq.fifo[66,1] DISCRETE */)  = (data->modelData->integerVarsData[195]/* dq.fifo[66,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[194]/* dq.fifo[65,3] DISCRETE */)  = (data->modelData->integerVarsData[194]/* dq.fifo[65,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[193]/* dq.fifo[65,2] DISCRETE */)  = (data->modelData->integerVarsData[193]/* dq.fifo[65,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[192]/* dq.fifo[65,1] DISCRETE */)  = (data->modelData->integerVarsData[192]/* dq.fifo[65,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[191]/* dq.fifo[64,3] DISCRETE */)  = (data->modelData->integerVarsData[191]/* dq.fifo[64,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[190]/* dq.fifo[64,2] DISCRETE */)  = (data->modelData->integerVarsData[190]/* dq.fifo[64,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[189]/* dq.fifo[64,1] DISCRETE */)  = (data->modelData->integerVarsData[189]/* dq.fifo[64,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[188]/* dq.fifo[63,3] DISCRETE */)  = (data->modelData->integerVarsData[188]/* dq.fifo[63,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[187]/* dq.fifo[63,2] DISCRETE */)  = (data->modelData->integerVarsData[187]/* dq.fifo[63,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[186]/* dq.fifo[63,1] DISCRETE */)  = (data->modelData->integerVarsData[186]/* dq.fifo[63,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[185]/* dq.fifo[62,3] DISCRETE */)  = (data->modelData->integerVarsData[185]/* dq.fifo[62,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[184]/* dq.fifo[62,2] DISCRETE */)  = (data->modelData->integerVarsData[184]/* dq.fifo[62,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[183]/* dq.fifo[62,1] DISCRETE */)  = (data->modelData->integerVarsData[183]/* dq.fifo[62,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[182]/* dq.fifo[61,3] DISCRETE */)  = (data->modelData->integerVarsData[182]/* dq.fifo[61,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[181]/* dq.fifo[61,2] DISCRETE */)  = (data->modelData->integerVarsData[181]/* dq.fifo[61,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[180]/* dq.fifo[61,1] DISCRETE */)  = (data->modelData->integerVarsData[180]/* dq.fifo[61,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[179]/* dq.fifo[60,3] DISCRETE */)  = (data->modelData->integerVarsData[179]/* dq.fifo[60,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[178]/* dq.fifo[60,2] DISCRETE */)  = (data->modelData->integerVarsData[178]/* dq.fifo[60,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[177]/* dq.fifo[60,1] DISCRETE */)  = (data->modelData->integerVarsData[177]/* dq.fifo[60,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[176]/* dq.fifo[59,3] DISCRETE */)  = (data->modelData->integerVarsData[176]/* dq.fifo[59,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[175]/* dq.fifo[59,2] DISCRETE */)  = (data->modelData->integerVarsData[175]/* dq.fifo[59,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[174]/* dq.fifo[59,1] DISCRETE */)  = (data->modelData->integerVarsData[174]/* dq.fifo[59,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[173]/* dq.fifo[58,3] DISCRETE */)  = (data->modelData->integerVarsData[173]/* dq.fifo[58,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[172]/* dq.fifo[58,2] DISCRETE */)  = (data->modelData->integerVarsData[172]/* dq.fifo[58,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[171]/* dq.fifo[58,1] DISCRETE */)  = (data->modelData->integerVarsData[171]/* dq.fifo[58,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[170]/* dq.fifo[57,3] DISCRETE */)  = (data->modelData->integerVarsData[170]/* dq.fifo[57,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[169]/* dq.fifo[57,2] DISCRETE */)  = (data->modelData->integerVarsData[169]/* dq.fifo[57,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[168]/* dq.fifo[57,1] DISCRETE */)  = (data->modelData->integerVarsData[168]/* dq.fifo[57,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[167]/* dq.fifo[56,3] DISCRETE */)  = (data->modelData->integerVarsData[167]/* dq.fifo[56,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[166]/* dq.fifo[56,2] DISCRETE */)  = (data->modelData->integerVarsData[166]/* dq.fifo[56,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[165]/* dq.fifo[56,1] DISCRETE */)  = (data->modelData->integerVarsData[165]/* dq.fifo[56,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[164]/* dq.fifo[55,3] DISCRETE */)  = (data->modelData->integerVarsData[164]/* dq.fifo[55,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[163]/* dq.fifo[55,2] DISCRETE */)  = (data->modelData->integerVarsData[163]/* dq.fifo[55,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[162]/* dq.fifo[55,1] DISCRETE */)  = (data->modelData->integerVarsData[162]/* dq.fifo[55,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[161]/* dq.fifo[54,3] DISCRETE */)  = (data->modelData->integerVarsData[161]/* dq.fifo[54,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[160]/* dq.fifo[54,2] DISCRETE */)  = (data->modelData->integerVarsData[160]/* dq.fifo[54,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[159]/* dq.fifo[54,1] DISCRETE */)  = (data->modelData->integerVarsData[159]/* dq.fifo[54,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[158]/* dq.fifo[53,3] DISCRETE */)  = (data->modelData->integerVarsData[158]/* dq.fifo[53,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[157]/* dq.fifo[53,2] DISCRETE */)  = (data->modelData->integerVarsData[157]/* dq.fifo[53,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[156]/* dq.fifo[53,1] DISCRETE */)  = (data->modelData->integerVarsData[156]/* dq.fifo[53,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[155]/* dq.fifo[52,3] DISCRETE */)  = (data->modelData->integerVarsData[155]/* dq.fifo[52,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[154]/* dq.fifo[52,2] DISCRETE */)  = (data->modelData->integerVarsData[154]/* dq.fifo[52,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[153]/* dq.fifo[52,1] DISCRETE */)  = (data->modelData->integerVarsData[153]/* dq.fifo[52,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[152]/* dq.fifo[51,3] DISCRETE */)  = (data->modelData->integerVarsData[152]/* dq.fifo[51,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[151]/* dq.fifo[51,2] DISCRETE */)  = (data->modelData->integerVarsData[151]/* dq.fifo[51,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[150]/* dq.fifo[51,1] DISCRETE */)  = (data->modelData->integerVarsData[150]/* dq.fifo[51,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[149]/* dq.fifo[50,3] DISCRETE */)  = (data->modelData->integerVarsData[149]/* dq.fifo[50,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[148]/* dq.fifo[50,2] DISCRETE */)  = (data->modelData->integerVarsData[148]/* dq.fifo[50,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[147]/* dq.fifo[50,1] DISCRETE */)  = (data->modelData->integerVarsData[147]/* dq.fifo[50,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[146]/* dq.fifo[49,3] DISCRETE */)  = (data->modelData->integerVarsData[146]/* dq.fifo[49,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[145]/* dq.fifo[49,2] DISCRETE */)  = (data->modelData->integerVarsData[145]/* dq.fifo[49,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[144]/* dq.fifo[49,1] DISCRETE */)  = (data->modelData->integerVarsData[144]/* dq.fifo[49,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[143]/* dq.fifo[48,3] DISCRETE */)  = (data->modelData->integerVarsData[143]/* dq.fifo[48,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[142]/* dq.fifo[48,2] DISCRETE */)  = (data->modelData->integerVarsData[142]/* dq.fifo[48,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[141]/* dq.fifo[48,1] DISCRETE */)  = (data->modelData->integerVarsData[141]/* dq.fifo[48,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[140]/* dq.fifo[47,3] DISCRETE */)  = (data->modelData->integerVarsData[140]/* dq.fifo[47,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[139]/* dq.fifo[47,2] DISCRETE */)  = (data->modelData->integerVarsData[139]/* dq.fifo[47,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[138]/* dq.fifo[47,1] DISCRETE */)  = (data->modelData->integerVarsData[138]/* dq.fifo[47,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[137]/* dq.fifo[46,3] DISCRETE */)  = (data->modelData->integerVarsData[137]/* dq.fifo[46,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[136]/* dq.fifo[46,2] DISCRETE */)  = (data->modelData->integerVarsData[136]/* dq.fifo[46,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[135]/* dq.fifo[46,1] DISCRETE */)  = (data->modelData->integerVarsData[135]/* dq.fifo[46,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[134]/* dq.fifo[45,3] DISCRETE */)  = (data->modelData->integerVarsData[134]/* dq.fifo[45,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[133]/* dq.fifo[45,2] DISCRETE */)  = (data->modelData->integerVarsData[133]/* dq.fifo[45,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[132]/* dq.fifo[45,1] DISCRETE */)  = (data->modelData->integerVarsData[132]/* dq.fifo[45,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[131]/* dq.fifo[44,3] DISCRETE */)  = (data->modelData->integerVarsData[131]/* dq.fifo[44,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[130]/* dq.fifo[44,2] DISCRETE */)  = (data->modelData->integerVarsData[130]/* dq.fifo[44,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[129]/* dq.fifo[44,1] DISCRETE */)  = (data->modelData->integerVarsData[129]/* dq.fifo[44,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[128]/* dq.fifo[43,3] DISCRETE */)  = (data->modelData->integerVarsData[128]/* dq.fifo[43,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[127]/* dq.fifo[43,2] DISCRETE */)  = (data->modelData->integerVarsData[127]/* dq.fifo[43,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[126]/* dq.fifo[43,1] DISCRETE */)  = (data->modelData->integerVarsData[126]/* dq.fifo[43,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[125]/* dq.fifo[42,3] DISCRETE */)  = (data->modelData->integerVarsData[125]/* dq.fifo[42,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[124]/* dq.fifo[42,2] DISCRETE */)  = (data->modelData->integerVarsData[124]/* dq.fifo[42,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[123]/* dq.fifo[42,1] DISCRETE */)  = (data->modelData->integerVarsData[123]/* dq.fifo[42,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[122]/* dq.fifo[41,3] DISCRETE */)  = (data->modelData->integerVarsData[122]/* dq.fifo[41,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[121]/* dq.fifo[41,2] DISCRETE */)  = (data->modelData->integerVarsData[121]/* dq.fifo[41,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[120]/* dq.fifo[41,1] DISCRETE */)  = (data->modelData->integerVarsData[120]/* dq.fifo[41,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[119]/* dq.fifo[40,3] DISCRETE */)  = (data->modelData->integerVarsData[119]/* dq.fifo[40,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[118]/* dq.fifo[40,2] DISCRETE */)  = (data->modelData->integerVarsData[118]/* dq.fifo[40,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[117]/* dq.fifo[40,1] DISCRETE */)  = (data->modelData->integerVarsData[117]/* dq.fifo[40,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[116]/* dq.fifo[39,3] DISCRETE */)  = (data->modelData->integerVarsData[116]/* dq.fifo[39,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[115]/* dq.fifo[39,2] DISCRETE */)  = (data->modelData->integerVarsData[115]/* dq.fifo[39,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[114]/* dq.fifo[39,1] DISCRETE */)  = (data->modelData->integerVarsData[114]/* dq.fifo[39,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[113]/* dq.fifo[38,3] DISCRETE */)  = (data->modelData->integerVarsData[113]/* dq.fifo[38,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[112]/* dq.fifo[38,2] DISCRETE */)  = (data->modelData->integerVarsData[112]/* dq.fifo[38,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[111]/* dq.fifo[38,1] DISCRETE */)  = (data->modelData->integerVarsData[111]/* dq.fifo[38,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[110]/* dq.fifo[37,3] DISCRETE */)  = (data->modelData->integerVarsData[110]/* dq.fifo[37,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[109]/* dq.fifo[37,2] DISCRETE */)  = (data->modelData->integerVarsData[109]/* dq.fifo[37,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[108]/* dq.fifo[37,1] DISCRETE */)  = (data->modelData->integerVarsData[108]/* dq.fifo[37,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[107]/* dq.fifo[36,3] DISCRETE */)  = (data->modelData->integerVarsData[107]/* dq.fifo[36,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[106]/* dq.fifo[36,2] DISCRETE */)  = (data->modelData->integerVarsData[106]/* dq.fifo[36,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[105]/* dq.fifo[36,1] DISCRETE */)  = (data->modelData->integerVarsData[105]/* dq.fifo[36,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[104]/* dq.fifo[35,3] DISCRETE */)  = (data->modelData->integerVarsData[104]/* dq.fifo[35,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[103]/* dq.fifo[35,2] DISCRETE */)  = (data->modelData->integerVarsData[103]/* dq.fifo[35,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[102]/* dq.fifo[35,1] DISCRETE */)  = (data->modelData->integerVarsData[102]/* dq.fifo[35,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[101]/* dq.fifo[34,3] DISCRETE */)  = (data->modelData->integerVarsData[101]/* dq.fifo[34,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[100]/* dq.fifo[34,2] DISCRETE */)  = (data->modelData->integerVarsData[100]/* dq.fifo[34,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[99]/* dq.fifo[34,1] DISCRETE */)  = (data->modelData->integerVarsData[99]/* dq.fifo[34,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[98]/* dq.fifo[33,3] DISCRETE */)  = (data->modelData->integerVarsData[98]/* dq.fifo[33,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[97]/* dq.fifo[33,2] DISCRETE */)  = (data->modelData->integerVarsData[97]/* dq.fifo[33,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[96]/* dq.fifo[33,1] DISCRETE */)  = (data->modelData->integerVarsData[96]/* dq.fifo[33,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[95]/* dq.fifo[32,3] DISCRETE */)  = (data->modelData->integerVarsData[95]/* dq.fifo[32,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[94]/* dq.fifo[32,2] DISCRETE */)  = (data->modelData->integerVarsData[94]/* dq.fifo[32,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[93]/* dq.fifo[32,1] DISCRETE */)  = (data->modelData->integerVarsData[93]/* dq.fifo[32,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[92]/* dq.fifo[31,3] DISCRETE */)  = (data->modelData->integerVarsData[92]/* dq.fifo[31,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[91]/* dq.fifo[31,2] DISCRETE */)  = (data->modelData->integerVarsData[91]/* dq.fifo[31,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[90]/* dq.fifo[31,1] DISCRETE */)  = (data->modelData->integerVarsData[90]/* dq.fifo[31,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[89]/* dq.fifo[30,3] DISCRETE */)  = (data->modelData->integerVarsData[89]/* dq.fifo[30,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[88]/* dq.fifo[30,2] DISCRETE */)  = (data->modelData->integerVarsData[88]/* dq.fifo[30,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[87]/* dq.fifo[30,1] DISCRETE */)  = (data->modelData->integerVarsData[87]/* dq.fifo[30,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[86]/* dq.fifo[29,3] DISCRETE */)  = (data->modelData->integerVarsData[86]/* dq.fifo[29,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[85]/* dq.fifo[29,2] DISCRETE */)  = (data->modelData->integerVarsData[85]/* dq.fifo[29,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[84]/* dq.fifo[29,1] DISCRETE */)  = (data->modelData->integerVarsData[84]/* dq.fifo[29,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[83]/* dq.fifo[28,3] DISCRETE */)  = (data->modelData->integerVarsData[83]/* dq.fifo[28,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[82]/* dq.fifo[28,2] DISCRETE */)  = (data->modelData->integerVarsData[82]/* dq.fifo[28,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[81]/* dq.fifo[28,1] DISCRETE */)  = (data->modelData->integerVarsData[81]/* dq.fifo[28,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[80]/* dq.fifo[27,3] DISCRETE */)  = (data->modelData->integerVarsData[80]/* dq.fifo[27,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[79]/* dq.fifo[27,2] DISCRETE */)  = (data->modelData->integerVarsData[79]/* dq.fifo[27,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[78]/* dq.fifo[27,1] DISCRETE */)  = (data->modelData->integerVarsData[78]/* dq.fifo[27,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[77]/* dq.fifo[26,3] DISCRETE */)  = (data->modelData->integerVarsData[77]/* dq.fifo[26,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[76]/* dq.fifo[26,2] DISCRETE */)  = (data->modelData->integerVarsData[76]/* dq.fifo[26,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[75]/* dq.fifo[26,1] DISCRETE */)  = (data->modelData->integerVarsData[75]/* dq.fifo[26,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[74]/* dq.fifo[25,3] DISCRETE */)  = (data->modelData->integerVarsData[74]/* dq.fifo[25,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[73]/* dq.fifo[25,2] DISCRETE */)  = (data->modelData->integerVarsData[73]/* dq.fifo[25,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[72]/* dq.fifo[25,1] DISCRETE */)  = (data->modelData->integerVarsData[72]/* dq.fifo[25,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[71]/* dq.fifo[24,3] DISCRETE */)  = (data->modelData->integerVarsData[71]/* dq.fifo[24,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[70]/* dq.fifo[24,2] DISCRETE */)  = (data->modelData->integerVarsData[70]/* dq.fifo[24,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[69]/* dq.fifo[24,1] DISCRETE */)  = (data->modelData->integerVarsData[69]/* dq.fifo[24,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[68]/* dq.fifo[23,3] DISCRETE */)  = (data->modelData->integerVarsData[68]/* dq.fifo[23,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[67]/* dq.fifo[23,2] DISCRETE */)  = (data->modelData->integerVarsData[67]/* dq.fifo[23,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[66]/* dq.fifo[23,1] DISCRETE */)  = (data->modelData->integerVarsData[66]/* dq.fifo[23,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[65]/* dq.fifo[22,3] DISCRETE */)  = (data->modelData->integerVarsData[65]/* dq.fifo[22,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[64]/* dq.fifo[22,2] DISCRETE */)  = (data->modelData->integerVarsData[64]/* dq.fifo[22,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[63]/* dq.fifo[22,1] DISCRETE */)  = (data->modelData->integerVarsData[63]/* dq.fifo[22,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[62]/* dq.fifo[21,3] DISCRETE */)  = (data->modelData->integerVarsData[62]/* dq.fifo[21,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[61]/* dq.fifo[21,2] DISCRETE */)  = (data->modelData->integerVarsData[61]/* dq.fifo[21,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[60]/* dq.fifo[21,1] DISCRETE */)  = (data->modelData->integerVarsData[60]/* dq.fifo[21,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[59]/* dq.fifo[20,3] DISCRETE */)  = (data->modelData->integerVarsData[59]/* dq.fifo[20,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[58]/* dq.fifo[20,2] DISCRETE */)  = (data->modelData->integerVarsData[58]/* dq.fifo[20,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[57]/* dq.fifo[20,1] DISCRETE */)  = (data->modelData->integerVarsData[57]/* dq.fifo[20,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[56]/* dq.fifo[19,3] DISCRETE */)  = (data->modelData->integerVarsData[56]/* dq.fifo[19,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[55]/* dq.fifo[19,2] DISCRETE */)  = (data->modelData->integerVarsData[55]/* dq.fifo[19,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[54]/* dq.fifo[19,1] DISCRETE */)  = (data->modelData->integerVarsData[54]/* dq.fifo[19,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[53]/* dq.fifo[18,3] DISCRETE */)  = (data->modelData->integerVarsData[53]/* dq.fifo[18,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[52]/* dq.fifo[18,2] DISCRETE */)  = (data->modelData->integerVarsData[52]/* dq.fifo[18,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[51]/* dq.fifo[18,1] DISCRETE */)  = (data->modelData->integerVarsData[51]/* dq.fifo[18,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[50]/* dq.fifo[17,3] DISCRETE */)  = (data->modelData->integerVarsData[50]/* dq.fifo[17,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[49]/* dq.fifo[17,2] DISCRETE */)  = (data->modelData->integerVarsData[49]/* dq.fifo[17,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[48]/* dq.fifo[17,1] DISCRETE */)  = (data->modelData->integerVarsData[48]/* dq.fifo[17,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[47]/* dq.fifo[16,3] DISCRETE */)  = (data->modelData->integerVarsData[47]/* dq.fifo[16,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[46]/* dq.fifo[16,2] DISCRETE */)  = (data->modelData->integerVarsData[46]/* dq.fifo[16,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[45]/* dq.fifo[16,1] DISCRETE */)  = (data->modelData->integerVarsData[45]/* dq.fifo[16,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[44]/* dq.fifo[15,3] DISCRETE */)  = (data->modelData->integerVarsData[44]/* dq.fifo[15,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[43]/* dq.fifo[15,2] DISCRETE */)  = (data->modelData->integerVarsData[43]/* dq.fifo[15,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[42]/* dq.fifo[15,1] DISCRETE */)  = (data->modelData->integerVarsData[42]/* dq.fifo[15,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[41]/* dq.fifo[14,3] DISCRETE */)  = (data->modelData->integerVarsData[41]/* dq.fifo[14,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[40]/* dq.fifo[14,2] DISCRETE */)  = (data->modelData->integerVarsData[40]/* dq.fifo[14,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[39]/* dq.fifo[14,1] DISCRETE */)  = (data->modelData->integerVarsData[39]/* dq.fifo[14,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[38]/* dq.fifo[13,3] DISCRETE */)  = (data->modelData->integerVarsData[38]/* dq.fifo[13,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[37]/* dq.fifo[13,2] DISCRETE */)  = (data->modelData->integerVarsData[37]/* dq.fifo[13,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[36]/* dq.fifo[13,1] DISCRETE */)  = (data->modelData->integerVarsData[36]/* dq.fifo[13,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[35]/* dq.fifo[12,3] DISCRETE */)  = (data->modelData->integerVarsData[35]/* dq.fifo[12,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[34]/* dq.fifo[12,2] DISCRETE */)  = (data->modelData->integerVarsData[34]/* dq.fifo[12,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[33]/* dq.fifo[12,1] DISCRETE */)  = (data->modelData->integerVarsData[33]/* dq.fifo[12,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[32]/* dq.fifo[11,3] DISCRETE */)  = (data->modelData->integerVarsData[32]/* dq.fifo[11,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[31]/* dq.fifo[11,2] DISCRETE */)  = (data->modelData->integerVarsData[31]/* dq.fifo[11,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[30]/* dq.fifo[11,1] DISCRETE */)  = (data->modelData->integerVarsData[30]/* dq.fifo[11,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[29]/* dq.fifo[10,3] DISCRETE */)  = (data->modelData->integerVarsData[29]/* dq.fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[28]/* dq.fifo[10,2] DISCRETE */)  = (data->modelData->integerVarsData[28]/* dq.fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[27]/* dq.fifo[10,1] DISCRETE */)  = (data->modelData->integerVarsData[27]/* dq.fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[26]/* dq.fifo[9,3] DISCRETE */)  = (data->modelData->integerVarsData[26]/* dq.fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[25]/* dq.fifo[9,2] DISCRETE */)  = (data->modelData->integerVarsData[25]/* dq.fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[24]/* dq.fifo[9,1] DISCRETE */)  = (data->modelData->integerVarsData[24]/* dq.fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[23]/* dq.fifo[8,3] DISCRETE */)  = (data->modelData->integerVarsData[23]/* dq.fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[22]/* dq.fifo[8,2] DISCRETE */)  = (data->modelData->integerVarsData[22]/* dq.fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[21]/* dq.fifo[8,1] DISCRETE */)  = (data->modelData->integerVarsData[21]/* dq.fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[20]/* dq.fifo[7,3] DISCRETE */)  = (data->modelData->integerVarsData[20]/* dq.fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[19]/* dq.fifo[7,2] DISCRETE */)  = (data->modelData->integerVarsData[19]/* dq.fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[18]/* dq.fifo[7,1] DISCRETE */)  = (data->modelData->integerVarsData[18]/* dq.fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[17]/* dq.fifo[6,3] DISCRETE */)  = (data->modelData->integerVarsData[17]/* dq.fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[16]/* dq.fifo[6,2] DISCRETE */)  = (data->modelData->integerVarsData[16]/* dq.fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[15]/* dq.fifo[6,1] DISCRETE */)  = (data->modelData->integerVarsData[15]/* dq.fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[14]/* dq.fifo[5,3] DISCRETE */)  = (data->modelData->integerVarsData[14]/* dq.fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[13]/* dq.fifo[5,2] DISCRETE */)  = (data->modelData->integerVarsData[13]/* dq.fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[12]/* dq.fifo[5,1] DISCRETE */)  = (data->modelData->integerVarsData[12]/* dq.fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[11]/* dq.fifo[4,3] DISCRETE */)  = (data->modelData->integerVarsData[11]/* dq.fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[10]/* dq.fifo[4,2] DISCRETE */)  = (data->modelData->integerVarsData[10]/* dq.fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[9]/* dq.fifo[4,1] DISCRETE */)  = (data->modelData->integerVarsData[9]/* dq.fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[8]/* dq.fifo[3,3] DISCRETE */)  = (data->modelData->integerVarsData[8]/* dq.fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[7]/* dq.fifo[3,2] DISCRETE */)  = (data->modelData->integerVarsData[7]/* dq.fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[6]/* dq.fifo[3,1] DISCRETE */)  = (data->modelData->integerVarsData[6]/* dq.fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[5]/* dq.fifo[2,3] DISCRETE */)  = (data->modelData->integerVarsData[5]/* dq.fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[4]/* dq.fifo[2,2] DISCRETE */)  = (data->modelData->integerVarsData[4]/* dq.fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[3]/* dq.fifo[2,1] DISCRETE */)  = (data->modelData->integerVarsData[3]/* dq.fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[2]/* dq.fifo[1,3] DISCRETE */)  = (data->modelData->integerVarsData[2]/* dq.fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[1]/* dq.fifo[1,2] DISCRETE */)  = (data->modelData->integerVarsData[1]/* dq.fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[0]/* dq.fifo[1,1] DISCRETE */)  = (data->modelData->integerVarsData[0]/* dq.fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[308]/* dq.outputdata[3] DISCRETE */)  = (data->modelData->integerVarsData[308]/* dq.outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[307]/* dq.outputdata[2] DISCRETE */)  = (data->modelData->integerVarsData[307]/* dq.outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[306]/* dq.outputdata[1] DISCRETE */)  = (data->modelData->integerVarsData[306]/* dq.outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[304]/* dq.newest DISCRETE */)  = (data->modelData->integerVarsData[304]/* dq.newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[305]/* dq.oldest DISCRETE */)  = (data->modelData->integerVarsData[305]/* dq.oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[300]/* dq.fifosize DISCRETE */)  = (data->modelData->integerVarsData[300]/* dq.fifosize DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[10]/* dq.spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[10]/* dq.spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[7]/* dq.datavailable DISCRETE */)  = (data->modelData->booleanVarsData[7]/* dq.datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[4]/* $whenCondition5 DISCRETE */)  = (data->modelData->booleanVarsData[4]/* $whenCondition5 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  = (data->modelData->booleanVarsData[3]/* $whenCondition4 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  = (data->modelData->booleanVarsData[2]/* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  = ((data->localData[0]->booleanVars[8]/* dq.readsigint DISCRETE */)  && (data->localData[0]->booleanVars[11]/* dq.writesigint DISCRETE */) );

  tmp2 = GreaterEq((data->simulationInfo->integerVarsPre[300]/* dq.fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  = (((data->localData[0]->booleanVars[8]/* dq.readsigint DISCRETE */)  && (!(data->localData[0]->booleanVars[11]/* dq.writesigint DISCRETE */) )) && tmp2);

  tmp3 = Less((data->simulationInfo->integerVarsPre[300]/* dq.fifosize DISCRETE */) ,((modelica_integer) 100));
  (data->localData[0]->booleanVars[4]/* $whenCondition5 DISCRETE */)  = (((!(data->localData[0]->booleanVars[8]/* dq.readsigint DISCRETE */) ) && (data->localData[0]->booleanVars[11]/* dq.writesigint DISCRETE */) ) && tmp3);

  (data->localData[0]->booleanVars[7]/* dq.datavailable DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[10]/* dq.spaceavailable DISCRETE */)  = 1;

  (data->localData[0]->integerVars[300]/* dq.fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[305]/* dq.oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[304]/* dq.newest DISCRETE */)  = ((modelica_integer) 1);

  tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = ((modelica_integer) 3);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp4, tmp6); j += tmp5)
    {
      (&(data->localData[0]->integerVars[306]/* dq.outputdata[1] DISCRETE */) )[j - 1] = ((modelica_integer) 0);
    }
  }

  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = ((modelica_integer) 100);
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp10, tmp12); i += tmp11)
    {
      tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 3);
      if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp7, tmp9); j += tmp8)
        {
          (&(data->localData[0]->integerVars[0]/* dq.fifo[1,1] DISCRETE */) )[(i - 1) * 3 + (j-1)] = ((modelica_integer) 0);
        }
      }
    }
  }
  TRACE_POP
}
extern void System_eqFunction_81(DATA *data, threadData_t *threadData);

extern void System_eqFunction_77(DATA *data, threadData_t *threadData);

extern void System_eqFunction_80(DATA *data, threadData_t *threadData);

extern void System_eqFunction_78(DATA *data, threadData_t *threadData);

extern void System_eqFunction_79(DATA *data, threadData_t *threadData);


/*
equation index: 34
type: ALGORITHM

  dqt.ValueFromServer[3] := $START.dqt.ValueFromServer[3];
  dqt.ValueFromServer[2] := $START.dqt.ValueFromServer[2];
  dqt.ValueFromServer[1] := $START.dqt.ValueFromServer[1];
  dqt.fifox := $START.dqt.fifox;
  dqt.state := $START.dqt.state;
  $whenCondition2 := $START.$whenCondition2;
  $whenCondition2 := false;
  dqt.state := 0;
  dqt.fifox := 0;
  dqt.ValueFromServer := {0, 0, 0};
*/
void System_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  integer_array tmp13;
  integer_array tmp14;
  (data->localData[0]->integerVars[311]/* dqt.ValueFromServer[3] DISCRETE */)  = (data->modelData->integerVarsData[311]/* dqt.ValueFromServer[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[310]/* dqt.ValueFromServer[2] DISCRETE */)  = (data->modelData->integerVarsData[310]/* dqt.ValueFromServer[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[309]/* dqt.ValueFromServer[1] DISCRETE */)  = (data->modelData->integerVarsData[309]/* dqt.ValueFromServer[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[312]/* dqt.fifox DISCRETE */)  = (data->modelData->integerVarsData[312]/* dqt.fifox DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[316]/* dqt.state DISCRETE */)  = (data->modelData->integerVarsData[316]/* dqt.state DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  = (data->modelData->booleanVarsData[1]/* $whenCondition2 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  = 0;

  (data->localData[0]->integerVars[316]/* dqt.state DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[312]/* dqt.fifox DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_integer_array(&tmp13, 3, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp14, ((modelica_integer*)&((&(data->localData[0]->integerVars[309]/* dqt.ValueFromServer[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  integer_array_copy_data(tmp13, tmp14);
  TRACE_POP
}

/*
equation index: 35
type: ALGORITHM

  $whenCondition7 := $START.$whenCondition7;
  $whenCondition7 := time >= m1.p.HORIZON;
*/
void System_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  modelica_boolean tmp15;
  (data->localData[0]->booleanVars[6]/* $whenCondition7 DISCRETE */)  = (data->modelData->booleanVarsData[6]/* $whenCondition7 DISCRETE */).attribute .start;

  tmp15 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[6]/* m1.p.HORIZON PARAM */) );
  (data->localData[0]->booleanVars[6]/* $whenCondition7 DISCRETE */)  = tmp15;
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
m1.ct.v = 0.0
*/
void System_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[14]/* m1.ct.v DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
$PRE.m1.ct.v = m1.ct.v
*/
void System_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  (data->simulationInfo->realVarsPre[14]/* m1.ct.v DISCRETE */)  = (data->localData[0]->realVars[14]/* m1.ct.v DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
$PRE.m1.ct.y2 = $START.m1.ct.y2
*/
void System_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  (data->simulationInfo->realVarsPre[16]/* m1.ct.y2 DISCRETE */)  = (data->modelData->realVarsData[16]/* m1.ct.y2 DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
m1.ct.y2 = $PRE.m1.ct.y2
*/
void System_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[16]/* m1.ct.y2 DISCRETE */)  = (data->simulationInfo->realVarsPre[16]/* m1.ct.y2 DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
m1.ct.Var = 0.0
*/
void System_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->realVars[4]/* m1.ct.Var DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
$PRE.m1.ct.Var = m1.ct.Var
*/
void System_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  (data->simulationInfo->realVarsPre[4]/* m1.ct.Var DISCRETE */)  = (data->localData[0]->realVars[4]/* m1.ct.Var DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
m1.ct.counter = 0.0
*/
void System_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  (data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
$PRE.m1.ct.counter = m1.ct.counter
*/
void System_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  (data->simulationInfo->integerVarsPre[326]/* m1.ct.counter DISCRETE */)  = (data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
m1.ct.TimeLastDelivery = 0.0
*/
void System_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->realVars[3]/* m1.ct.TimeLastDelivery DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
$PRE.m1.ct.TimeLastDelivery = m1.ct.TimeLastDelivery
*/
void System_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  (data->simulationInfo->realVarsPre[3]/* m1.ct.TimeLastDelivery DISCRETE */)  = (data->localData[0]->realVars[3]/* m1.ct.TimeLastDelivery DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
m1.ct.Y[1] = 0.0
*/
void System_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[5]/* m1.ct.Y[1] DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
$PRE.m1.ct.Y[1] = m1.ct.Y[1]
*/
void System_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  (data->simulationInfo->realVarsPre[5]/* m1.ct.Y[1] DISCRETE */)  = (data->localData[0]->realVars[5]/* m1.ct.Y[1] DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
m1.ct.Y[2] = 0.0
*/
void System_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->realVars[6]/* m1.ct.Y[2] DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
$PRE.m1.ct.Y[2] = m1.ct.Y[2]
*/
void System_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  (data->simulationInfo->realVarsPre[6]/* m1.ct.Y[2] DISCRETE */)  = (data->localData[0]->realVars[6]/* m1.ct.Y[2] DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
m1.ct.Y[3] = 0.0
*/
void System_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  (data->localData[0]->realVars[7]/* m1.ct.Y[3] DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
$PRE.m1.ct.Y[3] = m1.ct.Y[3]
*/
void System_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  (data->simulationInfo->realVarsPre[7]/* m1.ct.Y[3] DISCRETE */)  = (data->localData[0]->realVars[7]/* m1.ct.Y[3] DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
m1.ct.Y2[1] = 0.0
*/
void System_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->realVars[8]/* m1.ct.Y2[1] DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
$PRE.m1.ct.Y2[1] = m1.ct.Y2[1]
*/
void System_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  (data->simulationInfo->realVarsPre[8]/* m1.ct.Y2[1] DISCRETE */)  = (data->localData[0]->realVars[8]/* m1.ct.Y2[1] DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
m1.ct.Y2[2] = 0.0
*/
void System_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->realVars[9]/* m1.ct.Y2[2] DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
$PRE.m1.ct.Y2[2] = m1.ct.Y2[2]
*/
void System_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  (data->simulationInfo->realVarsPre[9]/* m1.ct.Y2[2] DISCRETE */)  = (data->localData[0]->realVars[9]/* m1.ct.Y2[2] DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
m1.ct.Y2[3] = 0.0
*/
void System_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  (data->localData[0]->realVars[10]/* m1.ct.Y2[3] DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
$PRE.m1.ct.Y2[3] = m1.ct.Y2[3]
*/
void System_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  (data->simulationInfo->realVarsPre[10]/* m1.ct.Y2[3] DISCRETE */)  = (data->localData[0]->realVars[10]/* m1.ct.Y2[3] DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
m1.ct.Z[1] = 0.0
*/
void System_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  (data->localData[0]->realVars[11]/* m1.ct.Z[1] DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
$PRE.m1.ct.Z[1] = m1.ct.Z[1]
*/
void System_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  (data->simulationInfo->realVarsPre[11]/* m1.ct.Z[1] DISCRETE */)  = (data->localData[0]->realVars[11]/* m1.ct.Z[1] DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
m1.ct.Z[2] = 0.0
*/
void System_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  (data->localData[0]->realVars[12]/* m1.ct.Z[2] DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
$PRE.m1.ct.Z[2] = m1.ct.Z[2]
*/
void System_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  (data->simulationInfo->realVarsPre[12]/* m1.ct.Z[2] DISCRETE */)  = (data->localData[0]->realVars[12]/* m1.ct.Z[2] DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
m1.ct.Z[3] = 0.0
*/
void System_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->realVars[13]/* m1.ct.Z[3] DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
$PRE.m1.ct.Z[3] = m1.ct.Z[3]
*/
void System_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  (data->simulationInfo->realVarsPre[13]/* m1.ct.Z[3] DISCRETE */)  = (data->localData[0]->realVars[13]/* m1.ct.Z[3] DISCRETE */) ;
  TRACE_POP
}
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
  System_eqFunction_84(data, threadData);
  System_eqFunction_10(data, threadData);
  System_eqFunction_11(data, threadData);
  System_eqFunction_85(data, threadData);
  System_eqFunction_13(data, threadData);
  System_eqFunction_82(data, threadData);
  System_eqFunction_74(data, threadData);
  System_eqFunction_69(data, threadData);
  System_eqFunction_73(data, threadData);
  System_eqFunction_72(data, threadData);
  System_eqFunction_19(data, threadData);
  System_eqFunction_20(data, threadData);
  System_eqFunction_21(data, threadData);
  System_eqFunction_22(data, threadData);
  System_eqFunction_23(data, threadData);
  System_eqFunction_24(data, threadData);
  System_eqFunction_25(data, threadData);
  System_eqFunction_65(data, threadData);
  System_eqFunction_27(data, threadData);
  System_eqFunction_28(data, threadData);
  System_eqFunction_81(data, threadData);
  System_eqFunction_77(data, threadData);
  System_eqFunction_80(data, threadData);
  System_eqFunction_78(data, threadData);
  System_eqFunction_79(data, threadData);
  System_eqFunction_34(data, threadData);
  System_eqFunction_35(data, threadData);
  System_eqFunction_36(data, threadData);
  System_eqFunction_37(data, threadData);
  System_eqFunction_38(data, threadData);
  System_eqFunction_39(data, threadData);
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
  System_eqFunction_50(data, threadData);
  System_eqFunction_51(data, threadData);
  System_eqFunction_52(data, threadData);
  System_eqFunction_53(data, threadData);
  System_eqFunction_54(data, threadData);
  System_eqFunction_55(data, threadData);
  System_eqFunction_56(data, threadData);
  System_eqFunction_57(data, threadData);
  System_eqFunction_58(data, threadData);
  System_eqFunction_59(data, threadData);
  System_eqFunction_60(data, threadData);
  System_eqFunction_61(data, threadData);
  System_eqFunction_62(data, threadData);
  System_eqFunction_63(data, threadData);
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

