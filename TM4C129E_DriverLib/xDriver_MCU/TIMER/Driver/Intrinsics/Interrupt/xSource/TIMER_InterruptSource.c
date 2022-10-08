/**
 *
 * @file TIMER_InterruptSource.c
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
 * @verbatim 15 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/xHeader/TIMER_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>

static UBase_t TIMER__uxGetInterruptValue(TIMER_nSUBMODULE enSubModule,
                                            TIMER_nINT enInterruptParam);

static UBase_t TIMER__uxGetInterruptValue(TIMER_nSUBMODULE enSubModule,
                                            TIMER_nINT enInterruptParam)
{
    UBase_t TIMER_uxIntMask[ (UBase_t) TIMER_enSUBMODULE_MAX] =
    { (UBase_t) TIMER_enINT_TA_ALL,
      (UBase_t) TIMER_enINT_TB_ALL,
      (UBase_t) TIMER_enINT_TW_ALL
    };
    UBase_t uxInterruptValue = 0UL;
    UBase_t uxSubModule = 0UL;
    uxSubModule = (UBase_t) enSubModule;
    uxInterruptValue = (UBase_t) enInterruptParam;
    if((UBase_t) TIMER_enSUBMODULE_B == uxSubModule)
    {
        uxInterruptValue &= ~(UBase_t) TIMER_enINT_RTC;
        if(0UL != (uxInterruptValue & (UBase_t) TIMER_enINT_MATCH))
        {
            uxInterruptValue &= ~(UBase_t) TIMER_enINT_MATCH;
            uxInterruptValue |= (UBase_t) TIMER_enINT_RTC;
        }
        uxInterruptValue <<= 8UL;
    }
    uxInterruptValue &= TIMER_uxIntMask[uxSubModule];
    return (uxInterruptValue);
}

void TIMER__vEnInterruptSource(TIMER_nMODULE enModule, TIMER_nINT enInterruptParam)
{
    UBase_t uxInterruptValue = 0UL;
    UBase_t uxSubModule = 0UL;
    UBase_t uxModuleNumber = 0UL;
    TIMER__vGetSubParams(enModule, &uxSubModule, &uxModuleNumber);

#if 0
    if(enInterruptParam & TIMER_enINT_MATCH)
    {
        if(TIMER_enEVENT_INT_DIS == TIMER__enGetMatchEventInterrupt)
        {
            TIMER__vSetMatchEventInterrupt(enModule, TIMER_enEVENT_INT_ENA);
        }
    }

    if(enInterruptParam & TIMER_enINT_CAPTURE_EVENT)
    {
        if(TIMER_enPWM_INT_DIS == TIMER__enGetPWMInterrupt)
        {
            TIMER__vSetPWMInterrupt(enModule, TIMER_enPWM_INT_ENA);
        }
    }
#endif

    uxInterruptValue = TIMER__uxGetInterruptValue( (TIMER_nSUBMODULE) uxSubModule,
                                                     enInterruptParam);
    TIMER__vWriteRegister( (TIMER_nMODULE_NUM) uxModuleNumber, GPTM_IMR_OFFSET,
                           uxInterruptValue, uxInterruptValue, 0UL);
}

void TIMER__vDisInterruptSource(TIMER_nMODULE enModule, TIMER_nINT enInterruptParam)
{
    UBase_t uxInterruptValue = 0UL;
    UBase_t uxSubModule = 0UL;
    UBase_t uxModuleNumber = 0UL;
    TIMER__vGetSubParams(enModule, &uxSubModule, &uxModuleNumber);

#if 0
    if(enInterruptParam & TIMER_enINT_MATCH)
    {
        if(TIMER_enEVENT_INT_ENA == TIMER__enGetMatchEventInterrupt)
        {
            TIMER__vSetMatchEventInterrupt(enModule, TIMER_enEVENT_INT_DIS);
        }
    }

    if(enInterruptParam & TIMER_enINT_CAPTURE_EVENT)
    {
        if(TIMER_enPWM_INT_ENA == TIMER__enGetPWMInterrupt)
        {
            TIMER__vSetPWMInterrupt(enModule, TIMER_enPWM_INT_DIS);
        }
    }
#endif
    uxInterruptValue = TIMER__uxGetInterruptValue((TIMER_nSUBMODULE) uxSubModule,
                                                    enInterruptParam);
    TIMER__vWriteRegister((TIMER_nMODULE_NUM) uxModuleNumber, GPTM_IMR_OFFSET,
                          0UL, uxInterruptValue, 0UL);
}

void TIMER__vClearInterruptSource(TIMER_nMODULE enModule, TIMER_nINT enInterruptParam)
{
    UBase_t uxInterruptValue = 0UL;
    UBase_t uxSubModule = 0UL;
    UBase_t uxModuleNumber = 0UL;
    TIMER__vGetSubParams(enModule, &uxSubModule, &uxModuleNumber);
    uxInterruptValue = TIMER__uxGetInterruptValue((TIMER_nSUBMODULE) uxSubModule,
                                                    enInterruptParam);
    TIMER__vWriteRegister((TIMER_nMODULE_NUM) uxModuleNumber, GPTM_ICR_OFFSET,
                          uxInterruptValue, uxInterruptValue, 0UL);
}

TIMER_nINT TIMER__enStatusInterruptSource(TIMER_nMODULE enModule,
                                                 TIMER_nINT enInterruptParam)
{
    TIMER_nINT enFeatureValue = TIMER_enINT_NONE;
    UBase_t uxInterruptValue = 0UL;
    UBase_t uxInterruptMask = 0UL;
    UBase_t uxSubModule = 0UL;
    UBase_t uxModuleNumber = 0UL;
    TIMER__vGetSubParams(enModule, &uxSubModule, &uxModuleNumber);
    uxInterruptValue = TIMER__uxGetInterruptValue( (TIMER_nSUBMODULE) uxSubModule,
                                                     enInterruptParam);
    uxInterruptMask = uxInterruptValue;
    uxInterruptValue = TIMER__uxReadRegister((TIMER_nMODULE_NUM) uxModuleNumber,
                                               GPTM_RIS_OFFSET, uxInterruptMask, 0UL);
    enFeatureValue = (TIMER_nINT) uxInterruptValue;

    return (enFeatureValue);
}
