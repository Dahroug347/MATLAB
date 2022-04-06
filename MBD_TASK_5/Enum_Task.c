/*
 * File: Enum_Task.c
 *
 * Code generated for Simulink model 'Enum_Task'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Apr  6 01:35:54 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Enum_Task.h"
#include "Enum_Task_private.h"

/* Block signals (default storage) */
B_Enum_Task_T Enum_Task_B;

/* Real-time model */
RT_MODEL_Enum_Task_T Enum_Task_M_;
RT_MODEL_Enum_Task_T *const Enum_Task_M = &Enum_Task_M_;

/* Model step function */
void Enum_Task_step(void)
{
  /* S-Function (sfun_tstart): '<S2>/startTime' */
  /* S-Function Block (sfun_tstart): <S2>/startTime */
  Enum_Task_B.startTime = (0.0);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  Enum_Task_M->Timing.t[0] =
    (++Enum_Task_M->Timing.clockTick0) * Enum_Task_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.2s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.2, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    Enum_Task_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void Enum_Task_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Enum_Task_M, 0,
                sizeof(RT_MODEL_Enum_Task_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Enum_Task_M->solverInfo,
                          &Enum_Task_M->Timing.simTimeStep);
    rtsiSetTPtr(&Enum_Task_M->solverInfo, &rtmGetTPtr(Enum_Task_M));
    rtsiSetStepSizePtr(&Enum_Task_M->solverInfo, &Enum_Task_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Enum_Task_M->solverInfo, ((const char_T **)
      (&rtmGetErrorStatus(Enum_Task_M))));
    rtsiSetRTModelPtr(&Enum_Task_M->solverInfo, Enum_Task_M);
  }

  rtsiSetSimTimeStep(&Enum_Task_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Enum_Task_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(Enum_Task_M, &Enum_Task_M->Timing.tArray[0]);
  Enum_Task_M->Timing.stepSize0 = 0.2;

  /* block I/O */
  (void) memset(((void *) &Enum_Task_B), 0,
                sizeof(B_Enum_Task_T));
}

/* Model terminate function */
void Enum_Task_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
