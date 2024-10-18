#include "omc_simulation_settings.h"
#include "System_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "System_includes.h"


DLLExport
modelica_real omc_LoopProb(threadData_t *threadData, modelica_real _T, modelica_real _sjt)
{
  modelica_real _p;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _p has no default value.
  tmp1 = _sjt;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "T / sjt");}
  _p = 1.0 - ((_T) / tmp1);
  _return: OMC_LABEL_UNUSED
  return _p;
}
modelica_metatype boxptr_LoopProb(threadData_t *threadData, modelica_metatype _T, modelica_metatype _sjt)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _p;
  modelica_metatype out_p;
  tmp1 = mmc_unbox_real(_T);
  tmp2 = mmc_unbox_real(_sjt);
  _p = omc_LoopProb(threadData, tmp1, tmp2);
  out_p = mmc_mk_rcon(_p);
  return out_p;
}

DLLExport
modelica_integer omc_Next(threadData_t *threadData, modelica_integer _k, modelica_integer _i)
{
  modelica_integer _j;
  modelica_real _p;
  modelica_real _y;
  Prm _q;
  _tailrecursive: OMC_LABEL_UNUSED
  // _j has no default value.
  // _p has no default value.
  // _y has no default value.
  Prm_construct(threadData, _q); // _q has no default value.
  _p = omc_myrandom(threadData);

  _j = ((modelica_integer) 1);

  _y = omc_P(threadData, _q, _k, _i, _j);

  while(1)
  {
    if(!((_p > _y) && (_j < _q._N))) break;
    _j = _j + ((modelica_integer) 1);

    _y = _y + omc_P(threadData, _q, _k, _i, _j);
  }
  _return: OMC_LABEL_UNUSED
  return _j;
}
modelica_metatype boxptr_Next(threadData_t *threadData, modelica_metatype _k, modelica_metatype _i)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _j;
  modelica_metatype out_j;
  tmp1 = mmc_unbox_integer(_k);
  tmp2 = mmc_unbox_integer(_i);
  _j = omc_Next(threadData, tmp1, tmp2);
  out_j = mmc_mk_icon(_j);
  return out_j;
}

DLLExport
modelica_real omc_P(threadData_t *threadData, Prm _q, modelica_integer _k, modelica_integer _i, modelica_integer _j)
{
  modelica_real _p;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _p has no default value.
  if((_i == _j))
  {
    _p = omc_LoopProb(threadData, ((modelica_real)_q._T), omc_tau(threadData, _q, _i, _k));
  }
  else
  {
    if(((_i == ((modelica_integer) 1)) && (_j == ((modelica_integer) 2))))
    {
      _p = 1.0 - omc_LoopProb(threadData, ((modelica_real)_q._T), omc_tau(threadData, _q, _i, _k));
    }
    else
    {
      if((((((modelica_integer) 2) <= _i) && (_i <= _q._N - ((modelica_integer) 1))) && (_j == _i + ((modelica_integer) 1))))
      {
        _p = (1.0 - omc_alpha(threadData, _k)) * (1.0 - omc_LoopProb(threadData, ((modelica_real)_q._T), omc_tau(threadData, _q, _i, _k)));
      }
      else
      {
        if(((((((modelica_integer) 2) <= _i) && (_i <= _q._N - ((modelica_integer) 1))) && (((modelica_integer) 1) <= _j)) && (_j < _i)))
        {
          tmp1 = ((modelica_real)_i - ((modelica_integer) 1));
          if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "alpha(k) * (1.0 - LoopProb(/*Real*/(q.T), tau(q, i, k))) / /*Real*/(i - 1)");}
          _p = ((omc_alpha(threadData, _k)) * (1.0 - omc_LoopProb(threadData, ((modelica_real)_q._T), omc_tau(threadData, _q, _i, _k)))) / tmp1;
        }
        else
        {
          if(((_i == _q._N) && (_j == ((modelica_integer) 1))))
          {
            _p = 1.0;
          }
          else
          {
            _p = 0.0;
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _p;
}
modelica_metatype boxptr_P(threadData_t *threadData, modelica_metatype _q, modelica_metatype _k, modelica_metatype _i, modelica_metatype _j)
{
  Prm tmp1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_metatype tmpMeta12;
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  modelica_integer tmp15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_integer tmp19;
  modelica_metatype tmpMeta20;
  modelica_integer tmp21;
  modelica_metatype tmpMeta22;
  modelica_integer tmp23;
  modelica_integer tmp24;
  modelica_integer tmp25;
  modelica_integer tmp26;
  modelica_real _p;
  modelica_metatype out_p;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 2)));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmp1._ID = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 3)));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmp1._MyMagicNumber = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 4)));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmp1._W = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 5)));
  tmp9 = mmc_unbox_integer(tmpMeta8);
  tmp1._N = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 6)));
  tmp11 = mmc_unbox_integer(tmpMeta10);
  tmp1._A = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 7)));
  tmp13 = mmc_unbox_integer(tmpMeta12);
  tmp1._B = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 8)));
  tmp15 = mmc_unbox_integer(tmpMeta14);
  tmp1._C = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 9)));
  tmp17 = mmc_unbox_integer(tmpMeta16);
  tmp1._D = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 10)));
  tmp19 = mmc_unbox_integer(tmpMeta18);
  tmp1._F = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 11)));
  tmp21 = mmc_unbox_integer(tmpMeta20);
  tmp1._G = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 12)));
  tmp23 = mmc_unbox_integer(tmpMeta22);
  tmp1._T = tmp23;tmp24 = mmc_unbox_integer(_k);
  tmp25 = mmc_unbox_integer(_i);
  tmp26 = mmc_unbox_integer(_j);
  _p = omc_P(threadData, tmp1, tmp24, tmp25, tmp26);
  out_p = mmc_mk_rcon(_p);
  return out_p;
}

