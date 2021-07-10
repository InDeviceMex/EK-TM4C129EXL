/**
 *
 * @file TIMER_RegisterPeripheral_ModuleW_64.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_ModuleW_64/TIMER_RegisterPeripheral_ModuleW_64.h>

GPWTM_TW_TypeDef* GPWTM_TW_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPWTM0_TW, GPWTM1_TW, GPWTM2_TW, GPWTM3_TW, GPWTM4_TW, GPWTM5_TW};
