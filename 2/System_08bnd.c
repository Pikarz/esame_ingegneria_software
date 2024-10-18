/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "System_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

OMC_DISABLE_OPT
int System_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void System_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 88
type: SIMPLE_ASSIGN
m1.p.prob_new_req = 0.1 * (*Real*)(m1.p.T)
*/
OMC_DISABLE_OPT
static void System_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  (data->simulationInfo->realParameter[8]/* m1.p.prob_new_req PARAM */)  = (0.1) * (((modelica_real)(data->simulationInfo->integerParameter[10]/* m1.p.T PARAM */) ));
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
m1.p.MyMagicNumber = 1 + mod(m1.p.ID, 173)
*/
OMC_DISABLE_OPT
static void System_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  modelica_integer tmp0;
  tmp0 = ((modelica_integer) 173);
  if (tmp0 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(m1.p.ID, 173)");}
  (data->simulationInfo->integerParameter[9]/* m1.p.MyMagicNumber PARAM */)  = ((modelica_integer) 1) + modelica_integer_mod((data->simulationInfo->integerParameter[8]/* m1.p.ID PARAM */) , tmp0);
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
dqt.p.prob_new_req = 0.1 * (*Real*)(dqt.p.T)
*/
OMC_DISABLE_OPT
static void System_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  (data->simulationInfo->realParameter[2]/* dqt.p.prob_new_req PARAM */)  = (0.1) * (((modelica_real)(data->simulationInfo->integerParameter[4]/* dqt.p.T PARAM */) ));
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
dqt.p.MyMagicNumber = 1 + mod(dqt.p.ID, 173)
*/
OMC_DISABLE_OPT
static void System_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  modelica_integer tmp1;
  tmp1 = ((modelica_integer) 173);
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(dqt.p.ID, 173)");}
  (data->simulationInfo->integerParameter[3]/* dqt.p.MyMagicNumber PARAM */)  = ((modelica_integer) 1) + modelica_integer_mod((data->simulationInfo->integerParameter[2]/* dqt.p.ID PARAM */) , tmp1);
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
env.p.prob_new_req = 0.1 * (*Real*)(env.p.T)
*/
OMC_DISABLE_OPT
static void System_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  (data->simulationInfo->realParameter[5]/* env.p.prob_new_req PARAM */)  = (0.1) * (((modelica_real)(data->simulationInfo->integerParameter[7]/* env.p.T PARAM */) ));
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
env.p.MyMagicNumber = 1 + mod(env.p.ID, 173)
*/
OMC_DISABLE_OPT
static void System_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  modelica_integer tmp2;
  tmp2 = ((modelica_integer) 173);
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(env.p.ID, 173)");}
  (data->simulationInfo->integerParameter[6]/* env.p.MyMagicNumber PARAM */)  = ((modelica_integer) 1) + modelica_integer_mod((data->simulationInfo->integerParameter[5]/* env.p.ID PARAM */) , tmp2);
  TRACE_POP
}
OMC_DISABLE_OPT
void System_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  System_eqFunction_88(data, threadData);
  System_eqFunction_89(data, threadData);
  System_eqFunction_90(data, threadData);
  System_eqFunction_91(data, threadData);
  System_eqFunction_94(data, threadData);
  System_eqFunction_95(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int System_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  (data->simulationInfo->integerParameter[0]/* dq.M PARAM */)  = ((modelica_integer) 3);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  (data->simulationInfo->integerParameter[1]/* dq.N PARAM */)  = ((modelica_integer) 100);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  System_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

