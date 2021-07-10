/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/TIMER_RegisterPeripheral_Bitbanding.h>

GPTM_TypeDef_BITBANDING *TIMER_BITBANDING_BLOCK[(uint32_t) TIMER_enSIZE_MAX][(uint32_t) TIMER_enMODULE_NUM_MAX] = {
    { GPTM0_BITBANDING, GPTM1_BITBANDING, GPTM2_BITBANDING, GPTM3_BITBANDING, GPTM4_BITBANDING, GPTM5_BITBANDING},
    { GPWTM0_BITBANDING, GPWTM1_BITBANDING, GPWTM2_BITBANDING, GPWTM3_BITBANDING, GPWTM4_BITBANDING, GPWTM5_BITBANDING},
};
