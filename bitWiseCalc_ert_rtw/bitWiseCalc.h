/*
 * File: bitWiseCalc.h
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

#ifndef RTW_HEADER_bitWiseCalc_h_
#define RTW_HEADER_bitWiseCalc_h_
#include <string.h>
#include <stddef.h>
#ifndef bitWiseCalc_COMMON_INCLUDES_
# define bitWiseCalc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* bitWiseCalc_COMMON_INCLUDES_ */

#include "bitWiseCalc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T Input;                     /* '<Root>/Input' */
  boolean_T Input1;                    /* '<Root>/Input1' */
} ExtU_bitWiseCalc_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T Out1;                      /* '<Root>/Out1' */
  boolean_T Out2;                      /* '<Root>/Out2' */
  boolean_T Out3;                      /* '<Root>/Out3' */
  boolean_T Out4;                      /* '<Root>/Out4' */
  boolean_T Out5;                      /* '<Root>/Out5' */
} ExtY_bitWiseCalc_T;

/* Real-time Model Data Structure */
struct tag_RTM_bitWiseCalc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_bitWiseCalc_T bitWiseCalc_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_bitWiseCalc_T bitWiseCalc_Y;

/* Model entry point functions */
extern void bitWiseCalc_initialize(void);
extern void bitWiseCalc_step(void);
extern void bitWiseCalc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_bitWiseCalc_T *const bitWiseCalc_M;

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
 * '<Root>' : 'bitWiseCalc'
 */
#endif                                 /* RTW_HEADER_bitWiseCalc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
