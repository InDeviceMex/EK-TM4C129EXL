/**
 *
 * @file GPIO_ConfigStruct.c
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
#include <xDriver_MCU/GPIO/App/Config/xHeader/GPIO_ConfigStruct.h>

#include <stdlib.h>

GPIO_nERROR GPIO__enConvertConfigStructure(GPIO_nCONFIG enConfigArg,
                                           GPIO_CONFIG_t* pstConfigArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) pstConfigArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        UBase_t uxResistorReg = (UBase_t) enConfigArg;
        uxResistorReg >>= 0UL;
        uxResistorReg &= 0xFUL;
        pstConfigArg->enResistorMode = (GPIO_nRESMODE) uxResistorReg;

        UBase_t uxOutputReg = (UBase_t) enConfigArg;
        uxOutputReg >>= 4UL;
        uxOutputReg &= 0xFUL;
        pstConfigArg->enOutputMode = (GPIO_nOUTMODE) uxOutputReg;

        UBase_t uxDirectionReg = (UBase_t) enConfigArg;
        uxDirectionReg >>= 8UL;
        uxDirectionReg &= 0xFFUL;
        pstConfigArg->enDirection = (GPIO_nDIR) uxDirectionReg;

        UBase_t uxDriveReg = (UBase_t) enConfigArg;
        uxDriveReg >>= 16UL;
        uxDriveReg &= 0xFFFFU;
        pstConfigArg->enDrive = (GPIO_nDRIVE) uxDriveReg;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enConvertConfigStructure_Create(GPIO_nCONFIG enConfigArg,
                                                  GPIO_CONFIG_t** pstConfigArg)
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
        enErrorReg = GPIO__enConvertConfigStructure(enConfigArg, pstConfigReg);
        if(GPIO_enERROR_OK == enErrorReg)
        {
            *pstConfigArg = pstConfigReg;
        }
    }
    return (enErrorReg);
}

void GPIO__vDeleteConfigStruct(GPIO_CONFIG_t *pstConfigArg)
{
    free(pstConfigArg);
    pstConfigArg = (GPIO_CONFIG_t*) 0UL;
}

