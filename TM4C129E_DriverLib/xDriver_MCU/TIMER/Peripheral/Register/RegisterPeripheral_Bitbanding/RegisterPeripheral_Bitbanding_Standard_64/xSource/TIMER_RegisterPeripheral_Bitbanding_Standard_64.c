/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_Standard_64.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_Standard_64/TIMER_RegisterPeripheral_Bitbanding_Standard_64.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

GPTM_TypeDef_BITBANDING* GPWTM_BLOCK_BITBANDING[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPWTM0_BITBANDING, GPWTM1_BITBANDING, GPWTM2_BITBANDING, GPWTM3_BITBANDING, GPWTM4_BITBANDING, GPWTM5_BITBANDING};
