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

typedef struct {
  modelica_integer _ID;
  modelica_integer _MyMagicNumber;
  modelica_integer _W;
  modelica_integer _N;
  modelica_integer _A;
  modelica_integer _B;
  modelica_integer _C;
  modelica_integer _D;
  modelica_integer _F;
  modelica_integer _G;
  modelica_integer _T;
} Prm;
extern struct record_description Prm__desc;

void Prm_construct_p(threadData_t *threadData, void* v_ths );
#define Prm_construct(td, ths ) Prm_construct_p(td, &ths )
void Prm_copy_p(void* v_src, void* v_dst);
#define Prm_copy(src,dst) Prm_copy_p(&src, &dst)

// This function should eventually replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Prm omc_Prm(threadData_t *threadData , modelica_integer in_ID, modelica_integer in_MyMagicNumber, modelica_integer in_W, modelica_integer in_N, modelica_integer in_A, modelica_integer in_B, modelica_integer in_C, modelica_integer in_D, modelica_integer in_F, modelica_integer in_G, modelica_integer in_T);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Prm_copy_to_vars_p(void* v_src , modelica_integer* in_ID, modelica_integer* in_MyMagicNumber, modelica_integer* in_W, modelica_integer* in_N, modelica_integer* in_A, modelica_integer* in_B, modelica_integer* in_C, modelica_integer* in_D, modelica_integer* in_F, modelica_integer* in_G, modelica_integer* in_T);
// #define Prm_copy_to_vars(src,...) Prm_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Prm_array;
#define alloc_Prm_array(dst,ndims,...) generic_array_create(NULL, dst, Prm_construct_p, ndims, sizeof(Prm), __VA_ARGS__)
#define Prm_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Prm_copy_p, sizeof(Prm))
#define Prm_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Prm_copy_p, sizeof(Prm))
#define Prm_array_get(src,ndims,...)   (*(Prm*)(generic_array_get(&src, sizeof(Prm), __VA_ARGS__)))
#define Prm_set(dst,val,...)           generic_array_set(&dst, &val, Prm_copy_p, sizeof(Prm), __VA_ARGS__)

DLLExport
modelica_real omc_LoopProb(threadData_t *threadData, modelica_real _T, modelica_real _sjt);
DLLExport
modelica_metatype boxptr_LoopProb(threadData_t *threadData, modelica_metatype _T, modelica_metatype _sjt);
static const MMC_DEFSTRUCTLIT(boxvar_lit_LoopProb,2,0) {(void*) boxptr_LoopProb,0}};
#define boxvar_LoopProb MMC_REFSTRUCTLIT(boxvar_lit_LoopProb)


DLLExport
modelica_integer omc_Next(threadData_t *threadData, modelica_integer _k, modelica_integer _i);
DLLExport
modelica_metatype boxptr_Next(threadData_t *threadData, modelica_metatype _k, modelica_metatype _i);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Next,2,0) {(void*) boxptr_Next,0}};
#define boxvar_Next MMC_REFSTRUCTLIT(boxvar_lit_Next)


DLLExport
modelica_real omc_P(threadData_t *threadData, Prm _q, modelica_integer _k, modelica_integer _i, modelica_integer _j);
DLLExport
modelica_metatype boxptr_P(threadData_t *threadData, modelica_metatype _q, modelica_metatype _k, modelica_metatype _i, modelica_metatype _j);
static const MMC_DEFSTRUCTLIT(boxvar_lit_P,2,0) {(void*) boxptr_P,0}};
#define boxvar_P MMC_REFSTRUCTLIT(boxvar_lit_P)


DLLExport
Prm omc_Prm (threadData_t *threadData, modelica_integer omc_ID, modelica_integer omc_MyMagicNumber, modelica_integer omc_W, modelica_integer omc_N, modelica_integer omc_A, modelica_integer omc_B, modelica_integer omc_C, modelica_integer omc_D, modelica_integer omc_F, modelica_integer omc_G, modelica_integer omc_T);

DLLExport
modelica_metatype boxptr_Prm(threadData_t *threadData, modelica_metatype _ID, modelica_metatype _MyMagicNumber, modelica_metatype _W, modelica_metatype _N, modelica_metatype _A, modelica_metatype _B, modelica_metatype _C, modelica_metatype _D, modelica_metatype _F, modelica_metatype _G, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Prm,2,0) {(void*) boxptr_Prm,0}};
#define boxvar_Prm MMC_REFSTRUCTLIT(boxvar_lit_Prm)


DLLExport
modelica_real omc_alpha(threadData_t *threadData, modelica_integer _k);
DLLExport
modelica_metatype boxptr_alpha(threadData_t *threadData, modelica_metatype _k);
static const MMC_DEFSTRUCTLIT(boxvar_lit_alpha,2,0) {(void*) boxptr_alpha,0}};
#define boxvar_alpha MMC_REFSTRUCTLIT(boxvar_lit_alpha)


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
modelica_real omc_tau(threadData_t *threadData, Prm _q, modelica_integer _i, modelica_integer _k);
DLLExport
modelica_metatype boxptr_tau(threadData_t *threadData, modelica_metatype _q, modelica_metatype _i, modelica_metatype _k);
static const MMC_DEFSTRUCTLIT(boxvar_lit_tau,2,0) {(void*) boxptr_tau,0}};
#define boxvar_tau MMC_REFSTRUCTLIT(boxvar_lit_tau)


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

