/*
 * File: calc.c
 *
 * Code generated for Simulink model 'calc'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Mon Mar 21 19:18:33 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "calc.h"
#include "calc_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_calc_T calc_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_calc_T calc_Y;

/* Real-time model */
RT_MODEL_calc_T calc_M_;
RT_MODEL_calc_T *const calc_M = &calc_M_;

/* Model step function */
void calc_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Add'
   */
  calc_Y.Out1 = calc_U.In1 + calc_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Subtract'
   */
  calc_Y.Out2 = calc_U.In1 - calc_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Divide'
   */
  calc_Y.Out3 = calc_U.In1 / calc_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Product'
   */
  calc_Y.Out4 = calc_U.In1 * calc_U.In2;
}

/* Model initialize function */
void calc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(calc_M, (NULL));

  /* external inputs */
  (void) memset((void *)&calc_U, 0,
                sizeof(ExtU_calc_T));

  /* external outputs */
  (void) memset((void *)&calc_Y, 0,
                sizeof(ExtY_calc_T));
}

/* Model terminate function */
void calc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
