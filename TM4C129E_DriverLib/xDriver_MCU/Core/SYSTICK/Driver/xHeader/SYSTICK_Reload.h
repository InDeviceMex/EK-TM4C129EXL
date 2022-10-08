/**
 *
 * @file SYSTICK_Reload.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 18 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CORE_SYSTICK_DRIVER_XHEADER_SYSTICK_RELOAD_H_
#define XDRIVER_MCU_CORE_SYSTICK_DRIVER_XHEADER_SYSTICK_RELOAD_H_

#include <xDriver_MCU/Core/SYSTICK/Peripheral/xHeader/SYSTICK_Enum.h>

SYSTICK_nERROR SYSTICK__enClearReloadValue(SYSTICK_nMODULE enModuleArg);
SYSTICK_nERROR SYSTICK__enSetReloadValue(SYSTICK_nMODULE enModuleArg, UBase_t uxReloadValueArg);
SYSTICK_nERROR SYSTICK__enGetReloadValue(SYSTICK_nMODULE enModuleArg,
                                         UBase_t* uxValueArg);

#endif /* XDRIVER_MCU_CORE_SYSTICK_DRIVER_XHEADER_SYSTICK_RELOAD_H_ */
