/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_Standard_32.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_Standard_32/TIMER_RegisterPeripheral_Bitbanding_Standard_32.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

GPTM_TypeDef_BITBANDING* GPTM_BLOCK_BITBANDING[(uint32_t) TIMER_enMODULE_NUM_MAX] = {GPTM0_BITBANDING, GPTM1_BITBANDING, GPTM2_BITBANDING, GPTM3_BITBANDING, GPTM4_BITBANDING, GPTM5_BITBANDING};
