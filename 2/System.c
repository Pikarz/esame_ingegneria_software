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
equation index: 64
type: ALGORITHM

  dqt.readsignal := pre(dqt.readsignal);
  dqt.ValueFromServer[3] := pre(dqt.ValueFromServer[3]);
  dqt.ValueFromServer[2] := pre(dqt.ValueFromServer[2]);
  dqt.ValueFromServer[1] := pre(dqt.ValueFromServer[1]);
  dqt.fifox := pre(dqt.fifox);
  dqt.state := pre(dqt.state);
  $whenCondition2 := pre($whenCondition2);
  $whenCondition2 := sample(2, 0.0, (*Real*)(dqt.p.T));
  when false then
    dqt.state := 0;
    dqt.fifox := 0;
    dqt.ValueFromServer := {0, 0, 0};
  elsewhen $whenCondition2 then
    if dqt.state == 0 then
      (dqt.readsignal, dqt.fifox) := ReadFromFIFO(pre(dqt.fifox), pre(dqt.datavailable), pre(dqt.readsignal));
      if FifoIODone(dqt.fifox) then
        dqt.ValueFromServer := pre(dqt.outputdata);
        dqt.state := 0;
        dqt.fifox := 0;
      end if;
    else
      dqt.state := pre(dqt.state);
    end if;
  end when;
