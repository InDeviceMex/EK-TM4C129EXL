/**
 *
 * @file TIMER_ModeGeneric.c
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
#include <xDriver_MCU/TIMER/Driver/Mode/xHeader/TIMER_ModeGeneric.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>

void TIMER__vSetModeGeneric(TIMER_nMODULE enModule, UBase_t uxFeatureValue,
                            UBase_t uxMaskFeature, UBase_t uxBitFeature)
{
    TIMER_nENABLE enTimerEnable = TIMER_enENABLE_STOP;
    UBase_t uxSubModule = 0UL;
    UBase_t uxModuleNumber = 0UL;
    UBase_t uxShiftReg = 0UL;
    UBase_t uxRegister = GPTM_TA_TnMR_OFFSET;
    UBase_t uxRegisterOffset = 0UL;
    TIMER__vGetSubParams(enModule, &uxSubModule, &uxModuleNumber);
    uxSubModule &= 0x1UL;
    uxShiftReg = 8UL * uxSubModule;
    enTimerEnable = (TIMER_nENABLE) TIMER__uxReadRegister((TIMER_nMODULE_NUM) uxModuleNumber,
                                               GPTM_CTL_OFFSET, GPTM_CTL_TAEN_MASK, uxShiftReg);
    if(TIMER_enENABLE_START == enTimerEnable)
    {
        TIMER__vWriteRegister((TIMER_nMODULE_NUM) uxModuleNumber,
                  GPTM_CTL_OFFSET, GPTM_CTL_TAEN_DIS, GPTM_CTL_TAEN_MASK, uxShiftReg);
    }
    uxRegisterOffset = 4UL;
    uxRegisterOffset *= uxSubModule;
    uxRegister += uxRegisterOffset;
    TIMER__vWriteRegister((TIMER_nMODULE_NUM) uxModuleNumber, uxRegister,
                          uxFeatureValue, uxMaskFeature, uxBitFeature);
    if(TIMER_enENABLE_START == enTimerEnable)
    {
        TIMER__vWriteRegister((TIMER_nMODULE_NUM) uxModuleNumber,
                  GPTM_CTL_OFFSET, GPTM_CTL_TAEN_ENA, GPTM_CTL_TAEN_MASK, uxShiftReg);
    }
}

UBase_t TIMER__uxGetModeGeneric(TIMER_nMODULE enModule, UBase_t uxMaskFeature,
                                  UBase_t uxBitFeature)
{
    UBase_t uxFeatureValue = 0UL;
    UBase_t uxSubModule = 0UL;
    UBase_t uxModuleNumber = 0UL;
    UBase_t uxRegister = GPTM_TA_TnMR_OFFSET;
    UBase_t uxRegisterOffset = 0UL;
    TIMER__vGetSubParams(enModule, &uxSubModule, &uxModuleNumber);
    uxSubModule &= 0x1UL;
    uxRegisterOffset = 4UL;
    uxRegisterOffset *= uxSubModule;
    uxRegister += uxRegisterOffset;
    uxFeatureValue = TIMER__uxReadRegister((TIMER_nMODULE_NUM) uxModuleNumber,
                                     uxRegister, uxMaskFeature, uxBitFeature);
    return (uxFeatureValue);
}
