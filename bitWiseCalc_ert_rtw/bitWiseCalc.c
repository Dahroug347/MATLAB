/*
 * File: bitWiseCalc.c
 *
 * Code generated for Simulink model 'bitWiseCalc'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Apr  2 16:16:53 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "bitWiseCalc.h"
#include "bitWiseCalc_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_bitWiseCalc_T bitWiseCalc_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_bitWiseCalc_T bitWiseCalc_Y;

/* Real-time model */
RT_MODEL_bitWiseCalc_T bitWiseCalc_M_;
RT_MODEL_bitWiseCalc_T *const bitWiseCalc_M = &bitWiseCalc_M_;

/* Model step function */
void bitWiseCalc_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator'
   */
  bitWiseCalc_Y.Out1 = (bitWiseCalc_U.Input && bitWiseCalc_U.Input1);

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator1'
   */
  bitWiseCalc_Y.Out2 = (bitWiseCalc_U.Input || bitWiseCalc_U.Input1);

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator2'
   */
  bitWiseCalc_Y.Out3 = bitWiseCalc_U.Input ^ bitWiseCalc_U.Input1;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator4'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator5'
   */
  bitWiseCalc_Y.Out4 = (bitWiseCalc_U.Input == bitWiseCalc_U.Input1);

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/Input'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator3'
   */
  bitWiseCalc_Y.Out5 = !bitWiseCalc_U.Input;
}

/* Model initialize function */
void bitWiseCalc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(bitWiseCalc_M, (NULL));

  /* external inputs */
  (void)memset(&bitWiseCalc_U, 0, sizeof(ExtU_bitWiseCalc_T));

  /* external outputs */
  (void) memset((void *)&bitWiseCalc_Y, 0,
                sizeof(ExtY_bitWiseCalc_T));
}

/* Model terminate function */
void bitWiseCalc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
