/*
 *  This file is automatically generated and does not require a license
 *
 *  ==== WARNING: CHANGES TO THIS GENERATED FILE WILL BE OVERWRITTEN ====
 *
 *  To make changes to the generated code, use the space between existing
 *      "USER CODE START (section: <name>)"
 *  and
 *      "USER CODE END (section: <name>)"
 *  comments, where <name> is a single word identifying the section.
 *  Only these sections will be preserved.
 *
 *  Do not move these sections within this file or change the START and
 *  END comments in any way.
 *  ==== ALL OTHER CHANGES WILL BE OVERWRITTEN WHEN IT IS REGENERATED ====
 *
 *  This file was generated from
 *      D:/ti/grace_3_10_00_82/packages/ti/mcu/msp430/csl2/pmm/PMM_init.xdt
 */
#include <driverlib/MSP430FR5xx_6xx/inc/hw_memmap.h>
#include <driverlib/MSP430FR5xx_6xx/pmm.h>
#include "_Grace.h"

/* USER CODE START (section: PMM_init_c_prologue) */
/* User defined includes, defines, global variables and functions */
/* USER CODE END (section: PMM_init_c_prologue) */

/*
 *  ======== PMM_graceInit ========
 *  Initialize Config for the MSP430 PMM (Power Management Module)
 */
void PMM_graceInit(void)
{
    /* USER CODE START (section: PMM_graceInit_prologue) */
    /* User initialization code */
    /* USER CODE END (section: PMM_graceInit_prologue) */

    PMM_unlockLPM5();

    PMM_enableSVSH();

    PMM_enableLowPowerReset();

    /* USER CODE START (section: PMM_graceInit_epilogue) */
    /* User code */
    /* USER CODE END (section: PMM_graceInit_epilogue) */
}
