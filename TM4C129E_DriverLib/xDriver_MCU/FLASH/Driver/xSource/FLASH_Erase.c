/*
 * FLASH_Erase.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Erase.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Wait.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Size.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_InitProcess.h>

FLASH_nSTATUS FLASH__enPageErase (uint32_t u32Address)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t u32FlashSize = FLASH__u32GetSize();
    if(u32Address < u32FlashSize)
    {
        MCU__vWriteRegister(FLASH_BASE, FLASH_FMA_OFFSET, u32Address, FLASH_FMA_OFFSET_MASK, FLASH_FMA_R_OFFSET_BIT);
        enReturn = FLASH__enInitProcess(FLASH_FMC_OFFSET, FLASH_FMC_R_ERASE_MASK);
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enPageErasePos (uint32_t u32Page)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t u32FlashSectorSize = FLASH__u32GetSectorSize();
    uint32_t u32Address = u32Page * u32FlashSectorSize;
    enReturn = FLASH__enPageErase(u32Address);
    return enReturn;
}

FLASH_nSTATUS FLASH__enMassErase (void)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    enReturn = FLASH__enInitProcess(FLASH_FMC_OFFSET, FLASH_FMC_R_MERASE_MASK);
    return enReturn;
}
