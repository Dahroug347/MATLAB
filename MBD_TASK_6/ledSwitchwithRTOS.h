/*
 * File: ledSwitchwithRTOS.h
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

#ifndef RTW_HEADER_ledSwitchwithRTOS_h_
#define RTW_HEADER_ledSwitchwithRTOS_h_
#include <float.h>
#include <math.h>
#include <string.h>
#ifndef ledSwitchwithRTOS_COMMON_INCLUDES_
# define ledSwitchwithRTOS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* ledSwitchwithRTOS_COMMON_INCLUDES_ */

#include "ledSwitchwithRTOS_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c2_ledSwitchwithRTOS;/* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_ledSwitchwithRTOS_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: rep_seq_y
   * Referenced by: '<S3>/Look-Up Table1'
   */
  real_T LookUpTable1_tableData[6];

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S3>/Look-Up Table1'
   */
  real_T LookUpTable1_bp01Data[6];
} ConstP_ledSwitchwithRTOS_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out2;                         /* '<Root>/Out2' */
} ExtY_ledSwitchwithRTOS_T;

/* Real-time Model Data Structure */
struct tag_RTM_ledSwitchwithRTOS_T {
  const char_T * volatile errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block states (default storage) */
extern DW_ledSwitchwithRTOS_T ledSwitchwithRTOS_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ledSwitchwithRTOS_T ledSwitchwithRTOS_Y;

/* Constant parameters (default storage) */
extern const ConstP_ledSwitchwithRTOS_T ledSwitchwithRTOS_ConstP;

/* Model entry point functions */
extern void ledSwitchwithRTOS_initialize(void);
extern void ledSwitchwithRTOS_step(void);
extern void ledSwitchwithRTOS_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ledSwitchwithRTOS_T *const ledSwitchwithRTOS_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/Output' : Eliminate redundant signal conversion block
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ledSwitchwithRTOS'
 * '<S1>'   : 'ledSwitchwithRTOS/Chart'
 * '<S2>'   : 'ledSwitchwithRTOS/Function-Call Subsystem'
 * '<S3>'   : 'ledSwitchwithRTOS/Repeating Sequence'
 * '<S4>'   : 'ledSwitchwithRTOS/Function-Call Subsystem/CheckSwitchStatus'
 * '<S5>'   : 'ledSwitchwithRTOS/Function-Call Subsystem/LedState'
 */
#endif                                 /* RTW_HEADER_ledSwitchwithRTOS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
