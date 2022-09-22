/**
 *
 * @file SYSTICK_Interrupt.h
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
 * @verbatim 21 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CORE_SYSTICK_DRIVER_XHEADER_SYSTICK_INTERRUPT_H_
#define XDRIVER_MCU_CORE_SYSTICK_DRIVER_XHEADER_SYSTICK_INTERRUPT_H_

#include <xDriver_MCU/Core/SYSTICK/Peripheral/xHeader/SYSTICK_Enum.h>

SYSTICK_nERROR SYSTICK__enSetInterruptSourceState(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATE enStateArg);
SYSTICK_nERROR SYSTICK__enGetInterruptSourceState(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATE* penStateArg, SYSTICK_nSTATUS* penStatusArg);
SYSTICK_nERROR SYSTICK__enEnableInterruptSource(SYSTICK_nMODULE enModuleArg);
SYSTICK_nERROR SYSTICK__enDisableInterruptSource(SYSTICK_nMODULE enModuleArg);
SYSTICK_nERROR SYSTICK__enStatusInterruptSource(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATUS* penStatusArg);
SYSTICK_nERROR SYSTICK__enStatusMaskedInterruptSource(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATUS* penStatusArg);
SYSTICK_nERROR SYSTICK__enClearInterruptSource(SYSTICK_nMODULE enModuleArg);



#endif /* XDRIVER_MCU_CORE_SYSTICK_DRIVER_XHEADER_SYSTICK_INTERRUPT_H_ */
