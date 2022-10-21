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
    FLASH_nBOOLEAN enStatusReg;

    enErrorReg = FLASH_enERROR_OK;
    enStatusReg = FLASH_enFALSE;
    if(0UL == uxTimeoutArg)
    {
        do
        {
            enErrorReg = FLASH__enIsProcessOngoing(enModuleArg, enProcessArg, &enStatusReg);
        }while((FLASH_enTRUE == enStatusReg) &&
               (FLASH_enERROR_OK == enErrorReg));
    }
    else
    {
        do
        {
            enErrorReg = FLASH__enIsProcessOngoing(enModuleArg, enProcessArg, &enStatusReg);
            uxTimeoutArg--;
        }while((FLASH_enTRUE == enStatusReg) &&
               (0UL != uxTimeoutArg) &&
               (FLASH_enERROR_OK == enErrorReg));

        if((FLASH_enTRUE == enStatusReg) &&
           (0UL == uxTimeoutArg) &&
           (FLASH_enERROR_OK == enErrorReg))
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
