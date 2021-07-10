/**
 *
 * @file TIMER_RegisterPeripheral_Standard_64.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_Standard_64/TIMER_RegisterPeripheral_Standard_64.h>

GPTM_TypeDef* GPWTM_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPWTM0, GPWTM1, GPWTM2, GPWTM3, GPWTM4, GPWTM5};
