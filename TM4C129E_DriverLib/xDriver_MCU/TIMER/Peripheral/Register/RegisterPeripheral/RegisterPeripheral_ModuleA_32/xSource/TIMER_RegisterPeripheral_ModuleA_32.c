/**
 *
 * @file TIMER_RegisterPeripheral_ModuleA_32.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_ModuleA_32/TIMER_RegisterPeripheral_ModuleA_32.h>

GPWTM_TA_TypeDef* GPWTM_TA_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPWTM0_TA, GPWTM1_TA, GPWTM2_TA, GPWTM3_TA, GPWTM4_TA, GPWTM5_TA};