Prm omc_Prm(threadData_t *threadData, modelica_integer omc_ID, modelica_integer omc_MyMagicNumber, modelica_integer omc_W, modelica_integer omc_N, modelica_integer omc_A, modelica_integer omc_B, modelica_integer omc_C, modelica_integer omc_D, modelica_integer omc_F, modelica_integer omc_G, modelica_integer omc_T)
{
  Prm tmp1;
  tmp1._ID = omc_ID;
  tmp1._MyMagicNumber = omc_MyMagicNumber;
  tmp1._W = omc_W;
  tmp1._N = omc_N;
  tmp1._A = omc_A;
  tmp1._B = omc_B;
  tmp1._C = omc_C;
  tmp1._D = omc_D;
  tmp1._F = omc_F;
  tmp1._G = omc_G;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Prm(threadData_t *threadData, modelica_metatype _ID, modelica_metatype _MyMagicNumber, modelica_metatype _W, modelica_metatype _N, modelica_metatype _A, modelica_metatype _B, modelica_metatype _C, modelica_metatype _D, modelica_metatype _F, modelica_metatype _G, modelica_metatype _T)
{
  return mmc_mk_box12(3, &Prm__desc, _ID, _MyMagicNumber, _W, _N, _A, _B, _C, _D, _F, _G, _T);
}

DLLExport
modelica_real omc_alpha(threadData_t *threadData, modelica_integer _k)
{
  modelica_real _result;
  Prm _q;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  Prm_construct(threadData, _q); // _q has no default value.
  tmp1 = ((modelica_real)(_q._F) * ((_q._G) * (_q._W) - _k));
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / /*Real*/(q.F * (q.G * q.W - k))");}
  _result = (1.0) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_alpha(threadData_t *threadData, modelica_metatype _k)
{
  modelica_integer tmp1;
  modelica_real _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_integer(_k);
  _result = omc_alpha(threadData, tmp1);
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

modelica_real omc_myrandom(threadData_t *threadData)
{
  double _result_ext;
  modelica_real _result;
  // _result has no default value.
  _result_ext = myrandom();
  _result = (modelica_real)_result_ext;
  return _result;
}
modelica_metatype boxptr_myrandom(threadData_t *threadData)
{
  modelica_real _result;
  modelica_metatype out_result;
  _result = omc_myrandom(threadData);
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

DLLExport
modelica_real omc_tau(threadData_t *threadData, Prm _q, modelica_integer _i, modelica_integer _k)
{
  modelica_real _result;
  modelica_real tmp1;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  tmp1 = ((modelica_real)_k);
  tmp2 = ((modelica_real)_i);
  _result = ((modelica_real)_q._A) + (((modelica_real)_q._B)) * ((tmp1 * tmp1)) + (((modelica_real)_q._C)) * ((tmp2 * tmp2)) + ((modelica_real)((_q._D) * (_k)) * (_i));
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_tau(threadData_t *threadData, modelica_metatype _q, modelica_metatype _i, modelica_metatype _k)
{
  Prm tmp1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_integer tmp9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_metatype tmpMeta12;
  modelica_integer tmp13;
  modelica_metatype tmpMeta14;
  modelica_integer tmp15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_integer tmp19;
  modelica_metatype tmpMeta20;
  modelica_integer tmp21;
  modelica_metatype tmpMeta22;
  modelica_integer tmp23;
  modelica_integer tmp24;
  modelica_integer tmp25;
  modelica_real _result;
  modelica_metatype out_result;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 2)));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmp1._ID = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 3)));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmp1._MyMagicNumber = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 4)));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmp1._W = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 5)));
  tmp9 = mmc_unbox_integer(tmpMeta8);
  tmp1._N = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 6)));
  tmp11 = mmc_unbox_integer(tmpMeta10);
  tmp1._A = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 7)));
  tmp13 = mmc_unbox_integer(tmpMeta12);
  tmp1._B = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 8)));
  tmp15 = mmc_unbox_integer(tmpMeta14);
  tmp1._C = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 9)));
  tmp17 = mmc_unbox_integer(tmpMeta16);
  tmp1._D = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 10)));
  tmp19 = mmc_unbox_integer(tmpMeta18);
  tmp1._F = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 11)));
  tmp21 = mmc_unbox_integer(tmpMeta20);
  tmp1._G = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_q), 12)));
  tmp23 = mmc_unbox_integer(tmpMeta22);
  tmp1._T = tmp23;tmp24 = mmc_unbox_integer(_i);
  tmp25 = mmc_unbox_integer(_k);
  _result = omc_tau(threadData, tmp1, tmp24, tmp25);
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

