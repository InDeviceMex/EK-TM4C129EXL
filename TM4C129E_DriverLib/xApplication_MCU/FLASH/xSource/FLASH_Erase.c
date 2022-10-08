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

FLASH_nERROR FLASH__enPageEraseByAddress(FLASH_nMODULE enModuleArg, UBase_t uxAddressArg)
{
    FLASH_nERROR enErrorReg;
    UBase_t uxFlashSizeReg;
    UBase_t uxSectorSizeReg;

    uxFlashSizeReg = 0UL;
    uxSectorSizeReg = 0UL;
    enErrorReg = FLASH__enGetSizeInBytes(enModuleArg, &uxFlashSizeReg);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(uxAddressArg, uxFlashSizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetSectorSizeInBytes(enModuleArg, &uxSectorSizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        if(0UL == uxSectorSizeReg)
        {
            enErrorReg = FLASH_enERROR_VALUE;
        }
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        uxSectorSizeReg--;
        uxAddressArg &= uxSectorSizeReg;
        enErrorReg = FLASH__enStartAddressToErase(enModuleArg, uxAddressArg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enInitProcessAndWait(enModuleArg, FLASH_enPROCESS_PAGE_ERASE);
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enPageEraseBySector(FLASH_nMODULE enModuleArg, UBase_t uxSectorArg)
{
    FLASH_nERROR enErrorReg;
    UBase_t uxFlashSizeReg;
    UBase_t uxAddressReg;
    UBase_t uxSectorSizeReg;

    uxFlashSizeReg = 0UL;
    uxSectorSizeReg = 0UL;
    uxAddressReg = 0UL;
    enErrorReg = FLASH__enGetSectorSizeInBytes(enModuleArg, &uxSectorSizeReg);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        if(0UL == uxSectorSizeReg)
        {
            enErrorReg = FLASH_enERROR_VALUE;
        }
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetSizeInBytes(enModuleArg, &uxFlashSizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        uxAddressReg = uxSectorArg;
        uxAddressReg *= uxSectorSizeReg;
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(uxAddressReg, uxFlashSizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enStartAddressToErase(enModuleArg, uxAddressReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enInitProcessAndWait(enModuleArg, FLASH_enPROCESS_PAGE_ERASE);
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enMassErase(FLASH_nMODULE enModuleArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = FLASH__enInitProcessAndWait(enModuleArg, FLASH_enPROCESS_MASS_ERASE);
    return (enErrorReg);
}
