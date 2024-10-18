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
equation index: 110
type: ALGORITHM

  mc.x[5] := pre(mc.x[5]);
  mc.x[4] := pre(mc.x[4]);
  mc.x[3] := pre(mc.x[3]);
  mc.x[2] := pre(mc.x[2]);
  mc.x[1] := pre(mc.x[1]);
  $whenCondition7 := pre($whenCondition7);
  $whenCondition7 := sample(1, 0.0, (*Real*)(mc.p.T));
  when false then
    for k in 1:5 loop
      mc.x[k] := 1;
    end for;
  elsewhen $whenCondition7 then
    for k in 1:5 loop
      mc.x[k] := Next(k, pre(mc.x[k]));
    end for;
  end when;
*/
void System_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  modelica_integer tmp0;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  (data->localData[0]->integerVars[9]/* mc.x[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[9]/* mc.x[5] DISCRETE */) ;

  (data->localData[0]->integerVars[8]/* mc.x[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[8]/* mc.x[4] DISCRETE */) ;

  (data->localData[0]->integerVars[7]/* mc.x[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[7]/* mc.x[3] DISCRETE */) ;

  (data->localData[0]->integerVars[6]/* mc.x[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[6]/* mc.x[2] DISCRETE */) ;

  (data->localData[0]->integerVars[5]/* mc.x[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[5]/* mc.x[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[6]/* $whenCondition7 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[6]/* $whenCondition7 DISCRETE */) ;

  (data->localData[0]->booleanVars[6]/* $whenCondition7 DISCRETE */)  = data->simulationInfo->samples[0];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      tmp0 = ((modelica_integer) 1); tmp1 = 1; tmp2 = ((modelica_integer) 5);
      if(!(((tmp1 > 0) && (tmp0 > tmp2)) || ((tmp1 < 0) && (tmp0 < tmp2))))
      {
        modelica_integer k;
        for(k = ((modelica_integer) 1); in_range_integer(k, tmp0, tmp2); k += tmp1)
        {
          (&(data->localData[0]->integerVars[5]/* mc.x[1] DISCRETE */) )[k - 1] = ((modelica_integer) 1);
        }
      }
    }
    else if(((data->localData[0]->booleanVars[6]/* $whenCondition7 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[6]/* $whenCondition7 DISCRETE */)  /* edge */))
    {
      tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 5);
      if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
      {
        modelica_integer k;
        for(k = ((modelica_integer) 1); in_range_integer(k, tmp3, tmp5); k += tmp4)
        {
          (&(data->localData[0]->integerVars[5]/* mc.x[1] DISCRETE */) )[k - 1] = omc_Next(threadData, k, (&(data->simulationInfo->integerVarsPre[5]/* mc.x[1] DISCRETE */) )[k - 1]);
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 111
type: SIMPLE_ASSIGN
ct1[5].delivery = mc.x[5] == Prm.N
*/
void System_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->booleanVars[11]/* ct1[5].delivery DISCRETE */)  = ((data->localData[0]->integerVars[9]/* mc.x[5] DISCRETE */)  == (data->simulationInfo->integerParameter[2]/* Prm.N PARAM */) );
  TRACE_POP
}
/*
equation index: 112
type: ALGORITHM

  ct1[5].TimeLastDelivery := pre(ct1[5].TimeLastDelivery);
  ct1[5].counter := pre(ct1[5].counter);
  ct1[5].z := pre(ct1[5].z);
  ct1[5].Var := pre(ct1[5].Var);
  ct1[5].y2 := pre(ct1[5].y2);
  ct1[5].y := pre(ct1[5].y);
  ct1[5].v := pre(ct1[5].v);
  $whenCondition1 := pre($whenCondition1);
  $whenCondition1 := ct1[5].delivery and not pre(ct1[5].delivery);
  when $whenCondition1 then
    ct1[5].v := time - ct1[5].TimeLastDelivery;
    ct1[5].y := ct1[5].y * (*Real*)(ct1[5].counter) / (*Real*)(ct1[5].counter + 1) + ct1[5].v / (*Real*)(ct1[5].counter + 1);
    ct1[5].y2 := ct1[5].y2 * (*Real*)(ct1[5].counter) / (*Real*)(ct1[5].counter + 1) + ct1[5].v ^ 2.0 / (*Real*)(ct1[5].counter + 1);
    ct1[5].Var := ct1[5].y2 - ct1[5].y ^ 2.0;
    ct1[5].z := sqrt(ct1[5].Var);
    ct1[5].counter := ct1[5].counter + 1;
    ct1[5].TimeLastDelivery := time;
  end when;
*/
void System_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  (data->localData[0]->realVars[24]/* ct1[5].TimeLastDelivery DISCRETE */)  = (data->simulationInfo->realVarsPre[24]/* ct1[5].TimeLastDelivery DISCRETE */) ;

  (data->localData[0]->integerVars[4]/* ct1[5].counter DISCRETE */)  = (data->simulationInfo->integerVarsPre[4]/* ct1[5].counter DISCRETE */) ;

  (data->localData[0]->realVars[49]/* ct1[5].z DISCRETE */)  = (data->simulationInfo->realVarsPre[49]/* ct1[5].z DISCRETE */) ;

  (data->localData[0]->realVars[29]/* ct1[5].Var DISCRETE */)  = (data->simulationInfo->realVarsPre[29]/* ct1[5].Var DISCRETE */) ;

  (data->localData[0]->realVars[44]/* ct1[5].y2 DISCRETE */)  = (data->simulationInfo->realVarsPre[44]/* ct1[5].y2 DISCRETE */) ;

  (data->localData[0]->realVars[39]/* ct1[5].y DISCRETE */)  = (data->simulationInfo->realVarsPre[39]/* ct1[5].y DISCRETE */) ;

  (data->localData[0]->realVars[34]/* ct1[5].v DISCRETE */)  = (data->simulationInfo->realVarsPre[34]/* ct1[5].v DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = ((data->localData[0]->booleanVars[11]/* ct1[5].delivery DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[11]/* ct1[5].delivery DISCRETE */) ));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[34]/* ct1[5].v DISCRETE */)  = data->localData[0]->timeValue - (data->localData[0]->realVars[24]/* ct1[5].TimeLastDelivery DISCRETE */) ;

      (data->localData[0]->realVars[39]/* ct1[5].y DISCRETE */)  = ((data->localData[0]->realVars[39]/* ct1[5].y DISCRETE */) ) * (DIVISION_SIM(((modelica_real)(data->localData[0]->integerVars[4]/* ct1[5].counter DISCRETE */) ),((modelica_real)(data->localData[0]->integerVars[4]/* ct1[5].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[5].counter + 1)",equationIndexes)) + DIVISION_SIM((data->localData[0]->realVars[34]/* ct1[5].v DISCRETE */) ,((modelica_real)(data->localData[0]->integerVars[4]/* ct1[5].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[5].counter + 1)",equationIndexes);

      tmp7 = (data->localData[0]->realVars[34]/* ct1[5].v DISCRETE */) ;
      (data->localData[0]->realVars[44]/* ct1[5].y2 DISCRETE */)  = ((data->localData[0]->realVars[44]/* ct1[5].y2 DISCRETE */) ) * (DIVISION_SIM(((modelica_real)(data->localData[0]->integerVars[4]/* ct1[5].counter DISCRETE */) ),((modelica_real)(data->localData[0]->integerVars[4]/* ct1[5].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[5].counter + 1)",equationIndexes)) + DIVISION_SIM((tmp7 * tmp7),((modelica_real)(data->localData[0]->integerVars[4]/* ct1[5].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[5].counter + 1)",equationIndexes);

      tmp8 = (data->localData[0]->realVars[39]/* ct1[5].y DISCRETE */) ;
      (data->localData[0]->realVars[29]/* ct1[5].Var DISCRETE */)  = (data->localData[0]->realVars[44]/* ct1[5].y2 DISCRETE */)  - ((tmp8 * tmp8));

      tmp9 = (data->localData[0]->realVars[29]/* ct1[5].Var DISCRETE */) ;
      if(!(tmp9 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(ct1[5].Var) was %g should be >= 0", tmp9);
        }
      }
      (data->localData[0]->realVars[49]/* ct1[5].z DISCRETE */)  = sqrt(tmp9);

      (data->localData[0]->integerVars[4]/* ct1[5].counter DISCRETE */)  = (data->localData[0]->integerVars[4]/* ct1[5].counter DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->realVars[24]/* ct1[5].TimeLastDelivery DISCRETE */)  = data->localData[0]->timeValue;
    }
  }
  TRACE_POP
}
/*
equation index: 113
type: SIMPLE_ASSIGN
m1.Avgcost[5] = 500.0 * ct1[5].y
*/
void System_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  (data->localData[0]->realVars[4]/* m1.Avgcost[5] variable */)  = (500.0) * ((data->localData[0]->realVars[39]/* ct1[5].y DISCRETE */) );
  TRACE_POP
}
/*
equation index: 114
type: SIMPLE_ASSIGN
m1.y[5] = ct1[5].y
*/
void System_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->realVars[14]/* m1.y[5] variable */)  = (data->localData[0]->realVars[39]/* ct1[5].y DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 115
type: SIMPLE_ASSIGN
m1.StdDevCost[5] = 500.0 * ct1[5].z
*/
void System_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  (data->localData[0]->realVars[9]/* m1.StdDevCost[5] variable */)  = (500.0) * ((data->localData[0]->realVars[49]/* ct1[5].z DISCRETE */) );
  TRACE_POP
}
/*
equation index: 116
type: SIMPLE_ASSIGN
m1.z[5] = ct1[5].z
*/
void System_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  (data->localData[0]->realVars[19]/* m1.z[5] variable */)  = (data->localData[0]->realVars[49]/* ct1[5].z DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 117
type: SIMPLE_ASSIGN
ct1[4].delivery = mc.x[4] == Prm.N
*/
void System_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->booleanVars[10]/* ct1[4].delivery DISCRETE */)  = ((data->localData[0]->integerVars[8]/* mc.x[4] DISCRETE */)  == (data->simulationInfo->integerParameter[2]/* Prm.N PARAM */) );
  TRACE_POP
}
/*
equation index: 118
type: ALGORITHM

  ct1[4].TimeLastDelivery := pre(ct1[4].TimeLastDelivery);
  ct1[4].counter := pre(ct1[4].counter);
  ct1[4].z := pre(ct1[4].z);
  ct1[4].Var := pre(ct1[4].Var);
  ct1[4].y2 := pre(ct1[4].y2);
  ct1[4].y := pre(ct1[4].y);
  ct1[4].v := pre(ct1[4].v);
  $whenCondition2 := pre($whenCondition2);
  $whenCondition2 := ct1[4].delivery and not pre(ct1[4].delivery);
  when $whenCondition2 then
    ct1[4].v := time - ct1[4].TimeLastDelivery;
    ct1[4].y := ct1[4].y * (*Real*)(ct1[4].counter) / (*Real*)(ct1[4].counter + 1) + ct1[4].v / (*Real*)(ct1[4].counter + 1);
    ct1[4].y2 := ct1[4].y2 * (*Real*)(ct1[4].counter) / (*Real*)(ct1[4].counter + 1) + ct1[4].v ^ 2.0 / (*Real*)(ct1[4].counter + 1);
    ct1[4].Var := ct1[4].y2 - ct1[4].y ^ 2.0;
    ct1[4].z := sqrt(ct1[4].Var);
    ct1[4].counter := ct1[4].counter + 1;
    ct1[4].TimeLastDelivery := time;
  end when;
*/
void System_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  (data->localData[0]->realVars[23]/* ct1[4].TimeLastDelivery DISCRETE */)  = (data->simulationInfo->realVarsPre[23]/* ct1[4].TimeLastDelivery DISCRETE */) ;

  (data->localData[0]->integerVars[3]/* ct1[4].counter DISCRETE */)  = (data->simulationInfo->integerVarsPre[3]/* ct1[4].counter DISCRETE */) ;

  (data->localData[0]->realVars[48]/* ct1[4].z DISCRETE */)  = (data->simulationInfo->realVarsPre[48]/* ct1[4].z DISCRETE */) ;

  (data->localData[0]->realVars[28]/* ct1[4].Var DISCRETE */)  = (data->simulationInfo->realVarsPre[28]/* ct1[4].Var DISCRETE */) ;

  (data->localData[0]->realVars[43]/* ct1[4].y2 DISCRETE */)  = (data->simulationInfo->realVarsPre[43]/* ct1[4].y2 DISCRETE */) ;

  (data->localData[0]->realVars[38]/* ct1[4].y DISCRETE */)  = (data->simulationInfo->realVarsPre[38]/* ct1[4].y DISCRETE */) ;

  (data->localData[0]->realVars[33]/* ct1[4].v DISCRETE */)  = (data->simulationInfo->realVarsPre[33]/* ct1[4].v DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[1]/* $whenCondition2 DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  = ((data->localData[0]->booleanVars[10]/* ct1[4].delivery DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[10]/* ct1[4].delivery DISCRETE */) ));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[1]/* $whenCondition2 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[33]/* ct1[4].v DISCRETE */)  = data->localData[0]->timeValue - (data->localData[0]->realVars[23]/* ct1[4].TimeLastDelivery DISCRETE */) ;

      (data->localData[0]->realVars[38]/* ct1[4].y DISCRETE */)  = ((data->localData[0]->realVars[38]/* ct1[4].y DISCRETE */) ) * (DIVISION_SIM(((modelica_real)(data->localData[0]->integerVars[3]/* ct1[4].counter DISCRETE */) ),((modelica_real)(data->localData[0]->integerVars[3]/* ct1[4].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[4].counter + 1)",equationIndexes)) + DIVISION_SIM((data->localData[0]->realVars[33]/* ct1[4].v DISCRETE */) ,((modelica_real)(data->localData[0]->integerVars[3]/* ct1[4].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[4].counter + 1)",equationIndexes);

      tmp11 = (data->localData[0]->realVars[33]/* ct1[4].v DISCRETE */) ;
      (data->localData[0]->realVars[43]/* ct1[4].y2 DISCRETE */)  = ((data->localData[0]->realVars[43]/* ct1[4].y2 DISCRETE */) ) * (DIVISION_SIM(((modelica_real)(data->localData[0]->integerVars[3]/* ct1[4].counter DISCRETE */) ),((modelica_real)(data->localData[0]->integerVars[3]/* ct1[4].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[4].counter + 1)",equationIndexes)) + DIVISION_SIM((tmp11 * tmp11),((modelica_real)(data->localData[0]->integerVars[3]/* ct1[4].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[4].counter + 1)",equationIndexes);

      tmp12 = (data->localData[0]->realVars[38]/* ct1[4].y DISCRETE */) ;
      (data->localData[0]->realVars[28]/* ct1[4].Var DISCRETE */)  = (data->localData[0]->realVars[43]/* ct1[4].y2 DISCRETE */)  - ((tmp12 * tmp12));

      tmp13 = (data->localData[0]->realVars[28]/* ct1[4].Var DISCRETE */) ;
      if(!(tmp13 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(ct1[4].Var) was %g should be >= 0", tmp13);
        }
      }
      (data->localData[0]->realVars[48]/* ct1[4].z DISCRETE */)  = sqrt(tmp13);

      (data->localData[0]->integerVars[3]/* ct1[4].counter DISCRETE */)  = (data->localData[0]->integerVars[3]/* ct1[4].counter DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->realVars[23]/* ct1[4].TimeLastDelivery DISCRETE */)  = data->localData[0]->timeValue;
    }
  }
  TRACE_POP
}
/*
equation index: 119
type: SIMPLE_ASSIGN
m1.StdDevCost[4] = 625.0 * ct1[4].z
*/
void System_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  (data->localData[0]->realVars[8]/* m1.StdDevCost[4] variable */)  = (625.0) * ((data->localData[0]->realVars[48]/* ct1[4].z DISCRETE */) );
  TRACE_POP
}
/*
equation index: 120
type: SIMPLE_ASSIGN
m1.z[4] = ct1[4].z
*/
void System_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  (data->localData[0]->realVars[18]/* m1.z[4] variable */)  = (data->localData[0]->realVars[48]/* ct1[4].z DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 121
type: SIMPLE_ASSIGN
m1.Avgcost[4] = 625.0 * ct1[4].y
*/
void System_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  (data->localData[0]->realVars[3]/* m1.Avgcost[4] variable */)  = (625.0) * ((data->localData[0]->realVars[38]/* ct1[4].y DISCRETE */) );
  TRACE_POP
}
/*
equation index: 122
type: SIMPLE_ASSIGN
m1.y[4] = ct1[4].y
*/
void System_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  (data->localData[0]->realVars[13]/* m1.y[4] variable */)  = (data->localData[0]->realVars[38]/* ct1[4].y DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 123
type: SIMPLE_ASSIGN
ct1[1].delivery = mc.x[1] == Prm.N
*/
void System_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  (data->localData[0]->booleanVars[7]/* ct1[1].delivery DISCRETE */)  = ((data->localData[0]->integerVars[5]/* mc.x[1] DISCRETE */)  == (data->simulationInfo->integerParameter[2]/* Prm.N PARAM */) );
  TRACE_POP
}
/*
equation index: 124
type: ALGORITHM

  ct1[1].TimeLastDelivery := pre(ct1[1].TimeLastDelivery);
  ct1[1].counter := pre(ct1[1].counter);
  ct1[1].z := pre(ct1[1].z);
  ct1[1].Var := pre(ct1[1].Var);
  ct1[1].y2 := pre(ct1[1].y2);
  ct1[1].y := pre(ct1[1].y);
  ct1[1].v := pre(ct1[1].v);
  $whenCondition5 := pre($whenCondition5);
  $whenCondition5 := ct1[1].delivery and not pre(ct1[1].delivery);
  when $whenCondition5 then
    ct1[1].v := time - ct1[1].TimeLastDelivery;
    ct1[1].y := ct1[1].y * (*Real*)(ct1[1].counter) / (*Real*)(ct1[1].counter + 1) + ct1[1].v / (*Real*)(ct1[1].counter + 1);
    ct1[1].y2 := ct1[1].y2 * (*Real*)(ct1[1].counter) / (*Real*)(ct1[1].counter + 1) + ct1[1].v ^ 2.0 / (*Real*)(ct1[1].counter + 1);
    ct1[1].Var := ct1[1].y2 - ct1[1].y ^ 2.0;
    ct1[1].z := sqrt(ct1[1].Var);
    ct1[1].counter := ct1[1].counter + 1;
    ct1[1].TimeLastDelivery := time;
  end when;
*/
void System_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  (data->localData[0]->realVars[20]/* ct1[1].TimeLastDelivery DISCRETE */)  = (data->simulationInfo->realVarsPre[20]/* ct1[1].TimeLastDelivery DISCRETE */) ;

  (data->localData[0]->integerVars[0]/* ct1[1].counter DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* ct1[1].counter DISCRETE */) ;

  (data->localData[0]->realVars[45]/* ct1[1].z DISCRETE */)  = (data->simulationInfo->realVarsPre[45]/* ct1[1].z DISCRETE */) ;

  (data->localData[0]->realVars[25]/* ct1[1].Var DISCRETE */)  = (data->simulationInfo->realVarsPre[25]/* ct1[1].Var DISCRETE */) ;

  (data->localData[0]->realVars[40]/* ct1[1].y2 DISCRETE */)  = (data->simulationInfo->realVarsPre[40]/* ct1[1].y2 DISCRETE */) ;

  (data->localData[0]->realVars[35]/* ct1[1].y DISCRETE */)  = (data->simulationInfo->realVarsPre[35]/* ct1[1].y DISCRETE */) ;

  (data->localData[0]->realVars[30]/* ct1[1].v DISCRETE */)  = (data->simulationInfo->realVarsPre[30]/* ct1[1].v DISCRETE */) ;

  (data->localData[0]->booleanVars[4]/* $whenCondition5 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[4]/* $whenCondition5 DISCRETE */) ;

  (data->localData[0]->booleanVars[4]/* $whenCondition5 DISCRETE */)  = ((data->localData[0]->booleanVars[7]/* ct1[1].delivery DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[7]/* ct1[1].delivery DISCRETE */) ));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[4]/* $whenCondition5 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[4]/* $whenCondition5 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[30]/* ct1[1].v DISCRETE */)  = data->localData[0]->timeValue - (data->localData[0]->realVars[20]/* ct1[1].TimeLastDelivery DISCRETE */) ;

      (data->localData[0]->realVars[35]/* ct1[1].y DISCRETE */)  = ((data->localData[0]->realVars[35]/* ct1[1].y DISCRETE */) ) * (DIVISION_SIM(((modelica_real)(data->localData[0]->integerVars[0]/* ct1[1].counter DISCRETE */) ),((modelica_real)(data->localData[0]->integerVars[0]/* ct1[1].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[1].counter + 1)",equationIndexes)) + DIVISION_SIM((data->localData[0]->realVars[30]/* ct1[1].v DISCRETE */) ,((modelica_real)(data->localData[0]->integerVars[0]/* ct1[1].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[1].counter + 1)",equationIndexes);

      tmp15 = (data->localData[0]->realVars[30]/* ct1[1].v DISCRETE */) ;
      (data->localData[0]->realVars[40]/* ct1[1].y2 DISCRETE */)  = ((data->localData[0]->realVars[40]/* ct1[1].y2 DISCRETE */) ) * (DIVISION_SIM(((modelica_real)(data->localData[0]->integerVars[0]/* ct1[1].counter DISCRETE */) ),((modelica_real)(data->localData[0]->integerVars[0]/* ct1[1].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[1].counter + 1)",equationIndexes)) + DIVISION_SIM((tmp15 * tmp15),((modelica_real)(data->localData[0]->integerVars[0]/* ct1[1].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[1].counter + 1)",equationIndexes);

      tmp16 = (data->localData[0]->realVars[35]/* ct1[1].y DISCRETE */) ;
      (data->localData[0]->realVars[25]/* ct1[1].Var DISCRETE */)  = (data->localData[0]->realVars[40]/* ct1[1].y2 DISCRETE */)  - ((tmp16 * tmp16));

      tmp17 = (data->localData[0]->realVars[25]/* ct1[1].Var DISCRETE */) ;
      if(!(tmp17 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(ct1[1].Var) was %g should be >= 0", tmp17);
        }
      }
      (data->localData[0]->realVars[45]/* ct1[1].z DISCRETE */)  = sqrt(tmp17);

      (data->localData[0]->integerVars[0]/* ct1[1].counter DISCRETE */)  = (data->localData[0]->integerVars[0]/* ct1[1].counter DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->realVars[20]/* ct1[1].TimeLastDelivery DISCRETE */)  = data->localData[0]->timeValue;
    }
  }
  TRACE_POP
}
/*
equation index: 125
type: SIMPLE_ASSIGN
m1.StdDevCost[1] = 1000.0 * ct1[1].z
*/
void System_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  (data->localData[0]->realVars[5]/* m1.StdDevCost[1] variable */)  = (1000.0) * ((data->localData[0]->realVars[45]/* ct1[1].z DISCRETE */) );
  TRACE_POP
}
/*
equation index: 126
type: SIMPLE_ASSIGN
m1.z[1] = ct1[1].z
*/
void System_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  (data->localData[0]->realVars[15]/* m1.z[1] variable */)  = (data->localData[0]->realVars[45]/* ct1[1].z DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 127
type: SIMPLE_ASSIGN
m1.Avgcost[1] = 1000.0 * ct1[1].y
*/
void System_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  (data->localData[0]->realVars[0]/* m1.Avgcost[1] variable */)  = (1000.0) * ((data->localData[0]->realVars[35]/* ct1[1].y DISCRETE */) );
  TRACE_POP
}
/*
equation index: 128
type: SIMPLE_ASSIGN
m1.y[1] = ct1[1].y
*/
void System_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  (data->localData[0]->realVars[10]/* m1.y[1] variable */)  = (data->localData[0]->realVars[35]/* ct1[1].y DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 129
type: SIMPLE_ASSIGN
ct1[2].delivery = mc.x[2] == Prm.N
*/
void System_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  (data->localData[0]->booleanVars[8]/* ct1[2].delivery DISCRETE */)  = ((data->localData[0]->integerVars[6]/* mc.x[2] DISCRETE */)  == (data->simulationInfo->integerParameter[2]/* Prm.N PARAM */) );
  TRACE_POP
}
/*
equation index: 130
type: ALGORITHM

  ct1[2].TimeLastDelivery := pre(ct1[2].TimeLastDelivery);
  ct1[2].counter := pre(ct1[2].counter);
  ct1[2].z := pre(ct1[2].z);
  ct1[2].Var := pre(ct1[2].Var);
  ct1[2].y2 := pre(ct1[2].y2);
  ct1[2].y := pre(ct1[2].y);
  ct1[2].v := pre(ct1[2].v);
  $whenCondition4 := pre($whenCondition4);
  $whenCondition4 := ct1[2].delivery and not pre(ct1[2].delivery);
  when $whenCondition4 then
    ct1[2].v := time - ct1[2].TimeLastDelivery;
    ct1[2].y := ct1[2].y * (*Real*)(ct1[2].counter) / (*Real*)(ct1[2].counter + 1) + ct1[2].v / (*Real*)(ct1[2].counter + 1);
    ct1[2].y2 := ct1[2].y2 * (*Real*)(ct1[2].counter) / (*Real*)(ct1[2].counter + 1) + ct1[2].v ^ 2.0 / (*Real*)(ct1[2].counter + 1);
    ct1[2].Var := ct1[2].y2 - ct1[2].y ^ 2.0;
    ct1[2].z := sqrt(ct1[2].Var);
    ct1[2].counter := ct1[2].counter + 1;
    ct1[2].TimeLastDelivery := time;
  end when;
*/
void System_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  (data->localData[0]->realVars[21]/* ct1[2].TimeLastDelivery DISCRETE */)  = (data->simulationInfo->realVarsPre[21]/* ct1[2].TimeLastDelivery DISCRETE */) ;

  (data->localData[0]->integerVars[1]/* ct1[2].counter DISCRETE */)  = (data->simulationInfo->integerVarsPre[1]/* ct1[2].counter DISCRETE */) ;

  (data->localData[0]->realVars[46]/* ct1[2].z DISCRETE */)  = (data->simulationInfo->realVarsPre[46]/* ct1[2].z DISCRETE */) ;

  (data->localData[0]->realVars[26]/* ct1[2].Var DISCRETE */)  = (data->simulationInfo->realVarsPre[26]/* ct1[2].Var DISCRETE */) ;

  (data->localData[0]->realVars[41]/* ct1[2].y2 DISCRETE */)  = (data->simulationInfo->realVarsPre[41]/* ct1[2].y2 DISCRETE */) ;

  (data->localData[0]->realVars[36]/* ct1[2].y DISCRETE */)  = (data->simulationInfo->realVarsPre[36]/* ct1[2].y DISCRETE */) ;

  (data->localData[0]->realVars[31]/* ct1[2].v DISCRETE */)  = (data->simulationInfo->realVarsPre[31]/* ct1[2].v DISCRETE */) ;

  (data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[3]/* $whenCondition4 DISCRETE */) ;

  (data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  = ((data->localData[0]->booleanVars[8]/* ct1[2].delivery DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[8]/* ct1[2].delivery DISCRETE */) ));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[3]/* $whenCondition4 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[31]/* ct1[2].v DISCRETE */)  = data->localData[0]->timeValue - (data->localData[0]->realVars[21]/* ct1[2].TimeLastDelivery DISCRETE */) ;

      (data->localData[0]->realVars[36]/* ct1[2].y DISCRETE */)  = ((data->localData[0]->realVars[36]/* ct1[2].y DISCRETE */) ) * (DIVISION_SIM(((modelica_real)(data->localData[0]->integerVars[1]/* ct1[2].counter DISCRETE */) ),((modelica_real)(data->localData[0]->integerVars[1]/* ct1[2].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[2].counter + 1)",equationIndexes)) + DIVISION_SIM((data->localData[0]->realVars[31]/* ct1[2].v DISCRETE */) ,((modelica_real)(data->localData[0]->integerVars[1]/* ct1[2].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[2].counter + 1)",equationIndexes);

      tmp19 = (data->localData[0]->realVars[31]/* ct1[2].v DISCRETE */) ;
      (data->localData[0]->realVars[41]/* ct1[2].y2 DISCRETE */)  = ((data->localData[0]->realVars[41]/* ct1[2].y2 DISCRETE */) ) * (DIVISION_SIM(((modelica_real)(data->localData[0]->integerVars[1]/* ct1[2].counter DISCRETE */) ),((modelica_real)(data->localData[0]->integerVars[1]/* ct1[2].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[2].counter + 1)",equationIndexes)) + DIVISION_SIM((tmp19 * tmp19),((modelica_real)(data->localData[0]->integerVars[1]/* ct1[2].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[2].counter + 1)",equationIndexes);

      tmp20 = (data->localData[0]->realVars[36]/* ct1[2].y DISCRETE */) ;
      (data->localData[0]->realVars[26]/* ct1[2].Var DISCRETE */)  = (data->localData[0]->realVars[41]/* ct1[2].y2 DISCRETE */)  - ((tmp20 * tmp20));

      tmp21 = (data->localData[0]->realVars[26]/* ct1[2].Var DISCRETE */) ;
      if(!(tmp21 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(ct1[2].Var) was %g should be >= 0", tmp21);
        }
      }
      (data->localData[0]->realVars[46]/* ct1[2].z DISCRETE */)  = sqrt(tmp21);

      (data->localData[0]->integerVars[1]/* ct1[2].counter DISCRETE */)  = (data->localData[0]->integerVars[1]/* ct1[2].counter DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->realVars[21]/* ct1[2].TimeLastDelivery DISCRETE */)  = data->localData[0]->timeValue;
    }
  }
  TRACE_POP
}
/*
equation index: 131
type: SIMPLE_ASSIGN
m1.Avgcost[2] = (-ct1[2].y) / (-0.001142857142857143)
*/
void System_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  (data->localData[0]->realVars[1]/* m1.Avgcost[2] variable */)  = DIVISION_SIM((-(data->localData[0]->realVars[36]/* ct1[2].y DISCRETE */) ),-0.001142857142857143,"-0.001142857142857143",equationIndexes);
  TRACE_POP
}
/*
equation index: 132
type: SIMPLE_ASSIGN
m1.y[2] = ct1[2].y
*/
void System_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  (data->localData[0]->realVars[11]/* m1.y[2] variable */)  = (data->localData[0]->realVars[36]/* ct1[2].y DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 133
type: SIMPLE_ASSIGN
m1.StdDevCost[2] = (-ct1[2].z) / (-0.001142857142857143)
*/
void System_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  (data->localData[0]->realVars[6]/* m1.StdDevCost[2] variable */)  = DIVISION_SIM((-(data->localData[0]->realVars[46]/* ct1[2].z DISCRETE */) ),-0.001142857142857143,"-0.001142857142857143",equationIndexes);
  TRACE_POP
}
/*
equation index: 134
type: SIMPLE_ASSIGN
m1.z[2] = ct1[2].z
*/
void System_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  (data->localData[0]->realVars[16]/* m1.z[2] variable */)  = (data->localData[0]->realVars[46]/* ct1[2].z DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 135
type: SIMPLE_ASSIGN
ct1[3].delivery = mc.x[3] == Prm.N
*/
void System_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  (data->localData[0]->booleanVars[9]/* ct1[3].delivery DISCRETE */)  = ((data->localData[0]->integerVars[7]/* mc.x[3] DISCRETE */)  == (data->simulationInfo->integerParameter[2]/* Prm.N PARAM */) );
  TRACE_POP
}
/*
equation index: 136
type: ALGORITHM

  ct1[3].TimeLastDelivery := pre(ct1[3].TimeLastDelivery);
  ct1[3].counter := pre(ct1[3].counter);
  ct1[3].z := pre(ct1[3].z);
  ct1[3].Var := pre(ct1[3].Var);
  ct1[3].y2 := pre(ct1[3].y2);
  ct1[3].y := pre(ct1[3].y);
  ct1[3].v := pre(ct1[3].v);
  $whenCondition3 := pre($whenCondition3);
  $whenCondition3 := ct1[3].delivery and not pre(ct1[3].delivery);
  when $whenCondition3 then
    ct1[3].v := time - ct1[3].TimeLastDelivery;
    ct1[3].y := ct1[3].y * (*Real*)(ct1[3].counter) / (*Real*)(ct1[3].counter + 1) + ct1[3].v / (*Real*)(ct1[3].counter + 1);
    ct1[3].y2 := ct1[3].y2 * (*Real*)(ct1[3].counter) / (*Real*)(ct1[3].counter + 1) + ct1[3].v ^ 2.0 / (*Real*)(ct1[3].counter + 1);
    ct1[3].Var := ct1[3].y2 - ct1[3].y ^ 2.0;
    ct1[3].z := sqrt(ct1[3].Var);
    ct1[3].counter := ct1[3].counter + 1;
    ct1[3].TimeLastDelivery := time;
  end when;
*/
void System_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  (data->localData[0]->realVars[22]/* ct1[3].TimeLastDelivery DISCRETE */)  = (data->simulationInfo->realVarsPre[22]/* ct1[3].TimeLastDelivery DISCRETE */) ;

  (data->localData[0]->integerVars[2]/* ct1[3].counter DISCRETE */)  = (data->simulationInfo->integerVarsPre[2]/* ct1[3].counter DISCRETE */) ;

  (data->localData[0]->realVars[47]/* ct1[3].z DISCRETE */)  = (data->simulationInfo->realVarsPre[47]/* ct1[3].z DISCRETE */) ;

  (data->localData[0]->realVars[27]/* ct1[3].Var DISCRETE */)  = (data->simulationInfo->realVarsPre[27]/* ct1[3].Var DISCRETE */) ;

  (data->localData[0]->realVars[42]/* ct1[3].y2 DISCRETE */)  = (data->simulationInfo->realVarsPre[42]/* ct1[3].y2 DISCRETE */) ;

  (data->localData[0]->realVars[37]/* ct1[3].y DISCRETE */)  = (data->simulationInfo->realVarsPre[37]/* ct1[3].y DISCRETE */) ;

  (data->localData[0]->realVars[32]/* ct1[3].v DISCRETE */)  = (data->simulationInfo->realVarsPre[32]/* ct1[3].v DISCRETE */) ;

  (data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[2]/* $whenCondition3 DISCRETE */) ;

  (data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  = ((data->localData[0]->booleanVars[9]/* ct1[3].delivery DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[9]/* ct1[3].delivery DISCRETE */) ));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[2]/* $whenCondition3 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[32]/* ct1[3].v DISCRETE */)  = data->localData[0]->timeValue - (data->localData[0]->realVars[22]/* ct1[3].TimeLastDelivery DISCRETE */) ;

      (data->localData[0]->realVars[37]/* ct1[3].y DISCRETE */)  = ((data->localData[0]->realVars[37]/* ct1[3].y DISCRETE */) ) * (DIVISION_SIM(((modelica_real)(data->localData[0]->integerVars[2]/* ct1[3].counter DISCRETE */) ),((modelica_real)(data->localData[0]->integerVars[2]/* ct1[3].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[3].counter + 1)",equationIndexes)) + DIVISION_SIM((data->localData[0]->realVars[32]/* ct1[3].v DISCRETE */) ,((modelica_real)(data->localData[0]->integerVars[2]/* ct1[3].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[3].counter + 1)",equationIndexes);

      tmp23 = (data->localData[0]->realVars[32]/* ct1[3].v DISCRETE */) ;
      (data->localData[0]->realVars[42]/* ct1[3].y2 DISCRETE */)  = ((data->localData[0]->realVars[42]/* ct1[3].y2 DISCRETE */) ) * (DIVISION_SIM(((modelica_real)(data->localData[0]->integerVars[2]/* ct1[3].counter DISCRETE */) ),((modelica_real)(data->localData[0]->integerVars[2]/* ct1[3].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[3].counter + 1)",equationIndexes)) + DIVISION_SIM((tmp23 * tmp23),((modelica_real)(data->localData[0]->integerVars[2]/* ct1[3].counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(ct1[3].counter + 1)",equationIndexes);

      tmp24 = (data->localData[0]->realVars[37]/* ct1[3].y DISCRETE */) ;
      (data->localData[0]->realVars[27]/* ct1[3].Var DISCRETE */)  = (data->localData[0]->realVars[42]/* ct1[3].y2 DISCRETE */)  - ((tmp24 * tmp24));

      tmp25 = (data->localData[0]->realVars[27]/* ct1[3].Var DISCRETE */) ;
      if(!(tmp25 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(ct1[3].Var) was %g should be >= 0", tmp25);
        }
      }
      (data->localData[0]->realVars[47]/* ct1[3].z DISCRETE */)  = sqrt(tmp25);

      (data->localData[0]->integerVars[2]/* ct1[3].counter DISCRETE */)  = (data->localData[0]->integerVars[2]/* ct1[3].counter DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->realVars[22]/* ct1[3].TimeLastDelivery DISCRETE */)  = data->localData[0]->timeValue;
    }
  }
  TRACE_POP
}
/*
equation index: 137
type: SIMPLE_ASSIGN
m1.Avgcost[3] = 750.0 * ct1[3].y
*/
void System_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  (data->localData[0]->realVars[2]/* m1.Avgcost[3] variable */)  = (750.0) * ((data->localData[0]->realVars[37]/* ct1[3].y DISCRETE */) );
  TRACE_POP
}
/*
equation index: 138
type: SIMPLE_ASSIGN
m1.y[3] = ct1[3].y
*/
void System_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  (data->localData[0]->realVars[12]/* m1.y[3] variable */)  = (data->localData[0]->realVars[37]/* ct1[3].y DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 139
type: SIMPLE_ASSIGN
m1.StdDevCost[3] = 750.0 * ct1[3].z
*/
void System_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  (data->localData[0]->realVars[7]/* m1.StdDevCost[3] variable */)  = (750.0) * ((data->localData[0]->realVars[47]/* ct1[3].z DISCRETE */) );
  TRACE_POP
}
/*
equation index: 140
type: SIMPLE_ASSIGN
m1.z[3] = ct1[3].z
*/
void System_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  (data->localData[0]->realVars[17]/* m1.z[3] variable */)  = (data->localData[0]->realVars[47]/* ct1[3].z DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 141
type: ALGORITHM

  m1.endCondition := pre(m1.endCondition);
  $whenCondition6 := pre($whenCondition6);
  $whenCondition6 := time > 4000.0;
  when $whenCondition6 then
    if time >= 10000.0 then
      m1.endCondition := true;
    elseif time > 4000.0 then
      for w in 1:5 loop
        if pre(m1.y[w]) * pre(m1.z[w]) >= 1.0 then
          m1.endCondition := false;
          break;
        end if;
      end for;
    else
      m1.endCondition := false;
    end if;
    Modelica.Utilities.Files.remove("outputs.txt");
    Modelica.Utilities.Streams.print("A B C D F G Team AvgTime AvgCost StdDevTime StdDevCost (ID = " + String(Prm.ID, 0, true) + ", MyMagicNumber = " + String(Prm.MyMagicNumber, 0, true) + ", time = " + String(time, 6, 0, true) + " )", "outputs.txt");
    for i in 1:5 loop
      Modelica.Utilities.Streams.print(String(m1.p.A, 0, true) + "  " + String(m1.p.B, 0, true) + "  " + String(m1.p.C, 0, true) + "  " + String(m1.p.D, 0, true) + "  " + String(m1.p.F, 0, true) + "  " + String(m1.p.G, 0, true) + "  " + String(i, 0, true) + "  " + String(m1.y[i], 6, 0, true) + "  " + String(m1.Avgcost[i], 6, 0, true) + "  " + String(m1.z[i], 6, 0, true) + " " + String(m1.StdDevCost[i], 6, 0, true), "outputs.txt");
    end for;
    terminate("Standard deviation completion time  small enough for reliable estimate");
  end when;
*/
void System_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_integer tmp30;
  modelica_integer tmp31;
  modelica_integer tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,11,"outputs.txt");
  static const MMC_DEFSTRINGLIT(tmp34,61,"A B C D F G Team AvgTime AvgCost StdDevTime StdDevCost (ID = ");
  modelica_string tmp35;
  modelica_metatype tmpMeta36;
  static const MMC_DEFSTRINGLIT(tmp37,18,", MyMagicNumber = ");
  modelica_metatype tmpMeta38;
  modelica_string tmp39;
  modelica_metatype tmpMeta40;
  static const MMC_DEFSTRINGLIT(tmp41,9,", time = ");
  modelica_metatype tmpMeta42;
  modelica_string tmp43;
  modelica_metatype tmpMeta44;
  static const MMC_DEFSTRINGLIT(tmp45,2," )");
  modelica_metatype tmpMeta46;
  static const MMC_DEFSTRINGLIT(tmp47,11,"outputs.txt");
  modelica_string tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,2,"  ");
  modelica_metatype tmpMeta50;
  modelica_string tmp51;
  modelica_metatype tmpMeta52;
  static const MMC_DEFSTRINGLIT(tmp53,2,"  ");
  modelica_metatype tmpMeta54;
  modelica_string tmp55;
  modelica_metatype tmpMeta56;
  static const MMC_DEFSTRINGLIT(tmp57,2,"  ");
  modelica_metatype tmpMeta58;
  modelica_string tmp59;
  modelica_metatype tmpMeta60;
  static const MMC_DEFSTRINGLIT(tmp61,2,"  ");
  modelica_metatype tmpMeta62;
  modelica_string tmp63;
  modelica_metatype tmpMeta64;
  static const MMC_DEFSTRINGLIT(tmp65,2,"  ");
  modelica_metatype tmpMeta66;
  modelica_string tmp67;
  modelica_metatype tmpMeta68;
  static const MMC_DEFSTRINGLIT(tmp69,2,"  ");
  modelica_metatype tmpMeta70;
  modelica_string tmp71;
  modelica_metatype tmpMeta72;
  static const MMC_DEFSTRINGLIT(tmp73,2,"  ");
  modelica_metatype tmpMeta74;
  modelica_string tmp75;
  modelica_metatype tmpMeta76;
  static const MMC_DEFSTRINGLIT(tmp77,2,"  ");
  modelica_metatype tmpMeta78;
  modelica_string tmp79;
  modelica_metatype tmpMeta80;
  static const MMC_DEFSTRINGLIT(tmp81,2,"  ");
  modelica_metatype tmpMeta82;
  modelica_string tmp83;
  modelica_metatype tmpMeta84;
  modelica_metatype tmpMeta85;
  modelica_string tmp86;
  modelica_metatype tmpMeta87;
  static const MMC_DEFSTRINGLIT(tmp88,11,"outputs.txt");
  modelica_integer tmp89;
  modelica_integer tmp90;
  modelica_integer tmp91;
  static const MMC_DEFSTRINGLIT(tmp92,70,"Standard deviation completion time  small enough for reliable estimate");
  (data->localData[0]->booleanVars[12]/* m1.endCondition DISCRETE */)  = (data->simulationInfo->booleanVarsPre[12]/* m1.endCondition DISCRETE */) ;

  (data->localData[0]->booleanVars[5]/* $whenCondition6 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[5]/* $whenCondition6 DISCRETE */) ;

  relationhysteresis(data, &tmp26, data->localData[0]->timeValue, 4000.0, 0, Greater, GreaterZC);
  (data->localData[0]->booleanVars[5]/* $whenCondition6 DISCRETE */)  = tmp26;

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[5]/* $whenCondition6 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[5]/* $whenCondition6 DISCRETE */)  /* edge */))
    {
      tmp27 = GreaterEq(data->localData[0]->timeValue,10000.0);
      if(tmp27)
      {
        (data->localData[0]->booleanVars[12]/* m1.endCondition DISCRETE */)  = 1;
      }
      else
      {
        tmp28 = Greater(data->localData[0]->timeValue,4000.0);
        if(tmp28)
        {
          tmp30 = ((modelica_integer) 1); tmp31 = 1; tmp32 = ((modelica_integer) 5);
          if(!(((tmp31 > 0) && (tmp30 > tmp32)) || ((tmp31 < 0) && (tmp30 < tmp32))))
          {
            modelica_integer w;
            for(w = ((modelica_integer) 1); in_range_integer(w, tmp30, tmp32); w += tmp31)
            {
              tmp29 = GreaterEq(((&(data->simulationInfo->realVarsPre[10]/* m1.y[1] variable */) )[w - 1]) * ((&(data->simulationInfo->realVarsPre[15]/* m1.z[1] variable */) )[w - 1]),1.0);
              if(tmp29)
              {
                (data->localData[0]->booleanVars[12]/* m1.endCondition DISCRETE */)  = 0;

                break;
              }
            }
          }
        }
        else
        {
          (data->localData[0]->booleanVars[12]/* m1.endCondition DISCRETE */)  = 0;
        }
      }

      omc_Modelica_Utilities_Files_remove(threadData, MMC_REFSTRINGLIT(tmp33));

      tmp35 = modelica_integer_to_modelica_string((data->simulationInfo->integerParameter[0]/* Prm.ID PARAM */) , ((modelica_integer) 0), 1);
      tmpMeta36 = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      tmpMeta38 = stringAppend(tmpMeta36,MMC_REFSTRINGLIT(tmp37));
      tmp39 = modelica_integer_to_modelica_string((data->simulationInfo->integerParameter[1]/* Prm.MyMagicNumber PARAM */) , ((modelica_integer) 0), 1);
      tmpMeta40 = stringAppend(tmpMeta38,tmp39);
      tmpMeta42 = stringAppend(tmpMeta40,MMC_REFSTRINGLIT(tmp41));
      tmp43 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta44 = stringAppend(tmpMeta42,tmp43);
      tmpMeta46 = stringAppend(tmpMeta44,MMC_REFSTRINGLIT(tmp45));
      omc_Modelica_Utilities_Streams_print(threadData, tmpMeta46, MMC_REFSTRINGLIT(tmp47));

      tmp89 = ((modelica_integer) 1); tmp90 = 1; tmp91 = ((modelica_integer) 5);
      if(!(((tmp90 > 0) && (tmp89 > tmp91)) || ((tmp90 < 0) && (tmp89 < tmp91))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp89, tmp91); i += tmp90)
        {
          tmp48 = modelica_integer_to_modelica_string((data->simulationInfo->integerParameter[3]/* m1.p.A PARAM */) , ((modelica_integer) 0), 1);
          tmpMeta50 = stringAppend(tmp48,MMC_REFSTRINGLIT(tmp49));
          tmp51 = modelica_integer_to_modelica_string((data->simulationInfo->integerParameter[4]/* m1.p.B PARAM */) , ((modelica_integer) 0), 1);
          tmpMeta52 = stringAppend(tmpMeta50,tmp51);
          tmpMeta54 = stringAppend(tmpMeta52,MMC_REFSTRINGLIT(tmp53));
          tmp55 = modelica_integer_to_modelica_string((data->simulationInfo->integerParameter[5]/* m1.p.C PARAM */) , ((modelica_integer) 0), 1);
          tmpMeta56 = stringAppend(tmpMeta54,tmp55);
          tmpMeta58 = stringAppend(tmpMeta56,MMC_REFSTRINGLIT(tmp57));
          tmp59 = modelica_integer_to_modelica_string((data->simulationInfo->integerParameter[6]/* m1.p.D PARAM */) , ((modelica_integer) 0), 1);
          tmpMeta60 = stringAppend(tmpMeta58,tmp59);
          tmpMeta62 = stringAppend(tmpMeta60,MMC_REFSTRINGLIT(tmp61));
          tmp63 = modelica_integer_to_modelica_string((data->simulationInfo->integerParameter[7]/* m1.p.F PARAM */) , ((modelica_integer) 0), 1);
          tmpMeta64 = stringAppend(tmpMeta62,tmp63);
          tmpMeta66 = stringAppend(tmpMeta64,MMC_REFSTRINGLIT(tmp65));
          tmp67 = modelica_integer_to_modelica_string((data->simulationInfo->integerParameter[8]/* m1.p.G PARAM */) , ((modelica_integer) 0), 1);
          tmpMeta68 = stringAppend(tmpMeta66,tmp67);
          tmpMeta70 = stringAppend(tmpMeta68,MMC_REFSTRINGLIT(tmp69));
          tmp71 = modelica_integer_to_modelica_string(i, ((modelica_integer) 0), 1);
          tmpMeta72 = stringAppend(tmpMeta70,tmp71);
          tmpMeta74 = stringAppend(tmpMeta72,MMC_REFSTRINGLIT(tmp73));
          tmp75 = modelica_real_to_modelica_string((&data->localData[0]->realVars[10]/* m1.y[1] variable */)[i - 1] , ((modelica_integer) 6), ((modelica_integer) 0), 1);
          tmpMeta76 = stringAppend(tmpMeta74,tmp75);
          tmpMeta78 = stringAppend(tmpMeta76,MMC_REFSTRINGLIT(tmp77));
          tmp79 = modelica_real_to_modelica_string((&data->localData[0]->realVars[0]/* m1.Avgcost[1] variable */)[i - 1] , ((modelica_integer) 6), ((modelica_integer) 0), 1);
          tmpMeta80 = stringAppend(tmpMeta78,tmp79);
          tmpMeta82 = stringAppend(tmpMeta80,MMC_REFSTRINGLIT(tmp81));
          tmp83 = modelica_real_to_modelica_string((&data->localData[0]->realVars[15]/* m1.z[1] variable */)[i - 1] , ((modelica_integer) 6), ((modelica_integer) 0), 1);
          tmpMeta84 = stringAppend(tmpMeta82,tmp83);
          tmpMeta85 = stringAppend(tmpMeta84,(modelica_string) mmc_strings_len1[32]);
          tmp86 = modelica_real_to_modelica_string((&data->localData[0]->realVars[5]/* m1.StdDevCost[1] variable */)[i - 1] , ((modelica_integer) 6), ((modelica_integer) 0), 1);
          tmpMeta87 = stringAppend(tmpMeta85,tmp86);
          omc_Modelica_Utilities_Streams_print(threadData, tmpMeta87, MMC_REFSTRINGLIT(tmp88));
        }
      }

      {
        FILE_INFO info = {"/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1/monitor.mo",58,5,58,88,0};
        omc_terminate(info, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp92)));
      }
    }
  }
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
  System_eqFunction_110(data, threadData);

  System_eqFunction_111(data, threadData);

  System_eqFunction_112(data, threadData);

  System_eqFunction_113(data, threadData);

  System_eqFunction_114(data, threadData);

  System_eqFunction_115(data, threadData);

  System_eqFunction_116(data, threadData);

  System_eqFunction_117(data, threadData);

  System_eqFunction_118(data, threadData);

  System_eqFunction_119(data, threadData);

  System_eqFunction_120(data, threadData);

  System_eqFunction_121(data, threadData);

  System_eqFunction_122(data, threadData);

  System_eqFunction_123(data, threadData);

  System_eqFunction_124(data, threadData);

  System_eqFunction_125(data, threadData);

  System_eqFunction_126(data, threadData);

  System_eqFunction_127(data, threadData);

  System_eqFunction_128(data, threadData);

  System_eqFunction_129(data, threadData);

  System_eqFunction_130(data, threadData);

  System_eqFunction_131(data, threadData);

  System_eqFunction_132(data, threadData);

  System_eqFunction_133(data, threadData);

  System_eqFunction_134(data, threadData);

  System_eqFunction_135(data, threadData);

  System_eqFunction_136(data, threadData);

  System_eqFunction_137(data, threadData);

  System_eqFunction_138(data, threadData);

  System_eqFunction_139(data, threadData);

  System_eqFunction_140(data, threadData);

  System_eqFunction_141(data, threadData);
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