modelica_string omc_Modelica_Utilities_Files_fullPathName(threadData_t *threadData, modelica_string _name)
{
  const char* _fullName_ext;
  modelica_string _fullName = NULL;
  // _fullName has no default value.
  _fullName_ext = ModelicaInternal_fullPathName(MMC_STRINGDATA(_name));
  _fullName = (modelica_string)mmc_mk_scon(_fullName_ext);
  return _fullName;
}

DLLExport
void omc_Modelica_Utilities_Files_remove(threadData_t *threadData, modelica_string _name)
{
  modelica_string _fullName = NULL;
  modelica_integer _fileType;
  _tailrecursive: OMC_LABEL_UNUSED
  // _fullName has no default value.
  _fileType = omc_Modelica_Utilities_Internal_FileSystem_stat(threadData, _name);
  if((((modelica_integer)_fileType == 2) || ((modelica_integer)_fileType == 4)))
  {
    omc_Modelica_Utilities_Internal_FileSystem_removeFile(threadData, _name);
  }
  else
  {
    if(((modelica_integer)_fileType == 3))
    {
      _fullName = omc_Modelica_Utilities_Files_fullPathName(threadData, _name);

      omc_Modelica_Utilities_Files_remove_removeDirectory(threadData, _fullName);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
void omc_Modelica_Utilities_Files_remove_removeDirectory(threadData_t *threadData, modelica_string _name)
{
  modelica_integer _lenName;
  modelica_string _name2 = NULL;
  _tailrecursive: OMC_LABEL_UNUSED
  _lenName = omc_Modelica_Utilities_Strings_length(threadData, _name);
  _name2 = ((stringEqual(omc_Modelica_Utilities_Strings_substring(threadData, _name, _lenName, _lenName), _OMC_LIT0))?omc_Modelica_Utilities_Strings_substring(threadData, _name, _lenName - ((modelica_integer) 1), _lenName - ((modelica_integer) 1)):_name);
  omc_Modelica_Utilities_Files_remove_removeDirectoryContents(threadData, omc_Modelica_Utilities_Internal_FileSystem_readDirectory(threadData, _name2, omc_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles(threadData, _name2)), _name2);

  omc_Modelica_Utilities_Internal_FileSystem_rmdir(threadData, _name2);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
void omc_Modelica_Utilities_Files_remove_removeDirectoryContents(threadData_t *threadData, string_array _fileNames, modelica_string _name2)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp6 = size_of_dimension_base_array(_fileNames, ((modelica_integer) 1));
  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = tmp6;
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp3, tmp5); _i += tmp4)
    {
      tmpMeta1 = stringAppend(_name2,_OMC_LIT0);
      tmpMeta2 = stringAppend(tmpMeta1,string_array_get(_fileNames, 1, _i));
      omc_Modelica_Utilities_Files_remove(threadData, tmpMeta2);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_Modelica_Utilities_Files_remove_removeDirectoryContents(threadData_t *threadData, modelica_metatype _fileNames, modelica_metatype _name2)
{
  omc_Modelica_Utilities_Files_remove_removeDirectoryContents(threadData, *((base_array_t*)_fileNames), _name2);
  return;
}

modelica_integer omc_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles(threadData_t *threadData, modelica_string _directory)
{
  int _result_ext;
  modelica_integer _result;
  // _result has no default value.
  _result_ext = ModelicaInternal_getNumberOfFiles(MMC_STRINGDATA(_directory));
  _result = (modelica_integer)_result_ext;
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles(threadData_t *threadData, modelica_metatype _directory)
{
  modelica_integer _result;
  modelica_metatype out_result;
  _result = omc_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles(threadData, _directory);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

string_array omc_Modelica_Utilities_Internal_FileSystem_readDirectory(threadData_t *threadData, modelica_string _directory, modelica_integer _nNames)
{
  int _nNames_ext;
  void *_names_c89;
  string_array _names;
  alloc_string_array(&(_names), 1, (_index_t)_nNames); // _names has no default value.
  _nNames_ext = (int)_nNames;
  fill_string_array(&_names, mmc_string_uninitialized);
  _names_c89 = (void*) data_of_string_c89_array(_names);
  ModelicaInternal_readDirectory(MMC_STRINGDATA(_directory), _nNames_ext, (const char**) _names_c89);
  unpack_string_array(&_names, _names_c89);
  return _names;
}
modelica_metatype boxptr_Modelica_Utilities_Internal_FileSystem_readDirectory(threadData_t *threadData, modelica_metatype _directory, modelica_metatype _nNames)
{
  modelica_integer tmp1;
  string_array _names;
  modelica_metatype out_names;
  tmp1 = mmc_unbox_integer(_nNames);
  _names = omc_Modelica_Utilities_Internal_FileSystem_readDirectory(threadData, _directory, tmp1);
  out_names = mmc_mk_modelica_array(_names);
  return out_names;
}

void omc_Modelica_Utilities_Internal_FileSystem_removeFile(threadData_t *threadData, modelica_string _fileName)
{
  ModelicaInternal_removeFile(MMC_STRINGDATA(_fileName));
  return;
}

void omc_Modelica_Utilities_Internal_FileSystem_rmdir(threadData_t *threadData, modelica_string _directoryName)
{
  ModelicaInternal_rmdir(MMC_STRINGDATA(_directoryName));
  return;
}

modelica_integer omc_Modelica_Utilities_Internal_FileSystem_stat(threadData_t *threadData, modelica_string _name)
{
  int _fileType_ext;
  modelica_integer _fileType;
  // _fileType has no default value.
  _fileType_ext = ModelicaInternal_stat(MMC_STRINGDATA(_name));
  _fileType = (modelica_integer)_fileType_ext;
  return _fileType;
}
modelica_metatype boxptr_Modelica_Utilities_Internal_FileSystem_stat(threadData_t *threadData, modelica_metatype _name)
{
  modelica_integer _fileType;
  modelica_metatype out_fileType;
  _fileType = omc_Modelica_Utilities_Internal_FileSystem_stat(threadData, _name);
  out_fileType = mmc_mk_icon(_fileType);
  return out_fileType;
}

void omc_Modelica_Utilities_Streams_print(threadData_t *threadData, modelica_string _string, modelica_string _fileName)
{
  ModelicaInternal_print(MMC_STRINGDATA(_string), MMC_STRINGDATA(_fileName));
  return;
}

modelica_integer omc_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_string _string)
{
  int _result_ext;
  modelica_integer _result;
  // _result has no default value.
  _result_ext = ModelicaStrings_length(MMC_STRINGDATA(_string));
  _result = (modelica_integer)_result_ext;
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_metatype _string)
{
  modelica_integer _result;
  modelica_metatype out_result;
  _result = omc_Modelica_Utilities_Strings_length(threadData, _string);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

modelica_string omc_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_integer _endIndex)
{
  int _startIndex_ext;
  int _endIndex_ext;
  const char* _result_ext;
  modelica_string _result = NULL;
  // _result has no default value.
  _startIndex_ext = (int)_startIndex;
  _endIndex_ext = (int)_endIndex;
  _result_ext = ModelicaStrings_substring(MMC_STRINGDATA(_string), _startIndex_ext, _endIndex_ext);
  _result = (modelica_string)mmc_mk_scon(_result_ext);
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _endIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_string _result = NULL;
  tmp1 = mmc_unbox_integer(_startIndex);
  tmp2 = mmc_unbox_integer(_endIndex);
  _result = omc_Modelica_Utilities_Strings_substring(threadData, _string, tmp1, tmp2);
  /* skip box _result; String */
  return _result;
}

#ifdef __cplusplus
}
#endif
