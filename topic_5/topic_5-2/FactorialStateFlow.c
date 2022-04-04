/*
 * File: FactorialStateFlow.c
 *
 * Code generated for Simulink model 'FactorialStateFlow'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Apr  3 00:13:20 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FactorialStateFlow.h"
#include "FactorialStateFlow_private.h"

/* Real-time model */
RT_MODEL_FactorialStateFlow_T FactorialStateFlow_M_;
RT_MODEL_FactorialStateFlow_T *const FactorialStateFlow_M =
  &FactorialStateFlow_M_;

/* Model step function */
void FactorialStateFlow_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void FactorialStateFlow_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(FactorialStateFlow_M, (NULL));
}

/* Model terminate function */
void FactorialStateFlow_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
