/*
 * File: ledSwitchwithRTOS.c
 *
 * Code generated for Simulink model 'ledSwitchwithRTOS'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Apr  6 01:06:02 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ledSwitchwithRTOS.h"
#include "ledSwitchwithRTOS_private.h"

/* Block states (default storage) */
DW_ledSwitchwithRTOS_T ledSwitchwithRTOS_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ledSwitchwithRTOS_T ledSwitchwithRTOS_Y;

/* Real-time model */
RT_MODEL_ledSwitchwithRTOS_T ledSwitchwithRTOS_M_;
RT_MODEL_ledSwitchwithRTOS_T *const ledSwitchwithRTOS_M = &ledSwitchwithRTOS_M_;
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T q;
  if (rtIsNaN(u0) || rtIsInf(u0) || (rtIsNaN(u1) || rtIsInf(u1))) {
    y = (rtNaN);
  } else if ((u1 != 0.0) && (u1 != trunc(u1))) {
    q = fabs(u0 / u1);
    if (fabs(q - floor(q + 0.5)) <= DBL_EPSILON * q) {
      y = 0.0 * u0;
    } else {
      y = fmod(u0, u1);
    }
  } else {
    y = fmod(u0, u1);
  }

  return y;
}

/* Model step function */
void ledSwitchwithRTOS_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (ledSwitchwithRTOS_DW.temporalCounter_i1 < 3U) {
    ledSwitchwithRTOS_DW.temporalCounter_i1++;
  }

  if (ledSwitchwithRTOS_DW.is_active_c2_ledSwitchwithRTOS == 0U) {
    ledSwitchwithRTOS_DW.is_active_c2_ledSwitchwithRTOS = 1U;
    ledSwitchwithRTOS_DW.temporalCounter_i1 = 0U;
  } else {
    if (ledSwitchwithRTOS_DW.temporalCounter_i1 >= 1U) {
      /* Outputs for Function Call SubSystem: '<Root>/Function-Call Subsystem' */
      /* Outport: '<Root>/Out2' incorporates:
       *  Chart: '<S2>/CheckSwitchStatus'
       *  Chart: '<S2>/LedState'
       *  Clock: '<S3>/Clock'
       *  Constant: '<S3>/Constant'
       *  Lookup_n-D: '<S3>/Look-Up Table1'
       *  Math: '<S3>/Math Function'
       *  S-Function (sfun_tstart): '<S3>/startTime'
       *  Sum: '<S3>/Sum'
       */
      ledSwitchwithRTOS_Y.Out2 = (look1_binlxpw(rt_remd_snf
        (ledSwitchwithRTOS_M->Timing.t[0] - (0.0), 2.5),
        ledSwitchwithRTOS_ConstP.LookUpTable1_bp01Data,
        ledSwitchwithRTOS_ConstP.LookUpTable1_tableData, 5U) == 1.0);

      /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */
      ledSwitchwithRTOS_DW.temporalCounter_i1 = 0U;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  ledSwitchwithRTOS_M->Timing.t[0] =
    (++ledSwitchwithRTOS_M->Timing.clockTick0) *
    ledSwitchwithRTOS_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.2s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.2, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    ledSwitchwithRTOS_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void ledSwitchwithRTOS_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)ledSwitchwithRTOS_M, 0,
                sizeof(RT_MODEL_ledSwitchwithRTOS_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&ledSwitchwithRTOS_M->solverInfo,
                          &ledSwitchwithRTOS_M->Timing.simTimeStep);
    rtsiSetTPtr(&ledSwitchwithRTOS_M->solverInfo, &rtmGetTPtr
                (ledSwitchwithRTOS_M));
    rtsiSetStepSizePtr(&ledSwitchwithRTOS_M->solverInfo,
                       &ledSwitchwithRTOS_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&ledSwitchwithRTOS_M->solverInfo, ((const char_T **)
      (&rtmGetErrorStatus(ledSwitchwithRTOS_M))));
    rtsiSetRTModelPtr(&ledSwitchwithRTOS_M->solverInfo, ledSwitchwithRTOS_M);
  }

  rtsiSetSimTimeStep(&ledSwitchwithRTOS_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&ledSwitchwithRTOS_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(ledSwitchwithRTOS_M, &ledSwitchwithRTOS_M->Timing.tArray[0]);
  ledSwitchwithRTOS_M->Timing.stepSize0 = 0.2;

  /* states (dwork) */
  (void) memset((void *)&ledSwitchwithRTOS_DW, 0,
                sizeof(DW_ledSwitchwithRTOS_T));

  /* external outputs */
  ledSwitchwithRTOS_Y.Out2 = 0.0;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  ledSwitchwithRTOS_DW.temporalCounter_i1 = 0U;
  ledSwitchwithRTOS_DW.is_active_c2_ledSwitchwithRTOS = 0U;
}

/* Model terminate function */
void ledSwitchwithRTOS_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
