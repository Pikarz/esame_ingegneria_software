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
equation index: 113
type: SIMPLE_ASSIGN
m.std3.variance.t_eps = m.std3.t_eps
*/
OMC_DISABLE_OPT
static void System_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  (data->simulationInfo->realParameter[30]/* m.std3.variance.t_eps PARAM */)  = (data->simulationInfo->realParameter[28]/* m.std3.t_eps PARAM */) ;
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
m.std2.variance.t_eps = m.std2.t_eps
*/
OMC_DISABLE_OPT
static void System_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  (data->simulationInfo->realParameter[27]/* m.std2.variance.t_eps PARAM */)  = (data->simulationInfo->realParameter[25]/* m.std2.t_eps PARAM */) ;
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
m.std1.variance.t_eps = m.std1.t_eps
*/
OMC_DISABLE_OPT
static void System_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  (data->simulationInfo->realParameter[24]/* m.std1.variance.t_eps PARAM */)  = (data->simulationInfo->realParameter[22]/* m.std1.t_eps PARAM */) ;
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
m.p.k2 = 2.0 * m.p.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  (data->simulationInfo->realParameter[20]/* m.p.k2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[21]/* m.p.p PARAM */) );
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
m.p.k1 = -m.p.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  modelica_real tmp0;
  tmp0 = (data->simulationInfo->realParameter[21]/* m.p.p PARAM */) ;
  (data->simulationInfo->realParameter[19]/* m.p.k1 PARAM */)  = (-((tmp0 * tmp0)));
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
m.p.MyMagicNumber = 1 + mod(m.p.ID, 173)
*/
OMC_DISABLE_OPT
static void System_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  modelica_integer tmp1;
  tmp1 = ((modelica_integer) 173);
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(m.p.ID, 173)");}
  (data->simulationInfo->integerParameter[3]/* m.p.MyMagicNumber PARAM */)  = ((modelica_integer) 1) + modelica_integer_mod((data->simulationInfo->integerParameter[2]/* m.p.ID PARAM */) , tmp1);
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
ctr.p.k2 = 2.0 * ctr.p.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  (data->simulationInfo->realParameter[7]/* ctr.p.k2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[8]/* ctr.p.p PARAM */) );
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
ctr.p.k1 = -ctr.p.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  modelica_real tmp2;
  tmp2 = (data->simulationInfo->realParameter[8]/* ctr.p.p PARAM */) ;
  (data->simulationInfo->realParameter[6]/* ctr.p.k1 PARAM */)  = (-((tmp2 * tmp2)));
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
ctr.p.MyMagicNumber = 1 + mod(ctr.p.ID, 173)
*/
OMC_DISABLE_OPT
static void System_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  modelica_integer tmp3;
  tmp3 = ((modelica_integer) 173);
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(ctr.p.ID, 173)");}
  (data->simulationInfo->integerParameter[1]/* ctr.p.MyMagicNumber PARAM */)  = ((modelica_integer) 1) + modelica_integer_mod((data->simulationInfo->integerParameter[0]/* ctr.p.ID PARAM */) , tmp3);
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
plant.p.k2 = 2.0 * plant.p.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  (data->simulationInfo->realParameter[36]/* plant.p.k2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[37]/* plant.p.p PARAM */) );
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
plant.p.k1 = -plant.p.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  modelica_real tmp4;
  tmp4 = (data->simulationInfo->realParameter[37]/* plant.p.p PARAM */) ;
  (data->simulationInfo->realParameter[35]/* plant.p.k1 PARAM */)  = (-((tmp4 * tmp4)));
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
plant.p.MyMagicNumber = 1 + mod(plant.p.ID, 173)
*/
OMC_DISABLE_OPT
static void System_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  modelica_integer tmp5;
  tmp5 = ((modelica_integer) 173);
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(plant.p.ID, 173)");}
  (data->simulationInfo->integerParameter[5]/* plant.p.MyMagicNumber PARAM */)  = ((modelica_integer) 1) + modelica_integer_mod((data->simulationInfo->integerParameter[4]/* plant.p.ID PARAM */) , tmp5);
  TRACE_POP
}
extern void System_eqFunction_6(DATA *data, threadData_t *threadData);

extern void System_eqFunction_5(DATA *data, threadData_t *threadData);

extern void System_eqFunction_4(DATA *data, threadData_t *threadData);

extern void System_eqFunction_3(DATA *data, threadData_t *threadData);

extern void System_eqFunction_2(DATA *data, threadData_t *threadData);

extern void System_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 131
type: ALGORITHM

  assert(m.mean3.t_eps >= 1e-13, "Variable violating min constraint: 1e-13 <= m.mean3.t_eps, has value: " + String(m.mean3.t_eps, "g"));
