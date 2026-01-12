//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ert_main.cpp
//
// Code generated for Simulink model 'SPOTSim_UKE_V4_1_DataReceiverOnly'.
//
// Model version                  : 4.1114
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Mon Jan 12 12:30:51 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include <stdio.h>
#include <stdlib.h>
#include "SPOTSim_UKE_V4_1_DataReceiverOnly.h"
#include "SPOTSim_UKE_V4_1_DataReceiverOnly_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "rt_nonfinite.h"
#include "ext_work.h"
#include "MW_nvidia_init.h"
#include "linuxinitialize.h"
#define UNUSED(x)                      x = x
#define NAMELEN                        16

// Function prototype declaration
void exitFcn(int sig);
void *terminateTask(void *arg);
void *baseRateTask(void *arg);
void *subrateTask(void *arg);
volatile boolean_T stopRequested = false;
volatile boolean_T runModel = true;
sem_t stopSem;
sem_t baserateTaskSem;
pthread_t schedulerThread;
pthread_t baseRateThread;
void *threadJoinStatus;
int terminatingmodel = 0;
void *baseRateTask(void *arg)
{
  runModel = (rtmGetErrorStatus(SPOTSim_UKE_V4_1_DataReceive_M) == (NULL)) &&
    !rtmGetStopRequested(SPOTSim_UKE_V4_1_DataReceive_M);
  while (runModel) {
    sem_wait(&baserateTaskSem);

    // External mode
    {
      boolean_T rtmStopReq = false;
      rtExtModePauseIfNeeded(SPOTSim_UKE_V4_1_DataReceive_M->extModeInfo, 1,
        &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(SPOTSim_UKE_V4_1_DataReceive_M, true);
      }

      if (rtmGetStopRequested(SPOTSim_UKE_V4_1_DataReceive_M) == true) {
        rtmSetErrorStatus(SPOTSim_UKE_V4_1_DataReceive_M, "Simulation finished");
        break;
      }
    }

    // External mode
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(SPOTSim_UKE_V4_1_DataReceive_M->extModeInfo, 1,
                       &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(SPOTSim_UKE_V4_1_DataReceive_M, true);
      }
    }

    SPOTSim_UKE_V4_1_DataReceiverOnly_step();

    // Get model outputs here
    rtExtModeCheckEndTrigger();
    stopRequested = !((rtmGetErrorStatus(SPOTSim_UKE_V4_1_DataReceive_M) ==
                       (NULL)) && !rtmGetStopRequested
                      (SPOTSim_UKE_V4_1_DataReceive_M));
    runModel = !stopRequested;
  }

  runModel = 0;
  terminateTask(arg);
  pthread_exit((void *)0);
  return NULL;
}

void exitFcn(int sig)
{
  UNUSED(sig);
  rtmSetErrorStatus(SPOTSim_UKE_V4_1_DataReceive_M, "stopping the model");
  runModel = 0;
}

void *terminateTask(void *arg)
{
  UNUSED(arg);
  terminatingmodel = 1;

  {
    runModel = 0;
  }

  // Terminate model
  SPOTSim_UKE_V4_1_DataReceiverOnly_terminate();
  rtExtModeShutdown(1);
  sem_post(&stopSem);
  return NULL;
}

int main(int argc, char **argv)
{
  UNUSED(argc);
  UNUSED(argv);
  rtmSetErrorStatus(SPOTSim_UKE_V4_1_DataReceive_M, 0);
  rtExtModeParseArgs(argc, (const char_T **)argv, NULL);

  // Initialize model
  SPOTSim_UKE_V4_1_DataReceiverOnly_initialize();

  // External mode
  rtSetTFinalForExtMode(&rtmGetTFinal(SPOTSim_UKE_V4_1_DataReceive_M));
  rtExtModeCheckInit(1);

  {
    boolean_T rtmStopReq = false;
    rtExtModeWaitForStartPkt(SPOTSim_UKE_V4_1_DataReceive_M->extModeInfo, 1,
      &rtmStopReq);
    if (rtmStopReq) {
      rtmSetStopRequested(SPOTSim_UKE_V4_1_DataReceive_M, true);
    }
  }

  rtERTExtModeStartMsg();

  // Call RTOS Initialization function
  myRTOSInit(0.05, 0);

  // Wait for stop semaphore
  sem_wait(&stopSem);

#if (MW_NUMBER_TIMER_DRIVEN_TASKS > 0)

  {
    int i;
    for (i=0; i < MW_NUMBER_TIMER_DRIVEN_TASKS; i++) {
      CHECK_STATUS(sem_destroy(&timerTaskSem[i]), 0, "sem_destroy");
    }
  }

#endif

  return 0;
}

//
// File trailer for generated code.
//
// [EOF]
//
