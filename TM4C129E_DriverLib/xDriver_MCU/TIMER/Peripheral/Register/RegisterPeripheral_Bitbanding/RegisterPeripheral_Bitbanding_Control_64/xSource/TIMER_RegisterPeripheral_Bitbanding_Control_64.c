/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_Control_64.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_Control_64/TIMER_RegisterPeripheral_Bitbanding_Control_64.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

GPWTM_CTL_BITBANDING_TypeDef* GPWTM_CTL_BITBANDING_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPWTM0_CTL_BITBANDING, GPWTM1_CTL_BITBANDING, GPWTM2_CTL_BITBANDING, GPWTM3_CTL_BITBANDING, GPWTM4_CTL_BITBANDING, GPWTM5_CTL_BITBANDING};
