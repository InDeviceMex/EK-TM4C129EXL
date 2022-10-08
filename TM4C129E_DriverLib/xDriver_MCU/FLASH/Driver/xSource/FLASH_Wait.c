/*
 * FLASH.c
 *
 *  Created on: 5 feb. 2018
 *      Author: InDev
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Wait.h>

#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Process.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Prefetch.h>

FLASH_nERROR FLASH__enWait(FLASH_nMODULE enModuleArg, FLASH_nPROCESS enProcessArg, UBase_t uxTimeoutArg)
{
    FLASH_nERROR enErrorReg;
    FLASH_nSTATUS enStatusReg;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == uxTimeoutArg)
    {
        enErrorReg = FLASH_enERROR_VALUE;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enStatusReg = FLASH_enSTATUS_INACTIVE;
        do
        {
            enErrorReg = FLASH__enIsProcessOngoing(enModuleArg, enProcessArg, &enStatusReg);
            uxTimeoutArg--;
        }while((FLASH_enSTATUS_ACTIVE == enStatusReg) &&
               (0UL != uxTimeoutArg) &&
               (FLASH_enERROR_OK == enErrorReg));
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        if(0UL == uxTimeoutArg)
        {
            enErrorReg = FLASH_enERROR_TIMEOUT;
        }
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        FLASH__enClearPrefetchBuffer(enModuleArg);
    }
    return (enErrorReg);
}
