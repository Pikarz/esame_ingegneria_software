/* Linearization */
#include "System_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *System_linear_model_frame()
{
  return "model linearized_model \"System\" \n  parameter Integer n = 15 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[m] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] = zeros(n, m);%s\n\n"
  "  parameter Real C[p, n] = zeros(p, n);%s\n\n"
  "  parameter Real D[p, m] = zeros(p, m);%s\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m];\n"
  "  output Real y[p];\n"
  "\n"
  "  Real 'x_m.mean1.mu' = x[1];\n""  Real 'x_m.mean2.mu' = x[2];\n""  Real 'x_m.mean3.mu' = x[3];\n""  Real 'x_m.std1.variance.mu' = x[4];\n""  Real 'x_m.std1.variance.var' = x[5];\n""  Real 'x_m.std2.variance.mu' = x[6];\n""  Real 'x_m.std2.variance.var' = x[7];\n""  Real 'x_m.std3.variance.mu' = x[8];\n""  Real 'x_m.std3.variance.var' = x[9];\n""  Real 'x_plant.v[1]' = x[10];\n""  Real 'x_plant.v[2]' = x[11];\n""  Real 'x_plant.v[3]' = x[12];\n""  Real 'x_plant.x[1]' = x[13];\n""  Real 'x_plant.x[2]' = x[14];\n""  Real 'x_plant.x[3]' = x[15];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linearized_model;\n";
}
const char *System_linear_model_datarecovery_frame()
{
  return "model linearized_model \"System\" \n parameter Integer n = 15 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n  parameter Integer nz = 24 \"data recovery variables\";\n"
  "  parameter Real x0[15] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[24] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] = zeros(n, m);%s\n\n"
  "  parameter Real C[p, n] = zeros(p, n);%s\n\n"
  "  parameter Real D[p, m] = zeros(p, m);%s\n\n"
  "  parameter Real Cz[nz, n] =\n\t[%s];\n\n"
  "  parameter Real Dz[nz, m] = zeros(nz, m);%s\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m];\n"
  "  output Real y[p];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'x_m.mean1.mu' = x[1];\n""  Real 'x_m.mean2.mu' = x[2];\n""  Real 'x_m.mean3.mu' = x[3];\n""  Real 'x_m.std1.variance.mu' = x[4];\n""  Real 'x_m.std1.variance.var' = x[5];\n""  Real 'x_m.std2.variance.mu' = x[6];\n""  Real 'x_m.std2.variance.var' = x[7];\n""  Real 'x_m.std3.variance.mu' = x[8];\n""  Real 'x_m.std3.variance.var' = x[9];\n""  Real 'x_plant.v[1]' = x[10];\n""  Real 'x_plant.v[2]' = x[11];\n""  Real 'x_plant.v[3]' = x[12];\n""  Real 'x_plant.x[1]' = x[13];\n""  Real 'x_plant.x[2]' = x[14];\n""  Real 'x_plant.x[3]' = x[15];\n"
  "  Real 'z_m.AvgErr[1]' = z[1];\n""  Real 'z_m.AvgErr[2]' = z[2];\n""  Real 'z_m.AvgErr[3]' = z[3];\n""  Real 'z_m.StdDevErr[1]' = z[4];\n""  Real 'z_m.StdDevErr[2]' = z[5];\n""  Real 'z_m.StdDevErr[3]' = z[6];\n""  Real 'z_m.mean1.u' = z[7];\n""  Real 'z_m.mean2.u' = z[8];\n""  Real 'z_m.mean3.u' = z[9];\n""  Real 'z_m.r[1]' = z[10];\n""  Real 'z_m.r[2]' = z[11];\n""  Real 'z_m.r[3]' = z[12];\n""  Real 'z_m.std1.sqrt1.u' = z[13];\n""  Real 'z_m.std1.variance.u' = z[14];\n""  Real 'z_m.std2.sqrt1.u' = z[15];\n""  Real 'z_m.std2.variance.u' = z[16];\n""  Real 'z_m.std3.sqrt1.u' = z[17];\n""  Real 'z_m.std3.variance.u' = z[18];\n""  Real 'z_m.x[1]' = z[19];\n""  Real 'z_m.x[2]' = z[20];\n""  Real 'z_m.x[3]' = z[21];\n""  Real 'z_user.r[1]' = z[22];\n""  Real 'z_user.r[2]' = z[23];\n""  Real 'z_user.r[3]' = z[24];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linearized_model;\n";
}
#if defined(__cplusplus)
}
#endif

