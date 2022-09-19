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
    uint32_t u32DriveReg;
    uint32_t u32ResistorReg;
    uint32_t u32OutputReg;
    uint32_t u32DirectionReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        u32ResistorReg = (uint32_t) enConfigArg;
        u32ResistorReg >>= 0UL;
        u32ResistorReg &= 0xFUL;
        pstConfigArg->enResistorMode = (GPIO_nRESMODE) u32ResistorReg;

        u32OutputReg = (uint32_t) enConfigArg;
        u32OutputReg >>= 4UL;
        u32OutputReg &= 0xFUL;
        pstConfigArg->enOutputMode = (GPIO_nOUTMODE) u32OutputReg;

        u32DirectionReg = (uint32_t) enConfigArg;
        u32DirectionReg >>= 8UL;
        u32DirectionReg &= 0xFFUL;
        pstConfigArg->enDirection = (GPIO_nDIR) u32DirectionReg;

        u32DriveReg = (uint32_t) enConfigArg;
        u32DriveReg >>= 16UL;
        u32DriveReg &= 0xFFFFU;
        pstConfigArg->enDrive = (GPIO_nDRIVE) u32DriveReg;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enConvertConfigStructure_Create(GPIO_nCONFIG enConfigArg,
                                                  GPIO_CONFIG_t** pstConfigArg)
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
        enErrorReg = GPIO__enConvertConfigStructure(enConfigArg, pstConfigReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *pstConfigArg = pstConfigReg;
    }
    return (enErrorReg);
}

void GPIO__vDeleteConfigStruct(GPIO_CONFIG_t *pstConfigArg)
{
    free(pstConfigArg);
    pstConfigArg = (GPIO_CONFIG_t*) 0UL;
}

