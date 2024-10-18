/* Non Linear Systems */
#include "System_model.h"
#include "System_12jac.h"
#include "util/jacobian_util.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 82
type: ALGORITHM

  m.e[3] := pre(m.e[3]);
  m.e[2] := pre(m.e[2]);
  m.e[1] := pre(m.e[1]);
  $whenCondition3 := pre($whenCondition3);
  $whenCondition2 := pre($whenCondition2);
  $whenCondition2 := sample(2, 0.0, m.p.T);
  $whenCondition3 := time > m.p.HORIZON;
  when $whenCondition2 then
    m.e[1] := pre(m.x[1]) - m.r[1];
    m.e[2] := pre(m.x[2]) - m.r[2];
    m.e[3] := pre(m.x[3]) - m.r[3];
  elsewhen $whenCondition3 then
    Modelica.Utilities.Files.remove("outputs.txt");
    Modelica.Utilities.Streams.print("ComponenteIndex AvgErr StdDevErr (ID = " + String(m.p.ID, 0, true) + ", MyMagicNumber = " + String(m.p.MyMagicNumber, 0, true) + ", 
    HORIZON = " + String(m.p.HORIZON, 6, 0, true) + ", time = " + String(time, 6, 0, true) + ")", "outputs.txt");
    for i in 1:3 loop
      Modelica.Utilities.Streams.print(String(i, 0, true) + "  " + String(m.AvgErr[i], 6, 0, true) + "  " + String(m.StdDevErr[i], 6, 0, true), "outputs.txt");
    end for;
    terminate("Standard deviation completion time small enough for reliable estimate");
  end when;
*/
void System_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,11,"outputs.txt");
  static const MMC_DEFSTRINGLIT(tmp2,39,"ComponenteIndex AvgErr StdDevErr (ID = ");
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  static const MMC_DEFSTRINGLIT(tmp5,18,", MyMagicNumber = ");
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  static const MMC_DEFSTRINGLIT(tmp9,17,", \n    HORIZON = ");
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  static const MMC_DEFSTRINGLIT(tmp13,9,", time = ");
  modelica_metatype tmpMeta14;
  modelica_string tmp15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  static const MMC_DEFSTRINGLIT(tmp18,11,"outputs.txt");
  modelica_string tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,2,"  ");
  modelica_metatype tmpMeta21;
  modelica_string tmp22;
  modelica_metatype tmpMeta23;
  static const MMC_DEFSTRINGLIT(tmp24,2,"  ");
  modelica_metatype tmpMeta25;
  modelica_string tmp26;
  modelica_metatype tmpMeta27;
  static const MMC_DEFSTRINGLIT(tmp28,11,"outputs.txt");
  modelica_integer tmp29;
  modelica_integer tmp30;
  modelica_integer tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,69,"Standard deviation completion time small enough for reliable estimate");
  (data->localData[0]->realVars[59]/* m.e[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[59]/* m.e[3] DISCRETE */) ;

  (data->localData[0]->realVars[58]/* m.e[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[58]/* m.e[2] DISCRETE */) ;

  (data->localData[0]->realVars[57]/* m.e[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[57]/* m.e[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[2]/* $whenCondition3 DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[1]/* $whenCondition2 DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  = data->simulationInfo->samples[1];

  relationhysteresis(data, &tmp0, data->localData[0]->timeValue, (data->simulationInfo->realParameter[15]/* m.p.HORIZON PARAM */) , 0, Greater, GreaterZC);
  (data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  = tmp0;

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[1]/* $whenCondition2 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[1]/* $whenCondition2 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[57]/* m.e[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[48]/* m.x[1] variable */)  - (data->localData[0]->realVars[39]/* m.r[1] variable */) ;

      (data->localData[0]->realVars[58]/* m.e[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[49]/* m.x[2] variable */)  - (data->localData[0]->realVars[40]/* m.r[2] variable */) ;

      (data->localData[0]->realVars[59]/* m.e[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[50]/* m.x[3] variable */)  - (data->localData[0]->realVars[41]/* m.r[3] variable */) ;
    }
    else if(((data->localData[0]->booleanVars[2]/* $whenCondition3 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[2]/* $whenCondition3 DISCRETE */)  /* edge */))
    {
      omc_Modelica_Utilities_Files_remove(threadData, MMC_REFSTRINGLIT(tmp1));

      tmp3 = modelica_integer_to_modelica_string((data->simulationInfo->integerParameter[2]/* m.p.ID PARAM */) , ((modelica_integer) 0), 1);
      tmpMeta4 = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      tmpMeta6 = stringAppend(tmpMeta4,MMC_REFSTRINGLIT(tmp5));
      tmp7 = modelica_integer_to_modelica_string((data->simulationInfo->integerParameter[3]/* m.p.MyMagicNumber PARAM */) , ((modelica_integer) 0), 1);
      tmpMeta8 = stringAppend(tmpMeta6,tmp7);
      tmpMeta10 = stringAppend(tmpMeta8,MMC_REFSTRINGLIT(tmp9));
      tmp11 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[15]/* m.p.HORIZON PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta12 = stringAppend(tmpMeta10,tmp11);
      tmpMeta14 = stringAppend(tmpMeta12,MMC_REFSTRINGLIT(tmp13));
      tmp15 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta16 = stringAppend(tmpMeta14,tmp15);
      tmpMeta17 = stringAppend(tmpMeta16,(modelica_string) mmc_strings_len1[41]);
      omc_Modelica_Utilities_Streams_print(threadData, tmpMeta17, MMC_REFSTRINGLIT(tmp18));

      tmp29 = ((modelica_integer) 1); tmp30 = 1; tmp31 = ((modelica_integer) 3);
      if(!(((tmp30 > 0) && (tmp29 > tmp31)) || ((tmp30 < 0) && (tmp29 < tmp31))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp29, tmp31); i += tmp30)
        {
          tmp19 = modelica_integer_to_modelica_string(i, ((modelica_integer) 0), 1);
          tmpMeta21 = stringAppend(tmp19,MMC_REFSTRINGLIT(tmp20));
          tmp22 = modelica_real_to_modelica_string((&data->localData[0]->realVars[30]/* m.AvgErr[1] variable */)[i - 1] , ((modelica_integer) 6), ((modelica_integer) 0), 1);
          tmpMeta23 = stringAppend(tmpMeta21,tmp22);
          tmpMeta25 = stringAppend(tmpMeta23,MMC_REFSTRINGLIT(tmp24));
          tmp26 = modelica_real_to_modelica_string((&data->localData[0]->realVars[33]/* m.StdDevErr[1] variable */)[i - 1] , ((modelica_integer) 6), ((modelica_integer) 0), 1);
          tmpMeta27 = stringAppend(tmpMeta25,tmp26);
          omc_Modelica_Utilities_Streams_print(threadData, tmpMeta27, MMC_REFSTRINGLIT(tmp28));
        }
      }

      {
        FILE_INFO info = {"/home/pikarz1/Desktop/exam/2023-01-20-Anthony-DiPietro-1960447/5/monitor.mo",58,5,58,87,0};
        omc_terminate(info, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp32)));
      }
    }
  }
  TRACE_POP
}

