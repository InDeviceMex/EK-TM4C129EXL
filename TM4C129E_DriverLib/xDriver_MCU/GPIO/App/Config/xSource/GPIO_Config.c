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
    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (UBase_t) pstConfigArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
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
    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (UBase_t) pstConfigArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
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
    GPIO_nCONFIG enConfig;

    UBase_t uxResistorModeReg;
    UBase_t uxOutputModeReg;
    UBase_t uxDirectionReg;
    UBase_t uxDriveReg;
    UBase_t uxReg;

    uxDriveReg = 0UL;
    uxDirectionReg = 0UL;
    uxOutputModeReg = 0U;
    uxResistorModeReg = 0U;
    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penConfigArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetResistorModeByNumber(enPortArg, enPinArg, (GPIO_nRESMODE*) &uxResistorModeReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetOutputModeByNumber(enPortArg, enPinArg, (GPIO_nOUTMODE*) &uxOutputModeReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetDirectionByNumber(enPortArg, enPinArg, (GPIO_nDIR*) &uxDirectionReg);
    }
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
        uxReg = uxResistorModeReg;
        uxReg |= uxOutputModeReg;
        uxReg |= uxDirectionReg;
        uxReg |= uxDriveReg;
        enConfig = (GPIO_nCONFIG) uxReg;
        *penConfigArg = enConfig;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetConfigStructureByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_CONFIG_t *pstConfigArg)
{
    GPIO_nERROR enErrorReg;
    GPIO_nRESMODE enResistorModeReg;
    GPIO_nOUTMODE enOutputModeReg;
    GPIO_nDIR enDirectionReg;
    GPIO_nDRIVE enDriveReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enResistorModeReg = GPIO_enRESMODE_UNDEF;
        enErrorReg = GPIO__enGetResistorModeByNumber(enPortArg, enPinArg, &enResistorModeReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enOutputModeReg = GPIO_enOUTMODE_UNDEF;
        enErrorReg = GPIO__enGetOutputModeByNumber(enPortArg, enPinArg, &enOutputModeReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enDirectionReg = GPIO_enDIR_UNDEF;
        enErrorReg = GPIO__enGetDirectionByNumber(enPortArg, enPinArg, &enDirectionReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enDriveReg = GPIO_enDRIVE_UNDEF;
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
    GPIO_CONFIG_t *pstConfigReg;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstConfigReg = (GPIO_CONFIG_t*) memalign( (size_t) 4,
                                                 (size_t) (sizeof(GPIO_CONFIG_t)));
#elif defined (__GNUC__ )
        pstConfigReg = (GPIO_CONFIG_t*) malloc((size_t) sizeof(GPIO_CONFIG_t));
#endif
        GPIO__enGetConfigStructureByNumber(enPortArg, enPinArg, pstConfigReg);
    }

    if(GPIO_enERROR_OK == enErrorReg)
    {
        *pstConfigArg = pstConfigReg;
    }
    return (enErrorReg);
}