int System_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  System_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

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
   NULL,    /* initialNonLinearSystem */
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

#define _OMC_LIT_RESOURCE_0_name_data "CompletionTime"
#define _OMC_LIT_RESOURCE_0_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,14,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,64,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Complex"
#define _OMC_LIT_RESOURCE_1_dir_data "/home/pikarz1/.openmodelica/libraries/Complex 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,7,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,60,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Cost"
#define _OMC_LIT_RESOURCE_2_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,4,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,64,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "DTMC"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,4,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,64,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "InputBoolean"
#define _OMC_LIT_RESOURCE_4_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,12,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,64,_OMC_LIT_RESOURCE_4_dir_data);

#define _OMC_LIT_RESOURCE_5_name_data "InputInteger"
#define _OMC_LIT_RESOURCE_5_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_name,12,_OMC_LIT_RESOURCE_5_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir,64,_OMC_LIT_RESOURCE_5_dir_data);

#define _OMC_LIT_RESOURCE_6_name_data "InputReal"
#define _OMC_LIT_RESOURCE_6_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_name,9,_OMC_LIT_RESOURCE_6_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir,64,_OMC_LIT_RESOURCE_6_dir_data);

#define _OMC_LIT_RESOURCE_7_name_data "LoopProb"
#define _OMC_LIT_RESOURCE_7_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_name,8,_OMC_LIT_RESOURCE_7_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir,64,_OMC_LIT_RESOURCE_7_dir_data);

