/**
 *
 * @file TIMER_RegisterPeripheral_ModuleB_16.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_ModuleB_16/TIMER_RegisterPeripheral_ModuleB_16.h>

GPTM_TB_TypeDef* GPTM_TB_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPTM0_TB, GPTM1_TB, GPTM2_TB, GPTM3_TB, GPTM4_TB, GPTM5_TB};