*/
void System_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  integer_array tmp0;
  integer_array tmp1;
  integer_array tmp3;
  integer_array tmp4;
  (data->localData[0]->booleanVars[14]/* dqt.readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[14]/* dqt.readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[311]/* dqt.ValueFromServer[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[311]/* dqt.ValueFromServer[3] DISCRETE */) ;

  (data->localData[0]->integerVars[310]/* dqt.ValueFromServer[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[310]/* dqt.ValueFromServer[2] DISCRETE */) ;

  (data->localData[0]->integerVars[309]/* dqt.ValueFromServer[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[309]/* dqt.ValueFromServer[1] DISCRETE */) ;

  (data->localData[0]->integerVars[312]/* dqt.fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[312]/* dqt.fifox DISCRETE */) ;

  (data->localData[0]->integerVars[316]/* dqt.state DISCRETE */)  = (data->simulationInfo->integerVarsPre[316]/* dqt.state DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[1]/* $whenCondition2 DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  = data->simulationInfo->samples[1];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->integerVars[316]/* dqt.state DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[312]/* dqt.fifox DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_integer_array(&tmp0, 3, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp1, ((modelica_integer*)&((&(data->localData[0]->integerVars[309]/* dqt.ValueFromServer[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
      integer_array_copy_data(tmp0, tmp1);
    }
    else if(((data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[1]/* $whenCondition2 DISCRETE */)  /* edge */))
    {
      if(((data->localData[0]->integerVars[316]/* dqt.state DISCRETE */)  == ((modelica_integer) 0)))
      {
        (data->localData[0]->booleanVars[14]/* dqt.readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[312]/* dqt.fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[13]/* dqt.datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[14]/* dqt.readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[312]/* dqt.fifox DISCRETE */) );

        if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[312]/* dqt.fifox DISCRETE */) ))
        {
          integer_array_create(&tmp3, ((modelica_integer*)&((&(data->simulationInfo->integerVarsPre[313]/* dqt.outputdata[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
          integer_array_create(&tmp4, ((modelica_integer*)&((&(data->localData[0]->integerVars[309]/* dqt.ValueFromServer[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
          integer_array_copy_data(tmp3, tmp4);

          (data->localData[0]->integerVars[316]/* dqt.state DISCRETE */)  = ((modelica_integer) 0);

          (data->localData[0]->integerVars[312]/* dqt.fifox DISCRETE */)  = ((modelica_integer) 0);
        }
      }
      else
      {
        (data->localData[0]->integerVars[316]/* dqt.state DISCRETE */)  = (data->simulationInfo->integerVarsPre[316]/* dqt.state DISCRETE */) ;
      }
    }
  }
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
dq.readsignal = dqt.readsignal
*/
void System_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  (data->localData[0]->booleanVars[9]/* dq.readsignal DISCRETE */)  = (data->localData[0]->booleanVars[14]/* dqt.readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
dq.readsigint = not pre(dq.readsignal) == dq.readsignal
*/
void System_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  (data->localData[0]->booleanVars[8]/* dq.readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[9]/* dq.readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[9]/* dq.readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[9]/* dq.readsignal DISCRETE */)  && (data->localData[0]->booleanVars[9]/* dq.readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 67
type: ALGORITHM

  env.req[3] := pre(env.req[3]);
  env.req[2] := pre(env.req[2]);
  env.req[1] := pre(env.req[1]);
  env.newreq := pre(env.newreq);
  env.ValueFromClient := pre(env.ValueFromClient);
  env.inputdata1[3] := pre(env.inputdata1[3]);
  env.inputdata1[2] := pre(env.inputdata1[2]);
  env.inputdata1[1] := pre(env.inputdata1[1]);
  env.fifox := pre(env.fifox);
  env.writesignal1 := pre(env.writesignal1);
  env.state := pre(env.state);
  $whenCondition6 := pre($whenCondition6);
  $whenCondition6 := sample(1, 0.0, (*Real*)(env.p.T));
  when false then
    env.state := 0;
    env.writesignal1 := false;
    env.fifox := 0;
    env.inputdata1[1] := 0;
    env.inputdata1[2] := 0;
    env.inputdata1[3] := 0;
    env.ValueFromClient := 0;
    env.newreq := false;
  elsewhen $whenCondition6 then
    if env.state == 0 then
      if myrandom() <= env.p.prob_new_req then
        env.req[1] := generateValue();
        env.req[2] := generateValue();
        env.req[3] := generateValue();
        env.state := 10;
        env.newreq := true;
      else
        env.state := pre(env.state);
      end if;
    elseif env.state == 10 then
      env.inputdata1 := pre(env.req);
      env.newreq := false;
      env.state := 20;
    elseif env.state == 20 then
      (env.writesignal1, env.fifox) := WriteToFIFO(pre(env.fifox), pre(env.writesignal1), pre(env.spaceavailable1));
      if FifoIODone(env.fifox) then
        env.state := 0;
        env.fifox := 0;
      end if;
    else
      env.state := pre(env.state);
    end if;
  end when;
*/
void System_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  modelica_boolean tmp7;
  integer_array tmp9;
  integer_array tmp10;
  (data->localData[0]->integerVars[324]/* env.req[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[324]/* env.req[3] DISCRETE */) ;

  (data->localData[0]->integerVars[323]/* env.req[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[323]/* env.req[2] DISCRETE */) ;

  (data->localData[0]->integerVars[322]/* env.req[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[322]/* env.req[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[15]/* env.newreq DISCRETE */)  = (data->simulationInfo->booleanVarsPre[15]/* env.newreq DISCRETE */) ;

  (data->localData[0]->integerVars[317]/* env.ValueFromClient DISCRETE */)  = (data->simulationInfo->integerVarsPre[317]/* env.ValueFromClient DISCRETE */) ;

  (data->localData[0]->integerVars[321]/* env.inputdata1[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[321]/* env.inputdata1[3] DISCRETE */) ;

  (data->localData[0]->integerVars[320]/* env.inputdata1[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[320]/* env.inputdata1[2] DISCRETE */) ;

  (data->localData[0]->integerVars[319]/* env.inputdata1[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[319]/* env.inputdata1[1] DISCRETE */) ;

  (data->localData[0]->integerVars[318]/* env.fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[318]/* env.fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[17]/* env.writesignal1 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[17]/* env.writesignal1 DISCRETE */) ;

  (data->localData[0]->integerVars[325]/* env.state DISCRETE */)  = (data->simulationInfo->integerVarsPre[325]/* env.state DISCRETE */) ;

  (data->localData[0]->booleanVars[5]/* $whenCondition6 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[5]/* $whenCondition6 DISCRETE */) ;

  (data->localData[0]->booleanVars[5]/* $whenCondition6 DISCRETE */)  = data->simulationInfo->samples[0];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->integerVars[325]/* env.state DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[17]/* env.writesignal1 DISCRETE */)  = 0;

      (data->localData[0]->integerVars[318]/* env.fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[319]/* env.inputdata1[1] DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[320]/* env.inputdata1[2] DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[321]/* env.inputdata1[3] DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[317]/* env.ValueFromClient DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[15]/* env.newreq DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[5]/* $whenCondition6 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[5]/* $whenCondition6 DISCRETE */)  /* edge */))
    {
      if(((data->localData[0]->integerVars[325]/* env.state DISCRETE */)  == ((modelica_integer) 0)))
      {
        tmp7 = LessEq(omc_myrandom(threadData),(data->simulationInfo->realParameter[5]/* env.p.prob_new_req PARAM */) );
        if(tmp7)
        {
          (data->localData[0]->integerVars[322]/* env.req[1] DISCRETE */)  = omc_generateValue(threadData);

          (data->localData[0]->integerVars[323]/* env.req[2] DISCRETE */)  = omc_generateValue(threadData);

          (data->localData[0]->integerVars[324]/* env.req[3] DISCRETE */)  = omc_generateValue(threadData);

          (data->localData[0]->integerVars[325]/* env.state DISCRETE */)  = ((modelica_integer) 10);

          (data->localData[0]->booleanVars[15]/* env.newreq DISCRETE */)  = 1;
        }
        else
        {
          (data->localData[0]->integerVars[325]/* env.state DISCRETE */)  = (data->simulationInfo->integerVarsPre[325]/* env.state DISCRETE */) ;
        }
      }
      else
      {
        if(((data->localData[0]->integerVars[325]/* env.state DISCRETE */)  == ((modelica_integer) 10)))
        {
          integer_array_create(&tmp9, ((modelica_integer*)&((&(data->simulationInfo->integerVarsPre[322]/* env.req[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
          integer_array_create(&tmp10, ((modelica_integer*)&((&(data->localData[0]->integerVars[319]/* env.inputdata1[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
          integer_array_copy_data(tmp9, tmp10);

          (data->localData[0]->booleanVars[15]/* env.newreq DISCRETE */)  = 0;

          (data->localData[0]->integerVars[325]/* env.state DISCRETE */)  = ((modelica_integer) 20);
        }
        else
        {
          if(((data->localData[0]->integerVars[325]/* env.state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[17]/* env.writesignal1 DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[318]/* env.fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[17]/* env.writesignal1 DISCRETE */) , (data->simulationInfo->booleanVarsPre[16]/* env.spaceavailable1 DISCRETE */)  ,&(data->localData[0]->integerVars[318]/* env.fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[318]/* env.fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[325]/* env.state DISCRETE */)  = ((modelica_integer) 0);

              (data->localData[0]->integerVars[318]/* env.fifox DISCRETE */)  = ((modelica_integer) 0);
            }
          }
          else
          {
            (data->localData[0]->integerVars[325]/* env.state DISCRETE */)  = (data->simulationInfo->integerVarsPre[325]/* env.state DISCRETE */) ;
          }
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
m1.ct.values[2] = (*Real*)(env.req[2])
*/
void System_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  (data->localData[0]->realVars[1]/* m1.ct.values[2] variable */)  = ((modelica_real)(data->localData[0]->integerVars[323]/* env.req[2] DISCRETE */) );
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
dq.inputdata[3] = env.inputdata1[3]
*/
void System_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  (data->localData[0]->integerVars[303]/* dq.inputdata[3] DISCRETE */)  = (data->localData[0]->integerVars[321]/* env.inputdata1[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
m1.ct.values[1] = (*Real*)(env.req[1])
*/
void System_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->realVars[0]/* m1.ct.values[1] variable */)  = ((modelica_real)(data->localData[0]->integerVars[322]/* env.req[1] DISCRETE */) );
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
m1.ct.values[3] = (*Real*)(env.req[3])
*/
void System_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->realVars[2]/* m1.ct.values[3] variable */)  = ((modelica_real)(data->localData[0]->integerVars[324]/* env.req[3] DISCRETE */) );
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
dq.inputdata[1] = env.inputdata1[1]
*/
void System_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  (data->localData[0]->integerVars[301]/* dq.inputdata[1] DISCRETE */)  = (data->localData[0]->integerVars[319]/* env.inputdata1[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
dq.inputdata[2] = env.inputdata1[2]
*/
void System_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  (data->localData[0]->integerVars[302]/* dq.inputdata[2] DISCRETE */)  = (data->localData[0]->integerVars[320]/* env.inputdata1[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
dq.writesignal = env.writesignal1
*/
void System_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->booleanVars[12]/* dq.writesignal DISCRETE */)  = (data->localData[0]->booleanVars[17]/* env.writesignal1 DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
dq.writesigint = not pre(dq.writesignal) == dq.writesignal
*/
void System_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  (data->localData[0]->booleanVars[11]/* dq.writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[12]/* dq.writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[12]/* dq.writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[12]/* dq.writesignal DISCRETE */)  && (data->localData[0]->booleanVars[12]/* dq.writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 76
type: ALGORITHM

  dq.fifo[100,3] := pre(dq.fifo[100,3]);
  dq.fifo[100,2] := pre(dq.fifo[100,2]);
  dq.fifo[100,1] := pre(dq.fifo[100,1]);
  dq.fifo[99,3] := pre(dq.fifo[99,3]);
  dq.fifo[99,2] := pre(dq.fifo[99,2]);
  dq.fifo[99,1] := pre(dq.fifo[99,1]);
  dq.fifo[98,3] := pre(dq.fifo[98,3]);
  dq.fifo[98,2] := pre(dq.fifo[98,2]);
  dq.fifo[98,1] := pre(dq.fifo[98,1]);
  dq.fifo[97,3] := pre(dq.fifo[97,3]);
  dq.fifo[97,2] := pre(dq.fifo[97,2]);
  dq.fifo[97,1] := pre(dq.fifo[97,1]);
  dq.fifo[96,3] := pre(dq.fifo[96,3]);
  dq.fifo[96,2] := pre(dq.fifo[96,2]);
  dq.fifo[96,1] := pre(dq.fifo[96,1]);
  dq.fifo[95,3] := pre(dq.fifo[95,3]);
  dq.fifo[95,2] := pre(dq.fifo[95,2]);
  dq.fifo[95,1] := pre(dq.fifo[95,1]);
  dq.fifo[94,3] := pre(dq.fifo[94,3]);
  dq.fifo[94,2] := pre(dq.fifo[94,2]);
  dq.fifo[94,1] := pre(dq.fifo[94,1]);
  dq.fifo[93,3] := pre(dq.fifo[93,3]);
  dq.fifo[93,2] := pre(dq.fifo[93,2]);
  dq.fifo[93,1] := pre(dq.fifo[93,1]);
  dq.fifo[92,3] := pre(dq.fifo[92,3]);
  dq.fifo[92,2] := pre(dq.fifo[92,2]);
  dq.fifo[92,1] := pre(dq.fifo[92,1]);
  dq.fifo[91,3] := pre(dq.fifo[91,3]);
  dq.fifo[91,2] := pre(dq.fifo[91,2]);
  dq.fifo[91,1] := pre(dq.fifo[91,1]);
  dq.fifo[90,3] := pre(dq.fifo[90,3]);
  dq.fifo[90,2] := pre(dq.fifo[90,2]);
  dq.fifo[90,1] := pre(dq.fifo[90,1]);
  dq.fifo[89,3] := pre(dq.fifo[89,3]);
  dq.fifo[89,2] := pre(dq.fifo[89,2]);
  dq.fifo[89,1] := pre(dq.fifo[89,1]);
  dq.fifo[88,3] := pre(dq.fifo[88,3]);
  dq.fifo[88,2] := pre(dq.fifo[88,2]);
  dq.fifo[88,1] := pre(dq.fifo[88,1]);
  dq.fifo[87,3] := pre(dq.fifo[87,3]);
  dq.fifo[87,2] := pre(dq.fifo[87,2]);
  dq.fifo[87,1] := pre(dq.fifo[87,1]);
  dq.fifo[86,3] := pre(dq.fifo[86,3]);
  dq.fifo[86,2] := pre(dq.fifo[86,2]);
  dq.fifo[86,1] := pre(dq.fifo[86,1]);
  dq.fifo[85,3] := pre(dq.fifo[85,3]);
  dq.fifo[85,2] := pre(dq.fifo[85,2]);
  dq.fifo[85,1] := pre(dq.fifo[85,1]);
  dq.fifo[84,3] := pre(dq.fifo[84,3]);
  dq.fifo[84,2] := pre(dq.fifo[84,2]);
  dq.fifo[84,1] := pre(dq.fifo[84,1]);
  dq.fifo[83,3] := pre(dq.fifo[83,3]);
  dq.fifo[83,2] := pre(dq.fifo[83,2]);
  dq.fifo[83,1] := pre(dq.fifo[83,1]);
  dq.fifo[82,3] := pre(dq.fifo[82,3]);
  dq.fifo[82,2] := pre(dq.fifo[82,2]);
  dq.fifo[82,1] := pre(dq.fifo[82,1]);
  dq.fifo[81,3] := pre(dq.fifo[81,3]);
  dq.fifo[81,2] := pre(dq.fifo[81,2]);
  dq.fifo[81,1] := pre(dq.fifo[81,1]);
  dq.fifo[80,3] := pre(dq.fifo[80,3]);
  dq.fifo[80,2] := pre(dq.fifo[80,2]);
  dq.fifo[80,1] := pre(dq.fifo[80,1]);
  dq.fifo[79,3] := pre(dq.fifo[79,3]);
  dq.fifo[79,2] := pre(dq.fifo[79,2]);
  dq.fifo[79,1] := pre(dq.fifo[79,1]);
  dq.fifo[78,3] := pre(dq.fifo[78,3]);
  dq.fifo[78,2] := pre(dq.fifo[78,2]);
  dq.fifo[78,1] := pre(dq.fifo[78,1]);
  dq.fifo[77,3] := pre(dq.fifo[77,3]);
  dq.fifo[77,2] := pre(dq.fifo[77,2]);
  dq.fifo[77,1] := pre(dq.fifo[77,1]);
  dq.fifo[76,3] := pre(dq.fifo[76,3]);
  dq.fifo[76,2] := pre(dq.fifo[76,2]);
  dq.fifo[76,1] := pre(dq.fifo[76,1]);
  dq.fifo[75,3] := pre(dq.fifo[75,3]);
  dq.fifo[75,2] := pre(dq.fifo[75,2]);
  dq.fifo[75,1] := pre(dq.fifo[75,1]);
  dq.fifo[74,3] := pre(dq.fifo[74,3]);
  dq.fifo[74,2] := pre(dq.fifo[74,2]);
  dq.fifo[74,1] := pre(dq.fifo[74,1]);
  dq.fifo[73,3] := pre(dq.fifo[73,3]);
  dq.fifo[73,2] := pre(dq.fifo[73,2]);
  dq.fifo[73,1] := pre(dq.fifo[73,1]);
  dq.fifo[72,3] := pre(dq.fifo[72,3]);
  dq.fifo[72,2] := pre(dq.fifo[72,2]);
  dq.fifo[72,1] := pre(dq.fifo[72,1]);
  dq.fifo[71,3] := pre(dq.fifo[71,3]);
  dq.fifo[71,2] := pre(dq.fifo[71,2]);
  dq.fifo[71,1] := pre(dq.fifo[71,1]);
  dq.fifo[70,3] := pre(dq.fifo[70,3]);
  dq.fifo[70,2] := pre(dq.fifo[70,2]);
  dq.fifo[70,1] := pre(dq.fifo[70,1]);
  dq.fifo[69,3] := pre(dq.fifo[69,3]);
  dq.fifo[69,2] := pre(dq.fifo[69,2]);
  dq.fifo[69,1] := pre(dq.fifo[69,1]);
  dq.fifo[68,3] := pre(dq.fifo[68,3]);
  dq.fifo[68,2] := pre(dq.fifo[68,2]);
  dq.fifo[68,1] := pre(dq.fifo[68,1]);
  dq.fifo[67,3] := pre(dq.fifo[67,3]);
  dq.fifo[67,2] := pre(dq.fifo[67,2]);
  dq.fifo[67,1] := pre(dq.fifo[67,1]);
  dq.fifo[66,3] := pre(dq.fifo[66,3]);
  dq.fifo[66,2] := pre(dq.fifo[66,2]);
  dq.fifo[66,1] := pre(dq.fifo[66,1]);
  dq.fifo[65,3] := pre(dq.fifo[65,3]);
  dq.fifo[65,2] := pre(dq.fifo[65,2]);
  dq.fifo[65,1] := pre(dq.fifo[65,1]);
  dq.fifo[64,3] := pre(dq.fifo[64,3]);
  dq.fifo[64,2] := pre(dq.fifo[64,2]);
  dq.fifo[64,1] := pre(dq.fifo[64,1]);
  dq.fifo[63,3] := pre(dq.fifo[63,3]);
  dq.fifo[63,2] := pre(dq.fifo[63,2]);
  dq.fifo[63,1] := pre(dq.fifo[63,1]);
  dq.fifo[62,3] := pre(dq.fifo[62,3]);
  dq.fifo[62,2] := pre(dq.fifo[62,2]);
  dq.fifo[62,1] := pre(dq.fifo[62,1]);
  dq.fifo[61,3] := pre(dq.fifo[61,3]);
  dq.fifo[61,2] := pre(dq.fifo[61,2]);
  dq.fifo[61,1] := pre(dq.fifo[61,1]);
  dq.fifo[60,3] := pre(dq.fifo[60,3]);
  dq.fifo[60,2] := pre(dq.fifo[60,2]);
  dq.fifo[60,1] := pre(dq.fifo[60,1]);
  dq.fifo[59,3] := pre(dq.fifo[59,3]);
  dq.fifo[59,2] := pre(dq.fifo[59,2]);
  dq.fifo[59,1] := pre(dq.fifo[59,1]);
  dq.fifo[58,3] := pre(dq.fifo[58,3]);
  dq.fifo[58,2] := pre(dq.fifo[58,2]);
  dq.fifo[58,1] := pre(dq.fifo[58,1]);
  dq.fifo[57,3] := pre(dq.fifo[57,3]);
  dq.fifo[57,2] := pre(dq.fifo[57,2]);
  dq.fifo[57,1] := pre(dq.fifo[57,1]);
  dq.fifo[56,3] := pre(dq.fifo[56,3]);
  dq.fifo[56,2] := pre(dq.fifo[56,2]);
  dq.fifo[56,1] := pre(dq.fifo[56,1]);
  dq.fifo[55,3] := pre(dq.fifo[55,3]);
  dq.fifo[55,2] := pre(dq.fifo[55,2]);
  dq.fifo[55,1] := pre(dq.fifo[55,1]);
  dq.fifo[54,3] := pre(dq.fifo[54,3]);
  dq.fifo[54,2] := pre(dq.fifo[54,2]);
  dq.fifo[54,1] := pre(dq.fifo[54,1]);
  dq.fifo[53,3] := pre(dq.fifo[53,3]);
  dq.fifo[53,2] := pre(dq.fifo[53,2]);
  dq.fifo[53,1] := pre(dq.fifo[53,1]);
  dq.fifo[52,3] := pre(dq.fifo[52,3]);
  dq.fifo[52,2] := pre(dq.fifo[52,2]);
  dq.fifo[52,1] := pre(dq.fifo[52,1]);
  dq.fifo[51,3] := pre(dq.fifo[51,3]);
  dq.fifo[51,2] := pre(dq.fifo[51,2]);
  dq.fifo[51,1] := pre(dq.fifo[51,1]);
  dq.fifo[50,3] := pre(dq.fifo[50,3]);
  dq.fifo[50,2] := pre(dq.fifo[50,2]);
  dq.fifo[50,1] := pre(dq.fifo[50,1]);
  dq.fifo[49,3] := pre(dq.fifo[49,3]);
  dq.fifo[49,2] := pre(dq.fifo[49,2]);
  dq.fifo[49,1] := pre(dq.fifo[49,1]);
  dq.fifo[48,3] := pre(dq.fifo[48,3]);
  dq.fifo[48,2] := pre(dq.fifo[48,2]);
  dq.fifo[48,1] := pre(dq.fifo[48,1]);
  dq.fifo[47,3] := pre(dq.fifo[47,3]);
  dq.fifo[47,2] := pre(dq.fifo[47,2]);
  dq.fifo[47,1] := pre(dq.fifo[47,1]);
  dq.fifo[46,3] := pre(dq.fifo[46,3]);
  dq.fifo[46,2] := pre(dq.fifo[46,2]);
  dq.fifo[46,1] := pre(dq.fifo[46,1]);
  dq.fifo[45,3] := pre(dq.fifo[45,3]);
  dq.fifo[45,2] := pre(dq.fifo[45,2]);
  dq.fifo[45,1] := pre(dq.fifo[45,1]);
  dq.fifo[44,3] := pre(dq.fifo[44,3]);
  dq.fifo[44,2] := pre(dq.fifo[44,2]);
  dq.fifo[44,1] := pre(dq.fifo[44,1]);
  dq.fifo[43,3] := pre(dq.fifo[43,3]);
  dq.fifo[43,2] := pre(dq.fifo[43,2]);
  dq.fifo[43,1] := pre(dq.fifo[43,1]);
  dq.fifo[42,3] := pre(dq.fifo[42,3]);
  dq.fifo[42,2] := pre(dq.fifo[42,2]);
  dq.fifo[42,1] := pre(dq.fifo[42,1]);
  dq.fifo[41,3] := pre(dq.fifo[41,3]);
  dq.fifo[41,2] := pre(dq.fifo[41,2]);
  dq.fifo[41,1] := pre(dq.fifo[41,1]);
  dq.fifo[40,3] := pre(dq.fifo[40,3]);
  dq.fifo[40,2] := pre(dq.fifo[40,2]);
  dq.fifo[40,1] := pre(dq.fifo[40,1]);
  dq.fifo[39,3] := pre(dq.fifo[39,3]);
  dq.fifo[39,2] := pre(dq.fifo[39,2]);
  dq.fifo[39,1] := pre(dq.fifo[39,1]);
  dq.fifo[38,3] := pre(dq.fifo[38,3]);
  dq.fifo[38,2] := pre(dq.fifo[38,2]);
  dq.fifo[38,1] := pre(dq.fifo[38,1]);
  dq.fifo[37,3] := pre(dq.fifo[37,3]);
  dq.fifo[37,2] := pre(dq.fifo[37,2]);
  dq.fifo[37,1] := pre(dq.fifo[37,1]);
  dq.fifo[36,3] := pre(dq.fifo[36,3]);
  dq.fifo[36,2] := pre(dq.fifo[36,2]);
  dq.fifo[36,1] := pre(dq.fifo[36,1]);
  dq.fifo[35,3] := pre(dq.fifo[35,3]);
  dq.fifo[35,2] := pre(dq.fifo[35,2]);
  dq.fifo[35,1] := pre(dq.fifo[35,1]);
  dq.fifo[34,3] := pre(dq.fifo[34,3]);
  dq.fifo[34,2] := pre(dq.fifo[34,2]);
  dq.fifo[34,1] := pre(dq.fifo[34,1]);
  dq.fifo[33,3] := pre(dq.fifo[33,3]);
  dq.fifo[33,2] := pre(dq.fifo[33,2]);
  dq.fifo[33,1] := pre(dq.fifo[33,1]);
  dq.fifo[32,3] := pre(dq.fifo[32,3]);
  dq.fifo[32,2] := pre(dq.fifo[32,2]);
  dq.fifo[32,1] := pre(dq.fifo[32,1]);
  dq.fifo[31,3] := pre(dq.fifo[31,3]);
  dq.fifo[31,2] := pre(dq.fifo[31,2]);
  dq.fifo[31,1] := pre(dq.fifo[31,1]);
  dq.fifo[30,3] := pre(dq.fifo[30,3]);
  dq.fifo[30,2] := pre(dq.fifo[30,2]);
  dq.fifo[30,1] := pre(dq.fifo[30,1]);
  dq.fifo[29,3] := pre(dq.fifo[29,3]);
  dq.fifo[29,2] := pre(dq.fifo[29,2]);
  dq.fifo[29,1] := pre(dq.fifo[29,1]);
  dq.fifo[28,3] := pre(dq.fifo[28,3]);
  dq.fifo[28,2] := pre(dq.fifo[28,2]);
  dq.fifo[28,1] := pre(dq.fifo[28,1]);
  dq.fifo[27,3] := pre(dq.fifo[27,3]);
  dq.fifo[27,2] := pre(dq.fifo[27,2]);
  dq.fifo[27,1] := pre(dq.fifo[27,1]);
  dq.fifo[26,3] := pre(dq.fifo[26,3]);
  dq.fifo[26,2] := pre(dq.fifo[26,2]);
  dq.fifo[26,1] := pre(dq.fifo[26,1]);
  dq.fifo[25,3] := pre(dq.fifo[25,3]);
  dq.fifo[25,2] := pre(dq.fifo[25,2]);
  dq.fifo[25,1] := pre(dq.fifo[25,1]);
  dq.fifo[24,3] := pre(dq.fifo[24,3]);
  dq.fifo[24,2] := pre(dq.fifo[24,2]);
  dq.fifo[24,1] := pre(dq.fifo[24,1]);
  dq.fifo[23,3] := pre(dq.fifo[23,3]);
  dq.fifo[23,2] := pre(dq.fifo[23,2]);
  dq.fifo[23,1] := pre(dq.fifo[23,1]);
  dq.fifo[22,3] := pre(dq.fifo[22,3]);
  dq.fifo[22,2] := pre(dq.fifo[22,2]);
  dq.fifo[22,1] := pre(dq.fifo[22,1]);
  dq.fifo[21,3] := pre(dq.fifo[21,3]);
  dq.fifo[21,2] := pre(dq.fifo[21,2]);
  dq.fifo[21,1] := pre(dq.fifo[21,1]);
  dq.fifo[20,3] := pre(dq.fifo[20,3]);
  dq.fifo[20,2] := pre(dq.fifo[20,2]);
  dq.fifo[20,1] := pre(dq.fifo[20,1]);
  dq.fifo[19,3] := pre(dq.fifo[19,3]);
  dq.fifo[19,2] := pre(dq.fifo[19,2]);
  dq.fifo[19,1] := pre(dq.fifo[19,1]);
  dq.fifo[18,3] := pre(dq.fifo[18,3]);
  dq.fifo[18,2] := pre(dq.fifo[18,2]);
  dq.fifo[18,1] := pre(dq.fifo[18,1]);
  dq.fifo[17,3] := pre(dq.fifo[17,3]);
  dq.fifo[17,2] := pre(dq.fifo[17,2]);
  dq.fifo[17,1] := pre(dq.fifo[17,1]);
  dq.fifo[16,3] := pre(dq.fifo[16,3]);
  dq.fifo[16,2] := pre(dq.fifo[16,2]);
  dq.fifo[16,1] := pre(dq.fifo[16,1]);
  dq.fifo[15,3] := pre(dq.fifo[15,3]);
  dq.fifo[15,2] := pre(dq.fifo[15,2]);
  dq.fifo[15,1] := pre(dq.fifo[15,1]);
  dq.fifo[14,3] := pre(dq.fifo[14,3]);
  dq.fifo[14,2] := pre(dq.fifo[14,2]);
  dq.fifo[14,1] := pre(dq.fifo[14,1]);
  dq.fifo[13,3] := pre(dq.fifo[13,3]);
  dq.fifo[13,2] := pre(dq.fifo[13,2]);
  dq.fifo[13,1] := pre(dq.fifo[13,1]);
  dq.fifo[12,3] := pre(dq.fifo[12,3]);
  dq.fifo[12,2] := pre(dq.fifo[12,2]);
  dq.fifo[12,1] := pre(dq.fifo[12,1]);
  dq.fifo[11,3] := pre(dq.fifo[11,3]);
  dq.fifo[11,2] := pre(dq.fifo[11,2]);
  dq.fifo[11,1] := pre(dq.fifo[11,1]);
  dq.fifo[10,3] := pre(dq.fifo[10,3]);
  dq.fifo[10,2] := pre(dq.fifo[10,2]);
  dq.fifo[10,1] := pre(dq.fifo[10,1]);
  dq.fifo[9,3] := pre(dq.fifo[9,3]);
  dq.fifo[9,2] := pre(dq.fifo[9,2]);
  dq.fifo[9,1] := pre(dq.fifo[9,1]);
  dq.fifo[8,3] := pre(dq.fifo[8,3]);
  dq.fifo[8,2] := pre(dq.fifo[8,2]);
  dq.fifo[8,1] := pre(dq.fifo[8,1]);
  dq.fifo[7,3] := pre(dq.fifo[7,3]);
  dq.fifo[7,2] := pre(dq.fifo[7,2]);
  dq.fifo[7,1] := pre(dq.fifo[7,1]);
  dq.fifo[6,3] := pre(dq.fifo[6,3]);
  dq.fifo[6,2] := pre(dq.fifo[6,2]);
  dq.fifo[6,1] := pre(dq.fifo[6,1]);
  dq.fifo[5,3] := pre(dq.fifo[5,3]);
  dq.fifo[5,2] := pre(dq.fifo[5,2]);
  dq.fifo[5,1] := pre(dq.fifo[5,1]);
  dq.fifo[4,3] := pre(dq.fifo[4,3]);
  dq.fifo[4,2] := pre(dq.fifo[4,2]);
  dq.fifo[4,1] := pre(dq.fifo[4,1]);
  dq.fifo[3,3] := pre(dq.fifo[3,3]);
  dq.fifo[3,2] := pre(dq.fifo[3,2]);
  dq.fifo[3,1] := pre(dq.fifo[3,1]);
  dq.fifo[2,3] := pre(dq.fifo[2,3]);
  dq.fifo[2,2] := pre(dq.fifo[2,2]);
  dq.fifo[2,1] := pre(dq.fifo[2,1]);
  dq.fifo[1,3] := pre(dq.fifo[1,3]);
  dq.fifo[1,2] := pre(dq.fifo[1,2]);
  dq.fifo[1,1] := pre(dq.fifo[1,1]);
  dq.outputdata[3] := pre(dq.outputdata[3]);
  dq.outputdata[2] := pre(dq.outputdata[2]);
  dq.outputdata[1] := pre(dq.outputdata[1]);
  dq.newest := pre(dq.newest);
  dq.oldest := pre(dq.oldest);
  dq.fifosize := pre(dq.fifosize);
  dq.spaceavailable := pre(dq.spaceavailable);
  dq.datavailable := pre(dq.datavailable);
  $whenCondition5 := pre($whenCondition5);
  $whenCondition4 := pre($whenCondition4);
  $whenCondition3 := pre($whenCondition3);
  $whenCondition3 := dq.readsigint and dq.writesigint;
  $whenCondition4 := dq.readsigint and not dq.writesigint and pre(dq.fifosize) >= 1;
  $whenCondition5 := not dq.readsigint and dq.writesigint and pre(dq.fifosize) < 100;
  when false then
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
  elsewhen $whenCondition3 then
    if pre(dq.fifosize) < 100 then
      for j in 1:3 loop
        dq.fifo[pre(dq.newest),j] := dq.inputdata[j];
      end for;
      dq.newest := mod(pre(dq.newest), 100) + 1;
      for j in 1:3 loop
        dq.outputdata[j] := dq.fifo[pre(dq.oldest),j];
      end for;
      dq.oldest := mod(pre(dq.oldest), 100) + 1;
    else
      for j in 1:3 loop
        dq.outputdata[j] := dq.fifo[pre(dq.oldest),j];
      end for;
      dq.oldest := mod(pre(dq.oldest), 100) + 1;
      for j in 1:3 loop
        dq.fifo[pre(dq.newest),j] := dq.inputdata[j];
      end for;
      dq.newest := mod(pre(dq.newest), 100) + 1;
    end if;
  elsewhen $whenCondition4 then
    for j in 1:3 loop
      dq.outputdata[j] := dq.fifo[pre(dq.oldest),j];
    end for;
    dq.fifosize := pre(dq.fifosize) - 1;
    dq.spaceavailable := true;
    dq.datavailable := dq.fifosize >= 1;
    dq.oldest := mod(pre(dq.oldest), 100) + 1;
  elsewhen $whenCondition5 then
    for j in 1:3 loop
      dq.fifo[pre(dq.newest),j] := dq.inputdata[j];
    end for;
    dq.newest := mod(pre(dq.newest), 100) + 1;
    dq.fifosize := pre(dq.fifosize) + 1;
    dq.datavailable := true;
    dq.spaceavailable := dq.fifosize < 100;
    for j in 1:3 loop
      dq.outputdata[j] := dq.fifo[pre(dq.oldest),j];
    end for;
  end when;
*/
void System_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_integer tmp19;
  modelica_integer tmp20;
  modelica_integer tmp21;
  modelica_integer tmp22;
  modelica_integer tmp23;
  modelica_boolean tmp24;
  modelica_integer tmp25;
  modelica_integer tmp26;
  modelica_integer tmp27;
  modelica_integer tmp28;
  modelica_integer tmp29;
  modelica_integer tmp30;
  modelica_integer tmp31;
  modelica_integer tmp32;
  modelica_integer tmp33;
  modelica_integer tmp34;
  modelica_integer tmp35;
  modelica_integer tmp36;
  modelica_integer tmp37;
  modelica_integer tmp38;
  modelica_integer tmp39;
  modelica_integer tmp40;
  modelica_integer tmp41;
  modelica_integer tmp42;
  modelica_integer tmp43;
  modelica_boolean tmp44;
  modelica_integer tmp45;
  modelica_integer tmp46;
  modelica_integer tmp47;
  modelica_integer tmp48;
  modelica_integer tmp49;
  modelica_boolean tmp50;
  modelica_integer tmp51;
  modelica_integer tmp52;
  modelica_integer tmp53;
  (data->localData[0]->integerVars[299]/* dq.fifo[100,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[299]/* dq.fifo[100,3] DISCRETE */) ;

  (data->localData[0]->integerVars[298]/* dq.fifo[100,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[298]/* dq.fifo[100,2] DISCRETE */) ;

  (data->localData[0]->integerVars[297]/* dq.fifo[100,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[297]/* dq.fifo[100,1] DISCRETE */) ;

  (data->localData[0]->integerVars[296]/* dq.fifo[99,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[296]/* dq.fifo[99,3] DISCRETE */) ;

  (data->localData[0]->integerVars[295]/* dq.fifo[99,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[295]/* dq.fifo[99,2] DISCRETE */) ;

  (data->localData[0]->integerVars[294]/* dq.fifo[99,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[294]/* dq.fifo[99,1] DISCRETE */) ;

  (data->localData[0]->integerVars[293]/* dq.fifo[98,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[293]/* dq.fifo[98,3] DISCRETE */) ;

  (data->localData[0]->integerVars[292]/* dq.fifo[98,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[292]/* dq.fifo[98,2] DISCRETE */) ;

  (data->localData[0]->integerVars[291]/* dq.fifo[98,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[291]/* dq.fifo[98,1] DISCRETE */) ;

  (data->localData[0]->integerVars[290]/* dq.fifo[97,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[290]/* dq.fifo[97,3] DISCRETE */) ;

  (data->localData[0]->integerVars[289]/* dq.fifo[97,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[289]/* dq.fifo[97,2] DISCRETE */) ;

  (data->localData[0]->integerVars[288]/* dq.fifo[97,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[288]/* dq.fifo[97,1] DISCRETE */) ;

  (data->localData[0]->integerVars[287]/* dq.fifo[96,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[287]/* dq.fifo[96,3] DISCRETE */) ;

  (data->localData[0]->integerVars[286]/* dq.fifo[96,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[286]/* dq.fifo[96,2] DISCRETE */) ;

  (data->localData[0]->integerVars[285]/* dq.fifo[96,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[285]/* dq.fifo[96,1] DISCRETE */) ;

  (data->localData[0]->integerVars[284]/* dq.fifo[95,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[284]/* dq.fifo[95,3] DISCRETE */) ;

  (data->localData[0]->integerVars[283]/* dq.fifo[95,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[283]/* dq.fifo[95,2] DISCRETE */) ;

  (data->localData[0]->integerVars[282]/* dq.fifo[95,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[282]/* dq.fifo[95,1] DISCRETE */) ;

  (data->localData[0]->integerVars[281]/* dq.fifo[94,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[281]/* dq.fifo[94,3] DISCRETE */) ;

  (data->localData[0]->integerVars[280]/* dq.fifo[94,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[280]/* dq.fifo[94,2] DISCRETE */) ;

  (data->localData[0]->integerVars[279]/* dq.fifo[94,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[279]/* dq.fifo[94,1] DISCRETE */) ;

  (data->localData[0]->integerVars[278]/* dq.fifo[93,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[278]/* dq.fifo[93,3] DISCRETE */) ;

  (data->localData[0]->integerVars[277]/* dq.fifo[93,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[277]/* dq.fifo[93,2] DISCRETE */) ;

  (data->localData[0]->integerVars[276]/* dq.fifo[93,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[276]/* dq.fifo[93,1] DISCRETE */) ;

  (data->localData[0]->integerVars[275]/* dq.fifo[92,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[275]/* dq.fifo[92,3] DISCRETE */) ;

  (data->localData[0]->integerVars[274]/* dq.fifo[92,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[274]/* dq.fifo[92,2] DISCRETE */) ;

  (data->localData[0]->integerVars[273]/* dq.fifo[92,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[273]/* dq.fifo[92,1] DISCRETE */) ;

  (data->localData[0]->integerVars[272]/* dq.fifo[91,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[272]/* dq.fifo[91,3] DISCRETE */) ;

  (data->localData[0]->integerVars[271]/* dq.fifo[91,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[271]/* dq.fifo[91,2] DISCRETE */) ;

  (data->localData[0]->integerVars[270]/* dq.fifo[91,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[270]/* dq.fifo[91,1] DISCRETE */) ;

  (data->localData[0]->integerVars[269]/* dq.fifo[90,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[269]/* dq.fifo[90,3] DISCRETE */) ;

  (data->localData[0]->integerVars[268]/* dq.fifo[90,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[268]/* dq.fifo[90,2] DISCRETE */) ;

  (data->localData[0]->integerVars[267]/* dq.fifo[90,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[267]/* dq.fifo[90,1] DISCRETE */) ;

  (data->localData[0]->integerVars[266]/* dq.fifo[89,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[266]/* dq.fifo[89,3] DISCRETE */) ;

  (data->localData[0]->integerVars[265]/* dq.fifo[89,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[265]/* dq.fifo[89,2] DISCRETE */) ;

  (data->localData[0]->integerVars[264]/* dq.fifo[89,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[264]/* dq.fifo[89,1] DISCRETE */) ;

  (data->localData[0]->integerVars[263]/* dq.fifo[88,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[263]/* dq.fifo[88,3] DISCRETE */) ;

  (data->localData[0]->integerVars[262]/* dq.fifo[88,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[262]/* dq.fifo[88,2] DISCRETE */) ;

  (data->localData[0]->integerVars[261]/* dq.fifo[88,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[261]/* dq.fifo[88,1] DISCRETE */) ;

  (data->localData[0]->integerVars[260]/* dq.fifo[87,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[260]/* dq.fifo[87,3] DISCRETE */) ;

  (data->localData[0]->integerVars[259]/* dq.fifo[87,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[259]/* dq.fifo[87,2] DISCRETE */) ;

  (data->localData[0]->integerVars[258]/* dq.fifo[87,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[258]/* dq.fifo[87,1] DISCRETE */) ;

  (data->localData[0]->integerVars[257]/* dq.fifo[86,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[257]/* dq.fifo[86,3] DISCRETE */) ;

  (data->localData[0]->integerVars[256]/* dq.fifo[86,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[256]/* dq.fifo[86,2] DISCRETE */) ;

  (data->localData[0]->integerVars[255]/* dq.fifo[86,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[255]/* dq.fifo[86,1] DISCRETE */) ;

  (data->localData[0]->integerVars[254]/* dq.fifo[85,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[254]/* dq.fifo[85,3] DISCRETE */) ;

  (data->localData[0]->integerVars[253]/* dq.fifo[85,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[253]/* dq.fifo[85,2] DISCRETE */) ;

  (data->localData[0]->integerVars[252]/* dq.fifo[85,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[252]/* dq.fifo[85,1] DISCRETE */) ;

  (data->localData[0]->integerVars[251]/* dq.fifo[84,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[251]/* dq.fifo[84,3] DISCRETE */) ;

  (data->localData[0]->integerVars[250]/* dq.fifo[84,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[250]/* dq.fifo[84,2] DISCRETE */) ;

  (data->localData[0]->integerVars[249]/* dq.fifo[84,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[249]/* dq.fifo[84,1] DISCRETE */) ;

  (data->localData[0]->integerVars[248]/* dq.fifo[83,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[248]/* dq.fifo[83,3] DISCRETE */) ;

  (data->localData[0]->integerVars[247]/* dq.fifo[83,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[247]/* dq.fifo[83,2] DISCRETE */) ;

  (data->localData[0]->integerVars[246]/* dq.fifo[83,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[246]/* dq.fifo[83,1] DISCRETE */) ;

  (data->localData[0]->integerVars[245]/* dq.fifo[82,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[245]/* dq.fifo[82,3] DISCRETE */) ;

  (data->localData[0]->integerVars[244]/* dq.fifo[82,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[244]/* dq.fifo[82,2] DISCRETE */) ;

  (data->localData[0]->integerVars[243]/* dq.fifo[82,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[243]/* dq.fifo[82,1] DISCRETE */) ;

  (data->localData[0]->integerVars[242]/* dq.fifo[81,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[242]/* dq.fifo[81,3] DISCRETE */) ;

  (data->localData[0]->integerVars[241]/* dq.fifo[81,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[241]/* dq.fifo[81,2] DISCRETE */) ;

  (data->localData[0]->integerVars[240]/* dq.fifo[81,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[240]/* dq.fifo[81,1] DISCRETE */) ;

  (data->localData[0]->integerVars[239]/* dq.fifo[80,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[239]/* dq.fifo[80,3] DISCRETE */) ;

  (data->localData[0]->integerVars[238]/* dq.fifo[80,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[238]/* dq.fifo[80,2] DISCRETE */) ;

  (data->localData[0]->integerVars[237]/* dq.fifo[80,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[237]/* dq.fifo[80,1] DISCRETE */) ;

  (data->localData[0]->integerVars[236]/* dq.fifo[79,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[236]/* dq.fifo[79,3] DISCRETE */) ;

  (data->localData[0]->integerVars[235]/* dq.fifo[79,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[235]/* dq.fifo[79,2] DISCRETE */) ;

  (data->localData[0]->integerVars[234]/* dq.fifo[79,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[234]/* dq.fifo[79,1] DISCRETE */) ;

  (data->localData[0]->integerVars[233]/* dq.fifo[78,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[233]/* dq.fifo[78,3] DISCRETE */) ;

  (data->localData[0]->integerVars[232]/* dq.fifo[78,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[232]/* dq.fifo[78,2] DISCRETE */) ;

  (data->localData[0]->integerVars[231]/* dq.fifo[78,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[231]/* dq.fifo[78,1] DISCRETE */) ;

  (data->localData[0]->integerVars[230]/* dq.fifo[77,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[230]/* dq.fifo[77,3] DISCRETE */) ;

  (data->localData[0]->integerVars[229]/* dq.fifo[77,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[229]/* dq.fifo[77,2] DISCRETE */) ;

  (data->localData[0]->integerVars[228]/* dq.fifo[77,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[228]/* dq.fifo[77,1] DISCRETE */) ;

  (data->localData[0]->integerVars[227]/* dq.fifo[76,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[227]/* dq.fifo[76,3] DISCRETE */) ;

  (data->localData[0]->integerVars[226]/* dq.fifo[76,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[226]/* dq.fifo[76,2] DISCRETE */) ;

  (data->localData[0]->integerVars[225]/* dq.fifo[76,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[225]/* dq.fifo[76,1] DISCRETE */) ;

  (data->localData[0]->integerVars[224]/* dq.fifo[75,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[224]/* dq.fifo[75,3] DISCRETE */) ;

  (data->localData[0]->integerVars[223]/* dq.fifo[75,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[223]/* dq.fifo[75,2] DISCRETE */) ;

  (data->localData[0]->integerVars[222]/* dq.fifo[75,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[222]/* dq.fifo[75,1] DISCRETE */) ;

  (data->localData[0]->integerVars[221]/* dq.fifo[74,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[221]/* dq.fifo[74,3] DISCRETE */) ;

  (data->localData[0]->integerVars[220]/* dq.fifo[74,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[220]/* dq.fifo[74,2] DISCRETE */) ;

  (data->localData[0]->integerVars[219]/* dq.fifo[74,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[219]/* dq.fifo[74,1] DISCRETE */) ;

  (data->localData[0]->integerVars[218]/* dq.fifo[73,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[218]/* dq.fifo[73,3] DISCRETE */) ;

  (data->localData[0]->integerVars[217]/* dq.fifo[73,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[217]/* dq.fifo[73,2] DISCRETE */) ;

  (data->localData[0]->integerVars[216]/* dq.fifo[73,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[216]/* dq.fifo[73,1] DISCRETE */) ;

  (data->localData[0]->integerVars[215]/* dq.fifo[72,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[215]/* dq.fifo[72,3] DISCRETE */) ;

  (data->localData[0]->integerVars[214]/* dq.fifo[72,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[214]/* dq.fifo[72,2] DISCRETE */) ;

  (data->localData[0]->integerVars[213]/* dq.fifo[72,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[213]/* dq.fifo[72,1] DISCRETE */) ;

  (data->localData[0]->integerVars[212]/* dq.fifo[71,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[212]/* dq.fifo[71,3] DISCRETE */) ;

  (data->localData[0]->integerVars[211]/* dq.fifo[71,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[211]/* dq.fifo[71,2] DISCRETE */) ;

  (data->localData[0]->integerVars[210]/* dq.fifo[71,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[210]/* dq.fifo[71,1] DISCRETE */) ;

  (data->localData[0]->integerVars[209]/* dq.fifo[70,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[209]/* dq.fifo[70,3] DISCRETE */) ;

  (data->localData[0]->integerVars[208]/* dq.fifo[70,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[208]/* dq.fifo[70,2] DISCRETE */) ;

  (data->localData[0]->integerVars[207]/* dq.fifo[70,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[207]/* dq.fifo[70,1] DISCRETE */) ;

  (data->localData[0]->integerVars[206]/* dq.fifo[69,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[206]/* dq.fifo[69,3] DISCRETE */) ;

  (data->localData[0]->integerVars[205]/* dq.fifo[69,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[205]/* dq.fifo[69,2] DISCRETE */) ;

  (data->localData[0]->integerVars[204]/* dq.fifo[69,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[204]/* dq.fifo[69,1] DISCRETE */) ;

  (data->localData[0]->integerVars[203]/* dq.fifo[68,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[203]/* dq.fifo[68,3] DISCRETE */) ;

  (data->localData[0]->integerVars[202]/* dq.fifo[68,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[202]/* dq.fifo[68,2] DISCRETE */) ;

  (data->localData[0]->integerVars[201]/* dq.fifo[68,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[201]/* dq.fifo[68,1] DISCRETE */) ;

  (data->localData[0]->integerVars[200]/* dq.fifo[67,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[200]/* dq.fifo[67,3] DISCRETE */) ;

  (data->localData[0]->integerVars[199]/* dq.fifo[67,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[199]/* dq.fifo[67,2] DISCRETE */) ;

  (data->localData[0]->integerVars[198]/* dq.fifo[67,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[198]/* dq.fifo[67,1] DISCRETE */) ;

  (data->localData[0]->integerVars[197]/* dq.fifo[66,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[197]/* dq.fifo[66,3] DISCRETE */) ;

  (data->localData[0]->integerVars[196]/* dq.fifo[66,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[196]/* dq.fifo[66,2] DISCRETE */) ;

  (data->localData[0]->integerVars[195]/* dq.fifo[66,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[195]/* dq.fifo[66,1] DISCRETE */) ;

  (data->localData[0]->integerVars[194]/* dq.fifo[65,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[194]/* dq.fifo[65,3] DISCRETE */) ;

  (data->localData[0]->integerVars[193]/* dq.fifo[65,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[193]/* dq.fifo[65,2] DISCRETE */) ;

  (data->localData[0]->integerVars[192]/* dq.fifo[65,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[192]/* dq.fifo[65,1] DISCRETE */) ;

  (data->localData[0]->integerVars[191]/* dq.fifo[64,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[191]/* dq.fifo[64,3] DISCRETE */) ;

  (data->localData[0]->integerVars[190]/* dq.fifo[64,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[190]/* dq.fifo[64,2] DISCRETE */) ;

  (data->localData[0]->integerVars[189]/* dq.fifo[64,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[189]/* dq.fifo[64,1] DISCRETE */) ;

  (data->localData[0]->integerVars[188]/* dq.fifo[63,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[188]/* dq.fifo[63,3] DISCRETE */) ;

  (data->localData[0]->integerVars[187]/* dq.fifo[63,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[187]/* dq.fifo[63,2] DISCRETE */) ;

  (data->localData[0]->integerVars[186]/* dq.fifo[63,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[186]/* dq.fifo[63,1] DISCRETE */) ;

  (data->localData[0]->integerVars[185]/* dq.fifo[62,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[185]/* dq.fifo[62,3] DISCRETE */) ;

  (data->localData[0]->integerVars[184]/* dq.fifo[62,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[184]/* dq.fifo[62,2] DISCRETE */) ;

  (data->localData[0]->integerVars[183]/* dq.fifo[62,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[183]/* dq.fifo[62,1] DISCRETE */) ;

  (data->localData[0]->integerVars[182]/* dq.fifo[61,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[182]/* dq.fifo[61,3] DISCRETE */) ;

  (data->localData[0]->integerVars[181]/* dq.fifo[61,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[181]/* dq.fifo[61,2] DISCRETE */) ;

  (data->localData[0]->integerVars[180]/* dq.fifo[61,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[180]/* dq.fifo[61,1] DISCRETE */) ;

  (data->localData[0]->integerVars[179]/* dq.fifo[60,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[179]/* dq.fifo[60,3] DISCRETE */) ;

  (data->localData[0]->integerVars[178]/* dq.fifo[60,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[178]/* dq.fifo[60,2] DISCRETE */) ;

  (data->localData[0]->integerVars[177]/* dq.fifo[60,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[177]/* dq.fifo[60,1] DISCRETE */) ;

  (data->localData[0]->integerVars[176]/* dq.fifo[59,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[176]/* dq.fifo[59,3] DISCRETE */) ;

  (data->localData[0]->integerVars[175]/* dq.fifo[59,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[175]/* dq.fifo[59,2] DISCRETE */) ;

  (data->localData[0]->integerVars[174]/* dq.fifo[59,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[174]/* dq.fifo[59,1] DISCRETE */) ;

  (data->localData[0]->integerVars[173]/* dq.fifo[58,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[173]/* dq.fifo[58,3] DISCRETE */) ;

  (data->localData[0]->integerVars[172]/* dq.fifo[58,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[172]/* dq.fifo[58,2] DISCRETE */) ;

  (data->localData[0]->integerVars[171]/* dq.fifo[58,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[171]/* dq.fifo[58,1] DISCRETE */) ;

  (data->localData[0]->integerVars[170]/* dq.fifo[57,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[170]/* dq.fifo[57,3] DISCRETE */) ;

  (data->localData[0]->integerVars[169]/* dq.fifo[57,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[169]/* dq.fifo[57,2] DISCRETE */) ;

  (data->localData[0]->integerVars[168]/* dq.fifo[57,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[168]/* dq.fifo[57,1] DISCRETE */) ;

  (data->localData[0]->integerVars[167]/* dq.fifo[56,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[167]/* dq.fifo[56,3] DISCRETE */) ;

  (data->localData[0]->integerVars[166]/* dq.fifo[56,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[166]/* dq.fifo[56,2] DISCRETE */) ;

  (data->localData[0]->integerVars[165]/* dq.fifo[56,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[165]/* dq.fifo[56,1] DISCRETE */) ;

  (data->localData[0]->integerVars[164]/* dq.fifo[55,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[164]/* dq.fifo[55,3] DISCRETE */) ;

  (data->localData[0]->integerVars[163]/* dq.fifo[55,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[163]/* dq.fifo[55,2] DISCRETE */) ;

  (data->localData[0]->integerVars[162]/* dq.fifo[55,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[162]/* dq.fifo[55,1] DISCRETE */) ;

  (data->localData[0]->integerVars[161]/* dq.fifo[54,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[161]/* dq.fifo[54,3] DISCRETE */) ;

  (data->localData[0]->integerVars[160]/* dq.fifo[54,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[160]/* dq.fifo[54,2] DISCRETE */) ;

  (data->localData[0]->integerVars[159]/* dq.fifo[54,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[159]/* dq.fifo[54,1] DISCRETE */) ;

  (data->localData[0]->integerVars[158]/* dq.fifo[53,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[158]/* dq.fifo[53,3] DISCRETE */) ;

  (data->localData[0]->integerVars[157]/* dq.fifo[53,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[157]/* dq.fifo[53,2] DISCRETE */) ;

  (data->localData[0]->integerVars[156]/* dq.fifo[53,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[156]/* dq.fifo[53,1] DISCRETE */) ;

  (data->localData[0]->integerVars[155]/* dq.fifo[52,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[155]/* dq.fifo[52,3] DISCRETE */) ;

  (data->localData[0]->integerVars[154]/* dq.fifo[52,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[154]/* dq.fifo[52,2] DISCRETE */) ;

  (data->localData[0]->integerVars[153]/* dq.fifo[52,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[153]/* dq.fifo[52,1] DISCRETE */) ;

  (data->localData[0]->integerVars[152]/* dq.fifo[51,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[152]/* dq.fifo[51,3] DISCRETE */) ;

  (data->localData[0]->integerVars[151]/* dq.fifo[51,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[151]/* dq.fifo[51,2] DISCRETE */) ;

  (data->localData[0]->integerVars[150]/* dq.fifo[51,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[150]/* dq.fifo[51,1] DISCRETE */) ;

  (data->localData[0]->integerVars[149]/* dq.fifo[50,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[149]/* dq.fifo[50,3] DISCRETE */) ;

  (data->localData[0]->integerVars[148]/* dq.fifo[50,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[148]/* dq.fifo[50,2] DISCRETE */) ;

  (data->localData[0]->integerVars[147]/* dq.fifo[50,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[147]/* dq.fifo[50,1] DISCRETE */) ;

  (data->localData[0]->integerVars[146]/* dq.fifo[49,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[146]/* dq.fifo[49,3] DISCRETE */) ;

  (data->localData[0]->integerVars[145]/* dq.fifo[49,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[145]/* dq.fifo[49,2] DISCRETE */) ;

  (data->localData[0]->integerVars[144]/* dq.fifo[49,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[144]/* dq.fifo[49,1] DISCRETE */) ;

  (data->localData[0]->integerVars[143]/* dq.fifo[48,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[143]/* dq.fifo[48,3] DISCRETE */) ;

  (data->localData[0]->integerVars[142]/* dq.fifo[48,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[142]/* dq.fifo[48,2] DISCRETE */) ;

  (data->localData[0]->integerVars[141]/* dq.fifo[48,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[141]/* dq.fifo[48,1] DISCRETE */) ;

  (data->localData[0]->integerVars[140]/* dq.fifo[47,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[140]/* dq.fifo[47,3] DISCRETE */) ;

  (data->localData[0]->integerVars[139]/* dq.fifo[47,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[139]/* dq.fifo[47,2] DISCRETE */) ;

  (data->localData[0]->integerVars[138]/* dq.fifo[47,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[138]/* dq.fifo[47,1] DISCRETE */) ;

  (data->localData[0]->integerVars[137]/* dq.fifo[46,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[137]/* dq.fifo[46,3] DISCRETE */) ;

  (data->localData[0]->integerVars[136]/* dq.fifo[46,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[136]/* dq.fifo[46,2] DISCRETE */) ;

  (data->localData[0]->integerVars[135]/* dq.fifo[46,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[135]/* dq.fifo[46,1] DISCRETE */) ;

  (data->localData[0]->integerVars[134]/* dq.fifo[45,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[134]/* dq.fifo[45,3] DISCRETE */) ;

  (data->localData[0]->integerVars[133]/* dq.fifo[45,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[133]/* dq.fifo[45,2] DISCRETE */) ;

  (data->localData[0]->integerVars[132]/* dq.fifo[45,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[132]/* dq.fifo[45,1] DISCRETE */) ;

  (data->localData[0]->integerVars[131]/* dq.fifo[44,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[131]/* dq.fifo[44,3] DISCRETE */) ;

  (data->localData[0]->integerVars[130]/* dq.fifo[44,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[130]/* dq.fifo[44,2] DISCRETE */) ;

  (data->localData[0]->integerVars[129]/* dq.fifo[44,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[129]/* dq.fifo[44,1] DISCRETE */) ;

  (data->localData[0]->integerVars[128]/* dq.fifo[43,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[128]/* dq.fifo[43,3] DISCRETE */) ;

  (data->localData[0]->integerVars[127]/* dq.fifo[43,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[127]/* dq.fifo[43,2] DISCRETE */) ;

  (data->localData[0]->integerVars[126]/* dq.fifo[43,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[126]/* dq.fifo[43,1] DISCRETE */) ;

  (data->localData[0]->integerVars[125]/* dq.fifo[42,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[125]/* dq.fifo[42,3] DISCRETE */) ;

  (data->localData[0]->integerVars[124]/* dq.fifo[42,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[124]/* dq.fifo[42,2] DISCRETE */) ;

  (data->localData[0]->integerVars[123]/* dq.fifo[42,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[123]/* dq.fifo[42,1] DISCRETE */) ;

  (data->localData[0]->integerVars[122]/* dq.fifo[41,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[122]/* dq.fifo[41,3] DISCRETE */) ;

  (data->localData[0]->integerVars[121]/* dq.fifo[41,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[121]/* dq.fifo[41,2] DISCRETE */) ;

  (data->localData[0]->integerVars[120]/* dq.fifo[41,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[120]/* dq.fifo[41,1] DISCRETE */) ;

  (data->localData[0]->integerVars[119]/* dq.fifo[40,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[119]/* dq.fifo[40,3] DISCRETE */) ;

  (data->localData[0]->integerVars[118]/* dq.fifo[40,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[118]/* dq.fifo[40,2] DISCRETE */) ;

  (data->localData[0]->integerVars[117]/* dq.fifo[40,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[117]/* dq.fifo[40,1] DISCRETE */) ;

  (data->localData[0]->integerVars[116]/* dq.fifo[39,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[116]/* dq.fifo[39,3] DISCRETE */) ;

  (data->localData[0]->integerVars[115]/* dq.fifo[39,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[115]/* dq.fifo[39,2] DISCRETE */) ;

  (data->localData[0]->integerVars[114]/* dq.fifo[39,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[114]/* dq.fifo[39,1] DISCRETE */) ;

  (data->localData[0]->integerVars[113]/* dq.fifo[38,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[113]/* dq.fifo[38,3] DISCRETE */) ;

  (data->localData[0]->integerVars[112]/* dq.fifo[38,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[112]/* dq.fifo[38,2] DISCRETE */) ;

  (data->localData[0]->integerVars[111]/* dq.fifo[38,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[111]/* dq.fifo[38,1] DISCRETE */) ;

  (data->localData[0]->integerVars[110]/* dq.fifo[37,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[110]/* dq.fifo[37,3] DISCRETE */) ;

  (data->localData[0]->integerVars[109]/* dq.fifo[37,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[109]/* dq.fifo[37,2] DISCRETE */) ;

  (data->localData[0]->integerVars[108]/* dq.fifo[37,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[108]/* dq.fifo[37,1] DISCRETE */) ;

  (data->localData[0]->integerVars[107]/* dq.fifo[36,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[107]/* dq.fifo[36,3] DISCRETE */) ;

  (data->localData[0]->integerVars[106]/* dq.fifo[36,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[106]/* dq.fifo[36,2] DISCRETE */) ;

  (data->localData[0]->integerVars[105]/* dq.fifo[36,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[105]/* dq.fifo[36,1] DISCRETE */) ;

  (data->localData[0]->integerVars[104]/* dq.fifo[35,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[104]/* dq.fifo[35,3] DISCRETE */) ;

  (data->localData[0]->integerVars[103]/* dq.fifo[35,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[103]/* dq.fifo[35,2] DISCRETE */) ;

  (data->localData[0]->integerVars[102]/* dq.fifo[35,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[102]/* dq.fifo[35,1] DISCRETE */) ;

  (data->localData[0]->integerVars[101]/* dq.fifo[34,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[101]/* dq.fifo[34,3] DISCRETE */) ;

  (data->localData[0]->integerVars[100]/* dq.fifo[34,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[100]/* dq.fifo[34,2] DISCRETE */) ;

  (data->localData[0]->integerVars[99]/* dq.fifo[34,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[99]/* dq.fifo[34,1] DISCRETE */) ;

  (data->localData[0]->integerVars[98]/* dq.fifo[33,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[98]/* dq.fifo[33,3] DISCRETE */) ;

  (data->localData[0]->integerVars[97]/* dq.fifo[33,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[97]/* dq.fifo[33,2] DISCRETE */) ;

  (data->localData[0]->integerVars[96]/* dq.fifo[33,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[96]/* dq.fifo[33,1] DISCRETE */) ;

  (data->localData[0]->integerVars[95]/* dq.fifo[32,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[95]/* dq.fifo[32,3] DISCRETE */) ;

  (data->localData[0]->integerVars[94]/* dq.fifo[32,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[94]/* dq.fifo[32,2] DISCRETE */) ;

  (data->localData[0]->integerVars[93]/* dq.fifo[32,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[93]/* dq.fifo[32,1] DISCRETE */) ;

  (data->localData[0]->integerVars[92]/* dq.fifo[31,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[92]/* dq.fifo[31,3] DISCRETE */) ;

  (data->localData[0]->integerVars[91]/* dq.fifo[31,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[91]/* dq.fifo[31,2] DISCRETE */) ;

  (data->localData[0]->integerVars[90]/* dq.fifo[31,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[90]/* dq.fifo[31,1] DISCRETE */) ;

  (data->localData[0]->integerVars[89]/* dq.fifo[30,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[89]/* dq.fifo[30,3] DISCRETE */) ;

  (data->localData[0]->integerVars[88]/* dq.fifo[30,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[88]/* dq.fifo[30,2] DISCRETE */) ;

  (data->localData[0]->integerVars[87]/* dq.fifo[30,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[87]/* dq.fifo[30,1] DISCRETE */) ;

  (data->localData[0]->integerVars[86]/* dq.fifo[29,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[86]/* dq.fifo[29,3] DISCRETE */) ;

  (data->localData[0]->integerVars[85]/* dq.fifo[29,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[85]/* dq.fifo[29,2] DISCRETE */) ;

  (data->localData[0]->integerVars[84]/* dq.fifo[29,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[84]/* dq.fifo[29,1] DISCRETE */) ;

  (data->localData[0]->integerVars[83]/* dq.fifo[28,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[83]/* dq.fifo[28,3] DISCRETE */) ;

  (data->localData[0]->integerVars[82]/* dq.fifo[28,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[82]/* dq.fifo[28,2] DISCRETE */) ;

  (data->localData[0]->integerVars[81]/* dq.fifo[28,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[81]/* dq.fifo[28,1] DISCRETE */) ;

  (data->localData[0]->integerVars[80]/* dq.fifo[27,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[80]/* dq.fifo[27,3] DISCRETE */) ;

  (data->localData[0]->integerVars[79]/* dq.fifo[27,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[79]/* dq.fifo[27,2] DISCRETE */) ;

  (data->localData[0]->integerVars[78]/* dq.fifo[27,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[78]/* dq.fifo[27,1] DISCRETE */) ;

  (data->localData[0]->integerVars[77]/* dq.fifo[26,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[77]/* dq.fifo[26,3] DISCRETE */) ;

  (data->localData[0]->integerVars[76]/* dq.fifo[26,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[76]/* dq.fifo[26,2] DISCRETE */) ;

  (data->localData[0]->integerVars[75]/* dq.fifo[26,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[75]/* dq.fifo[26,1] DISCRETE */) ;

  (data->localData[0]->integerVars[74]/* dq.fifo[25,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[74]/* dq.fifo[25,3] DISCRETE */) ;

  (data->localData[0]->integerVars[73]/* dq.fifo[25,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[73]/* dq.fifo[25,2] DISCRETE */) ;

  (data->localData[0]->integerVars[72]/* dq.fifo[25,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[72]/* dq.fifo[25,1] DISCRETE */) ;

  (data->localData[0]->integerVars[71]/* dq.fifo[24,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[71]/* dq.fifo[24,3] DISCRETE */) ;

  (data->localData[0]->integerVars[70]/* dq.fifo[24,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[70]/* dq.fifo[24,2] DISCRETE */) ;

  (data->localData[0]->integerVars[69]/* dq.fifo[24,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[69]/* dq.fifo[24,1] DISCRETE */) ;

  (data->localData[0]->integerVars[68]/* dq.fifo[23,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[68]/* dq.fifo[23,3] DISCRETE */) ;

  (data->localData[0]->integerVars[67]/* dq.fifo[23,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[67]/* dq.fifo[23,2] DISCRETE */) ;

  (data->localData[0]->integerVars[66]/* dq.fifo[23,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[66]/* dq.fifo[23,1] DISCRETE */) ;

  (data->localData[0]->integerVars[65]/* dq.fifo[22,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[65]/* dq.fifo[22,3] DISCRETE */) ;

  (data->localData[0]->integerVars[64]/* dq.fifo[22,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[64]/* dq.fifo[22,2] DISCRETE */) ;

  (data->localData[0]->integerVars[63]/* dq.fifo[22,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[63]/* dq.fifo[22,1] DISCRETE */) ;

  (data->localData[0]->integerVars[62]/* dq.fifo[21,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[62]/* dq.fifo[21,3] DISCRETE */) ;

  (data->localData[0]->integerVars[61]/* dq.fifo[21,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[61]/* dq.fifo[21,2] DISCRETE */) ;

  (data->localData[0]->integerVars[60]/* dq.fifo[21,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[60]/* dq.fifo[21,1] DISCRETE */) ;

  (data->localData[0]->integerVars[59]/* dq.fifo[20,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[59]/* dq.fifo[20,3] DISCRETE */) ;

  (data->localData[0]->integerVars[58]/* dq.fifo[20,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[58]/* dq.fifo[20,2] DISCRETE */) ;

  (data->localData[0]->integerVars[57]/* dq.fifo[20,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[57]/* dq.fifo[20,1] DISCRETE */) ;

  (data->localData[0]->integerVars[56]/* dq.fifo[19,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[56]/* dq.fifo[19,3] DISCRETE */) ;

  (data->localData[0]->integerVars[55]/* dq.fifo[19,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[55]/* dq.fifo[19,2] DISCRETE */) ;

  (data->localData[0]->integerVars[54]/* dq.fifo[19,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[54]/* dq.fifo[19,1] DISCRETE */) ;

  (data->localData[0]->integerVars[53]/* dq.fifo[18,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[53]/* dq.fifo[18,3] DISCRETE */) ;

  (data->localData[0]->integerVars[52]/* dq.fifo[18,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[52]/* dq.fifo[18,2] DISCRETE */) ;

  (data->localData[0]->integerVars[51]/* dq.fifo[18,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[51]/* dq.fifo[18,1] DISCRETE */) ;

  (data->localData[0]->integerVars[50]/* dq.fifo[17,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[50]/* dq.fifo[17,3] DISCRETE */) ;

  (data->localData[0]->integerVars[49]/* dq.fifo[17,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[49]/* dq.fifo[17,2] DISCRETE */) ;

  (data->localData[0]->integerVars[48]/* dq.fifo[17,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[48]/* dq.fifo[17,1] DISCRETE */) ;

  (data->localData[0]->integerVars[47]/* dq.fifo[16,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[47]/* dq.fifo[16,3] DISCRETE */) ;

  (data->localData[0]->integerVars[46]/* dq.fifo[16,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[46]/* dq.fifo[16,2] DISCRETE */) ;

  (data->localData[0]->integerVars[45]/* dq.fifo[16,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[45]/* dq.fifo[16,1] DISCRETE */) ;

  (data->localData[0]->integerVars[44]/* dq.fifo[15,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[44]/* dq.fifo[15,3] DISCRETE */) ;

  (data->localData[0]->integerVars[43]/* dq.fifo[15,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[43]/* dq.fifo[15,2] DISCRETE */) ;

  (data->localData[0]->integerVars[42]/* dq.fifo[15,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[42]/* dq.fifo[15,1] DISCRETE */) ;

  (data->localData[0]->integerVars[41]/* dq.fifo[14,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[41]/* dq.fifo[14,3] DISCRETE */) ;

  (data->localData[0]->integerVars[40]/* dq.fifo[14,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[40]/* dq.fifo[14,2] DISCRETE */) ;

  (data->localData[0]->integerVars[39]/* dq.fifo[14,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[39]/* dq.fifo[14,1] DISCRETE */) ;

  (data->localData[0]->integerVars[38]/* dq.fifo[13,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[38]/* dq.fifo[13,3] DISCRETE */) ;

  (data->localData[0]->integerVars[37]/* dq.fifo[13,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[37]/* dq.fifo[13,2] DISCRETE */) ;

  (data->localData[0]->integerVars[36]/* dq.fifo[13,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[36]/* dq.fifo[13,1] DISCRETE */) ;

  (data->localData[0]->integerVars[35]/* dq.fifo[12,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[35]/* dq.fifo[12,3] DISCRETE */) ;

  (data->localData[0]->integerVars[34]/* dq.fifo[12,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[34]/* dq.fifo[12,2] DISCRETE */) ;

  (data->localData[0]->integerVars[33]/* dq.fifo[12,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[33]/* dq.fifo[12,1] DISCRETE */) ;

  (data->localData[0]->integerVars[32]/* dq.fifo[11,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[32]/* dq.fifo[11,3] DISCRETE */) ;

  (data->localData[0]->integerVars[31]/* dq.fifo[11,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[31]/* dq.fifo[11,2] DISCRETE */) ;

  (data->localData[0]->integerVars[30]/* dq.fifo[11,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[30]/* dq.fifo[11,1] DISCRETE */) ;

  (data->localData[0]->integerVars[29]/* dq.fifo[10,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[29]/* dq.fifo[10,3] DISCRETE */) ;

  (data->localData[0]->integerVars[28]/* dq.fifo[10,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[28]/* dq.fifo[10,2] DISCRETE */) ;

  (data->localData[0]->integerVars[27]/* dq.fifo[10,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[27]/* dq.fifo[10,1] DISCRETE */) ;

  (data->localData[0]->integerVars[26]/* dq.fifo[9,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[26]/* dq.fifo[9,3] DISCRETE */) ;

  (data->localData[0]->integerVars[25]/* dq.fifo[9,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[25]/* dq.fifo[9,2] DISCRETE */) ;

  (data->localData[0]->integerVars[24]/* dq.fifo[9,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[24]/* dq.fifo[9,1] DISCRETE */) ;

  (data->localData[0]->integerVars[23]/* dq.fifo[8,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[23]/* dq.fifo[8,3] DISCRETE */) ;

  (data->localData[0]->integerVars[22]/* dq.fifo[8,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[22]/* dq.fifo[8,2] DISCRETE */) ;

  (data->localData[0]->integerVars[21]/* dq.fifo[8,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[21]/* dq.fifo[8,1] DISCRETE */) ;

  (data->localData[0]->integerVars[20]/* dq.fifo[7,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[20]/* dq.fifo[7,3] DISCRETE */) ;

  (data->localData[0]->integerVars[19]/* dq.fifo[7,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[19]/* dq.fifo[7,2] DISCRETE */) ;

  (data->localData[0]->integerVars[18]/* dq.fifo[7,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[18]/* dq.fifo[7,1] DISCRETE */) ;

  (data->localData[0]->integerVars[17]/* dq.fifo[6,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[17]/* dq.fifo[6,3] DISCRETE */) ;

  (data->localData[0]->integerVars[16]/* dq.fifo[6,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[16]/* dq.fifo[6,2] DISCRETE */) ;

  (data->localData[0]->integerVars[15]/* dq.fifo[6,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[15]/* dq.fifo[6,1] DISCRETE */) ;

  (data->localData[0]->integerVars[14]/* dq.fifo[5,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[14]/* dq.fifo[5,3] DISCRETE */) ;

  (data->localData[0]->integerVars[13]/* dq.fifo[5,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[13]/* dq.fifo[5,2] DISCRETE */) ;

  (data->localData[0]->integerVars[12]/* dq.fifo[5,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[12]/* dq.fifo[5,1] DISCRETE */) ;

  (data->localData[0]->integerVars[11]/* dq.fifo[4,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[11]/* dq.fifo[4,3] DISCRETE */) ;

  (data->localData[0]->integerVars[10]/* dq.fifo[4,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[10]/* dq.fifo[4,2] DISCRETE */) ;

  (data->localData[0]->integerVars[9]/* dq.fifo[4,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[9]/* dq.fifo[4,1] DISCRETE */) ;

  (data->localData[0]->integerVars[8]/* dq.fifo[3,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[8]/* dq.fifo[3,3] DISCRETE */) ;

  (data->localData[0]->integerVars[7]/* dq.fifo[3,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[7]/* dq.fifo[3,2] DISCRETE */) ;

  (data->localData[0]->integerVars[6]/* dq.fifo[3,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[6]/* dq.fifo[3,1] DISCRETE */) ;

  (data->localData[0]->integerVars[5]/* dq.fifo[2,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[5]/* dq.fifo[2,3] DISCRETE */) ;

  (data->localData[0]->integerVars[4]/* dq.fifo[2,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[4]/* dq.fifo[2,2] DISCRETE */) ;

  (data->localData[0]->integerVars[3]/* dq.fifo[2,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[3]/* dq.fifo[2,1] DISCRETE */) ;

  (data->localData[0]->integerVars[2]/* dq.fifo[1,3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[2]/* dq.fifo[1,3] DISCRETE */) ;

  (data->localData[0]->integerVars[1]/* dq.fifo[1,2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[1]/* dq.fifo[1,2] DISCRETE */) ;

  (data->localData[0]->integerVars[0]/* dq.fifo[1,1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* dq.fifo[1,1] DISCRETE */) ;

  (data->localData[0]->integerVars[308]/* dq.outputdata[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[308]/* dq.outputdata[3] DISCRETE */) ;

  (data->localData[0]->integerVars[307]/* dq.outputdata[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[307]/* dq.outputdata[2] DISCRETE */) ;

  (data->localData[0]->integerVars[306]/* dq.outputdata[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[306]/* dq.outputdata[1] DISCRETE */) ;

  (data->localData[0]->integerVars[304]/* dq.newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[304]/* dq.newest DISCRETE */) ;

  (data->localData[0]->integerVars[305]/* dq.oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[305]/* dq.oldest DISCRETE */) ;

  (data->localData[0]->integerVars[300]/* dq.fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[300]/* dq.fifosize DISCRETE */) ;

  (data->localData[0]->booleanVars[10]/* dq.spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[10]/* dq.spaceavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[7]/* dq.datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[7]/* dq.datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[4]/* $whenCondition5 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[4]/* $whenCondition5 DISCRETE */) ;

  (data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[3]/* $whenCondition4 DISCRETE */) ;

  (data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[2]/* $whenCondition3 DISCRETE */) ;

  (data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  = ((data->localData[0]->booleanVars[8]/* dq.readsigint DISCRETE */)  && (data->localData[0]->booleanVars[11]/* dq.writesigint DISCRETE */) );

  tmp13 = GreaterEq((data->simulationInfo->integerVarsPre[300]/* dq.fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  = (((data->localData[0]->booleanVars[8]/* dq.readsigint DISCRETE */)  && (!(data->localData[0]->booleanVars[11]/* dq.writesigint DISCRETE */) )) && tmp13);

  tmp14 = Less((data->simulationInfo->integerVarsPre[300]/* dq.fifosize DISCRETE */) ,((modelica_integer) 100));
  (data->localData[0]->booleanVars[4]/* $whenCondition5 DISCRETE */)  = (((!(data->localData[0]->booleanVars[8]/* dq.readsigint DISCRETE */) ) && (data->localData[0]->booleanVars[11]/* dq.writesigint DISCRETE */) ) && tmp14);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[7]/* dq.datavailable DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[10]/* dq.spaceavailable DISCRETE */)  = 1;

      (data->localData[0]->integerVars[300]/* dq.fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[305]/* dq.oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[304]/* dq.newest DISCRETE */)  = ((modelica_integer) 1);

      tmp15 = ((modelica_integer) 1); tmp16 = 1; tmp17 = ((modelica_integer) 3);
      if(!(((tmp16 > 0) && (tmp15 > tmp17)) || ((tmp16 < 0) && (tmp15 < tmp17))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp15, tmp17); j += tmp16)
        {
          (&(data->localData[0]->integerVars[306]/* dq.outputdata[1] DISCRETE */) )[j - 1] = ((modelica_integer) 0);
        }
      }

      tmp21 = ((modelica_integer) 1); tmp22 = 1; tmp23 = ((modelica_integer) 100);
      if(!(((tmp22 > 0) && (tmp21 > tmp23)) || ((tmp22 < 0) && (tmp21 < tmp23))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp21, tmp23); i += tmp22)
        {
          tmp18 = ((modelica_integer) 1); tmp19 = 1; tmp20 = ((modelica_integer) 3);
          if(!(((tmp19 > 0) && (tmp18 > tmp20)) || ((tmp19 < 0) && (tmp18 < tmp20))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp18, tmp20); j += tmp19)
            {
              (&(data->localData[0]->integerVars[0]/* dq.fifo[1,1] DISCRETE */) )[(i - 1) * 3 + (j-1)] = ((modelica_integer) 0);
            }
          }
        }
      }
    }
    else if(((data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[2]/* $whenCondition3 DISCRETE */)  /* edge */))
    {
      tmp24 = Less((data->simulationInfo->integerVarsPre[300]/* dq.fifosize DISCRETE */) ,((modelica_integer) 100));
      if(tmp24)
      {
        tmp25 = ((modelica_integer) 1); tmp26 = 1; tmp27 = ((modelica_integer) 3);
        if(!(((tmp26 > 0) && (tmp25 > tmp27)) || ((tmp26 < 0) && (tmp25 < tmp27))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp25, tmp27); j += tmp26)
          {
            (&(data->localData[0]->integerVars[0]/* dq.fifo[1,1] DISCRETE */) )[((data->simulationInfo->integerVarsPre[304]/* dq.newest DISCRETE */)  - 1) * 3 + (j-1)] = (&data->localData[0]->integerVars[301]/* dq.inputdata[1] DISCRETE */)[j - 1] ;
          }
        }

        tmp28 = ((modelica_integer) 100);
        if (tmp28 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(dq.newest), 100)");}
        (data->localData[0]->integerVars[304]/* dq.newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[304]/* dq.newest DISCRETE */) , tmp28) + ((modelica_integer) 1);

        tmp29 = ((modelica_integer) 1); tmp30 = 1; tmp31 = ((modelica_integer) 3);
        if(!(((tmp30 > 0) && (tmp29 > tmp31)) || ((tmp30 < 0) && (tmp29 < tmp31))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp29, tmp31); j += tmp30)
          {
            (&(data->localData[0]->integerVars[306]/* dq.outputdata[1] DISCRETE */) )[j - 1] = (&data->localData[0]->integerVars[0]/* dq.fifo[1,1] DISCRETE */)[((data->simulationInfo->integerVarsPre[305]/* dq.oldest DISCRETE */)  - 1) * 3 + (j-1)] ;
          }
        }

        tmp32 = ((modelica_integer) 100);
        if (tmp32 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(dq.oldest), 100)");}
        (data->localData[0]->integerVars[305]/* dq.oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[305]/* dq.oldest DISCRETE */) , tmp32) + ((modelica_integer) 1);
      }
      else
      {
        tmp33 = ((modelica_integer) 1); tmp34 = 1; tmp35 = ((modelica_integer) 3);
        if(!(((tmp34 > 0) && (tmp33 > tmp35)) || ((tmp34 < 0) && (tmp33 < tmp35))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp33, tmp35); j += tmp34)
          {
            (&(data->localData[0]->integerVars[306]/* dq.outputdata[1] DISCRETE */) )[j - 1] = (&data->localData[0]->integerVars[0]/* dq.fifo[1,1] DISCRETE */)[((data->simulationInfo->integerVarsPre[305]/* dq.oldest DISCRETE */)  - 1) * 3 + (j-1)] ;
          }
        }

        tmp36 = ((modelica_integer) 100);
        if (tmp36 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(dq.oldest), 100)");}
        (data->localData[0]->integerVars[305]/* dq.oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[305]/* dq.oldest DISCRETE */) , tmp36) + ((modelica_integer) 1);

        tmp37 = ((modelica_integer) 1); tmp38 = 1; tmp39 = ((modelica_integer) 3);
        if(!(((tmp38 > 0) && (tmp37 > tmp39)) || ((tmp38 < 0) && (tmp37 < tmp39))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp37, tmp39); j += tmp38)
          {
            (&(data->localData[0]->integerVars[0]/* dq.fifo[1,1] DISCRETE */) )[((data->simulationInfo->integerVarsPre[304]/* dq.newest DISCRETE */)  - 1) * 3 + (j-1)] = (&data->localData[0]->integerVars[301]/* dq.inputdata[1] DISCRETE */)[j - 1] ;
          }
        }

        tmp40 = ((modelica_integer) 100);
        if (tmp40 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(dq.newest), 100)");}
        (data->localData[0]->integerVars[304]/* dq.newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[304]/* dq.newest DISCRETE */) , tmp40) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[3]/* $whenCondition4 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[3]/* $whenCondition4 DISCRETE */)  /* edge */))
    {
      tmp41 = ((modelica_integer) 1); tmp42 = 1; tmp43 = ((modelica_integer) 3);
      if(!(((tmp42 > 0) && (tmp41 > tmp43)) || ((tmp42 < 0) && (tmp41 < tmp43))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp41, tmp43); j += tmp42)
        {
          (&(data->localData[0]->integerVars[306]/* dq.outputdata[1] DISCRETE */) )[j - 1] = (&data->localData[0]->integerVars[0]/* dq.fifo[1,1] DISCRETE */)[((data->simulationInfo->integerVarsPre[305]/* dq.oldest DISCRETE */)  - 1) * 3 + (j-1)] ;
        }
      }

      (data->localData[0]->integerVars[300]/* dq.fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[300]/* dq.fifosize DISCRETE */)  - ((modelica_integer) 1);

      (data->localData[0]->booleanVars[10]/* dq.spaceavailable DISCRETE */)  = 1;

      tmp44 = GreaterEq((data->localData[0]->integerVars[300]/* dq.fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[7]/* dq.datavailable DISCRETE */)  = tmp44;

      tmp45 = ((modelica_integer) 100);
      if (tmp45 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(dq.oldest), 100)");}
      (data->localData[0]->integerVars[305]/* dq.oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[305]/* dq.oldest DISCRETE */) , tmp45) + ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[4]/* $whenCondition5 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[4]/* $whenCondition5 DISCRETE */)  /* edge */))
    {
      tmp46 = ((modelica_integer) 1); tmp47 = 1; tmp48 = ((modelica_integer) 3);
      if(!(((tmp47 > 0) && (tmp46 > tmp48)) || ((tmp47 < 0) && (tmp46 < tmp48))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp46, tmp48); j += tmp47)
        {
          (&(data->localData[0]->integerVars[0]/* dq.fifo[1,1] DISCRETE */) )[((data->simulationInfo->integerVarsPre[304]/* dq.newest DISCRETE */)  - 1) * 3 + (j-1)] = (&data->localData[0]->integerVars[301]/* dq.inputdata[1] DISCRETE */)[j - 1] ;
        }
      }

      tmp49 = ((modelica_integer) 100);
      if (tmp49 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(dq.newest), 100)");}
      (data->localData[0]->integerVars[304]/* dq.newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[304]/* dq.newest DISCRETE */) , tmp49) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[300]/* dq.fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[300]/* dq.fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[7]/* dq.datavailable DISCRETE */)  = 1;

      tmp50 = Less((data->localData[0]->integerVars[300]/* dq.fifosize DISCRETE */) ,((modelica_integer) 100));
      (data->localData[0]->booleanVars[10]/* dq.spaceavailable DISCRETE */)  = tmp50;

      tmp51 = ((modelica_integer) 1); tmp52 = 1; tmp53 = ((modelica_integer) 3);
      if(!(((tmp52 > 0) && (tmp51 > tmp53)) || ((tmp52 < 0) && (tmp51 < tmp53))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp51, tmp53); j += tmp52)
        {
          (&(data->localData[0]->integerVars[306]/* dq.outputdata[1] DISCRETE */) )[j - 1] = (&data->localData[0]->integerVars[0]/* dq.fifo[1,1] DISCRETE */)[((data->simulationInfo->integerVarsPre[305]/* dq.oldest DISCRETE */)  - 1) * 3 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
dqt.outputdata[2] = dq.outputdata[2]
*/
void System_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  (data->localData[0]->integerVars[314]/* dqt.outputdata[2] DISCRETE */)  = (data->localData[0]->integerVars[307]/* dq.outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
dqt.outputdata[1] = dq.outputdata[1]
*/
void System_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->integerVars[313]/* dqt.outputdata[1] DISCRETE */)  = (data->localData[0]->integerVars[306]/* dq.outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
env.spaceavailable1 = dq.spaceavailable
*/
void System_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->booleanVars[16]/* env.spaceavailable1 DISCRETE */)  = (data->localData[0]->booleanVars[10]/* dq.spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 80
type: SIMPLE_ASSIGN
dqt.outputdata[3] = dq.outputdata[3]
*/
void System_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  (data->localData[0]->integerVars[315]/* dqt.outputdata[3] DISCRETE */)  = (data->localData[0]->integerVars[308]/* dq.outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 81
type: SIMPLE_ASSIGN
dqt.datavailable = dq.datavailable
*/
void System_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  (data->localData[0]->booleanVars[13]/* dqt.datavailable DISCRETE */)  = (data->localData[0]->booleanVars[7]/* dq.datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 82
type: SIMPLE_ASSIGN
m1.ct.delivery = env.newreq
*/
void System_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  (data->localData[0]->booleanVars[18]/* m1.ct.delivery DISCRETE */)  = (data->localData[0]->booleanVars[15]/* env.newreq DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 83
type: ALGORITHM

  m1.ct.Z[3] := pre(m1.ct.Z[3]);
  m1.ct.Z[2] := pre(m1.ct.Z[2]);
  m1.ct.Z[1] := pre(m1.ct.Z[1]);
  m1.ct.Y2[3] := pre(m1.ct.Y2[3]);
  m1.ct.Y2[2] := pre(m1.ct.Y2[2]);
  m1.ct.Y2[1] := pre(m1.ct.Y2[1]);
  m1.ct.Y[3] := pre(m1.ct.Y[3]);
  m1.ct.Y[2] := pre(m1.ct.Y[2]);
  m1.ct.Y[1] := pre(m1.ct.Y[1]);
  m1.ct.TimeLastDelivery := pre(m1.ct.TimeLastDelivery);
  m1.ct.counter := pre(m1.ct.counter);
  m1.ct.z := pre(m1.ct.z);
  m1.ct.Var := pre(m1.ct.Var);
  m1.ct.y2 := pre(m1.ct.y2);
  m1.ct.y := pre(m1.ct.y);
  m1.ct.v := pre(m1.ct.v);
  $whenCondition1 := pre($whenCondition1);
  $whenCondition1 := m1.ct.delivery and not pre(m1.ct.delivery);
  when $whenCondition1 then
    m1.ct.v := time - m1.ct.TimeLastDelivery;
    m1.ct.y := m1.ct.y * (*Real*)(m1.ct.counter) / (*Real*)(m1.ct.counter + 1) + m1.ct.v / (*Real*)(m1.ct.counter + 1);
    m1.ct.y2 := m1.ct.y2 * (*Real*)(m1.ct.counter) / (*Real*)(m1.ct.counter + 1) + m1.ct.v ^ 2.0 / (*Real*)(m1.ct.counter + 1);
    m1.ct.Var := m1.ct.y2 - m1.ct.y ^ 2.0;
    m1.ct.z := sqrt(m1.ct.Var);
    m1.ct.counter := m1.ct.counter + 1;
    m1.ct.TimeLastDelivery := time;
    for i in 1:3 loop
      m1.ct.Y[i] := pre(m1.ct.Y[i]) * (*Real*)(m1.ct.counter) / (*Real*)(m1.ct.counter + 1) + m1.ct.values[i] / (*Real*)(m1.ct.counter + 1);
      m1.ct.Y2[i] := pre(m1.ct.Y2[i]) * (*Real*)(m1.ct.counter) / (*Real*)(m1.ct.counter + 1) + m1.ct.values[i] ^ 2.0 / (*Real*)(m1.ct.counter + 1);
      m1.ct.Z[i] := sqrt(m1.ct.Y2[i] - m1.ct.Y[i] ^ 2.0);
    end for;
  end when;
*/
void System_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_integer tmp60;
  modelica_integer tmp61;
  modelica_integer tmp62;
  (data->localData[0]->realVars[13]/* m1.ct.Z[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[13]/* m1.ct.Z[3] DISCRETE */) ;

  (data->localData[0]->realVars[12]/* m1.ct.Z[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[12]/* m1.ct.Z[2] DISCRETE */) ;

  (data->localData[0]->realVars[11]/* m1.ct.Z[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[11]/* m1.ct.Z[1] DISCRETE */) ;

  (data->localData[0]->realVars[10]/* m1.ct.Y2[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[10]/* m1.ct.Y2[3] DISCRETE */) ;

  (data->localData[0]->realVars[9]/* m1.ct.Y2[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[9]/* m1.ct.Y2[2] DISCRETE */) ;

  (data->localData[0]->realVars[8]/* m1.ct.Y2[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[8]/* m1.ct.Y2[1] DISCRETE */) ;

  (data->localData[0]->realVars[7]/* m1.ct.Y[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[7]/* m1.ct.Y[3] DISCRETE */) ;

  (data->localData[0]->realVars[6]/* m1.ct.Y[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[6]/* m1.ct.Y[2] DISCRETE */) ;

  (data->localData[0]->realVars[5]/* m1.ct.Y[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[5]/* m1.ct.Y[1] DISCRETE */) ;

  (data->localData[0]->realVars[3]/* m1.ct.TimeLastDelivery DISCRETE */)  = (data->simulationInfo->realVarsPre[3]/* m1.ct.TimeLastDelivery DISCRETE */) ;

  (data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */)  = (data->simulationInfo->integerVarsPre[326]/* m1.ct.counter DISCRETE */) ;

  (data->localData[0]->realVars[17]/* m1.ct.z DISCRETE */)  = (data->simulationInfo->realVarsPre[17]/* m1.ct.z DISCRETE */) ;

  (data->localData[0]->realVars[4]/* m1.ct.Var DISCRETE */)  = (data->simulationInfo->realVarsPre[4]/* m1.ct.Var DISCRETE */) ;

  (data->localData[0]->realVars[16]/* m1.ct.y2 DISCRETE */)  = (data->simulationInfo->realVarsPre[16]/* m1.ct.y2 DISCRETE */) ;

  (data->localData[0]->realVars[15]/* m1.ct.y DISCRETE */)  = (data->simulationInfo->realVarsPre[15]/* m1.ct.y DISCRETE */) ;

  (data->localData[0]->realVars[14]/* m1.ct.v DISCRETE */)  = (data->simulationInfo->realVarsPre[14]/* m1.ct.v DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = ((data->localData[0]->booleanVars[18]/* m1.ct.delivery DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[18]/* m1.ct.delivery DISCRETE */) ));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[14]/* m1.ct.v DISCRETE */)  = data->localData[0]->timeValue - (data->localData[0]->realVars[3]/* m1.ct.TimeLastDelivery DISCRETE */) ;

      (data->localData[0]->realVars[15]/* m1.ct.y DISCRETE */)  = ((data->localData[0]->realVars[15]/* m1.ct.y DISCRETE */) ) * (DIVISION_SIM(((modelica_real)(data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */) ),((modelica_real)(data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(m1.ct.counter + 1)",equationIndexes)) + DIVISION_SIM((data->localData[0]->realVars[14]/* m1.ct.v DISCRETE */) ,((modelica_real)(data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(m1.ct.counter + 1)",equationIndexes);

      tmp54 = (data->localData[0]->realVars[14]/* m1.ct.v DISCRETE */) ;
      (data->localData[0]->realVars[16]/* m1.ct.y2 DISCRETE */)  = ((data->localData[0]->realVars[16]/* m1.ct.y2 DISCRETE */) ) * (DIVISION_SIM(((modelica_real)(data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */) ),((modelica_real)(data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(m1.ct.counter + 1)",equationIndexes)) + DIVISION_SIM((tmp54 * tmp54),((modelica_real)(data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(m1.ct.counter + 1)",equationIndexes);

      tmp55 = (data->localData[0]->realVars[15]/* m1.ct.y DISCRETE */) ;
      (data->localData[0]->realVars[4]/* m1.ct.Var DISCRETE */)  = (data->localData[0]->realVars[16]/* m1.ct.y2 DISCRETE */)  - ((tmp55 * tmp55));

      tmp56 = (data->localData[0]->realVars[4]/* m1.ct.Var DISCRETE */) ;
      if(!(tmp56 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(m1.ct.Var) was %g should be >= 0", tmp56);
        }
      }
      (data->localData[0]->realVars[17]/* m1.ct.z DISCRETE */)  = sqrt(tmp56);

      (data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */)  = (data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->realVars[3]/* m1.ct.TimeLastDelivery DISCRETE */)  = data->localData[0]->timeValue;

      tmp60 = ((modelica_integer) 1); tmp61 = 1; tmp62 = ((modelica_integer) 3);
      if(!(((tmp61 > 0) && (tmp60 > tmp62)) || ((tmp61 < 0) && (tmp60 < tmp62))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp60, tmp62); i += tmp61)
        {
          (&(data->localData[0]->realVars[5]/* m1.ct.Y[1] DISCRETE */) )[i - 1] = ((&(data->simulationInfo->realVarsPre[5]/* m1.ct.Y[1] DISCRETE */) )[i - 1]) * (DIVISION_SIM(((modelica_real)(data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */) ),((modelica_real)(data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(m1.ct.counter + 1)",equationIndexes)) + DIVISION_SIM((&data->localData[0]->realVars[0]/* m1.ct.values[1] variable */)[i - 1] ,((modelica_real)(data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(m1.ct.counter + 1)",equationIndexes);

          tmp57 = (&data->localData[0]->realVars[0]/* m1.ct.values[1] variable */)[i - 1] ;
          (&(data->localData[0]->realVars[8]/* m1.ct.Y2[1] DISCRETE */) )[i - 1] = ((&(data->simulationInfo->realVarsPre[8]/* m1.ct.Y2[1] DISCRETE */) )[i - 1]) * (DIVISION_SIM(((modelica_real)(data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */) ),((modelica_real)(data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(m1.ct.counter + 1)",equationIndexes)) + DIVISION_SIM((tmp57 * tmp57),((modelica_real)(data->localData[0]->integerVars[326]/* m1.ct.counter DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(m1.ct.counter + 1)",equationIndexes);

          tmp58 = (&data->localData[0]->realVars[5]/* m1.ct.Y[1] DISCRETE */)[i - 1] ;
          tmp59 = (&data->localData[0]->realVars[8]/* m1.ct.Y2[1] DISCRETE */)[i - 1]  - ((tmp58 * tmp58));
          if(!(tmp59 >= 0.0))
          {
            if (data->simulationInfo->noThrowAsserts) {
              infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
              data->simulationInfo->needToReThrow = 1;
            } else {
              FILE_INFO info = {"",0,0,0,0,0};
              omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
              throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(m1.ct.Y2[i] - m1.ct.Y[i] ^ 2.0) was %g should be >= 0", tmp59);
            }
          }
          (&(data->localData[0]->realVars[11]/* m1.ct.Z[1] DISCRETE */) )[i - 1] = sqrt(tmp59);
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 84
type: SIMPLE_ASSIGN
m1.z = m1.ct.z
*/
void System_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  (data->localData[0]->integerVars[328]/* m1.z DISCRETE */)  = (data->localData[0]->realVars[17]/* m1.ct.z DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 85
type: SIMPLE_ASSIGN
m1.y = m1.ct.y
*/
void System_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  (data->localData[0]->integerVars[327]/* m1.y DISCRETE */)  = (data->localData[0]->realVars[15]/* m1.ct.y DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 86
type: ALGORITHM

  $whenCondition7 := pre($whenCondition7);
  $whenCondition7 := time >= m1.p.HORIZON;
*/
void System_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  modelica_boolean tmp63;
  (data->localData[0]->booleanVars[6]/* $whenCondition7 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[6]/* $whenCondition7 DISCRETE */) ;

  relationhysteresis(data, &tmp63, data->localData[0]->timeValue, (data->simulationInfo->realParameter[6]/* m1.p.HORIZON PARAM */) , 0, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[6]/* $whenCondition7 DISCRETE */)  = tmp63;
  TRACE_POP
}
/*
equation index: 87
type: ALGORITHM

  when $whenCondition7 then
    Modelica.Utilities.Files.remove("outputs.txt");
    Modelica.Utilities.Streams.print("Avg1 StdDev1 Avg2 StdDev2 Avg3 StdDev3 AvgWait StdWait (ID = " + String(m1.p.ID, 0, true) + ",
MyMagicNumber = " + String(m1.p.MyMagicNumber, 0, true) + ", HORIZON = " + String(m1.p.HORIZON, 6, 0, true) + ", time = " + String(time, 6, 0, true) + ")", "outputs.txt");
    Modelica.Utilities.Streams.print(String(m1.ct.Y[1], 6, 0, true) + " " + String(m1.ct.Z[1], 6, 0, true) + " " + String(m1.ct.Y[2], 6, 0, true) + " " + String(m1.ct.Z[2], 6, 0, true) + " " + String(m1.ct.Y[3], 6, 0, true) + " " + String(m1.ct.Z[3], 6, 0, true) + " " + String(m1.y, 0, true) + " " + String(m1.z, 0, true), "outputs.txt");
    terminate("Standard deviation completion time small enough for reliable estimate");
  end when;
*/
void System_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  static const MMC_DEFSTRINGLIT(tmp64,11,"outputs.txt");
  static const MMC_DEFSTRINGLIT(tmp65,61,"Avg1 StdDev1 Avg2 StdDev2 Avg3 StdDev3 AvgWait StdWait (ID = ");
  modelica_string tmp66;
  modelica_metatype tmpMeta67;
  static const MMC_DEFSTRINGLIT(tmp68,18,",\nMyMagicNumber = ");
  modelica_metatype tmpMeta69;
  modelica_string tmp70;
  modelica_metatype tmpMeta71;
  static const MMC_DEFSTRINGLIT(tmp72,12,", HORIZON = ");
  modelica_metatype tmpMeta73;
  modelica_string tmp74;
  modelica_metatype tmpMeta75;
  static const MMC_DEFSTRINGLIT(tmp76,9,", time = ");
  modelica_metatype tmpMeta77;
  modelica_string tmp78;
  modelica_metatype tmpMeta79;
  modelica_metatype tmpMeta80;
  static const MMC_DEFSTRINGLIT(tmp81,11,"outputs.txt");
  modelica_string tmp82;
  modelica_metatype tmpMeta83;
  modelica_string tmp84;
  modelica_metatype tmpMeta85;
  modelica_metatype tmpMeta86;
  modelica_string tmp87;
  modelica_metatype tmpMeta88;
  modelica_metatype tmpMeta89;
  modelica_string tmp90;
  modelica_metatype tmpMeta91;
  modelica_metatype tmpMeta92;
  modelica_string tmp93;
  modelica_metatype tmpMeta94;
  modelica_metatype tmpMeta95;
  modelica_string tmp96;
  modelica_metatype tmpMeta97;
  modelica_metatype tmpMeta98;
  modelica_string tmp99;
  modelica_metatype tmpMeta100;
  modelica_metatype tmpMeta101;
  modelica_string tmp102;
  modelica_metatype tmpMeta103;
  static const MMC_DEFSTRINGLIT(tmp104,11,"outputs.txt");
  static const MMC_DEFSTRINGLIT(tmp105,69,"Standard deviation completion time small enough for reliable estimate");
  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[6]/* $whenCondition7 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[6]/* $whenCondition7 DISCRETE */)  /* edge */))
    {
      omc_Modelica_Utilities_Files_remove(threadData, MMC_REFSTRINGLIT(tmp64));

      tmp66 = modelica_integer_to_modelica_string((data->simulationInfo->integerParameter[8]/* m1.p.ID PARAM */) , ((modelica_integer) 0), 1);
      tmpMeta67 = stringAppend(MMC_REFSTRINGLIT(tmp65),tmp66);
      tmpMeta69 = stringAppend(tmpMeta67,MMC_REFSTRINGLIT(tmp68));
      tmp70 = modelica_integer_to_modelica_string((data->simulationInfo->integerParameter[9]/* m1.p.MyMagicNumber PARAM */) , ((modelica_integer) 0), 1);
      tmpMeta71 = stringAppend(tmpMeta69,tmp70);
      tmpMeta73 = stringAppend(tmpMeta71,MMC_REFSTRINGLIT(tmp72));
      tmp74 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[6]/* m1.p.HORIZON PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta75 = stringAppend(tmpMeta73,tmp74);
      tmpMeta77 = stringAppend(tmpMeta75,MMC_REFSTRINGLIT(tmp76));
      tmp78 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta79 = stringAppend(tmpMeta77,tmp78);
      tmpMeta80 = stringAppend(tmpMeta79,(modelica_string) mmc_strings_len1[41]);
      omc_Modelica_Utilities_Streams_print(threadData, tmpMeta80, MMC_REFSTRINGLIT(tmp81));

      tmp82 = modelica_real_to_modelica_string((data->localData[0]->realVars[5]/* m1.ct.Y[1] DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta83 = stringAppend(tmp82,(modelica_string) mmc_strings_len1[32]);
      tmp84 = modelica_real_to_modelica_string((data->localData[0]->realVars[11]/* m1.ct.Z[1] DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta85 = stringAppend(tmpMeta83,tmp84);
      tmpMeta86 = stringAppend(tmpMeta85,(modelica_string) mmc_strings_len1[32]);
      tmp87 = modelica_real_to_modelica_string((data->localData[0]->realVars[6]/* m1.ct.Y[2] DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta88 = stringAppend(tmpMeta86,tmp87);
      tmpMeta89 = stringAppend(tmpMeta88,(modelica_string) mmc_strings_len1[32]);
      tmp90 = modelica_real_to_modelica_string((data->localData[0]->realVars[12]/* m1.ct.Z[2] DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta91 = stringAppend(tmpMeta89,tmp90);
      tmpMeta92 = stringAppend(tmpMeta91,(modelica_string) mmc_strings_len1[32]);
      tmp93 = modelica_real_to_modelica_string((data->localData[0]->realVars[7]/* m1.ct.Y[3] DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta94 = stringAppend(tmpMeta92,tmp93);
      tmpMeta95 = stringAppend(tmpMeta94,(modelica_string) mmc_strings_len1[32]);
      tmp96 = modelica_real_to_modelica_string((data->localData[0]->realVars[13]/* m1.ct.Z[3] DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta97 = stringAppend(tmpMeta95,tmp96);
      tmpMeta98 = stringAppend(tmpMeta97,(modelica_string) mmc_strings_len1[32]);
      tmp99 = modelica_integer_to_modelica_string((data->localData[0]->integerVars[327]/* m1.y DISCRETE */) , ((modelica_integer) 0), 1);
      tmpMeta100 = stringAppend(tmpMeta98,tmp99);
      tmpMeta101 = stringAppend(tmpMeta100,(modelica_string) mmc_strings_len1[32]);
      tmp102 = modelica_integer_to_modelica_string((data->localData[0]->integerVars[328]/* m1.z DISCRETE */) , ((modelica_integer) 0), 1);
      tmpMeta103 = stringAppend(tmpMeta101,tmp102);
      omc_Modelica_Utilities_Streams_print(threadData, tmpMeta103, MMC_REFSTRINGLIT(tmp104));

      {
        FILE_INFO info = {"/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2/monitor1.mo",39,5,39,87,0};
        omc_terminate(info, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp105)));
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
#define _OMC_LIT_RESOURCE_0_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,14,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,64,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Complex"
#define _OMC_LIT_RESOURCE_1_dir_data "/home/pikarz1/.openmodelica/libraries/Complex 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,7,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,60,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "DQueue"
#define _OMC_LIT_RESOURCE_2_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,6,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,64,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "DQueueTerminator"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,64,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "Env"
#define _OMC_LIT_RESOURCE_4_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,3,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,64,_OMC_LIT_RESOURCE_4_dir_data);

#define _OMC_LIT_RESOURCE_5_name_data "FifoIODone"
#define _OMC_LIT_RESOURCE_5_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_name,10,_OMC_LIT_RESOURCE_5_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir,64,_OMC_LIT_RESOURCE_5_dir_data);

#define _OMC_LIT_RESOURCE_6_name_data "InitFifoIOState"
#define _OMC_LIT_RESOURCE_6_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_name,15,_OMC_LIT_RESOURCE_6_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir,64,_OMC_LIT_RESOURCE_6_dir_data);

#define _OMC_LIT_RESOURCE_7_name_data "InputBoolean"
#define _OMC_LIT_RESOURCE_7_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_name,12,_OMC_LIT_RESOURCE_7_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir,64,_OMC_LIT_RESOURCE_7_dir_data);

#define _OMC_LIT_RESOURCE_8_name_data "InputInteger"
#define _OMC_LIT_RESOURCE_8_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_name,12,_OMC_LIT_RESOURCE_8_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir,64,_OMC_LIT_RESOURCE_8_dir_data);

#define _OMC_LIT_RESOURCE_9_name_data "InputReal"
#define _OMC_LIT_RESOURCE_9_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_name,9,_OMC_LIT_RESOURCE_9_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir,64,_OMC_LIT_RESOURCE_9_dir_data);

#define _OMC_LIT_RESOURCE_10_name_data "Modelica"
#define _OMC_LIT_RESOURCE_10_dir_data "/home/pikarz1/.openmodelica/libraries/Modelica 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_name,8,_OMC_LIT_RESOURCE_10_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir,61,_OMC_LIT_RESOURCE_10_dir_data);

#define _OMC_LIT_RESOURCE_11_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_11_dir_data "/home/pikarz1/.openmodelica/libraries/ModelicaServices 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_name,16,_OMC_LIT_RESOURCE_11_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir,69,_OMC_LIT_RESOURCE_11_dir_data);

#define _OMC_LIT_RESOURCE_12_name_data "Monitor1"
#define _OMC_LIT_RESOURCE_12_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_name,8,_OMC_LIT_RESOURCE_12_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir,64,_OMC_LIT_RESOURCE_12_dir_data);

#define _OMC_LIT_RESOURCE_13_name_data "OutputBoolean"
#define _OMC_LIT_RESOURCE_13_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_name,13,_OMC_LIT_RESOURCE_13_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir,64,_OMC_LIT_RESOURCE_13_dir_data);

#define _OMC_LIT_RESOURCE_14_name_data "OutputInteger"
#define _OMC_LIT_RESOURCE_14_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_name,13,_OMC_LIT_RESOURCE_14_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir,64,_OMC_LIT_RESOURCE_14_dir_data);

#define _OMC_LIT_RESOURCE_15_name_data "OutputReal"
#define _OMC_LIT_RESOURCE_15_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_name,10,_OMC_LIT_RESOURCE_15_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir,64,_OMC_LIT_RESOURCE_15_dir_data);

#define _OMC_LIT_RESOURCE_16_name_data "Prm"
#define _OMC_LIT_RESOURCE_16_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_name,3,_OMC_LIT_RESOURCE_16_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir,64,_OMC_LIT_RESOURCE_16_dir_data);

#define _OMC_LIT_RESOURCE_17_name_data "ReadFromFIFO"
#define _OMC_LIT_RESOURCE_17_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_name,12,_OMC_LIT_RESOURCE_17_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir,64,_OMC_LIT_RESOURCE_17_dir_data);

#define _OMC_LIT_RESOURCE_18_name_data "System"
#define _OMC_LIT_RESOURCE_18_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_18_name,6,_OMC_LIT_RESOURCE_18_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_18_dir,64,_OMC_LIT_RESOURCE_18_dir_data);

#define _OMC_LIT_RESOURCE_19_name_data "WriteToFIFO"
#define _OMC_LIT_RESOURCE_19_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_19_name,11,_OMC_LIT_RESOURCE_19_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_19_dir,64,_OMC_LIT_RESOURCE_19_dir_data);

#define _OMC_LIT_RESOURCE_20_name_data "generateValue"
#define _OMC_LIT_RESOURCE_20_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_20_name,13,_OMC_LIT_RESOURCE_20_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_20_dir,64,_OMC_LIT_RESOURCE_20_dir_data);

#define _OMC_LIT_RESOURCE_21_name_data "myrandom"
#define _OMC_LIT_RESOURCE_21_dir_data "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_21_name,8,_OMC_LIT_RESOURCE_21_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_21_dir,64,_OMC_LIT_RESOURCE_21_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,44,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_8_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_9_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_10_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_11_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_12_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_13_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_14_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_15_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_16_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_17_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_18_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_18_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_19_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_19_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_20_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_20_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_21_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_21_dir)}};
void System_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &System_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "System";
  data->modelData->modelFilePrefix = "System";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/2";
  data->modelData->modelGUID = "{7e916ecb-2aab-4522-b750-0012ef466bbe}";
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
  data->modelData->nVariablesReal = 18;
  data->modelData->nDiscreteReal = 15;
  data->modelData->nVariablesInteger = 329;
  data->modelData->nVariablesBoolean = 19;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 9;
  data->modelData->nParametersInteger = 11;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 6;
  data->modelData->nAliasInteger = 3;
  data->modelData->nAliasBoolean = 2;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 1;
  data->modelData->nSamples = 2;
  data->modelData->nRelations = 1;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "System_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 17;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 96;
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


