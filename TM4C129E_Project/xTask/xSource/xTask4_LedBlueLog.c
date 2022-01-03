/**
 *
 * @file xTask4_LedBlueLog.c
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
 * @verbatim 19 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xTask/xHeader/xTask4_LedBlueLog.h>

#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/xDriver_MCU.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

#include <xOS/xOS.h>

void xTask4_LedBlueLog(void* pvParams)
{
    uint32_t u32LastWakeTime = 0UL;
    uint32_t u32PinValue = (uint32_t) pvParams;
    static uint32_t u32CountTask = 0UL;
    u32LastWakeTime = OS_Task__uxGetTickCount ();

    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOG);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enPWM0);


    GPIO__enSetDigitalConfig(GPIO_enM0PWM4, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    PWM0->CC = PWM_CC_R_USEPWM_DIVIDER | PWM_CC_R_PWMDIV_64;

    PWM0->GENERATOR[2UL].CTL |= PWM_GEN_CTL_R_MODE_DOWN | PWM_GEN_CTL_R_DEBUG_RUN;
    PWM0->GENERATOR[2UL].LOAD = 0x00FUL;
    PWM0->GENERATOR[2UL].CMPA = u32CountTask;
    PWM0->GENERATOR[2UL].GENA = PWM_GEN_GENA_R_ACTZERO_LOW | PWM_GEN_GENA_R_ACTLOAD_NOTHING | PWM_GEN_GENA_R_ACTCMPAD_HIGH;
    PWM0->GENERATOR[2UL].DBCTL = 0UL;

    PWM0->ENUPD |= PWM_ENUPD_R_ENUPD4_LOCAL_SYNC;
    PWM0->FAULT &= ~PWM_FAULT_R_FAULT4_ENA;
    PWM0->INVERT &= ~PWM_INVERT_R_PWM4INV_ENA;
    PWM0->GENERATOR[2UL].CTL |= PWM_GEN_CTL_R_ENABLE_ENA;
    PWM0->ENABLE |= PWM_ENABLE_R_PWM4EN_ENA;

    while(1UL)
    {

        if(u32CountTask < 0xFUL)
        {
            u32CountTask++;
        }
        else
        {

            u32CountTask = 0UL;
        }
        PWM0->GENERATOR[2UL].CMPA = u32CountTask;

        OS_Task__vDelayUntil(&u32LastWakeTime, 200UL);
    }
}


