/*
 * File: SubSystemCalc.c
 *
 * Code generated for Simulink model 'SubSystemCalc'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Apr  2 18:13:12 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SubSystemCalc.h"
#include "SubSystemCalc_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_SubSystemCalc_T SubSystemCalc_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_SubSystemCalc_T SubSystemCalc_Y;

/* Real-time model */
RT_MODEL_SubSystemCalc_T SubSystemCalc_M_;
RT_MODEL_SubSystemCalc_T *const SubSystemCalc_M = &SubSystemCalc_M_;

/* Model step function */
void SubSystemCalc_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S1>/Add'
   */
  SubSystemCalc_Y.Out1 = SubSystemCalc_U.In1 + SubSystemCalc_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S1>/Subtract'
   */
  SubSystemCalc_Y.Out2 = SubSystemCalc_U.In1 - SubSystemCalc_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S1>/Divide'
   */
  SubSystemCalc_Y.Out3 = SubSystemCalc_U.In1 / SubSystemCalc_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S1>/Product'
   */
  SubSystemCalc_Y.Out4 = SubSystemCalc_U.In1 * SubSystemCalc_U.In2;
}

/* Model initialize function */
void SubSystemCalc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(SubSystemCalc_M, (NULL));

  /* external inputs */
  (void)memset(&SubSystemCalc_U, 0, sizeof(ExtU_SubSystemCalc_T));

  /* external outputs */
  (void) memset((void *)&SubSystemCalc_Y, 0,
                sizeof(ExtY_SubSystemCalc_T));
}

/* Model terminate function */
void SubSystemCalc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
