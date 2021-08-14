/**
 *
 * @file FLASH_Erase.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 14 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/FLASH/xHeader/FLASH_Erase.h>

#include <xApplication_MCU/FLASH/xHeader/FLASH_InitProcess.h>
#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Dependencies.h>

FLASH_nSTATUS FLASH__enPageErase (uint32_t u32Address)
{
    FLASH_nSTATUS enStatusReg = FLASH_enERROR;
    uint32_t u32FlashSize = FLASH__u32GetSize();
    if(u32Address < u32FlashSize)
    {
        MCU__vWriteRegister(FLASH_BASE, FLASH_FMA_OFFSET,
                            u32Address, FLASH_FMA_OFFSET_MASK, FLASH_FMA_R_OFFSET_BIT);
        enStatusReg = FLASH__enInitProcess(FLASH_FMC_OFFSET, FLASH_FMC_R_ERASE_MASK);
    }
    return (enStatusReg);
}

FLASH_nSTATUS FLASH__enPageErasePos (uint32_t u32Page)
{
    FLASH_nSTATUS enStatusReg = FLASH_enOK;
    uint32_t u32FlashSectorSize = FLASH__u32GetSectorSize();
    uint32_t u32Address = u32Page * u32FlashSectorSize;
    enStatusReg = FLASH__enPageErase(u32Address);
    return (enStatusReg);
}

FLASH_nSTATUS FLASH__enMassErase (void)
{
    FLASH_nSTATUS enStatusReg = FLASH_enOK;
    enStatusReg = FLASH__enInitProcess(FLASH_FMC_OFFSET, FLASH_FMC_R_MERASE_MASK);
    return (enStatusReg);
}
