/**
 *
 * @file FLASH_InterruptSource.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/xHeader/FLASH_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>

void FLASH__vEnInterruptSource(FLASH_nINT enInterruptParam)
{
    uint32_t u32InterruptParam = (uint32_t) enInterruptParam;
    u32InterruptParam &= (uint32_t) FLASH_enINT_ALL;
    MCU__vWriteRegister(FLASH_BASE, FLASH_FCIM_OFFSET, u32InterruptParam, u32InterruptParam, 0UL);
}

void FLASH__vDisInterruptSource(FLASH_nINT enInterruptParam)
{
    uint32_t u32InterruptParam = (uint32_t) enInterruptParam;
    u32InterruptParam &= (uint32_t) FLASH_enINT_ALL;
    MCU__vWriteRegister(FLASH_BASE, FLASH_FCIM_OFFSET, 0UL, u32InterruptParam, 0UL);
}

void FLASH__vClearInterruptSource(FLASH_nINT enInterruptParam)
{
    uint32_t u32InterruptParam = (uint32_t) enInterruptParam;
    u32InterruptParam &= (uint32_t) FLASH_enINT_ALL;
    MCU__vWriteRegister(FLASH_BASE, FLASH_FCMISC_OFFSET, u32InterruptParam, u32InterruptParam, 0UL);

}

FLASH_nINT_STATUS FLASH__enStatusInterruptSource(FLASH_nINT enInterruptParam)
{
    FLASH_nINT_STATUS enStatus = FLASH_enINT_STATUS_UNDEF;
    uint32_t u32InterruptParam = (uint32_t) enInterruptParam;
    uint32_t u32Reg = 0UL;

    u32InterruptParam &= (uint32_t) FLASH_enINT_ALL;
    u32Reg = MCU__u32ReadRegister(FLASH_BASE, FLASH_FCRIS_OFFSET, u32InterruptParam, 0UL);

    if(0UL != u32Reg)
    {
        enStatus = FLASH_enINT_OCCUR;
    }
    else
    {
        enStatus = FLASH_enINT_NOOCCUR;
    }
    return enStatus;
}
