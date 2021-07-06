/**
 *
 * @file SYSTICK_Enable.h
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

#ifndef XDRIVER_MCU_CORE_SYSTICK_DRIVER_XHEADER_SYSTICK_ENABLE_H_
#define XDRIVER_MCU_CORE_SYSTICK_DRIVER_XHEADER_SYSTICK_ENABLE_H_

#include <xDriver_MCU/Core/SYSTICK/Peripheral/xHeader/SYSTICK_Enum.h>

void SYSTICK__vSetEnable(SYSTICK_nENABLE enEnableState);
void SYSTICK__vEnable(void);
void SYSTICK__vDisable(void);

SYSTICK_nENABLE SYSTICK__enGetEnable(void);

#endif /* XDRIVER_MCU_CORE_SYSTICK_DRIVER_XHEADER_SYSTICK_ENABLE_H_ */
