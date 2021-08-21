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

GPIO_nDIGITAL_FUNCTION ACMP_enGpioOutput[(uint32_t) ACMP_enMODULE_MAX]
                                        [(uint32_t) ACMP_enCOMP_MAX] =
{
    {
        GPIO_enC0o,
        GPIO_enC1o,
        GPIO_enC2o,
    },
};

GPIO_nANALOG_FUNCTION ACMP_enAnalogInput[(uint32_t) ACMP_enMODULE_MAX]
                                        [(uint32_t) ACMP_enCOMP_MAX]
                                        [(uint32_t) ACMP_LINE_MAX] =
{
    {
        {GPIO_enC0P, GPIO_enC0M},
        {GPIO_enC1P, GPIO_enC1M},
        {GPIO_enC2P, GPIO_enC2M},
    },
};

ACMP_nSTATUS ACMP__enSetConfig(ACMP_nMODULE enModule,
                               ACMP_nCOMP enCompArg ,
                               const ACMP_CONTROL_TypeDef* pstControlConfig)
{
    ACMP_nSTATUS enReturn = ACMP_enSTATUS_ERROR;
    ACMP_nMODULE enModuleFilter = ACMP_enMODULE_0;
    ACMP_nCOMP enCompFilter = ACMP_enCOMP_0;
    ACMP_nCOMPMASK enCompMask = ACMP_enCOMPMASK_0;
    GPIO_nANALOG_FUNCTION enAnalogInputReg = GPIO_enAIN_UNDEF;
    GPIO_nDIGITAL_FUNCTION enDigitalOutputReg = GPIO_enGPIO_UNDEF;
    uint32_t u32CompMask = 1UL;

    if((0UL != (uint32_t) pstControlConfig))
    {
        enModuleFilter = (ACMP_nMODULE) MCU__u32CheckParams((uint32_t) enModule,
                                                            (uint32_t) ACMP_enMODULE_MAX);
        enCompFilter = (ACMP_nCOMP) MCU__u32CheckParams((uint32_t) enCompArg,
                                                        (uint32_t) ACMP_enCOMP_MAX);
        enAnalogInputReg = ACMP_enAnalogInput[(uint32_t) enModuleFilter]
                                              [(uint32_t) ACMP_enCOMP_0]
                                              [ACMP_CMLINE];
        GPIO__vSetAnalogFunction(enAnalogInputReg);
        switch(pstControlConfig->enVmaxSource)
        {
            case ACMP_enVMAX_SOURCE_CN:
                enAnalogInputReg = ACMP_enAnalogInput[(uint32_t) enModuleFilter]
                                                     [(uint32_t) enCompFilter]
                                                     [ACMP_CPLINE];
                GPIO__vSetAnalogFunction(enAnalogInputReg);
                break;
            case ACMP_enVMAX_SOURCE_C0:
                enAnalogInputReg = ACMP_enAnalogInput[(uint32_t) enModuleFilter]
                                                     [(uint32_t) ACMP_enCOMP_0]
                                                     [ACMP_CPLINE];
                GPIO__vSetAnalogFunction(enAnalogInputReg);
                break;
            case ACMP_enVMAX_SOURCE_VIREF:
                break;
            default:
            break;
        }

        if(ACMP_enOUTPUT_ENA == pstControlConfig->enOutputEnable)
        {
            enDigitalOutputReg = ACMP_enGpioOutput[(uint32_t) enModuleFilter]
                                                  [(uint32_t) enCompFilter];

            GPIO__enSetDigitalConfig(enDigitalOutputReg, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
        }


        ACMP__vSetComparatorVmaxSource(enModuleFilter, enCompFilter,
                                       pstControlConfig->enVmaxSource);
        ACMP__vSetComparatorOutputInvert(enModuleFilter, enCompFilter,
                                         pstControlConfig->enOutputInvert);
        ACMP__vSetADCTriggerConfig(enModuleFilter, enCompFilter,
                                   pstControlConfig->enADCConfig);
        ACMP__vSetInterruptConfig(enModuleFilter, enCompFilter,
                                  pstControlConfig->enIntConfig);

        ACMP__vSetComparatorADCTrigger(enModuleFilter, enCompFilter,
                                       pstControlConfig->enADCEnable);

        u32CompMask <<= (uint32_t) enCompFilter;
        if(ACMP_enINT_DIS == pstControlConfig->enIntEnable)
        {
            ACMP__vDisInterruptSource(enModuleFilter, enCompMask);
        }
        else
        {
            ACMP__vEnInterruptSource(enModuleFilter, enCompMask);
        }
        enReturn = ACMP_enSTATUS_OK;
    }
    return (enReturn);
}
