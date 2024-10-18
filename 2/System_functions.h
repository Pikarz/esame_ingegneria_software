#ifndef System__H
#define System__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif


DLLExport
modelica_boolean omc_FifoIODone(threadData_t *threadData, modelica_integer _x);
DLLExport
modelica_metatype boxptr_FifoIODone(threadData_t *threadData, modelica_metatype _x);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FifoIODone,2,0) {(void*) boxptr_FifoIODone,0}};
#define boxvar_FifoIODone MMC_REFSTRUCTLIT(boxvar_lit_FifoIODone)


DLLExport
modelica_boolean omc_ReadFromFIFO(threadData_t *threadData, modelica_integer _x, modelica_boolean _datavailable, modelica_boolean _readsignal, modelica_integer *out_new_x);
DLLExport
modelica_metatype boxptr_ReadFromFIFO(threadData_t *threadData, modelica_metatype _x, modelica_metatype _datavailable, modelica_metatype _readsignal, modelica_metatype *out_new_x);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ReadFromFIFO,2,0) {(void*) boxptr_ReadFromFIFO,0}};
#define boxvar_ReadFromFIFO MMC_REFSTRUCTLIT(boxvar_lit_ReadFromFIFO)


DLLExport
modelica_boolean omc_WriteToFIFO(threadData_t *threadData, modelica_integer _x, modelica_boolean _writesignal, modelica_boolean _spaceavailable, modelica_integer *out_new_x);
DLLExport
modelica_metatype boxptr_WriteToFIFO(threadData_t *threadData, modelica_metatype _x, modelica_metatype _writesignal, modelica_metatype _spaceavailable, modelica_metatype *out_new_x);
static const MMC_DEFSTRUCTLIT(boxvar_lit_WriteToFIFO,2,0) {(void*) boxptr_WriteToFIFO,0}};
#define boxvar_WriteToFIFO MMC_REFSTRUCTLIT(boxvar_lit_WriteToFIFO)


DLLExport
modelica_integer omc_generateValue(threadData_t *threadData);
DLLExport
modelica_metatype boxptr_generateValue(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_generateValue,2,0) {(void*) boxptr_generateValue,0}};
#define boxvar_generateValue MMC_REFSTRUCTLIT(boxvar_lit_generateValue)


DLLExport
modelica_real omc_myrandom(threadData_t *threadData);
DLLExport
modelica_metatype boxptr_myrandom(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_myrandom,2,0) {(void*) boxptr_myrandom,0}};
#define boxvar_myrandom MMC_REFSTRUCTLIT(boxvar_lit_myrandom)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern double myrandom();
 */


DLLExport
modelica_string omc_Modelica_Utilities_Files_fullPathName(threadData_t *threadData, modelica_string _name);
#define boxptr_Modelica_Utilities_Files_fullPathName omc_Modelica_Utilities_Files_fullPathName
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_fullPathName,2,0) {(void*) boxptr_Modelica_Utilities_Files_fullPathName,0}};
#define boxvar_Modelica_Utilities_Files_fullPathName MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_fullPathName)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern const char* ModelicaInternal_fullPathName(const char* (*_name*));
 */


DLLExport
void omc_Modelica_Utilities_Files_remove(threadData_t *threadData, modelica_string _name);
#define boxptr_Modelica_Utilities_Files_remove omc_Modelica_Utilities_Files_remove
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_remove,2,0) {(void*) boxptr_Modelica_Utilities_Files_remove,0}};
#define boxvar_Modelica_Utilities_Files_remove MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_remove)


DLLExport
void omc_Modelica_Utilities_Files_remove_removeDirectory(threadData_t *threadData, modelica_string _name);
#define boxptr_Modelica_Utilities_Files_remove_removeDirectory omc_Modelica_Utilities_Files_remove_removeDirectory
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_remove_removeDirectory,2,0) {(void*) boxptr_Modelica_Utilities_Files_remove_removeDirectory,0}};
#define boxvar_Modelica_Utilities_Files_remove_removeDirectory MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_remove_removeDirectory)


