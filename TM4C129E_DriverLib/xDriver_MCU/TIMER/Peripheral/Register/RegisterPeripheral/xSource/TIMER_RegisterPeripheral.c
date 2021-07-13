/**
 *
 * @file TIMER_RegisterPeripheral.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral/TIMER_RegisterPeripheral.h>

uint32_t TIMER__u32BlockBaseAddress(TIMER_nMODULE_NUM enModuleNumArg)
{
    uint32_t TIMER_BLOCK_BASE[(uint32_t) TIMER_enMODULE_NUM_MAX] =
    {
     GPTM0_BASE,
     GPTM1_BASE,
     GPTM2_BASE,
     GPTM3_BASE,
     GPTM4_BASE,
     GPTM5_BASE,
     GPTM6_BASE,
     GPTM7_BASE
    };
    return TIMER_BLOCK_BASE[(uint32_t) enModuleNumArg];
}
