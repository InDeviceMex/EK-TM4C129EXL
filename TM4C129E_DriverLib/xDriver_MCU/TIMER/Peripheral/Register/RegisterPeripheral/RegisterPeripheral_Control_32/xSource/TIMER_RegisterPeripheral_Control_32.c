/**
 *
 * @file TIMER_RegisterPeripheral_Control_32.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_Control_32/TIMER_RegisterPeripheral_Control_32.h>

GPTM_CTL_TypeDef* GPTM_CTL_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPTM0_CTL, GPTM1_CTL, GPTM2_CTL, GPTM3_CTL, GPTM4_CTL, GPTM5_CTL};