DLLExport
void omc_Modelica_Utilities_Files_remove_removeDirectoryContents(threadData_t *threadData, string_array _fileNames, modelica_string _name2);
DLLExport
void boxptr_Modelica_Utilities_Files_remove_removeDirectoryContents(threadData_t *threadData, modelica_metatype _fileNames, modelica_metatype _name2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_remove_removeDirectoryContents,2,0) {(void*) boxptr_Modelica_Utilities_Files_remove_removeDirectoryContents,0}};
#define boxvar_Modelica_Utilities_Files_remove_removeDirectoryContents MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_remove_removeDirectoryContents)


DLLExport
modelica_integer omc_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles(threadData_t *threadData, modelica_string _directory);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles(threadData_t *threadData, modelica_metatype _directory);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles,2,0) {(void*) boxptr_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles,0}};
#define boxvar_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int ModelicaInternal_getNumberOfFiles(const char* (*_directory*));
 */


DLLExport
string_array omc_Modelica_Utilities_Internal_FileSystem_readDirectory(threadData_t *threadData, modelica_string _directory, modelica_integer _nNames);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Internal_FileSystem_readDirectory(threadData_t *threadData, modelica_metatype _directory, modelica_metatype _nNames);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_readDirectory,2,0) {(void*) boxptr_Modelica_Utilities_Internal_FileSystem_readDirectory,0}};
#define boxvar_Modelica_Utilities_Internal_FileSystem_readDirectory MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_readDirectory)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void ModelicaInternal_readDirectory(const char* (*_directory*), int (*_nNames*), const char** (*_names*));
 */


DLLExport
void omc_Modelica_Utilities_Internal_FileSystem_removeFile(threadData_t *threadData, modelica_string _fileName);
#define boxptr_Modelica_Utilities_Internal_FileSystem_removeFile omc_Modelica_Utilities_Internal_FileSystem_removeFile
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_removeFile,2,0) {(void*) boxptr_Modelica_Utilities_Internal_FileSystem_removeFile,0}};
#define boxvar_Modelica_Utilities_Internal_FileSystem_removeFile MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_removeFile)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void ModelicaInternal_removeFile(const char* (*_fileName*));
 */


DLLExport
void omc_Modelica_Utilities_Internal_FileSystem_rmdir(threadData_t *threadData, modelica_string _directoryName);
#define boxptr_Modelica_Utilities_Internal_FileSystem_rmdir omc_Modelica_Utilities_Internal_FileSystem_rmdir
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_rmdir,2,0) {(void*) boxptr_Modelica_Utilities_Internal_FileSystem_rmdir,0}};
#define boxvar_Modelica_Utilities_Internal_FileSystem_rmdir MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_rmdir)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void ModelicaInternal_rmdir(const char* (*_directoryName*));
 */


DLLExport
modelica_integer omc_Modelica_Utilities_Internal_FileSystem_stat(threadData_t *threadData, modelica_string _name);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Internal_FileSystem_stat(threadData_t *threadData, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_stat,2,0) {(void*) boxptr_Modelica_Utilities_Internal_FileSystem_stat,0}};
#define boxvar_Modelica_Utilities_Internal_FileSystem_stat MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_stat)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int ModelicaInternal_stat(const char* (*_name*));
 */


DLLExport
void omc_Modelica_Utilities_Streams_print(threadData_t *threadData, modelica_string _string, modelica_string _fileName);
#define boxptr_Modelica_Utilities_Streams_print omc_Modelica_Utilities_Streams_print
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_print,2,0) {(void*) boxptr_Modelica_Utilities_Streams_print,0}};
#define boxvar_Modelica_Utilities_Streams_print MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_print)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void ModelicaInternal_print(const char* (*_string*), const char* (*_fileName*));
 */


DLLExport
modelica_integer omc_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_string _string);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_metatype _string);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_length,2,0) {(void*) boxptr_Modelica_Utilities_Strings_length,0}};
#define boxvar_Modelica_Utilities_Strings_length MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_length)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int ModelicaStrings_length(const char* (*_string*));
 */


DLLExport
modelica_string omc_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_integer _endIndex);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _endIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_substring,2,0) {(void*) boxptr_Modelica_Utilities_Strings_substring,0}};
#define boxvar_Modelica_Utilities_Strings_substring MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_substring)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern const char* ModelicaStrings_substring(const char* (*_string*), int (*_startIndex*), int (*_endIndex*));
 */
#include "System_model.h"


#ifdef __cplusplus
}
#endif
#endif

