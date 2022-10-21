/**
 *
 * @file WDT_ConfigOnly.c
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
 * @verbatim 21 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/WDT/Config/xHeader/WDT_ConfigOnly.h>

#include <stdlib.h>
#include <xApplication_MCU/WDT/Config/xHeader/WDT_ConfigStruct.h>
#include <xApplication_MCU/WDT/xHeader/WDT_DisInterrupt.h>
#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Dependencies.h>

WDT_nERROR WDT__enSetConfig(WDT_nMODULE enModuleArg, WDT_nCONFIG enConfigArg)
{
    WDT_nERROR enErrorReg;
    WDT_CONFIG_t *pstConfigReg;
    pstConfigReg = (WDT_CONFIG_t *) 0UL;
    enErrorReg = WDT__enConvertConfigStructure_Create(enConfigArg, &pstConfigReg);
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enSetConfigStructure(enModuleArg, pstConfigReg);
    }
    WDT__vDeleteConfigStruct(pstConfigReg);
    return (enErrorReg);
}

WDT_nERROR WDT__enSetConfigStructure(WDT_nMODULE enModuleArg, const WDT_CONFIG_t *pstConfigArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT_enERROR_OK;
    if(0UL == (UBase_t) pstConfigArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enUnlock(enModuleArg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        if(WDT_enSTATE_DIS == pstConfigArg->enInterruptState)
        {
            enErrorReg = WDT__enDisableInterruptSourceByNumber(enModuleArg, WDT_enINT_WDT);
        }
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enSetStallMode(enModuleArg, pstConfigArg->enStallMode);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enSetResetOutputState(enModuleArg, pstConfigArg->enResetOutput);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enSetInterruptSourceType(enModuleArg, pstConfigArg->enInterruptType);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        if(WDT_enSTATE_ENA == pstConfigArg->enInterruptState)
        {
            enErrorReg = WDT__enEnableInterruptSourceByNumber(enModuleArg, WDT_enINT_WDT);
        }
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enLock(enModuleArg);
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enGetConfig(WDT_nMODULE enModuleArg, WDT_nCONFIG* penConfigArg)
{
    WDT_nERROR enErrorReg;
    WDT_nCONFIG enConfig;

    UBase_t uxInterruptStateReg;
    UBase_t uxInterruptTypeReg;
    UBase_t uxStallModeReg;
    UBase_t uxResetOutputReg;
    UBase_t uxReg;

    uxInterruptStateReg = 0UL;
    uxInterruptTypeReg = 0UL;
    uxStallModeReg = 0U;
    uxResetOutputReg = 0U;
    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) penConfigArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enGetInterruptSourceStateByNumber(enModuleArg, WDT_enINT_WDT, (WDT_nSTATE*) &uxInterruptStateReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enGetStallMode(enModuleArg, (WDT_nSTALL*) &uxStallModeReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enGetInterruptSourceType(enModuleArg, (WDT_nINT_TYPE*) &uxInterruptTypeReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enGetResetOutputState(enModuleArg, (WDT_nSTATE*) &uxResetOutputReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        uxInterruptStateReg <<= 0UL;
        uxStallModeReg <<= 8UL;
        uxInterruptTypeReg <<= 16UL;
        uxResetOutputReg <<= 24UL;
        uxReg = uxInterruptStateReg;
        uxReg |= uxStallModeReg;
        uxReg |= uxInterruptTypeReg;
        uxReg |= uxResetOutputReg;
        enConfig = (WDT_nCONFIG) uxReg;
        *penConfigArg = enConfig;
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enGetConfigStructure(WDT_nMODULE enModuleArg, WDT_CONFIG_t *pstConfigArg)
{
    WDT_nERROR enErrorReg;
    WDT_nSTATE enInterruptStateReg;
    WDT_nINT_TYPE enInterruptTypeReg;
    WDT_nSTALL enStallModeReg;
    WDT_nSTATE enResetOutputReg;

    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enInterruptStateReg = WDT_enSTATE_DIS;
        enErrorReg = WDT__enGetInterruptSourceStateByNumber(enModuleArg, WDT_enINT_WDT, &enInterruptStateReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enStallModeReg = WDT_enSTALL_CONTINUE;
        enErrorReg = WDT__enGetStallMode(enModuleArg, &enStallModeReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enInterruptTypeReg = WDT_enINT_TYPE_STANDARD;
        enErrorReg = WDT__enGetInterruptSourceType(enModuleArg, &enInterruptTypeReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enResetOutputReg = WDT_enSTATE_DIS;
        enErrorReg = WDT__enGetResetOutputState(enModuleArg, &enResetOutputReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        pstConfigArg->enInterruptState = enInterruptStateReg;
        pstConfigArg->enStallMode = enStallModeReg;
        pstConfigArg->enInterruptType = enInterruptTypeReg;
        pstConfigArg->enResetOutput = enResetOutputReg;
    }

    return (enErrorReg);
}

WDT_nERROR WDT__enGetConfig_Create(WDT_nMODULE enModuleArg, WDT_CONFIG_t** pstConfigArg)
{
    WDT_CONFIG_t *pstConfigReg;
    WDT_nERROR enErrorReg;

    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstConfigReg = (WDT_CONFIG_t*) memalign( (size_t) 4,
                                                 (size_t) (sizeof(WDT_CONFIG_t)));
#elif defined (__GNUC__ )
        pstConfigReg = (WDT_CONFIG_t*) malloc((size_t) sizeof(WDT_CONFIG_t));
#endif
        WDT__enGetConfigStructure(enModuleArg, pstConfigReg);
    }

    if(WDT_enERROR_OK == enErrorReg)
    {
        *pstConfigArg = pstConfigReg;
    }
    return (enErrorReg);
}



