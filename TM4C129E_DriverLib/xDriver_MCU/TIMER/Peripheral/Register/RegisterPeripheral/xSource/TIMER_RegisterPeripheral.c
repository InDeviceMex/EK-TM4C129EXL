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

GPTM_TypeDef *TIMER_BLOCK[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
    {
    GPTM0,
    GPTM1,
    GPTM2,
    GPTM3,
    GPTM4,
    GPTM5},
    {
    GPWTM0,
    GPWTM1,
    GPWTM2,
    GPWTM3,
    GPWTM4,
    GPWTM5
    },
};


uint32_t TIMER_BLOCK_BASE[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
    {
    GPTM0_BASE,
    GPTM1_BASE,
    GPTM2_BASE,
    GPTM3_BASE,
    GPTM4_BASE,
    GPTM5_BASE,
    },
    {
    GPWTM0_BASE,
    GPWTM1_BASE,
    GPWTM2_BASE,
    GPWTM3_BASE,
    GPWTM4_BASE,
    GPWTM5_BASE,
    },
};