*/
OMC_DISABLE_OPT
static void System_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,70,"Variable violating min constraint: 1e-13 <= m.mean3.t_eps, has value: ");
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  static int tmp10 = 0;
  if(!tmp10)
  {
    tmp6 = GreaterEq((data->simulationInfo->realParameter[14]/* m.mean3.t_eps PARAM */) ,1e-13);
    if(!tmp6)
    {
      tmp8 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[14]/* m.mean3.t_eps PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta9 = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nm.mean3.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta9));
        } else {
          FILE_INFO info = {"/home/pikarz1/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Math.mo",2300,5,2302,43,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nm.mean3.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta9));
        }
      }
      tmp10 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 132
type: ALGORITHM

  assert(m.mean2.t_eps >= 1e-13, "Variable violating min constraint: 1e-13 <= m.mean2.t_eps, has value: " + String(m.mean2.t_eps, "g"));
*/
OMC_DISABLE_OPT
static void System_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,70,"Variable violating min constraint: 1e-13 <= m.mean2.t_eps, has value: ");
  modelica_string tmp13;
  modelica_metatype tmpMeta14;
  static int tmp15 = 0;
  if(!tmp15)
  {
    tmp11 = GreaterEq((data->simulationInfo->realParameter[12]/* m.mean2.t_eps PARAM */) ,1e-13);
    if(!tmp11)
    {
      tmp13 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[12]/* m.mean2.t_eps PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta14 = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nm.mean2.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta14));
        } else {
          FILE_INFO info = {"/home/pikarz1/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Math.mo",2300,5,2302,43,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nm.mean2.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta14));
        }
      }
      tmp15 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 133
type: ALGORITHM

  assert(m.mean1.t_eps >= 1e-13, "Variable violating min constraint: 1e-13 <= m.mean1.t_eps, has value: " + String(m.mean1.t_eps, "g"));
*/
OMC_DISABLE_OPT
static void System_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,70,"Variable violating min constraint: 1e-13 <= m.mean1.t_eps, has value: ");
  modelica_string tmp18;
  modelica_metatype tmpMeta19;
  static int tmp20 = 0;
  if(!tmp20)
  {
    tmp16 = GreaterEq((data->simulationInfo->realParameter[10]/* m.mean1.t_eps PARAM */) ,1e-13);
    if(!tmp16)
    {
      tmp18 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[10]/* m.mean1.t_eps PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta19 = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nm.mean1.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta19));
        } else {
          FILE_INFO info = {"/home/pikarz1/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Math.mo",2300,5,2302,43,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nm.mean1.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta19));
        }
      }
      tmp20 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 134
type: ALGORITHM

  assert(m.std3.t_eps >= 1e-13, "Variable violating min constraint: 1e-13 <= m.std3.t_eps, has value: " + String(m.std3.t_eps, "g"));
*/
OMC_DISABLE_OPT
static void System_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  modelica_boolean tmp21;
  static const MMC_DEFSTRINGLIT(tmp22,69,"Variable violating min constraint: 1e-13 <= m.std3.t_eps, has value: ");
  modelica_string tmp23;
  modelica_metatype tmpMeta24;
  static int tmp25 = 0;
  if(!tmp25)
  {
    tmp21 = GreaterEq((data->simulationInfo->realParameter[28]/* m.std3.t_eps PARAM */) ,1e-13);
    if(!tmp21)
    {
      tmp23 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[28]/* m.std3.t_eps PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta24 = stringAppend(MMC_REFSTRINGLIT(tmp22),tmp23);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nm.std3.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta24));
        } else {
          FILE_INFO info = {"/home/pikarz1/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Math.mo",2513,5,2515,43,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nm.std3.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta24));
        }
      }
      tmp25 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 135
type: ALGORITHM

  assert(m.std3.variance.t_eps >= 1e-13, "Variable violating min constraint: 1e-13 <= m.std3.variance.t_eps, has value: " + String(m.std3.variance.t_eps, "g"));
*/
OMC_DISABLE_OPT
static void System_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  modelica_boolean tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,78,"Variable violating min constraint: 1e-13 <= m.std3.variance.t_eps, has value: ");
  modelica_string tmp28;
  modelica_metatype tmpMeta29;
  static int tmp30 = 0;
  if(!tmp30)
  {
    tmp26 = GreaterEq((data->simulationInfo->realParameter[30]/* m.std3.variance.t_eps PARAM */) ,1e-13);
    if(!tmp26)
    {
      tmp28 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[30]/* m.std3.variance.t_eps PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta29 = stringAppend(MMC_REFSTRINGLIT(tmp27),tmp28);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nm.std3.variance.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta29));
        } else {
          FILE_INFO info = {"/home/pikarz1/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Math.mo",2422,5,2424,43,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nm.std3.variance.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta29));
        }
      }
      tmp30 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 136
type: ALGORITHM

  assert(m.std2.t_eps >= 1e-13, "Variable violating min constraint: 1e-13 <= m.std2.t_eps, has value: " + String(m.std2.t_eps, "g"));
*/
OMC_DISABLE_OPT
static void System_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  modelica_boolean tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,69,"Variable violating min constraint: 1e-13 <= m.std2.t_eps, has value: ");
  modelica_string tmp33;
  modelica_metatype tmpMeta34;
  static int tmp35 = 0;
  if(!tmp35)
  {
    tmp31 = GreaterEq((data->simulationInfo->realParameter[25]/* m.std2.t_eps PARAM */) ,1e-13);
    if(!tmp31)
    {
      tmp33 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[25]/* m.std2.t_eps PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta34 = stringAppend(MMC_REFSTRINGLIT(tmp32),tmp33);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nm.std2.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta34));
        } else {
          FILE_INFO info = {"/home/pikarz1/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Math.mo",2513,5,2515,43,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nm.std2.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta34));
        }
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 137
type: ALGORITHM

  assert(m.std2.variance.t_eps >= 1e-13, "Variable violating min constraint: 1e-13 <= m.std2.variance.t_eps, has value: " + String(m.std2.variance.t_eps, "g"));
*/
OMC_DISABLE_OPT
static void System_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,78,"Variable violating min constraint: 1e-13 <= m.std2.variance.t_eps, has value: ");
  modelica_string tmp38;
  modelica_metatype tmpMeta39;
  static int tmp40 = 0;
  if(!tmp40)
  {
    tmp36 = GreaterEq((data->simulationInfo->realParameter[27]/* m.std2.variance.t_eps PARAM */) ,1e-13);
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[27]/* m.std2.variance.t_eps PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta39 = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nm.std2.variance.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta39));
        } else {
          FILE_INFO info = {"/home/pikarz1/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Math.mo",2422,5,2424,43,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nm.std2.variance.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta39));
        }
      }
      tmp40 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 138
type: ALGORITHM

  assert(m.std1.t_eps >= 1e-13, "Variable violating min constraint: 1e-13 <= m.std1.t_eps, has value: " + String(m.std1.t_eps, "g"));
*/
OMC_DISABLE_OPT
static void System_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  modelica_boolean tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,69,"Variable violating min constraint: 1e-13 <= m.std1.t_eps, has value: ");
  modelica_string tmp43;
  modelica_metatype tmpMeta44;
  static int tmp45 = 0;
  if(!tmp45)
  {
    tmp41 = GreaterEq((data->simulationInfo->realParameter[22]/* m.std1.t_eps PARAM */) ,1e-13);
    if(!tmp41)
    {
      tmp43 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[22]/* m.std1.t_eps PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta44 = stringAppend(MMC_REFSTRINGLIT(tmp42),tmp43);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nm.std1.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta44));
        } else {
          FILE_INFO info = {"/home/pikarz1/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Math.mo",2513,5,2515,43,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nm.std1.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta44));
        }
      }
      tmp45 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 139
type: ALGORITHM

  assert(m.std1.variance.t_eps >= 1e-13, "Variable violating min constraint: 1e-13 <= m.std1.variance.t_eps, has value: " + String(m.std1.variance.t_eps, "g"));
*/
OMC_DISABLE_OPT
static void System_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  modelica_boolean tmp46;
  static const MMC_DEFSTRINGLIT(tmp47,78,"Variable violating min constraint: 1e-13 <= m.std1.variance.t_eps, has value: ");
  modelica_string tmp48;
  modelica_metatype tmpMeta49;
  static int tmp50 = 0;
  if(!tmp50)
  {
    tmp46 = GreaterEq((data->simulationInfo->realParameter[24]/* m.std1.variance.t_eps PARAM */) ,1e-13);
    if(!tmp46)
    {
      tmp48 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[24]/* m.std1.variance.t_eps PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta49 = stringAppend(MMC_REFSTRINGLIT(tmp47),tmp48);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nm.std1.variance.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta49));
        } else {
          FILE_INFO info = {"/home/pikarz1/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Math.mo",2422,5,2424,43,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nm.std1.variance.t_eps >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta49));
        }
      }
      tmp50 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void System_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
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
  System_eqFunction_6(data, threadData);
  System_eqFunction_5(data, threadData);
  System_eqFunction_4(data, threadData);
  System_eqFunction_3(data, threadData);
  System_eqFunction_2(data, threadData);
  System_eqFunction_1(data, threadData);
  System_eqFunction_131(data, threadData);
  System_eqFunction_132(data, threadData);
  System_eqFunction_133(data, threadData);
  System_eqFunction_134(data, threadData);
  System_eqFunction_135(data, threadData);
  System_eqFunction_136(data, threadData);
  System_eqFunction_137(data, threadData);
  System_eqFunction_138(data, threadData);
  System_eqFunction_139(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int System_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  System_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

