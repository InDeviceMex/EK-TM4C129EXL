/**
 *
 * @file TIMER_RegisterPeripheral_ModuleB_32.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_ModuleB_32/TIMER_RegisterPeripheral_ModuleB_32.h>

GPWTM_TB_TypeDef* GPWTM_TB_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPWTM0_TB, GPWTM1_TB, GPWTM2_TB, GPWTM3_TB, GPWTM4_TB, GPWTM5_TB};
