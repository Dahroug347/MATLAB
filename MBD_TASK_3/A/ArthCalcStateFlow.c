/*
 * File: ArthCalcStateFlow.c
 *
 * Code generated for Simulink model 'ArthCalcStateFlow'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Apr  3 00:26:55 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ArthCalcStateFlow.h"
#include "ArthCalcStateFlow_private.h"

/* Real-time model */
RT_MODEL_ArthCalcStateFlow_T ArthCalcStateFlow_M_;
RT_MODEL_ArthCalcStateFlow_T *const ArthCalcStateFlow_M = &ArthCalcStateFlow_M_;

/* Model step function */
void ArthCalcStateFlow_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void ArthCalcStateFlow_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ArthCalcStateFlow_M, (NULL));
}

/* Model terminate function */
void ArthCalcStateFlow_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
