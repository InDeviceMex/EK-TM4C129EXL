/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_ModuleB_32.c
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
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_ModuleB_32/TIMER_RegisterPeripheral_Bitbanding_ModuleB_32.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

GPWTM_TB_BITBANDING_TypeDef* GPWTM_TB_BITBANDING_BLOCK[(uint32_t) TIMER_enMODULE_NUM_MAX] = { GPWTM0_TB_BITBANDING, GPWTM1_TB_BITBANDING, GPWTM2_TB_BITBANDING, GPWTM3_TB_BITBANDING, GPWTM4_TB_BITBANDING, GPWTM5_TB_BITBANDING};
