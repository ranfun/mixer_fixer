/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Project_v8.c
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

#include "Project_v8.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<S1>/Chart' */
#define Project_v8_IN_Dispenser1       ((uint8_T)1U)
#define Project_v8_IN_Dispenser2       ((uint8_T)2U)
#define Project_v8_IN_Fix              ((uint8_T)3U)
#define Project_v8_IN_Idle             ((uint8_T)4U)
#define Project_v8_IN_Liquid3          ((uint8_T)5U)
#define Project_v8_IN_Mix              ((uint8_T)6U)

/* Block states (default storage) */
DW_Project_v8_T Project_v8_DW;

/* Real-time model */
static RT_MODEL_Project_v8_T Project_v8_M_;
RT_MODEL_Project_v8_T *const Project_v8_M = &Project_v8_M_;

/* Model step function */
void Project_v8_step(void)
{
  /* Chart: '<S1>/Chart' */
  if (Project_v8_DW.is_active_c3_Project_v8 == 0U) {
    Project_v8_DW.is_active_c3_Project_v8 = 1U;
    Project_v8_DW.is_c3_Project_v8 = Project_v8_IN_Idle;
  } else {
    switch (Project_v8_DW.is_c3_Project_v8) {
     case Project_v8_IN_Dispenser1:
      if (Project_v8_DW.t1 <= 0.0) {
        Project_v8_DW.is_c3_Project_v8 = Project_v8_IN_Dispenser2;
      } else {
        Project_v8_DW.t1--;
      }
      break;

     case Project_v8_IN_Dispenser2:
      if (Project_v8_DW.t2 <= 0.0) {
        Project_v8_DW.is_c3_Project_v8 = Project_v8_IN_Mix;
        Project_v8_DW.t_mix = 5.0;
      } else {
        Project_v8_DW.t2--;
      }
      break;

     case Project_v8_IN_Fix:
      Project_v8_DW.is_c3_Project_v8 = Project_v8_IN_Idle;
      break;

     case Project_v8_IN_Idle:
      break;

     case Project_v8_IN_Liquid3:
      if (Project_v8_DW.transition == 1.0) {
        Project_v8_DW.is_c3_Project_v8 = Project_v8_IN_Idle;
      } else {
        Project_v8_DW.is_c3_Project_v8 = Project_v8_IN_Dispenser1;
      }
      break;

     default:
      /* case IN_Mix: */
      if (Project_v8_DW.t_mix >= 5.0) {
        Project_v8_DW.t_mix = 0.0;
        Project_v8_DW.is_c3_Project_v8 = Project_v8_IN_Fix;
      } else {
        Project_v8_DW.t_mix++;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */
}

/* Model initialize function */
void Project_v8_initialize(void)
{
  /* Start for DataStoreMemory: '<S1>/V1' */
  Project_v8_DW.V1 = 0.002649375;

  /* Start for DataStoreMemory: '<S1>/V2' */
  Project_v8_DW.V2 = 0.002649375;
}

/* Model terminate function */
void Project_v8_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
