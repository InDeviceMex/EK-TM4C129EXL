/**
 *
 * @file TIMER_RegisterPeripheral_Control_64.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_Control_64/TIMER_RegisterPeripheral_Control_64.h>

GPWTM_CTL_TypeDef* GPWTM_CTL_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPWTM0_CTL, GPWTM1_CTL, GPWTM2_CTL, GPWTM3_CTL, GPWTM4_CTL, GPWTM5_CTL};
