/*
 * File: TrafficLightMDB.c
 *
 * Code generated for Simulink model 'TrafficLightMDB'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Apr  2 23:32:29 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TrafficLightMDB.h"
#include "TrafficLightMDB_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define TrafficLightMDB_IN_ready       ((uint8_T)1U)
#define TrafficLightMDB_IN_start       ((uint8_T)2U)
#define TrafficLightMDB_IN_stop        ((uint8_T)3U)
#define TrafficLight_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Block states (default storage) */
DW_TrafficLightMDB_T TrafficLightMDB_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_TrafficLightMDB_T TrafficLightMDB_Y;

/* Real-time model */
RT_MODEL_TrafficLightMDB_T TrafficLightMDB_M_;
RT_MODEL_TrafficLightMDB_T *const TrafficLightMDB_M = &TrafficLightMDB_M_;

/* Model step function */
void TrafficLightMDB_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (TrafficLightMDB_DW.temporalCounter_i1 < 31U) {
    TrafficLightMDB_DW.temporalCounter_i1++;
  }

  if (TrafficLightMDB_DW.is_active_c3_TrafficLightMDB == 0U) {
    TrafficLightMDB_DW.is_active_c3_TrafficLightMDB = 1U;
    TrafficLightMDB_DW.is_c3_TrafficLightMDB = TrafficLightMDB_IN_stop;
    TrafficLightMDB_DW.temporalCounter_i1 = 0U;
  } else {
    switch (TrafficLightMDB_DW.is_c3_TrafficLightMDB) {
     case TrafficLightMDB_IN_ready:
      if (TrafficLightMDB_DW.temporalCounter_i1 >= 15U) {
        /* Outport: '<Root>/Out1' */
        TrafficLightMDB_Y.Out1 = 0U;

        /* Outport: '<Root>/Out3' */
        TrafficLightMDB_Y.Out3 = 0U;

        /* Outport: '<Root>/Out2' */
        TrafficLightMDB_Y.Out2 = 0U;
        TrafficLightMDB_DW.is_c3_TrafficLightMDB = TrafficLightMDB_IN_start;
        TrafficLightMDB_DW.temporalCounter_i1 = 0U;
      } else {
        /* Outport: '<Root>/Out1' */
        TrafficLightMDB_Y.Out1 = 0U;

        /* Outport: '<Root>/Out3' */
        TrafficLightMDB_Y.Out3 = 0U;

        /* Outport: '<Root>/Out2' */
        TrafficLightMDB_Y.Out2 = 1U;
      }
      break;

     case TrafficLightMDB_IN_start:
      if (TrafficLightMDB_DW.temporalCounter_i1 >= 15U) {
        /* Outport: '<Root>/Out1' */
        TrafficLightMDB_Y.Out1 = 0U;

        /* Outport: '<Root>/Out3' */
        TrafficLightMDB_Y.Out3 = 0U;

        /* Outport: '<Root>/Out2' */
        TrafficLightMDB_Y.Out2 = 0U;
        TrafficLightMDB_DW.is_c3_TrafficLightMDB = TrafficLightMDB_IN_stop;
        TrafficLightMDB_DW.temporalCounter_i1 = 0U;
      } else {
        /* Outport: '<Root>/Out1' */
        TrafficLightMDB_Y.Out1 = 0U;

        /* Outport: '<Root>/Out3' */
        TrafficLightMDB_Y.Out3 = 1U;

        /* Outport: '<Root>/Out2' */
        TrafficLightMDB_Y.Out2 = 0U;
      }
      break;

     default:
      if (TrafficLightMDB_DW.temporalCounter_i1 >= 15U) {
        /* Outport: '<Root>/Out1' */
        TrafficLightMDB_Y.Out1 = 0U;

        /* Outport: '<Root>/Out3' */
        TrafficLightMDB_Y.Out3 = 0U;

        /* Outport: '<Root>/Out2' */
        TrafficLightMDB_Y.Out2 = 0U;
        TrafficLightMDB_DW.is_c3_TrafficLightMDB = TrafficLightMDB_IN_ready;
        TrafficLightMDB_DW.temporalCounter_i1 = 0U;
      } else {
        /* Outport: '<Root>/Out1' */
        TrafficLightMDB_Y.Out1 = 1U;

        /* Outport: '<Root>/Out3' */
        TrafficLightMDB_Y.Out3 = 0U;

        /* Outport: '<Root>/Out2' */
        TrafficLightMDB_Y.Out2 = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void TrafficLightMDB_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(TrafficLightMDB_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&TrafficLightMDB_DW, 0,
                sizeof(DW_TrafficLightMDB_T));

  /* external outputs */
  (void) memset((void *)&TrafficLightMDB_Y, 0,
                sizeof(ExtY_TrafficLightMDB_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  TrafficLightMDB_DW.temporalCounter_i1 = 0U;
  TrafficLightMDB_DW.is_active_c3_TrafficLightMDB = 0U;
  TrafficLightMDB_DW.is_c3_TrafficLightMDB = TrafficLight_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void TrafficLightMDB_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