#define _OMC_LIT_RESOURCE_8_name_data "Modelica"
#define _OMC_LIT_RESOURCE_8_dir_data "/home/pikarz1/.openmodelica/libraries/Modelica 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_name,8,_OMC_LIT_RESOURCE_8_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir,61,_OMC_LIT_RESOURCE_8_dir_data);

#define _OMC_LIT_RESOURCE_9_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_9_dir_data "/home/pikarz1/.openmodelica/libraries/ModelicaServices 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_name,16,_OMC_LIT_RESOURCE_9_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir,69,_OMC_LIT_RESOURCE_9_dir_data);

#define _OMC_LIT_RESOURCE_10_name_data "Monitor"
#define _OMC_LIT_RESOURCE_10_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_name,7,_OMC_LIT_RESOURCE_10_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir,64,_OMC_LIT_RESOURCE_10_dir_data);

#define _OMC_LIT_RESOURCE_11_name_data "Next"
#define _OMC_LIT_RESOURCE_11_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_name,4,_OMC_LIT_RESOURCE_11_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir,64,_OMC_LIT_RESOURCE_11_dir_data);

#define _OMC_LIT_RESOURCE_12_name_data "OutputBoolean"
#define _OMC_LIT_RESOURCE_12_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_name,13,_OMC_LIT_RESOURCE_12_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir,64,_OMC_LIT_RESOURCE_12_dir_data);

