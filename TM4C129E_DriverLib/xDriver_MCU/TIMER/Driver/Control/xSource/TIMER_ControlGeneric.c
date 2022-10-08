/**
 *
 * @file TIMER_ControlGeneric.c
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
#include <xDriver_MCU/TIMER/Driver/Control/xHeader/TIMER_ControlGeneric.h>

#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>

void TIMER__vSetControlGeneric(TIMER_nMODULE enModule, UBase_t uxFeatureValue,
                               UBase_t uxMaskFeature, UBase_t uxBitFeature)
{
    TIMER_nENABLE enTimerEnable = TIMER_enENABLE_STOP;
    UBase_t uxSubModule = 0UL;
    UBase_t uxModuleNumber = 0UL;
    UBase_t uxShiftReg = 0UL;
    TIMER__vGetSubParams(enModule, &uxSubModule, &uxModuleNumber);
    uxSubModule &= 0x1UL;
    uxShiftReg = 8UL * uxSubModule;
    enTimerEnable = (TIMER_nENABLE) TIMER__uxReadRegister((TIMER_nMODULE_NUM) uxModuleNumber,
                                           GPTM_CTL_OFFSET, GPTM_CTL_TAEN_MASK, uxShiftReg);
    if(TIMER_enENABLE_START == enTimerEnable)
    {
        TIMER__vWriteRegister((TIMER_nMODULE_NUM) uxModuleNumber, GPTM_CTL_OFFSET,
                          GPTM_CTL_TAEN_DIS, GPTM_CTL_TAEN_MASK, uxShiftReg);
    }
    uxShiftReg += uxBitFeature;
    TIMER__vWriteRegister((TIMER_nMODULE_NUM) uxModuleNumber, GPTM_CTL_OFFSET,
                          uxFeatureValue, uxMaskFeature, uxShiftReg);
    if(TIMER_enENABLE_START == enTimerEnable)
    {
        TIMER__vWriteRegister((TIMER_nMODULE_NUM) uxModuleNumber, GPTM_CTL_OFFSET,
                              GPTM_CTL_TAEN_ENA, GPTM_CTL_TAEN_MASK, uxShiftReg);
    }
}

UBase_t TIMER__uxGetControlGeneric(TIMER_nMODULE enModule, UBase_t uxMaskFeature,
                                     UBase_t uxBitFeature)
{
    UBase_t uxFeatureValue = 0UL;
    UBase_t uxSubModule = 0UL;
    UBase_t uxModuleNumber = 0UL;
    UBase_t uxShiftReg = 0UL;
    TIMER__vGetSubParams(enModule, &uxSubModule, &uxModuleNumber);
    uxSubModule &= 0x1UL;
    uxShiftReg = 8UL * uxSubModule;
    uxShiftReg += uxBitFeature;
    uxFeatureValue = TIMER__uxReadRegister((TIMER_nMODULE_NUM) uxModuleNumber,
                                     GPTM_CTL_OFFSET, uxMaskFeature, uxShiftReg);
    return (uxFeatureValue);
}
