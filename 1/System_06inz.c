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
type: ALGORITHM

  mc.x[5] := $START.mc.x[5];
  mc.x[4] := $START.mc.x[4];
  mc.x[3] := $START.mc.x[3];
  mc.x[2] := $START.mc.x[2];
  mc.x[1] := $START.mc.x[1];
  $whenCondition7 := $START.$whenCondition7;
  $whenCondition7 := false;
  for k in 1:5 loop
    mc.x[k] := 1;
  end for;
*/
void System_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  modelica_integer tmp0;
  modelica_integer tmp1;
  modelica_integer tmp2;
  (data->localData[0]->integerVars[9]/* mc.x[5] DISCRETE */)  = (data->modelData->integerVarsData[9]/* mc.x[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[8]/* mc.x[4] DISCRETE */)  = (data->modelData->integerVarsData[8]/* mc.x[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[7]/* mc.x[3] DISCRETE */)  = (data->modelData->integerVarsData[7]/* mc.x[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[6]/* mc.x[2] DISCRETE */)  = (data->modelData->integerVarsData[6]/* mc.x[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[5]/* mc.x[1] DISCRETE */)  = (data->modelData->integerVarsData[5]/* mc.x[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[6]/* $whenCondition7 DISCRETE */)  = (data->modelData->booleanVarsData[6]/* $whenCondition7 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[6]/* $whenCondition7 DISCRETE */)  = 0;

  tmp0 = ((modelica_integer) 1); tmp1 = 1; tmp2 = ((modelica_integer) 5);
  if(!(((tmp1 > 0) && (tmp0 > tmp2)) || ((tmp1 < 0) && (tmp0 < tmp2))))
  {
    modelica_integer k;
    for(k = ((modelica_integer) 1); in_range_integer(k, tmp0, tmp2); k += tmp1)
    {
      (&(data->localData[0]->integerVars[5]/* mc.x[1] DISCRETE */) )[k - 1] = ((modelica_integer) 1);
    }
  }
  TRACE_POP
}
extern void System_eqFunction_135(DATA *data, threadData_t *threadData);

extern void System_eqFunction_117(DATA *data, threadData_t *threadData);

extern void System_eqFunction_111(DATA *data, threadData_t *threadData);

extern void System_eqFunction_129(DATA *data, threadData_t *threadData);

extern void System_eqFunction_123(DATA *data, threadData_t *threadData);


