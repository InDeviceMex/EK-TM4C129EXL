/**
 *
 * @file WDT_ConfigStruct.c
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
#include <xApplication_MCU/WDT/Config/xHeader/WDT_ConfigStruct.h>

#include <stdlib.h>

WDT_nERROR WDT__enConvertConfigStructure(WDT_nCONFIG enConfigArg, WDT_CONFIG_t* pstConfigArg)
{
    WDT_nERROR enErrorReg;
    UBase_t uxInterruptStateReg;
    UBase_t uxInterruptTypeReg;
    UBase_t uxStallModeReg;
    UBase_t uxResetOutputReg;

    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        uxInterruptStateReg = (UBase_t) enConfigArg;
        uxInterruptStateReg >>= 0UL;
        uxInterruptStateReg &= 0xFFUL;
        pstConfigArg->enInterruptState = (WDT_nSTATE) uxInterruptStateReg;

        uxStallModeReg = (UBase_t) enConfigArg;
        uxStallModeReg >>= 8UL;
        uxStallModeReg &= 0xFFUL;
        pstConfigArg->enStallMode = (WDT_nSTALL) uxStallModeReg;

        uxInterruptTypeReg = (UBase_t) enConfigArg;
        uxInterruptTypeReg >>= 16UL;
        uxInterruptTypeReg &= 0xFFUL;
        pstConfigArg->enInterruptType = (WDT_nINT_TYPE) uxInterruptTypeReg;

        uxResetOutputReg = (UBase_t) enConfigArg;
        uxResetOutputReg >>= 24UL;
        uxResetOutputReg &= 0xFFU;
        pstConfigArg->enResetOutput = (WDT_nSTATE) uxResetOutputReg;
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enConvertConfigStructure_Create(WDT_nCONFIG enConfigArg, WDT_CONFIG_t** pstConfigArg)
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
        enErrorReg = WDT__enConvertConfigStructure(enConfigArg, pstConfigReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        *pstConfigArg = pstConfigReg;
    }
    return (enErrorReg);
}

void WDT__vDeleteConfigStruct(WDT_CONFIG_t *pstConfigArg)
{
    free(pstConfigArg);
    pstConfigArg = (WDT_CONFIG_t*) 0UL;
}




