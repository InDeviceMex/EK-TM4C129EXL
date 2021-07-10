/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_ModuleA_32.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_ModuleA_32/TIMER_RegisterPeripheral_Bitbanding_ModuleA_32.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

GPWTM_TA_BITBANDING_TypeDef* GPWTM_TA_BITBANDING_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPWTM0_TA_BITBANDING, GPWTM1_TA_BITBANDING, GPWTM2_TA_BITBANDING, GPWTM3_TA_BITBANDING, GPWTM4_TA_BITBANDING, GPWTM5_TA_BITBANDING};
