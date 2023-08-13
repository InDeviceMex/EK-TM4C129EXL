/**
 *
 * @file GPIO_Config.c
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
 * @verbatim 3 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/App/Config/GPIO_Config.h>

#include <stdlib.h>
#include <xDriver_MCU/GPIO/App/Config/xHeader/GPIO_ConfigStruct.h>
#include <xDriver_MCU/GPIO/Driver/GPIO_Driver.h>

GPIO_nERROR GPIO__enSetConfigByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                      GPIO_nCONFIG enConfigArg)
{
    GPIO_nERROR enErrorReg;
    GPIO_CONFIG_t *pstConfigReg;
    pstConfigReg = (GPIO_CONFIG_t *) 0UL;
    enErrorReg = GPIO__enConvertConfigStructure_Create(enConfigArg, &pstConfigReg);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetConfigStructureByNumber(enPortArg, enPinArg, pstConfigReg);
    }
    GPIO__vDeleteConfigStruct(pstConfigReg);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetConfigByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                    GPIO_nCONFIG enConfigArg)
{
    GPIO_nERROR enErrorReg;
    GPIO_CONFIG_t* pstConfigReg;
    pstConfigReg = (GPIO_CONFIG_t*) 0UL;
    enErrorReg = GPIO__enConvertConfigStructure_Create(enConfigArg, &pstConfigReg);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetConfigStructureByMask(enPortArg, enPinMaskArg, pstConfigReg);
    }
    GPIO__vDeleteConfigStruct(pstConfigReg);
    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetConfigStructureByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                               const GPIO_CONFIG_t *pstConfigArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (UBase_t) pstConfigArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetCommitStateByNumber(enPortArg, enPinArg, GPIO_enSTATE_ENA);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetResistorModeByNumber(enPortArg, enPinArg, pstConfigArg->enResistorMode);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetOutputModeByNumber(enPortArg, enPinArg, pstConfigArg->enOutputMode);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetDirectionByNumber(enPortArg, enPinArg, pstConfigArg->enDirection);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetDriveByNumber(enPortArg, enPinArg, pstConfigArg->enDrive);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetCommitStateByNumber(enPortArg, enPinArg, GPIO_enSTATE_DIS);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetConfigStructureByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                               const GPIO_CONFIG_t *pstConfigArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (UBase_t) pstConfigArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetCommitStateByMask(enPortArg, enPinMaskArg, GPIO_enSTATE_ENA);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetResistorModeByMask(enPortArg, enPinMaskArg, pstConfigArg->enResistorMode);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetOutputModeByMask(enPortArg, enPinMaskArg, pstConfigArg->enOutputMode);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetDirectionByMask(enPortArg, enPinMaskArg, pstConfigArg->enDirection);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetDriveByMask(enPortArg, enPinMaskArg, pstConfigArg->enDrive);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetCommitStateByMask(enPortArg, enPinMaskArg, GPIO_enSTATE_DIS);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetConfigByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nCONFIG* penConfigArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penConfigArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;

    UBase_t uxResistorModeReg;
    uxResistorModeReg = 0U;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetResistorModeByNumber(enPortArg, enPinArg, (GPIO_nRESMODE*) &uxResistorModeReg);
    }

    UBase_t uxOutputModeReg;
    uxOutputModeReg = 0U;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetOutputModeByNumber(enPortArg, enPinArg, (GPIO_nOUTMODE*) &uxOutputModeReg);
    }

    UBase_t uxDirectionReg;
    uxDirectionReg = 0UL;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetDirectionByNumber(enPortArg, enPinArg, (GPIO_nDIR*) &uxDirectionReg);
    }

    UBase_t uxDriveReg;
    uxDriveReg = 0UL;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetDriveByNumber(enPortArg, enPinArg, (GPIO_nDRIVE*) &uxDriveReg);
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        uxResistorModeReg <<= 0UL;
        uxOutputModeReg <<= 4UL;
        uxDirectionReg <<= 8UL;
        uxDriveReg <<= 16UL;
        UBase_t uxReg = uxResistorModeReg;
        uxReg |= uxOutputModeReg;
        uxReg |= uxDirectionReg;
        uxReg |= uxDriveReg;

        GPIO_nCONFIG enConfig = (GPIO_nCONFIG) uxReg;
        *penConfigArg = enConfig;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetConfigStructureByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_CONFIG_t *pstConfigArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) pstConfigArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;

    GPIO_nRESMODE enResistorModeReg;
    enResistorModeReg = GPIO_enRESMODE_UNDEF;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetResistorModeByNumber(enPortArg, enPinArg, &enResistorModeReg);
    }

    GPIO_nOUTMODE enOutputModeReg;
    enOutputModeReg = GPIO_enOUTMODE_UNDEF;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetOutputModeByNumber(enPortArg, enPinArg, &enOutputModeReg);
    }

    GPIO_nDIR enDirectionReg;
    enDirectionReg = GPIO_enDIR_UNDEF;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetDirectionByNumber(enPortArg, enPinArg, &enDirectionReg);
    }

    GPIO_nDRIVE enDriveReg;
    enDriveReg = GPIO_enDRIVE_UNDEF;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetDriveByNumber(enPortArg, enPinArg, &enDriveReg);
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        pstConfigArg->enDirection = enDirectionReg;
        pstConfigArg->enDrive = enDriveReg;
        pstConfigArg->enOutputMode = enOutputModeReg;
        pstConfigArg->enResistorMode = enResistorModeReg;
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetConfigByNumber_Create(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_CONFIG_t** pstConfigArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) pstConfigArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;

    if(GPIO_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        GPIO_CONFIG_t *pstConfigReg = (GPIO_CONFIG_t*) memalign( (size_t) 4,
                                                 (size_t) (sizeof(GPIO_CONFIG_t)));
#elif defined (__GNUC__ )
        GPIO_CONFIG_t *pstConfigReg = (GPIO_CONFIG_t*) malloc((size_t) sizeof(GPIO_CONFIG_t));
#endif
        enErrorReg = GPIO__enGetConfigStructureByNumber(enPortArg, enPinArg, pstConfigReg);
        if(GPIO_enERROR_OK == enErrorReg)
        {
            *pstConfigArg = pstConfigReg;
        }
    }
    return (enErrorReg);
}
