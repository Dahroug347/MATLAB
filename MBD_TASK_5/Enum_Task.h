/*
 * File: Enum_Task.h
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

#ifndef RTW_HEADER_Enum_Task_h_
#define RTW_HEADER_Enum_Task_h_
#include <string.h>
#ifndef Enum_Task_COMMON_INCLUDES_
# define Enum_Task_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Enum_Task_COMMON_INCLUDES_ */

#include "Enum_Task_types.h"

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

/* Block signals (default storage) */
typedef struct {
  real_T startTime;                    /* '<S2>/startTime' */
} B_Enum_Task_T;

/* Real-time Model Data Structure */
struct tag_RTM_Enum_Task_T {
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

/* Block signals (default storage) */
extern B_Enum_Task_T Enum_Task_B;

/* Model entry point functions */
extern void Enum_Task_initialize(void);
extern void Enum_Task_step(void);
extern void Enum_Task_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Enum_Task_T *const Enum_Task_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Data Type Conversion' : Unused code path elimination
 * Block '<Root>/Data Type Conversion1' : Unused code path elimination
 * Block '<S1>/Constant' : Unused code path elimination
 * Block '<S2>/Clock' : Unused code path elimination
 * Block '<S2>/Constant' : Unused code path elimination
 * Block '<S2>/Look-Up Table1' : Unused code path elimination
 * Block '<S2>/Math Function' : Unused code path elimination
 * Block '<S2>/Output' : Unused code path elimination
 * Block '<S2>/Sum' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
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
 * '<Root>' : 'Enum_Task'
 * '<S1>'   : 'Enum_Task/Enumerated Constant'
 * '<S2>'   : 'Enum_Task/Repeating Sequence'
 */
#endif                                 /* RTW_HEADER_Enum_Task_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
