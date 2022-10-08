/**
 *
 * @file TIMER_EventCommon.c
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
 * @verbatim 11 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/Event/xHeader/TIMER_EventCommon.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>

static UBase_t TIMER__uxGetEventValue(TIMER_nSUBMODULE enSubModule,
                                        TIMER_nEVENT enEventParam);
static TIMER_nEVENT TIMER__uxConvertEventValue(TIMER_nSUBMODULE enSubModule,
                                                UBase_t uxEventParam );

static UBase_t TIMER__uxGetEventValue(TIMER_nSUBMODULE enSubModule, TIMER_nEVENT enEventParam)
{
    UBase_t TIMER_uxEventMask[ (UBase_t) TIMER_enSUBMODULE_MAX] =
    { (UBase_t) TIMER_enEVENT_TA_ALL,
      (UBase_t) TIMER_enEVENT_TB_ALL,
      (UBase_t) TIMER_enEVENT_TW_ALL
    };
    UBase_t uxEventValue = 0UL;
    UBase_t uxSubModule = 0UL;
    uxSubModule = (UBase_t) enSubModule;
    uxEventValue = (UBase_t) enEventParam;
    if((UBase_t) TIMER_enSUBMODULE_B == uxSubModule)
    {
        uxEventValue &= ~(UBase_t) TIMER_enINT_RTC;
        if(0UL != (uxEventValue & (UBase_t) TIMER_enINT_MATCH))
        {
            uxEventValue &= ~(UBase_t) TIMER_enINT_MATCH;
            uxEventValue |= (UBase_t) TIMER_enINT_RTC;
        }
        uxEventValue <<= 8UL;
    }
    uxEventValue &= TIMER_uxEventMask[uxSubModule];
    return (uxEventValue);
}

static TIMER_nEVENT TIMER__uxConvertEventValue(TIMER_nSUBMODULE enSubModule,
                                                UBase_t uxEventParam )
{
    UBase_t uxSubModule = 0UL;
    uxSubModule = (UBase_t) enSubModule;
    if((UBase_t) TIMER_enSUBMODULE_B == uxSubModule)
    {
        uxEventParam >>= 8UL;
        uxEventParam &= ~(UBase_t) TIMER_enINT_MATCH;
        if(0UL != (uxEventParam & (UBase_t) TIMER_enINT_RTC))
        {
            uxEventParam &= ~(UBase_t) TIMER_enINT_RTC;
            uxEventParam |= (UBase_t) TIMER_enINT_MATCH;
        }
    }
    uxEventParam &= (UBase_t) TIMER_enEVENT_TW_ALL;
    return ( (TIMER_nEVENT) uxEventParam);
}

void TIMER__vSetEvent(TIMER_nMODULE enModule, TIMER_nEVENT enEventParam, UBase_t uxOffsetReg)
{
    UBase_t uxEventValue = 0UL;
    UBase_t uxSubModule = 0UL;
    UBase_t uxModuleNumber = 0UL;
    UBase_t uxEventAll = 0UL;
    TIMER__vGetSubParams(enModule, &uxSubModule, &uxModuleNumber);
    uxEventValue = TIMER__uxGetEventValue( (TIMER_nSUBMODULE) uxSubModule, enEventParam);
    switch (uxSubModule)
    {
    case (UBase_t) TIMER_enSUBMODULE_A:
            uxEventAll = (UBase_t) TIMER_enEVENT_TA_ALL;
            break;
    case (UBase_t) TIMER_enSUBMODULE_B:
            uxEventAll = (UBase_t) TIMER_enEVENT_TB_ALL;
            break;
    case (UBase_t) TIMER_enSUBMODULE_W:
            uxEventAll = (UBase_t) TIMER_enEVENT_TW_ALL;
            break;
    default:
        break;
    }

    TIMER__vWriteRegister( (TIMER_nMODULE_NUM) uxModuleNumber, uxOffsetReg,
                           uxEventValue, uxEventAll, 0UL);
}

TIMER_nEVENT TIMER__enGetEvent(TIMER_nMODULE enModule, TIMER_nEVENT enEventParam,
                               UBase_t uxOffsetReg)
{
    TIMER_nEVENT enEventReg = TIMER_enEVENT_TIMEOUT;
    UBase_t uxEventValue = 0UL;
    UBase_t uxSubModule = 0UL;
    UBase_t uxModuleNumber = 0UL;
    UBase_t uxEventAll = 0UL;
    TIMER__vGetSubParams(enModule, &uxSubModule, &uxModuleNumber);
    switch (uxSubModule)
    {
    case (UBase_t) TIMER_enSUBMODULE_A:
            uxEventAll = (UBase_t) TIMER_enEVENT_TA_ALL;
            break;
    case (UBase_t) TIMER_enSUBMODULE_B:
            uxEventAll = (UBase_t) TIMER_enEVENT_TB_ALL;
            break;
    case (UBase_t) TIMER_enSUBMODULE_W:
            uxEventAll = (UBase_t) TIMER_enEVENT_TW_ALL;
            break;
    default:
        break;
    }
    uxEventValue = TIMER__uxReadRegister((TIMER_nMODULE_NUM) uxModuleNumber,
                                           uxOffsetReg, uxEventAll, 0UL);
    enEventReg = (TIMER_nEVENT) TIMER__uxConvertEventValue((TIMER_nSUBMODULE) uxSubModule,
                                                            uxEventValue);
    return (enEventReg);
}
