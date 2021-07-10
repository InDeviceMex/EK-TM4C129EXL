/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_ModuleW_32.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_ModuleW_32/TIMER_RegisterPeripheral_Bitbanding_ModuleW_32.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

GPTM_TW_BITBANDING_TypeDef* GPTM_TW_BITBANDING_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPTM0_TW_BITBANDING, GPTM1_TW_BITBANDING, GPTM2_TW_BITBANDING, GPTM3_TW_BITBANDING, GPTM4_TW_BITBANDING, GPTM5_TW_BITBANDING};