void residualFunc86(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,86};
  int i,j;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  /* iteration variables */
  for (i=0; i<3; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(LOG_NLS, 0, "residualFunc86: Iteration variable xloc[%i] is nan.", i);
      for (j=0; j<3; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "residualFunc86 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[32]/* m.AvgErr[3] variable */)  = xloc[0];
  (data->localData[0]->realVars[31]/* m.AvgErr[2] variable */)  = xloc[1];
  (data->localData[0]->realVars[30]/* m.AvgErr[1] variable */)  = xloc[2];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  System_eqFunction_82(data, threadData);
  /* body */
  tmp0 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[9]/* m.mean1.t_0 PARAM */)  + (data->simulationInfo->realParameter[10]/* m.mean1.t_eps PARAM */) );
  res[0] = (tmp0?(data->localData[0]->realVars[0]/* m.mean1.mu STATE(1) */) :(data->localData[0]->realVars[57]/* m.e[1] DISCRETE */) ) - (data->localData[0]->realVars[30]/* m.AvgErr[1] variable */) ;

  tmp1 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[11]/* m.mean2.t_0 PARAM */)  + (data->simulationInfo->realParameter[12]/* m.mean2.t_eps PARAM */) );
  res[1] = (tmp1?(data->localData[0]->realVars[1]/* m.mean2.mu STATE(1) */) :(data->localData[0]->realVars[58]/* m.e[2] DISCRETE */) ) - (data->localData[0]->realVars[31]/* m.AvgErr[2] variable */) ;

  tmp2 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[13]/* m.mean3.t_0 PARAM */)  + (data->simulationInfo->realParameter[14]/* m.mean3.t_eps PARAM */) );
  res[2] = (tmp2?(data->localData[0]->realVars[2]/* m.mean3.mu STATE(1) */) :(data->localData[0]->realVars[59]/* m.e[3] DISCRETE */) ) - (data->localData[0]->realVars[32]/* m.AvgErr[3] variable */) ;
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS86(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+3] = {0,3,3,3};
  const int rowIndex[9] = {0,1,2,0,1,2,0,1,2};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 1;
  inSysData->sparsePattern = allocSparsePattern(3, 9, 3);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (3+1)*sizeof(unsigned int));
  
  for(i=2;i<3+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 9*sizeof(unsigned int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[2] = 1;
  inSysData->sparsePattern->colorCols[1] = 2;
  inSysData->sparsePattern->colorCols[0] = 3;
}

OMC_DISABLE_OPT
void initializeStaticDataNLS86(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern)
{
  int i=0;
  /* static nls data for m.AvgErr[3] */
  sysData->nominal[i] = data->modelData->realVarsData[32].attribute /* m.AvgErr[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[32].attribute /* m.AvgErr[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[32].attribute /* m.AvgErr[3] */.max;
  /* static nls data for m.AvgErr[2] */
  sysData->nominal[i] = data->modelData->realVarsData[31].attribute /* m.AvgErr[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[31].attribute /* m.AvgErr[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[31].attribute /* m.AvgErr[2] */.max;
  /* static nls data for m.AvgErr[1] */
  sysData->nominal[i] = data->modelData->realVarsData[30].attribute /* m.AvgErr[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[30].attribute /* m.AvgErr[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[30].attribute /* m.AvgErr[1] */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS86(sysData);
  }
}

OMC_DISABLE_OPT
void getIterationVarsNLS86(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[32]/* m.AvgErr[3] variable */) ;
  array[1] = (data->localData[0]->realVars[31]/* m.AvgErr[2] variable */) ;
  array[2] = (data->localData[0]->realVars[30]/* m.AvgErr[1] variable */) ;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void System_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[0].equationIndex = 86;
  nonLinearSystemData[0].size = 3;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc86;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS86;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS86;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

