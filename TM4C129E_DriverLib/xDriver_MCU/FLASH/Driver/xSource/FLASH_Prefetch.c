/**
 *
 * @file FLASH_Prefetch.c
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
 * @verbatim 22 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Prefetch.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>

void FLASH__vSetPrefetchMode (FLASH_nPREFETCH_MODE enPrefetchMode)
{
    MCU__vWriteRegister(FLASH_BASE, FLASH_FLASHCONF_OFFSET, (uint32_t) enPrefetchMode,
                        FLASH_FLASHCONF_SPFE_MASK, FLASH_FLASHCONF_R_SPFE_BIT);
    FLASH__vClearPrefetchBuffer();
}

FLASH_nPREFETCH_MODE FLASH__enGetPrefetchMode (void)
{
    FLASH_nPREFETCH_MODE enReturn = FLASH_enPREFETCH_MODE_TWO;
    enReturn = (FLASH_nPREFETCH_MODE) MCU__u32ReadRegister(FLASH_BASE, FLASH_FLASHCONF_OFFSET,
                                    FLASH_FLASHCONF_SPFE_MASK, FLASH_FLASHCONF_R_SPFE_BIT);
    return enReturn;
}

void FLASH__vSetPrefetchEnable (FLASH_nPREFETCH_ENABLE enPrefetchEnable)
{
    if(FLASH_enPREFETCH_ENABLE_ON == enPrefetchEnable)
    {
        MCU__vWriteRegister(FLASH_BASE, FLASH_FLASHCONF_OFFSET, FLASH_FLASHCONF_FPFON_FORCE,
                        FLASH_FLASHCONF_FPFON_MASK, FLASH_FLASHCONF_R_FPFON_BIT);
    }
    else
    {
        MCU__vWriteRegister(FLASH_BASE, FLASH_FLASHCONF_OFFSET, FLASH_FLASHCONF_FPFOFF_FORCE,
                        FLASH_FLASHCONF_FPFOFF_MASK, FLASH_FLASHCONF_R_FPFOFF_BIT);
    }
    FLASH__vClearPrefetchBuffer();
}


void FLASH__vClearPrefetchBuffer (void)
{
    MCU__vWriteRegister(FLASH_BASE, FLASH_FLASHCONF_OFFSET, FLASH_FLASHCONF_CLRTV_CLEAR,
                    FLASH_FLASHCONF_CLRTV_MASK, FLASH_FLASHCONF_R_CLRTV_BIT);
}


void FLASH__vSetMirrorMode (FLASH_nMIRROR enMirrorEnable)
{
    MCU__vWriteRegister(FLASH_BASE, FLASH_FLASHCONF_OFFSET, (uint32_t) enMirrorEnable,
                        FLASH_FLASHCONF_FMME_MASK, FLASH_FLASHCONF_R_FMME_BIT);
    FLASH__vClearPrefetchBuffer();
}

FLASH_nMIRROR FLASH__enGetMirrorMode (void)
{
    FLASH_nMIRROR enReturn = FLASH_enMIRROR_DIS;
    enReturn = (FLASH_nMIRROR) MCU__u32ReadRegister(FLASH_BASE, FLASH_FLASHCONF_OFFSET,
                                    FLASH_FLASHCONF_FMME_MASK, FLASH_FLASHCONF_R_FMME_BIT);
    return enReturn;
}
