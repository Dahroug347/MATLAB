/*
 * File: Grades.c
 *
 * Code generated for Simulink model 'Grades'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Apr  2 17:51:51 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Grades.h"
#include "Grades_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Grades_T Grades_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Grades_T Grades_Y;

/* Real-time model */
RT_MODEL_Grades_T Grades_M_;
RT_MODEL_Grades_T *const Grades_M = &Grades_M_;

/* Model step function */
void Grades_step(void)
{
  /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
   *  ActionPort: '<S4>/Action Port'
   */
  /* If: '<Root>/If1' incorporates:
   *  Constant: '<Root>/Constant2'
   *  Inport: '<S4>/In1'
   *  Outport: '<Root>/Out1'
   */
  Grades_Y.Out1 = 3.0;

  /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
}

/* Model initialize function */
void Grades_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Grades_M, (NULL));

  /* external inputs */
  Grades_U.In1 = 0.0;

  /* external outputs */
  Grades_Y.Out1 = 0.0;
}

/* Model terminate function */
void Grades_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
