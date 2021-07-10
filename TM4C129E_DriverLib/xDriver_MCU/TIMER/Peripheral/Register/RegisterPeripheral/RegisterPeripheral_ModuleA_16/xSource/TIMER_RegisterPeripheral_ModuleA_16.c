/**
 *
 * @file TIMER_RegisterPeripheral_ModuleA_16.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_ModuleA_16/TIMER_RegisterPeripheral_ModuleA_16.h>

GPTM_TA_TypeDef* GPTM_TA_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPTM0_TA, GPTM1_TA, GPTM2_TA, GPTM3_TA, GPTM4_TA, GPTM5_TA};
