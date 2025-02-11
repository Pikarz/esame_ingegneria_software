/* Simulation code for System generated by the OpenModelica Compiler OpenModelica 1.20.0. */
#if !defined(System__MODEL_H)
#define System__MODEL_H

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_json.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "util/parallel_helper.h"
#include "util/jacobian_util.h"
#include "simulation/simulation_omc_assert.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"
#include "simulation/solver/spatialDistribution.h"

#if defined(__cplusplus)
extern "C" {
#endif

#include <string.h>

#include "System_functions.h"

#define FifoIODone_index 0
#define ReadFromFIFO_index 1
#define WriteToFIFO_index 2
#define generateValue_index 3
#define myrandom_index 4
#define Modelica_Utilities_Files_fullPathName_index 5
#define Modelica_Utilities_Files_remove_index 6
#define Modelica_Utilities_Files_remove_removeDirectory_index 7
#define Modelica_Utilities_Files_remove_removeDirectoryContents_index 8
#define Modelica_Utilities_Internal_FileSystem_getNumberOfFiles_index 9
#define Modelica_Utilities_Internal_FileSystem_readDirectory_index 10
#define Modelica_Utilities_Internal_FileSystem_removeFile_index 11
#define Modelica_Utilities_Internal_FileSystem_rmdir_index 12
#define Modelica_Utilities_Internal_FileSystem_stat_index 13
#define Modelica_Utilities_Streams_print_index 14
#define Modelica_Utilities_Strings_length_index 15
#define Modelica_Utilities_Strings_substring_index 16

extern void System_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void System_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int System_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int System_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int System_function_storeSpatialDistribution(DATA *data, threadData_t *threadData);
extern int System_function_initSpatialDistribution(DATA *data, threadData_t *threadData);
extern int System_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int System_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int System_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int System_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int System_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int System_checkForAsserts(DATA *data, threadData_t *threadData);
extern int System_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int System_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int System_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern const char* System_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* System_relationDescription(int i);
extern void System_function_initSample(DATA *data, threadData_t *threadData);
extern int System_initialAnalyticJacobianG(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int System_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int System_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int System_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int System_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int System_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int System_functionJacG_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int System_functionJacA_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int System_functionJacB_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int System_functionJacC_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int System_functionJacD_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int System_functionJacF_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern const char* System_linear_model_frame(void);
extern const char* System_linear_model_datarecovery_frame(void);
extern int System_mayer(DATA* data, modelica_real** res, short *);
extern int System_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int System_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int System_setInputData(DATA *data, const modelica_boolean file);
extern int System_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void System_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void System_function_updateSynchronous(DATA * data, threadData_t *threadData, long base_idx);
extern int System_function_equationsSynchronous(DATA * data, threadData_t *threadData, long base_idx, long sub_idx);
extern void System_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void System_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int System_inputNames(DATA* data, char ** names);
extern int System_dataReconciliationInputNames(DATA* data, char ** names);
extern int System_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int System_functionLocalKnownVars(DATA* data, threadData_t* threadData);
extern int System_symbolicInlineSystem(DATA* data, threadData_t* threadData);

#include "System_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#if defined(__cplusplus)
}
#endif

#endif /* !defined(System__MODEL_H) */


