/**
 *
 * @file TIMER_RegisterPeripheral_Standard_32.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_Standard_32/TIMER_RegisterPeripheral_Standard_32.h>

GPTM_TypeDef* GPTM_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPTM0, GPTM1, GPTM2, GPTM3, GPTM4, GPTM5};