#define _OMC_LIT_RESOURCE_13_name_data "OutputInteger"
#define _OMC_LIT_RESOURCE_13_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_name,13,_OMC_LIT_RESOURCE_13_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir,64,_OMC_LIT_RESOURCE_13_dir_data);

#define _OMC_LIT_RESOURCE_14_name_data "OutputReal"
#define _OMC_LIT_RESOURCE_14_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_name,10,_OMC_LIT_RESOURCE_14_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir,64,_OMC_LIT_RESOURCE_14_dir_data);

#define _OMC_LIT_RESOURCE_15_name_data "P"
#define _OMC_LIT_RESOURCE_15_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_name,1,_OMC_LIT_RESOURCE_15_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir,64,_OMC_LIT_RESOURCE_15_dir_data);

#define _OMC_LIT_RESOURCE_16_name_data "Prm"
#define _OMC_LIT_RESOURCE_16_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_name,3,_OMC_LIT_RESOURCE_16_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir,64,_OMC_LIT_RESOURCE_16_dir_data);

#define _OMC_LIT_RESOURCE_17_name_data "System"
#define _OMC_LIT_RESOURCE_17_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_name,6,_OMC_LIT_RESOURCE_17_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir,64,_OMC_LIT_RESOURCE_17_dir_data);