/*
equation index: 7
type: SIMPLE_ASSIGN
$PRE.ct1[5].delivery = $START.ct1[5].delivery
*/
void System_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  (data->simulationInfo->booleanVarsPre[11]/* ct1[5].delivery DISCRETE */)  = (data->modelData->booleanVarsData[11]/* ct1[5].delivery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 8
type: ALGORITHM

  $whenCondition1 := $START.$whenCondition1;
  $whenCondition1 := ct1[5].delivery and not $PRE.ct1[5].delivery;
*/
void System_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->modelData->booleanVarsData[0]/* $whenCondition1 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = ((data->localData[0]->booleanVars[11]/* ct1[5].delivery DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[11]/* ct1[5].delivery DISCRETE */) ));
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
$PRE.ct1[4].delivery = $START.ct1[4].delivery
*/
void System_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  (data->simulationInfo->booleanVarsPre[10]/* ct1[4].delivery DISCRETE */)  = (data->modelData->booleanVarsData[10]/* ct1[4].delivery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 10
type: ALGORITHM

  $whenCondition2 := $START.$whenCondition2;
  $whenCondition2 := ct1[4].delivery and not $PRE.ct1[4].delivery;
*/
void System_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  = (data->modelData->booleanVarsData[1]/* $whenCondition2 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  = ((data->localData[0]->booleanVars[10]/* ct1[4].delivery DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[10]/* ct1[4].delivery DISCRETE */) ));
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
$PRE.ct1[3].delivery = $START.ct1[3].delivery
*/
void System_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  (data->simulationInfo->booleanVarsPre[9]/* ct1[3].delivery DISCRETE */)  = (data->modelData->booleanVarsData[9]/* ct1[3].delivery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 12
type: ALGORITHM

  $whenCondition3 := $START.$whenCondition3;
  $whenCondition3 := ct1[3].delivery and not $PRE.ct1[3].delivery;
*/
void System_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  = (data->modelData->booleanVarsData[2]/* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  = ((data->localData[0]->booleanVars[9]/* ct1[3].delivery DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[9]/* ct1[3].delivery DISCRETE */) ));
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
$PRE.ct1[2].delivery = $START.ct1[2].delivery
*/
void System_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  (data->simulationInfo->booleanVarsPre[8]/* ct1[2].delivery DISCRETE */)  = (data->modelData->booleanVarsData[8]/* ct1[2].delivery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 14
type: ALGORITHM

  $whenCondition4 := $START.$whenCondition4;
  $whenCondition4 := ct1[2].delivery and not $PRE.ct1[2].delivery;
*/
void System_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  = (data->modelData->booleanVarsData[3]/* $whenCondition4 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  = ((data->localData[0]->booleanVars[8]/* ct1[2].delivery DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[8]/* ct1[2].delivery DISCRETE */) ));
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
$PRE.ct1[1].delivery = $START.ct1[1].delivery
*/
void System_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  (data->simulationInfo->booleanVarsPre[7]/* ct1[1].delivery DISCRETE */)  = (data->modelData->booleanVarsData[7]/* ct1[1].delivery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 16
type: ALGORITHM

  $whenCondition5 := $START.$whenCondition5;
  $whenCondition5 := ct1[1].delivery and not $PRE.ct1[1].delivery;
*/
void System_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->booleanVars[4]/* $whenCondition5 DISCRETE */)  = (data->modelData->booleanVarsData[4]/* $whenCondition5 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[4]/* $whenCondition5 DISCRETE */)  = ((data->localData[0]->booleanVars[7]/* ct1[1].delivery DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[7]/* ct1[1].delivery DISCRETE */) ));
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
ct1[5].z = 0.0
*/
void System_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[49]/* ct1[5].z DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
$PRE.ct1[5].z = ct1[5].z
*/
void System_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  (data->simulationInfo->realVarsPre[49]/* ct1[5].z DISCRETE */)  = (data->localData[0]->realVars[49]/* ct1[5].z DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_116(DATA *data, threadData_t *threadData);

extern void System_eqFunction_115(DATA *data, threadData_t *threadData);


/*
equation index: 21
type: SIMPLE_ASSIGN
ct1[5].y = 0.0
*/
void System_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  (data->localData[0]->realVars[39]/* ct1[5].y DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
$PRE.ct1[5].y = ct1[5].y
*/
void System_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  (data->simulationInfo->realVarsPre[39]/* ct1[5].y DISCRETE */)  = (data->localData[0]->realVars[39]/* ct1[5].y DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_114(DATA *data, threadData_t *threadData);

extern void System_eqFunction_113(DATA *data, threadData_t *threadData);


/*
equation index: 25
type: SIMPLE_ASSIGN
ct1[4].z = 0.0
*/
void System_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->realVars[48]/* ct1[4].z DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
$PRE.ct1[4].z = ct1[4].z
*/
void System_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  (data->simulationInfo->realVarsPre[48]/* ct1[4].z DISCRETE */)  = (data->localData[0]->realVars[48]/* ct1[4].z DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_120(DATA *data, threadData_t *threadData);

extern void System_eqFunction_119(DATA *data, threadData_t *threadData);


/*
equation index: 29
type: SIMPLE_ASSIGN
ct1[4].y = 0.0
*/
void System_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  (data->localData[0]->realVars[38]/* ct1[4].y DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
$PRE.ct1[4].y = ct1[4].y
*/
void System_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  (data->simulationInfo->realVarsPre[38]/* ct1[4].y DISCRETE */)  = (data->localData[0]->realVars[38]/* ct1[4].y DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_122(DATA *data, threadData_t *threadData);

extern void System_eqFunction_121(DATA *data, threadData_t *threadData);


/*
equation index: 33
type: SIMPLE_ASSIGN
ct1[3].z = 0.0
*/
void System_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->realVars[47]/* ct1[3].z DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
$PRE.ct1[3].z = ct1[3].z
*/
void System_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  (data->simulationInfo->realVarsPre[47]/* ct1[3].z DISCRETE */)  = (data->localData[0]->realVars[47]/* ct1[3].z DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_140(DATA *data, threadData_t *threadData);

extern void System_eqFunction_139(DATA *data, threadData_t *threadData);


/*
equation index: 37
type: SIMPLE_ASSIGN
ct1[3].y = 0.0
*/
void System_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[37]/* ct1[3].y DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
$PRE.ct1[3].y = ct1[3].y
*/
void System_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  (data->simulationInfo->realVarsPre[37]/* ct1[3].y DISCRETE */)  = (data->localData[0]->realVars[37]/* ct1[3].y DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_138(DATA *data, threadData_t *threadData);

extern void System_eqFunction_137(DATA *data, threadData_t *threadData);


/*
equation index: 41
type: SIMPLE_ASSIGN
ct1[2].z = 0.0
*/
void System_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[46]/* ct1[2].z DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
$PRE.ct1[2].z = ct1[2].z
*/
void System_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  (data->simulationInfo->realVarsPre[46]/* ct1[2].z DISCRETE */)  = (data->localData[0]->realVars[46]/* ct1[2].z DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_134(DATA *data, threadData_t *threadData);

extern void System_eqFunction_133(DATA *data, threadData_t *threadData);


/*
equation index: 45
type: SIMPLE_ASSIGN
ct1[2].y = 0.0
*/
void System_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  (data->localData[0]->realVars[36]/* ct1[2].y DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
$PRE.ct1[2].y = ct1[2].y
*/
void System_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  (data->simulationInfo->realVarsPre[36]/* ct1[2].y DISCRETE */)  = (data->localData[0]->realVars[36]/* ct1[2].y DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_132(DATA *data, threadData_t *threadData);

extern void System_eqFunction_131(DATA *data, threadData_t *threadData);


/*
equation index: 49
type: SIMPLE_ASSIGN
ct1[1].z = 0.0
*/
void System_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  (data->localData[0]->realVars[45]/* ct1[1].z DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
$PRE.ct1[1].z = ct1[1].z
*/
void System_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  (data->simulationInfo->realVarsPre[45]/* ct1[1].z DISCRETE */)  = (data->localData[0]->realVars[45]/* ct1[1].z DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_126(DATA *data, threadData_t *threadData);

extern void System_eqFunction_125(DATA *data, threadData_t *threadData);


/*
equation index: 53
type: SIMPLE_ASSIGN
ct1[1].y = 0.0
*/
void System_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->realVars[35]/* ct1[1].y DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
$PRE.ct1[1].y = ct1[1].y
*/
void System_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  (data->simulationInfo->realVarsPre[35]/* ct1[1].y DISCRETE */)  = (data->localData[0]->realVars[35]/* ct1[1].y DISCRETE */) ;
  TRACE_POP
}
extern void System_eqFunction_128(DATA *data, threadData_t *threadData);

extern void System_eqFunction_127(DATA *data, threadData_t *threadData);


/*
equation index: 57
type: ALGORITHM

  $whenCondition6 := $START.$whenCondition6;
  $whenCondition6 := time > 4000.0;
*/
void System_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  modelica_boolean tmp3;
  (data->localData[0]->booleanVars[5]/* $whenCondition6 DISCRETE */)  = (data->modelData->booleanVarsData[5]/* $whenCondition6 DISCRETE */).attribute .start;

  tmp3 = Greater(data->localData[0]->timeValue,4000.0);
  (data->localData[0]->booleanVars[5]/* $whenCondition6 DISCRETE */)  = tmp3;
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
ct1[5].v = 0.0
*/
void System_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  (data->localData[0]->realVars[34]/* ct1[5].v DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
$PRE.ct1[5].v = ct1[5].v
*/
void System_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  (data->simulationInfo->realVarsPre[34]/* ct1[5].v DISCRETE */)  = (data->localData[0]->realVars[34]/* ct1[5].v DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
$PRE.ct1[5].y2 = $START.ct1[5].y2
*/
void System_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  (data->simulationInfo->realVarsPre[44]/* ct1[5].y2 DISCRETE */)  = (data->modelData->realVarsData[44]/* ct1[5].y2 DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
ct1[5].y2 = $PRE.ct1[5].y2
*/
void System_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  (data->localData[0]->realVars[44]/* ct1[5].y2 DISCRETE */)  = (data->simulationInfo->realVarsPre[44]/* ct1[5].y2 DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
ct1[5].Var = 0.0
*/
void System_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->realVars[29]/* ct1[5].Var DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
$PRE.ct1[5].Var = ct1[5].Var
*/
void System_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  (data->simulationInfo->realVarsPre[29]/* ct1[5].Var DISCRETE */)  = (data->localData[0]->realVars[29]/* ct1[5].Var DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
ct1[5].counter = 0.0
*/
void System_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  (data->localData[0]->integerVars[4]/* ct1[5].counter DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
$PRE.ct1[5].counter = ct1[5].counter
*/
void System_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  (data->simulationInfo->integerVarsPre[4]/* ct1[5].counter DISCRETE */)  = (data->localData[0]->integerVars[4]/* ct1[5].counter DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
ct1[5].TimeLastDelivery = 0.0
*/
void System_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  (data->localData[0]->realVars[24]/* ct1[5].TimeLastDelivery DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
$PRE.ct1[5].TimeLastDelivery = ct1[5].TimeLastDelivery
*/
void System_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  (data->simulationInfo->realVarsPre[24]/* ct1[5].TimeLastDelivery DISCRETE */)  = (data->localData[0]->realVars[24]/* ct1[5].TimeLastDelivery DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
ct1[4].v = 0.0
*/
void System_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  (data->localData[0]->realVars[33]/* ct1[4].v DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
$PRE.ct1[4].v = ct1[4].v
*/
void System_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  (data->simulationInfo->realVarsPre[33]/* ct1[4].v DISCRETE */)  = (data->localData[0]->realVars[33]/* ct1[4].v DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
$PRE.ct1[4].y2 = $START.ct1[4].y2
*/
void System_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  (data->simulationInfo->realVarsPre[43]/* ct1[4].y2 DISCRETE */)  = (data->modelData->realVarsData[43]/* ct1[4].y2 DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
ct1[4].y2 = $PRE.ct1[4].y2
*/
void System_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->realVars[43]/* ct1[4].y2 DISCRETE */)  = (data->simulationInfo->realVarsPre[43]/* ct1[4].y2 DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
ct1[4].Var = 0.0
*/
void System_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  (data->localData[0]->realVars[28]/* ct1[4].Var DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
$PRE.ct1[4].Var = ct1[4].Var
*/
void System_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  (data->simulationInfo->realVarsPre[28]/* ct1[4].Var DISCRETE */)  = (data->localData[0]->realVars[28]/* ct1[4].Var DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
ct1[4].counter = 0.0
*/
void System_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->integerVars[3]/* ct1[4].counter DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
$PRE.ct1[4].counter = ct1[4].counter
*/
void System_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  (data->simulationInfo->integerVarsPre[3]/* ct1[4].counter DISCRETE */)  = (data->localData[0]->integerVars[3]/* ct1[4].counter DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
ct1[4].TimeLastDelivery = 0.0
*/
void System_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  (data->localData[0]->realVars[23]/* ct1[4].TimeLastDelivery DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
$PRE.ct1[4].TimeLastDelivery = ct1[4].TimeLastDelivery
*/
void System_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  (data->simulationInfo->realVarsPre[23]/* ct1[4].TimeLastDelivery DISCRETE */)  = (data->localData[0]->realVars[23]/* ct1[4].TimeLastDelivery DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
ct1[3].v = 0.0
*/
void System_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->realVars[32]/* ct1[3].v DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
$PRE.ct1[3].v = ct1[3].v
*/
void System_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  (data->simulationInfo->realVarsPre[32]/* ct1[3].v DISCRETE */)  = (data->localData[0]->realVars[32]/* ct1[3].v DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
$PRE.ct1[3].y2 = $START.ct1[3].y2
*/
void System_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  (data->simulationInfo->realVarsPre[42]/* ct1[3].y2 DISCRETE */)  = (data->modelData->realVarsData[42]/* ct1[3].y2 DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
ct1[3].y2 = $PRE.ct1[3].y2
*/
void System_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  (data->localData[0]->realVars[42]/* ct1[3].y2 DISCRETE */)  = (data->simulationInfo->realVarsPre[42]/* ct1[3].y2 DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
ct1[3].Var = 0.0
*/
void System_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  (data->localData[0]->realVars[27]/* ct1[3].Var DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
$PRE.ct1[3].Var = ct1[3].Var
*/
void System_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  (data->simulationInfo->realVarsPre[27]/* ct1[3].Var DISCRETE */)  = (data->localData[0]->realVars[27]/* ct1[3].Var DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
ct1[3].counter = 0.0
*/
void System_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  (data->localData[0]->integerVars[2]/* ct1[3].counter DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
$PRE.ct1[3].counter = ct1[3].counter
*/
void System_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  (data->simulationInfo->integerVarsPre[2]/* ct1[3].counter DISCRETE */)  = (data->localData[0]->integerVars[2]/* ct1[3].counter DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
ct1[3].TimeLastDelivery = 0.0
*/
void System_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  (data->localData[0]->realVars[22]/* ct1[3].TimeLastDelivery DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
$PRE.ct1[3].TimeLastDelivery = ct1[3].TimeLastDelivery
*/
void System_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  (data->simulationInfo->realVarsPre[22]/* ct1[3].TimeLastDelivery DISCRETE */)  = (data->localData[0]->realVars[22]/* ct1[3].TimeLastDelivery DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
ct1[2].v = 0.0
*/
void System_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  (data->localData[0]->realVars[31]/* ct1[2].v DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
$PRE.ct1[2].v = ct1[2].v
*/
void System_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  (data->simulationInfo->realVarsPre[31]/* ct1[2].v DISCRETE */)  = (data->localData[0]->realVars[31]/* ct1[2].v DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
$PRE.ct1[2].y2 = $START.ct1[2].y2
*/
void System_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  (data->simulationInfo->realVarsPre[41]/* ct1[2].y2 DISCRETE */)  = (data->modelData->realVarsData[41]/* ct1[2].y2 DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
ct1[2].y2 = $PRE.ct1[2].y2
*/
void System_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  (data->localData[0]->realVars[41]/* ct1[2].y2 DISCRETE */)  = (data->simulationInfo->realVarsPre[41]/* ct1[2].y2 DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
ct1[2].Var = 0.0
*/
void System_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  (data->localData[0]->realVars[26]/* ct1[2].Var DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
$PRE.ct1[2].Var = ct1[2].Var
*/
void System_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  (data->simulationInfo->realVarsPre[26]/* ct1[2].Var DISCRETE */)  = (data->localData[0]->realVars[26]/* ct1[2].Var DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
ct1[2].counter = 0.0
*/
void System_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  (data->localData[0]->integerVars[1]/* ct1[2].counter DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
$PRE.ct1[2].counter = ct1[2].counter
*/
void System_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  (data->simulationInfo->integerVarsPre[1]/* ct1[2].counter DISCRETE */)  = (data->localData[0]->integerVars[1]/* ct1[2].counter DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 96
type: SIMPLE_ASSIGN
ct1[2].TimeLastDelivery = 0.0
*/
void System_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->realVars[21]/* ct1[2].TimeLastDelivery DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
$PRE.ct1[2].TimeLastDelivery = ct1[2].TimeLastDelivery
*/
void System_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  (data->simulationInfo->realVarsPre[21]/* ct1[2].TimeLastDelivery DISCRETE */)  = (data->localData[0]->realVars[21]/* ct1[2].TimeLastDelivery DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 98
type: SIMPLE_ASSIGN
ct1[1].v = 0.0
*/
void System_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  (data->localData[0]->realVars[30]/* ct1[1].v DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 99
type: SIMPLE_ASSIGN
$PRE.ct1[1].v = ct1[1].v
*/
void System_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  (data->simulationInfo->realVarsPre[30]/* ct1[1].v DISCRETE */)  = (data->localData[0]->realVars[30]/* ct1[1].v DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 100
type: SIMPLE_ASSIGN
$PRE.ct1[1].y2 = $START.ct1[1].y2
*/
void System_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  (data->simulationInfo->realVarsPre[40]/* ct1[1].y2 DISCRETE */)  = (data->modelData->realVarsData[40]/* ct1[1].y2 DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 101
type: SIMPLE_ASSIGN
ct1[1].y2 = $PRE.ct1[1].y2
*/
void System_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[40]/* ct1[1].y2 DISCRETE */)  = (data->simulationInfo->realVarsPre[40]/* ct1[1].y2 DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 102
type: SIMPLE_ASSIGN
ct1[1].Var = 0.0
*/
void System_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  (data->localData[0]->realVars[25]/* ct1[1].Var DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 103
type: SIMPLE_ASSIGN
$PRE.ct1[1].Var = ct1[1].Var
*/
void System_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  (data->simulationInfo->realVarsPre[25]/* ct1[1].Var DISCRETE */)  = (data->localData[0]->realVars[25]/* ct1[1].Var DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
ct1[1].counter = 0.0
*/
void System_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->integerVars[0]/* ct1[1].counter DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
$PRE.ct1[1].counter = ct1[1].counter
*/
void System_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  (data->simulationInfo->integerVarsPre[0]/* ct1[1].counter DISCRETE */)  = (data->localData[0]->integerVars[0]/* ct1[1].counter DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
ct1[1].TimeLastDelivery = 0.0
*/
void System_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  (data->localData[0]->realVars[20]/* ct1[1].TimeLastDelivery DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
$PRE.ct1[1].TimeLastDelivery = ct1[1].TimeLastDelivery
*/
void System_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  (data->simulationInfo->realVarsPre[20]/* ct1[1].TimeLastDelivery DISCRETE */)  = (data->localData[0]->realVars[20]/* ct1[1].TimeLastDelivery DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
$PRE.m1.endCondition = $START.m1.endCondition
*/
void System_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  (data->simulationInfo->booleanVarsPre[12]/* m1.endCondition DISCRETE */)  = (data->modelData->booleanVarsData[12]/* m1.endCondition DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
m1.endCondition = $PRE.m1.endCondition
*/
void System_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  (data->localData[0]->booleanVars[12]/* m1.endCondition DISCRETE */)  = (data->simulationInfo->booleanVarsPre[12]/* m1.endCondition DISCRETE */) ;
  TRACE_POP
}
OMC_DISABLE_OPT
void System_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  System_eqFunction_1(data, threadData);
  System_eqFunction_135(data, threadData);
  System_eqFunction_117(data, threadData);
  System_eqFunction_111(data, threadData);
  System_eqFunction_129(data, threadData);
  System_eqFunction_123(data, threadData);
  System_eqFunction_7(data, threadData);
  System_eqFunction_8(data, threadData);
  System_eqFunction_9(data, threadData);
  System_eqFunction_10(data, threadData);
  System_eqFunction_11(data, threadData);
  System_eqFunction_12(data, threadData);
  System_eqFunction_13(data, threadData);
  System_eqFunction_14(data, threadData);
  System_eqFunction_15(data, threadData);
  System_eqFunction_16(data, threadData);
  System_eqFunction_17(data, threadData);
  System_eqFunction_18(data, threadData);
  System_eqFunction_116(data, threadData);
  System_eqFunction_115(data, threadData);
  System_eqFunction_21(data, threadData);
  System_eqFunction_22(data, threadData);
  System_eqFunction_114(data, threadData);
  System_eqFunction_113(data, threadData);
  System_eqFunction_25(data, threadData);
  System_eqFunction_26(data, threadData);
  System_eqFunction_120(data, threadData);
  System_eqFunction_119(data, threadData);
  System_eqFunction_29(data, threadData);
  System_eqFunction_30(data, threadData);
  System_eqFunction_122(data, threadData);
  System_eqFunction_121(data, threadData);
  System_eqFunction_33(data, threadData);
  System_eqFunction_34(data, threadData);
  System_eqFunction_140(data, threadData);
  System_eqFunction_139(data, threadData);
  System_eqFunction_37(data, threadData);
  System_eqFunction_38(data, threadData);
  System_eqFunction_138(data, threadData);
  System_eqFunction_137(data, threadData);
  System_eqFunction_41(data, threadData);
  System_eqFunction_42(data, threadData);
  System_eqFunction_134(data, threadData);
  System_eqFunction_133(data, threadData);
  System_eqFunction_45(data, threadData);
  System_eqFunction_46(data, threadData);
  System_eqFunction_132(data, threadData);
  System_eqFunction_131(data, threadData);
  System_eqFunction_49(data, threadData);
  System_eqFunction_50(data, threadData);
  System_eqFunction_126(data, threadData);
  System_eqFunction_125(data, threadData);
  System_eqFunction_53(data, threadData);
  System_eqFunction_54(data, threadData);
  System_eqFunction_128(data, threadData);
  System_eqFunction_127(data, threadData);
  System_eqFunction_57(data, threadData);
  System_eqFunction_58(data, threadData);
  System_eqFunction_59(data, threadData);
  System_eqFunction_60(data, threadData);
  System_eqFunction_61(data, threadData);
  System_eqFunction_62(data, threadData);
  System_eqFunction_63(data, threadData);
  System_eqFunction_64(data, threadData);
  System_eqFunction_65(data, threadData);
  System_eqFunction_66(data, threadData);
  System_eqFunction_67(data, threadData);
  System_eqFunction_68(data, threadData);
  System_eqFunction_69(data, threadData);
  System_eqFunction_70(data, threadData);
  System_eqFunction_71(data, threadData);
  System_eqFunction_72(data, threadData);
  System_eqFunction_73(data, threadData);
  System_eqFunction_74(data, threadData);
  System_eqFunction_75(data, threadData);
  System_eqFunction_76(data, threadData);
  System_eqFunction_77(data, threadData);
  System_eqFunction_78(data, threadData);
  System_eqFunction_79(data, threadData);
  System_eqFunction_80(data, threadData);
  System_eqFunction_81(data, threadData);
  System_eqFunction_82(data, threadData);
  System_eqFunction_83(data, threadData);
  System_eqFunction_84(data, threadData);
  System_eqFunction_85(data, threadData);
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

