/*
 * File: FactorialSystem.c
 *
 * Code generated for Simulink model 'FactorialSystem'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Apr  2 22:01:55 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FactorialSystem.h"
#include "FactorialSystem_private.h"

/* Real-time model */
RT_MODEL_FactorialSystem_T FactorialSystem_M_;
RT_MODEL_FactorialSystem_T *const FactorialSystem_M = &FactorialSystem_M_;

/* Model step function */
void FactorialSystem_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void FactorialSystem_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(FactorialSystem_M, (NULL));
}

/* Model terminate function */
void FactorialSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
