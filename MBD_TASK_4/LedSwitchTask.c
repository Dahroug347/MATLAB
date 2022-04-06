/*
 * File: LedSwitchTask.c
 *
 * Code generated for Simulink model 'LedSwitchTask'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Apr  5 23:54:14 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LedSwitchTask.h"
#include "LedSwitchTask_private.h"

/* Block states (default storage) */
DW_LedSwitchTask_T LedSwitchTask_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_LedSwitchTask_T LedSwitchTask_Y;

/* Real-time model */
RT_MODEL_LedSwitchTask_T LedSwitchTask_M_;
RT_MODEL_LedSwitchTask_T *const LedSwitchTask_M = &LedSwitchTask_M_;

/* Model step function */
void LedSwitchTask_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (LedSwitchTask_DW.temporalCounter_i1 < 3U) {
    LedSwitchTask_DW.temporalCounter_i1++;
  }

  if (LedSwitchTask_DW.is_active_c3_LedSwitchTask == 0U) {
    LedSwitchTask_DW.is_active_c3_LedSwitchTask = 1U;
    LedSwitchTask_DW.temporalCounter_i1 = 0U;
  } else {
    if (LedSwitchTask_DW.temporalCounter_i1 >= 1U) {
      /* Outputs for Function Call SubSystem: '<Root>/Function-Call Subsystem' */
      /* Outport: '<Root>/Out1' incorporates:
       *  Constant: '<Root>/Constant'
       *  Inport: '<S2>/In1'
       */
      LedSwitchTask_Y.Out1 = 0.0;

      /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */
      LedSwitchTask_DW.temporalCounter_i1 = 0U;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void LedSwitchTask_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(LedSwitchTask_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&LedSwitchTask_DW, 0,
                sizeof(DW_LedSwitchTask_T));

  /* external outputs */
  LedSwitchTask_Y.Out1 = 0.0;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  LedSwitchTask_DW.temporalCounter_i1 = 0U;
  LedSwitchTask_DW.is_active_c3_LedSwitchTask = 0U;
}

/* Model terminate function */
void LedSwitchTask_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
