/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Project_v8.h
 *
 * Code generated for Simulink model 'Project_v8'.
 *
 * Model version                  : 1.70
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Mar 23 23:32:34 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Project_v8_h_
#define RTW_HEADER_Project_v8_h_
#ifndef Project_v8_COMMON_INCLUDES_
#define Project_v8_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Project_v8_COMMON_INCLUDES_ */

#include "Project_v8_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T h1;                           /* '<S1>/Data Store Memory' */
  real_T h2;                           /* '<S1>/Data Store Memory2' */
  real_T V1;                           /* '<S1>/V1' */
  real_T V2;                           /* '<S1>/V2' */
  real_T t_mix;                        /* '<S1>/Chart' */
  real_T t1;                           /* '<S1>/Chart' */
  real_T t2;                           /* '<S1>/Chart' */
  real_T transition;                   /* '<S1>/Chart' */
  uint8_T is_c3_Project_v8;            /* '<S1>/Chart' */
  uint8_T is_active_c3_Project_v8;     /* '<S1>/Chart' */
} DW_Project_v8_T;

/* Real-time Model Data Structure */
struct tag_RTM_Project_v8_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Project_v8_T Project_v8_DW;

/* Model entry point functions */
extern void Project_v8_initialize(void);
extern void Project_v8_step(void);
extern void Project_v8_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Project_v8_T *const Project_v8_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Constant4' : Unused code path elimination
 * Block '<S1>/Constant5' : Unused code path elimination
 * Block '<S1>/NOT' : Unused code path elimination
 * Block '<S1>/Product' : Unused code path elimination
 * Block '<S1>/Product1' : Unused code path elimination
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S1>/Scope1' : Unused code path elimination
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
 * '<Root>' : 'Project_v8'
 * '<S1>'   : 'Project_v8/Subsystem'
 * '<S2>'   : 'Project_v8/Subsystem/Chart'
 */
#endif                                 /* RTW_HEADER_Project_v8_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
