/*
 * SYSCTL_Voltage.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_Voltage.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/Primitives/SYSCTL_Primitives.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>


SYSCTL_nERROR SYSCTL__enSetBrownOutEventAction_VDD(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOR_EVENT enEventArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.uxShift = PTBO_CTL_R_VDD_UBOR_BIT;
    stRegister.uxMask = PTBO_CTL_VDD_UBOR_MASK;
    stRegister.uptrAddress = PTBO_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enEventArg;

    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetBrownOutEventAction_VDD(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOR_EVENT* penEventArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penEventArg) ? SYSCTL_enERROR_POINTER : SYSCTL_enERROR_OK;
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        SYSCTL_Register_t stRegister;
        stRegister.uxShift = PTBO_CTL_R_VDD_UBOR_BIT;
        stRegister.uxMask = PTBO_CTL_VDD_UBOR_MASK;
        stRegister.uptrAddress = PTBO_CTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
        if(SYSCTL_enERROR_OK == enErrorReg)
        {
            *penEventArg = (SYSCTL_nBOR_EVENT) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enSetBrownOutEventAction_VDDA(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOR_EVENT enEventArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.uxShift = PTBO_CTL_R_VDDA_UBOR_BIT;
    stRegister.uxMask = PTBO_CTL_VDDA_UBOR_MASK;
    stRegister.uptrAddress = PTBO_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enEventArg;

    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetBrownOutEventAction_VDDA(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOR_EVENT* penEventArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penEventArg) ? SYSCTL_enERROR_POINTER : SYSCTL_enERROR_OK;
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        SYSCTL_Register_t stRegister;
        stRegister.uxShift = PTBO_CTL_R_VDDA_UBOR_BIT;
        stRegister.uxMask = PTBO_CTL_VDDA_UBOR_MASK;
        stRegister.uptrAddress = PTBO_CTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
        if(SYSCTL_enERROR_OK == enErrorReg)
        {
            *penEventArg = (SYSCTL_nBOR_EVENT) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}


SYSCTL_nERROR SYSCTL__enSetBrownOutEventAction(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOR_EVENT enVDDEventArg, SYSCTL_nBOR_EVENT enVDDAEventArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL__enSetBrownOutEventAction_VDD(enModuleArg, enVDDEventArg);
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enSetBrownOutEventAction_VDDA(enModuleArg, enVDDAEventArg);
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enGetBrownOutEventAction(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOR_EVENT* penVDDEventArg, SYSCTL_nBOR_EVENT* penVDDAEventArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL__enGetBrownOutEventAction_VDD(enModuleArg, penVDDEventArg);
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = SYSCTL__enGetBrownOutEventAction_VDDA(enModuleArg, penVDDAEventArg);
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enIsBrownOutTripped_VDD(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStatusArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStatusArg) ? SYSCTL_enERROR_POINTER : SYSCTL_enERROR_OK;
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        SYSCTL_Register_t stRegister;
        stRegister.uxShift = SYSCTL_PWRTC_R_VDD_UBOR_BIT;
        stRegister.uxMask = SYSCTL_PWRTC_VDD_UBOR_MASK;
        stRegister.uptrAddress = SYSCTL_PWRTC_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
        if(SYSCTL_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (SYSCTL_nBOOLEAN) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enIsBrownOutTripped_VDDA(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStatusArg)
{
    SYSCTL_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStatusArg) ? SYSCTL_enERROR_POINTER : SYSCTL_enERROR_OK;
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        SYSCTL_Register_t stRegister;
        stRegister.uxShift = SYSCTL_PWRTC_R_VDDA_UBOR_BIT;
        stRegister.uxMask = SYSCTL_PWRTC_VDDA_UBOR_MASK;
        stRegister.uptrAddress = SYSCTL_PWRTC_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(enModuleArg, &stRegister);
        if(SYSCTL_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (SYSCTL_nBOOLEAN) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enClearBrownOutStatus_VDD(SYSCTL_nMODULE enModuleArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.uxShift = 0UL;
    stRegister.uxMask = MCU_MASK_32;
    stRegister.uptrAddress = SYSCTL_PWRTC_OFFSET;
    stRegister.uxValue = SYSCTL_PWRTC_R_VDD_UBOR_MASK;

    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enClearBrownOutStatus_VDDA(SYSCTL_nMODULE enModuleArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.uxShift = 0UL;
    stRegister.uxMask = MCU_MASK_32;
    stRegister.uptrAddress = SYSCTL_PWRTC_OFFSET;
    stRegister.uxValue = SYSCTL_PWRTC_R_VDDA_UBOR_MASK;

    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enClearBrownOutStatus(SYSCTL_nMODULE enModuleArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.uxShift = 0UL;
    stRegister.uxMask = MCU_MASK_32;
    stRegister.uptrAddress = SYSCTL_PWRTC_OFFSET;
    stRegister.uxValue = SYSCTL_PWRTC_R_VDDA_UBOR_MASK | SYSCTL_PWRTC_R_VDD_UBOR_MASK;

    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}
