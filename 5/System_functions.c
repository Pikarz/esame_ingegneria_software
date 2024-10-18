#include "omc_simulation_settings.h"
#include "System_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "System_includes.h"


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
modelica_real omc_simulate__wind(threadData_t *threadData)
{
  modelica_real _p;
  _tailrecursive: OMC_LABEL_UNUSED
  // _p has no default value.
  if((omc_myrandom(threadData) <= 0.5))
  {
    _p = omc_myrandom(threadData);
  }
  else
  {
    _p = (-omc_myrandom(threadData));
  }
  _return: OMC_LABEL_UNUSED
  return _p;
}
modelica_metatype boxptr_simulate__wind(threadData_t *threadData)
{
  modelica_real _p;
  modelica_metatype out_p;
  _p = omc_simulate__wind(threadData);
  out_p = mmc_mk_rcon(_p);
  return out_p;
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
