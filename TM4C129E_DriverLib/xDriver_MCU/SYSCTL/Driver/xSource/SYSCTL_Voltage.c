/*
 * SYSCTL_Voltage.c
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_Voltage.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>


void SYSCTL__vSetBOREvent_VDD(SYSCTL_nBOR_EVENT enBOREvent)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PTBOCTL_OFFSET, (UBase_t) enBOREvent,
                        SYSCTL_PTBOCTL_VDD_UBOR_MASK, SYSCTL_PTBOCTL_R_VDD_UBOR_BIT);
}

void SYSCTL__vSetBOREvent_VDDA(SYSCTL_nBOR_EVENT enBOREvent)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PTBOCTL_OFFSET, (UBase_t) enBOREvent,
                        SYSCTL_PTBOCTL_VDDA_UBOR_MASK, SYSCTL_PTBOCTL_R_VDDA_UBOR_BIT);
}

void SYSCTL__vSetBOREvent(SYSCTL_nBOR_EVENT enBOREvent_VDD,
                          SYSCTL_nBOR_EVENT enBOREvent_VDDA)
{
    SYSCTL__vSetBOREvent_VDD(enBOREvent_VDD);
    SYSCTL__vSetBOREvent_VDDA(enBOREvent_VDDA);
}

SYSCTL_nBOR_EVENT SYSCTL__enGetBOREvent_VDD(void)
{
    SYSCTL_nBOR_EVENT enEventReg = SYSCTL_enBOR_EVENT_NONE;
    enEventReg = (SYSCTL_nBOR_EVENT) MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PTBOCTL_OFFSET,
                          SYSCTL_PTBOCTL_VDD_UBOR_MASK, SYSCTL_PTBOCTL_R_VDD_UBOR_BIT);
    return (enEventReg);
}

SYSCTL_nBOR_EVENT SYSCTL__enGetBOREvent_VDDA(void)
{
    SYSCTL_nBOR_EVENT enEventReg = SYSCTL_enBOR_EVENT_NONE;
    enEventReg = (SYSCTL_nBOR_EVENT) MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PTBOCTL_OFFSET,
                        SYSCTL_PTBOCTL_VDDA_UBOR_MASK, SYSCTL_PTBOCTL_R_VDDA_UBOR_BIT);
    return (enEventReg);
}


void SYSCTL__vGetBOREvent(SYSCTL_nBOR_EVENT* penBOREvent_VDD,
                          SYSCTL_nBOR_EVENT* penBOREvent_VDDA)
{
    if(0UL != (UBase_t) penBOREvent_VDD)
    {
        *penBOREvent_VDD  = SYSCTL__enGetBOREvent_VDD();
    }
    if(0UL != (UBase_t) penBOREvent_VDDA)
    {
        *penBOREvent_VDDA = SYSCTL__enGetBOREvent_VDDA();
    }
}

SYSCTL_nBOR_STATUS SYSCTL__enGetBORStatus_VDD(void)
{
    SYSCTL_nBOR_STATUS enStatusReg = SYSCTL_enBOR_STATUS_NONE;
    enStatusReg = (SYSCTL_nBOR_STATUS) MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PWRTC_OFFSET,
                                     SYSCTL_PWRTC_VDD_UBOR_MASK, SYSCTL_PWRTC_R_VDD_UBOR_BIT);
    return (enStatusReg);
}

SYSCTL_nBOR_STATUS SYSCTL__enGetBORStatus_VDDA(void)
{
    SYSCTL_nBOR_STATUS enStatusReg = SYSCTL_enBOR_STATUS_NONE;
    enStatusReg = (SYSCTL_nBOR_STATUS) MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PWRTC_OFFSET,
                             SYSCTL_PWRTC_VDDA_UBOR_MASK, SYSCTL_PWRTC_R_VDDA_UBOR_BIT);
    return (enStatusReg);
}

SYSCTL_nBOR_STATUS SYSCTL__enGetBORStatus(void)
{
    SYSCTL_nBOR_STATUS enStatusReg = SYSCTL_enBOR_STATUS_NONE;
    enStatusReg = (SYSCTL_nBOR_STATUS) MCU__uxReadRegister(SYSCTL_BASE, SYSCTL_PWRTC_OFFSET,
                         SYSCTL_PWRTC_R_VDDA_UBOR_MASK | SYSCTL_PWRTC_R_VDD_UBOR_MASK, 0UL);
    return (enStatusReg);
}


void SYSCTL__vClearBORStatus_VDD(void)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PWRTC_OFFSET,
                        SYSCTL_PWRTC_R_VDD_UBOR_MASK, 0xFFFFFFFFUL, 0UL);
}

void SYSCTL__vClearBORStatus_VDDA(void)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PWRTC_OFFSET,
                        SYSCTL_PWRTC_R_VDDA_UBOR_MASK, 0xFFFFFFFFUL, 0UL);
}

void SYSCTL__vClearBORStatus(SYSCTL_nBOR_STATUS enBOREvent)
{
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_PTBOCTL_OFFSET,
                        (UBase_t) enBOREvent, 0xFFFFFFFFUL, 0UL);
}
