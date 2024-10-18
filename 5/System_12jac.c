/* Jacobians 5 */
#include "System_model.h"
#include "System_12jac.h"
#include "util/jacobian_util.h"
int System_functionJacF_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int System_functionJacD_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int System_functionJacC_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int System_functionJacB_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int System_functionJacA_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = System_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int System_functionJacA_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = System_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

int System_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int System_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int System_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int System_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int System_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  const int colPtrIndex[1+15] = {0,9,9,9,2,9,2,9,2,9,4,4,4,3,3,3};
  const int rowIndex[81] = {0,1,2,3,4,5,6,7,8,0,1,2,3,4,5,6,7,8,0,1,2,3,4,5,6,7,8,3,4,0,1,2,3,4,5,6,7,8,5,6,0,1,2,3,4,5,6,7,8,7,8,0,1,2,3,4,5,6,7,8,9,10,11,12,9,10,11,13,9,10,11,14,9,10,11,9,10,11,9,10,11};
  int i = 0;
  
  initAnalyticJacobian(jacobian, 15, 15, 0, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(15, 81, 7);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (15+1)*sizeof(unsigned int));
  
  for(i=2;i<15+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 81*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[2] = 1;
  jacobian->sparsePattern->colorCols[11] = 2;
  jacobian->sparsePattern->colorCols[1] = 2;
  jacobian->sparsePattern->colorCols[10] = 3;
  jacobian->sparsePattern->colorCols[0] = 3;
  jacobian->sparsePattern->colorCols[9] = 4;
  jacobian->sparsePattern->colorCols[8] = 4;
  jacobian->sparsePattern->colorCols[14] = 5;
  jacobian->sparsePattern->colorCols[6] = 5;
  jacobian->sparsePattern->colorCols[13] = 6;
  jacobian->sparsePattern->colorCols[4] = 6;
  jacobian->sparsePattern->colorCols[12] = 7;
  jacobian->sparsePattern->colorCols[3] = 7;
  jacobian->sparsePattern->colorCols[5] = 7;
  jacobian->sparsePattern->colorCols[7] = 7;
  TRACE_POP
  return 0;
}