#define _OMC_LIT_RESOURCE_18_name_data "alpha"
#define _OMC_LIT_RESOURCE_18_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_18_name,5,_OMC_LIT_RESOURCE_18_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_18_dir,64,_OMC_LIT_RESOURCE_18_dir_data);

#define _OMC_LIT_RESOURCE_19_name_data "myrandom"
#define _OMC_LIT_RESOURCE_19_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_19_name,8,_OMC_LIT_RESOURCE_19_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_19_dir,64,_OMC_LIT_RESOURCE_19_dir_data);

#define _OMC_LIT_RESOURCE_20_name_data "tau"
#define _OMC_LIT_RESOURCE_20_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_20_name,3,_OMC_LIT_RESOURCE_20_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_20_dir,64,_OMC_LIT_RESOURCE_20_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,42,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_8_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_9_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_10_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_11_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_12_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_13_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_14_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_15_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_16_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_17_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_18_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_18_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_19_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_19_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_20_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_20_dir)}};
void System_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &System_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "System";
  data->modelData->modelFilePrefix = "System";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/1";
  data->modelData->modelGUID = "{340912f8-8e71-4348-9bac-842be0d591e5}";
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
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 50;
  data->modelData->nDiscreteReal = 30;
  data->modelData->nVariablesInteger = 10;
  data->modelData->nVariablesBoolean = 13;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 0;
  data->modelData->nParametersInteger = 36;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 0;
  data->modelData->nAliasInteger = 5;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 1;
  data->modelData->nSamples = 1;
  data->modelData->nRelations = 1;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "System_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 19;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 148;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 0;
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


