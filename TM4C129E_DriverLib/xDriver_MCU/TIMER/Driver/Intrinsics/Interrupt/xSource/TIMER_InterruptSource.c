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

static uint32_t TIMER__u32GetInterruptValue(TIMER_nSUBMODULE enSubModule, TIMER_nINT enInterruptParam);

static uint32_t TIMER__u32GetInterruptValue(TIMER_nSUBMODULE enSubModule, TIMER_nINT enInterruptParam)
{
    uint32_t TIMER_u32IntMask[ (uint32_t) TIMER_enSUBMODULE_MAX] = { (uint32_t) TIMER_enINT_TA_ALL, (uint32_t) TIMER_enINT_TB_ALL, (uint32_t) TIMER_enINT_TW_ALL};
    uint32_t u32InterruptValue = 0UL;
    uint32_t u32SubModule = 0UL;
    u32SubModule = (uint32_t) enSubModule;
    u32InterruptValue = (uint32_t) enInterruptParam;
    if((uint32_t) TIMER_enSUBMODULE_B == u32SubModule)
    {
        u32InterruptValue &= ~(uint32_t) TIMER_enINT_RTC;
        if(0UL != (u32InterruptValue & (uint32_t) TIMER_enINT_MATCH))
        {
            u32InterruptValue &= ~(uint32_t) TIMER_enINT_MATCH;
            u32InterruptValue |= (uint32_t) TIMER_enINT_RTC;
        }
        u32InterruptValue <<= 8UL;
    }
    u32InterruptValue &= TIMER_u32IntMask[u32SubModule];
    return u32InterruptValue;
}

void TIMER__vEnInterruptSource(TIMER_nMODULE enModule, TIMER_nINT enInterruptParam)
{
    uint32_t u32InterruptValue = 0UL;
    uint32_t u32ModuleSize = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;
    TIMER__vGetSubParams(enModule, &u32ModuleSize, &u32SubModule, &u32ModuleNumber);

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
    u32InterruptValue = TIMER__u32GetInterruptValue( (TIMER_nSUBMODULE) u32SubModule, enInterruptParam);
    TIMER__vWriteRegister( (TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, GPTM_IMR_OFFSET, u32InterruptValue, u32InterruptValue, 0UL);
}

void TIMER__vDisInterruptSource(TIMER_nMODULE enModule, TIMER_nINT enInterruptParam)
{
    uint32_t u32InterruptValue = 0UL;
    uint32_t u32ModuleSize = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;
    TIMER__vGetSubParams(enModule, &u32ModuleSize, &u32SubModule, &u32ModuleNumber);

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
    u32InterruptValue = TIMER__u32GetInterruptValue( (TIMER_nSUBMODULE) u32SubModule, enInterruptParam);
    TIMER__vWriteRegister( (TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, GPTM_IMR_OFFSET, 0UL, u32InterruptValue, 0UL);
}

void TIMER__vClearInterruptSource(TIMER_nMODULE enModule, TIMER_nINT enInterruptParam)
{
    uint32_t u32InterruptValue = 0UL;
    uint32_t u32ModuleSize = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;
    TIMER__vGetSubParams(enModule, &u32ModuleSize, &u32SubModule, &u32ModuleNumber);
    u32InterruptValue = TIMER__u32GetInterruptValue( (TIMER_nSUBMODULE) u32SubModule, enInterruptParam);
    TIMER__vWriteRegister( (TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, GPTM_ICR_OFFSET, u32InterruptValue, u32InterruptValue, 0UL);
}

TIMER_nINT_STATUS TIMER__enStatusInterruptSource(TIMER_nMODULE enModule, TIMER_nINT enInterruptParam)
{
    TIMER_nINT_STATUS enFeatureValue = TIMER_enINT_STATUS_UNDEF;
    TIMER_nSTATUS enStatus = TIMER_enSTATUS_UNDEF;
    uint32_t u32InterruptValue = 0xFFFFFFFFUL;
    uint32_t u32InterruptMask = 0xFFFFFFFFUL;
    uint32_t u32ModuleSize = 0UL;
    uint32_t u32SubModule = 0UL;
    uint32_t u32ModuleNumber = 0UL;
    TIMER__vGetSubParams(enModule, &u32ModuleSize, &u32SubModule, &u32ModuleNumber);
    u32InterruptValue = TIMER__u32GetInterruptValue( (TIMER_nSUBMODULE) u32SubModule, enInterruptParam);
    u32InterruptMask = u32InterruptValue;
    enStatus = TIMER__enReadRegister((TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, GPTM_RIS_OFFSET, &u32InterruptValue, u32InterruptMask, 0UL);
    if(TIMER_enSTATUS_OK == enStatus)
    {
        if(0UL != u32InterruptValue)
        {
            enFeatureValue = TIMER_enINT_OCCUR;
        }
        else
        {
            enFeatureValue = TIMER_enINT_NOOCCUR;
        }
    }
    return enFeatureValue;
}
