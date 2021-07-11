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

static uint32_t TIMER__u32GetEventValue(TIMER_nSUBMODULE enSubModule, TIMER_nEVENT enEventParam);
static TIMER_nEVENT TIMER__u32ConvertEventValue(TIMER_nSUBMODULE enSubModule, uint32_t u32EventParam );

static uint32_t TIMER__u32GetEventValue(TIMER_nSUBMODULE enSubModule, TIMER_nEVENT enEventParam)
{
    uint32_t TIMER_u32EventMask[ (uint32_t) TIMER_enSUBMODULE_MAX] =
    { (uint32_t) TIMER_enEVENT_TA_ALL,
      (uint32_t) TIMER_enEVENT_TB_ALL,
      (uint32_t) TIMER_enEVENT_TW_ALL
    };
    uint32_t u32EventValue = 0UL;
    uint32_t u32SubModule = 0UL;
    u32SubModule = (uint32_t) enSubModule;
    u32EventValue = (uint32_t) enEventParam;
    if((uint32_t) TIMER_enSUBMODULE_B == u32SubModule)
    {
        u32EventValue &= ~(uint32_t) TIMER_enINT_RTC;
        if(0UL != (u32EventValue & (uint32_t) TIMER_enINT_MATCH))
        {
            u32EventValue &= ~(uint32_t) TIMER_enINT_MATCH;
            u32EventValue |= (uint32_t) TIMER_enINT_RTC;
        }
        u32EventValue <<= 8UL;
    }
    u32EventValue &= TIMER_u32EventMask[u32SubModule];
    return u32EventValue;
}

static TIMER_nEVENT TIMER__u32ConvertEventValue(TIMER_nSUBMODULE enSubModule, uint32_t u32EventParam )
{
    uint32_t u32SubModule = 0UL;
    u32SubModule = (uint32_t) enSubModule;
    if((uint32_t) TIMER_enSUBMODULE_B == u32SubModule)
    {
        u32EventParam >>= 8UL;
        u32EventParam &= ~(uint32_t) TIMER_enINT_MATCH;
        if(0UL != (u32EventParam & (uint32_t) TIMER_enINT_RTC))
        {
            u32EventParam &= ~(uint32_t) TIMER_enINT_RTC;
            u32EventParam |= (uint32_t) TIMER_enINT_MATCH;
        }
    }
    u32EventParam &= (uint32_t) TIMER_enEVENT_TW_ALL;
    return (TIMER_nEVENT) u32EventParam;
}

void TIMER__vSetEvent(TIMER_nMODULE enModule, TIMER_nEVENT enEventParam, uint32_t u32OffsetReg)
{
    uint32_t u32EventValue = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;
    uint32_t u32EventAll = 0UL;
    TIMER__vGetSubParams(enModule, &u32SubModule, &u32ModuleNumber);
    u32EventValue = TIMER__u32GetEventValue( (TIMER_nSUBMODULE) u32SubModule, enEventParam);
    switch (u32SubModule)
    {
    case (uint32_t) TIMER_enSUBMODULE_A:
            u32EventAll = (uint32_t) TIMER_enEVENT_TA_ALL;
            break;
    case (uint32_t) TIMER_enSUBMODULE_B:
            u32EventAll = (uint32_t) TIMER_enEVENT_TB_ALL;
            break;
    case (uint32_t) TIMER_enSUBMODULE_W:
            u32EventAll = (uint32_t) TIMER_enEVENT_TW_ALL;
            break;
    default:
        break;
    }

    TIMER__vWriteRegister( (TIMER_nMODULE_NUM) u32ModuleNumber, u32OffsetReg, u32EventValue, u32EventAll, 0UL);
}

TIMER_nEVENT TIMER__enGetEvent(TIMER_nMODULE enModule, TIMER_nEVENT enEventParam, uint32_t u32OffsetReg)
{
    TIMER_nEVENT enEventReg = TIMER_enEVENT_UNDEF;
    uint32_t u32EventValue = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;
    uint32_t u32EventAll = 0UL;
    TIMER__vGetSubParams(enModule, &u32SubModule, &u32ModuleNumber);
    switch (u32SubModule)
    {
    case (uint32_t) TIMER_enSUBMODULE_A:
            u32EventAll = (uint32_t) TIMER_enEVENT_TA_ALL;
            break;
    case (uint32_t) TIMER_enSUBMODULE_B:
            u32EventAll = (uint32_t) TIMER_enEVENT_TB_ALL;
            break;
    case (uint32_t) TIMER_enSUBMODULE_W:
            u32EventAll = (uint32_t) TIMER_enEVENT_TW_ALL;
            break;
    default:
        break;
    }
    TIMER__enReadRegister((TIMER_nMODULE_NUM) u32ModuleNumber, u32OffsetReg, &u32EventValue, u32EventAll, 0UL);
    enEventReg = (TIMER_nEVENT) TIMER__u32ConvertEventValue((TIMER_nSUBMODULE) u32SubModule, u32EventValue);
    return enEventReg;
}




