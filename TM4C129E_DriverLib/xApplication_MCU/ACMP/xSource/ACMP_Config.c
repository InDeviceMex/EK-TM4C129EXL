/**
 *
 * @file ACMP_Config.c
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
 * @verbatim 21 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ACMP/xHeader/ACMP_Config.h>

#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Dependencies.h>

#define ACMP_CPLINE (0UL)
#define ACMP_CMLINE (1UL)
#define ACMP_LINE_MAX (2UL)
#define MAX_CONFIG (2UL)


ACMP_nERROR ACMP__enSetConfig(ACMP_nMODULE enModuleArg,
                               ACMP_nCOMP enComparatorArg ,
                               ACMP_nLINE_OUT_SELECT enLineOutSelectArg,
                               const ACMP_CONTROL_t* pstControlConfigArg)
{
    const GPIO_nDIGITAL_FUNCTION ACMP_enGpioOutputReg[MAX_CONFIG]
                                            [(UBase_t) ACMP_enMODULE_MAX]
                                            [(UBase_t) ACMP_enCOMP_MAX] =
    { { { GPIO_enC0O_D0, GPIO_enC1O_D1, GPIO_enC2O_D2 } },
      { { GPIO_enC0O_L2, GPIO_enC1O_L3, GPIO_enC2O_D2 } }
    };

    const GPIO_nANALOG_FUNCTION ACMP_enAnalogInputReg[(UBase_t) ACMP_enMODULE_MAX]
                                            [(UBase_t) ACMP_enCOMP_MAX]
                                            [(UBase_t) ACMP_LINE_MAX] =
    {
        {
            {GPIO_enC0P, GPIO_enC0M},
            {GPIO_enC1P, GPIO_enC1M},
            {GPIO_enC2P, GPIO_enC2M},
        }
    };


    ACMP_nERROR enErrorReg;
    GPIO_nDIGITAL_FUNCTION enDigitalOutputReg;
    GPIO_nANALOG_FUNCTION enAnalogInputReg;

    enErrorReg = ACMP_enERROR_OK;
    if(0UL == (UBase_t) pstControlConfigArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) ACMP_enMODULE_MAX);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enComparatorArg, (UBase_t) ACMP_enCOMP_MAX);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enLineOutSelectArg, (UBase_t) ACMP_enLINE_OUT_SELECT_MAX);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enAnalogInputReg = ACMP_enAnalogInputReg[(UBase_t) enModuleArg] [(UBase_t) ACMP_enCOMP_0] [ACMP_CMLINE];
        enErrorReg = (ACMP_nERROR) GPIO__enSetAnalogFunction(enAnalogInputReg);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        switch(pstControlConfigArg->enVmaxSource)
        {
            case ACMP_enVMAX_SOURCE_CN:
                enAnalogInputReg = ACMP_enAnalogInputReg[(UBase_t) enModuleArg] [(UBase_t) enComparatorArg] [ACMP_CPLINE];
                enErrorReg = (ACMP_nERROR) GPIO__enSetAnalogFunction(enAnalogInputReg);
                break;
            case ACMP_enVMAX_SOURCE_C0:
                enAnalogInputReg = ACMP_enAnalogInputReg[(UBase_t) enModuleArg] [(UBase_t) ACMP_enCOMP_0] [ACMP_CPLINE];
                enErrorReg = (ACMP_nERROR) GPIO__enSetAnalogFunction(enAnalogInputReg);
                break;
            case ACMP_enVMAX_SOURCE_VIREF:
                break;
            default:
                enErrorReg = ACMP_enERROR_VALUE;
                break;
        }
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        if(ACMP_enSTATE_ENA == pstControlConfigArg->enOutputEnable)
        {
            enDigitalOutputReg = ACMP_enGpioOutputReg[(UBase_t)enLineOutSelectArg]
                                                     [(UBase_t) enModuleArg]
                                                     [(UBase_t) enComparatorArg];

            enErrorReg = (ACMP_nERROR) GPIO__enSetDigitalConfig(enDigitalOutputReg, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
        }
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enSetComparatorVmaxSource(enModuleArg, enComparatorArg, pstControlConfigArg->enVmaxSource);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enSetComparatorOutputInvert(enModuleArg, enComparatorArg, pstControlConfigArg->enOutputInvert);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enSetADCTriggerConfig(enModuleArg, enComparatorArg, pstControlConfigArg->enADCConfig);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enSetInterruptConfig(enModuleArg, enComparatorArg, pstControlConfigArg->enIntConfig);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enSetComparatorADCTriggerState(enModuleArg, enComparatorArg, pstControlConfigArg->enADCEnable);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enSetInterruptSourceStateByNumber(enModuleArg, enComparatorArg, pstControlConfigArg->enIntEnable);
    }

    return (enErrorReg);
}
