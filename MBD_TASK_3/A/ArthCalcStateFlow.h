/*
 * File: ArthCalcStateFlow.h
 *
 * Code generated for Simulink model 'ArthCalcStateFlow'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Apr  3 00:26:55 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ArthCalcStateFlow_h_
#define RTW_HEADER_ArthCalcStateFlow_h_
#include <stddef.h>
#ifndef ArthCalcStateFlow_COMMON_INCLUDES_
# define ArthCalcStateFlow_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ArthCalcStateFlow_COMMON_INCLUDES_ */

#include "ArthCalcStateFlow_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Real-time Model Data Structure */
struct tag_RTM_ArthCalcStateFlow_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void ArthCalcStateFlow_initialize(void);
extern void ArthCalcStateFlow_step(void);
extern void ArthCalcStateFlow_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ArthCalcStateFlow_T *const ArthCalcStateFlow_M;

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
 * '<Root>' : 'ArthCalcStateFlow'
 * '<S1>'   : 'ArthCalcStateFlow/Chart'
 */
#endif                                 /* RTW_HEADER_ArthCalcStateFlow_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
