/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_Control_32.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_Control_32/TIMER_RegisterPeripheral_Bitbanding_Control_32.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

GPTM_CTL_BITBANDING_TypeDef* GPTM_CTL_BITBANDING_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPTM0_CTL_BITBANDING, GPTM1_CTL_BITBANDING, GPTM2_CTL_BITBANDING, GPTM3_CTL_BITBANDING, GPTM4_CTL_BITBANDING, GPTM5_CTL_BITBANDING};
