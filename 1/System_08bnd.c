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
equation index: 142
type: SIMPLE_ASSIGN
m1.p.MyMagicNumber = 1 + mod(m1.p.ID, 173)
*/
OMC_DISABLE_OPT
static void System_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  modelica_integer tmp0;
  tmp0 = ((modelica_integer) 173);
  if (tmp0 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(m1.p.ID, 173)");}
  (data->simulationInfo->integerParameter[10]/* m1.p.MyMagicNumber PARAM */)  = ((modelica_integer) 1) + modelica_integer_mod((data->simulationInfo->integerParameter[9]/* m1.p.ID PARAM */) , tmp0);
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
mc.p.MyMagicNumber = 1 + mod(mc.p.ID, 173)
*/
OMC_DISABLE_OPT
static void System_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  modelica_integer tmp1;
  tmp1 = ((modelica_integer) 173);
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(mc.p.ID, 173)");}
  (data->simulationInfo->integerParameter[21]/* mc.p.MyMagicNumber PARAM */)  = ((modelica_integer) 1) + modelica_integer_mod((data->simulationInfo->integerParameter[20]/* mc.p.ID PARAM */) , tmp1);
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
p.MyMagicNumber = 1 + mod(p.ID, 173)
*/
OMC_DISABLE_OPT
static void System_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  modelica_integer tmp2;
  tmp2 = ((modelica_integer) 173);
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(p.ID, 173)");}
  (data->simulationInfo->integerParameter[32]/* p.MyMagicNumber PARAM */)  = ((modelica_integer) 1) + modelica_integer_mod((data->simulationInfo->integerParameter[31]/* p.ID PARAM */) , tmp2);
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
Prm.MyMagicNumber = 1 + mod(Prm.ID, 173)
*/
OMC_DISABLE_OPT
static void System_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  modelica_integer tmp3;
  tmp3 = ((modelica_integer) 173);
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(Prm.ID, 173)");}
  (data->simulationInfo->integerParameter[1]/* Prm.MyMagicNumber PARAM */)  = ((modelica_integer) 1) + modelica_integer_mod((data->simulationInfo->integerParameter[0]/* Prm.ID PARAM */) , tmp3);
  TRACE_POP
}
OMC_DISABLE_OPT
void System_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  System_eqFunction_142(data, threadData);
  System_eqFunction_144(data, threadData);
  System_eqFunction_146(data, threadData);
  System_eqFunction_147(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int System_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  (data->simulationInfo->integerParameter[24]/* mc.p.W PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[24].time_unvarying = 1;
  (data->simulationInfo->integerParameter[35]/* p.W PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[35].time_unvarying = 1;
  System_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

