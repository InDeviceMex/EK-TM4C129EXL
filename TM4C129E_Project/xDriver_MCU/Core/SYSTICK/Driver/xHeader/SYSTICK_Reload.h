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

#include <xUtils/Standard/Standard.h>

void SYSTICK__vSetReload(uint32_t u32ReloadValue);
uint32_t SYSTICK__enGetReload(void);

#endif /* XDRIVER_MCU_CORE_SYSTICK_DRIVER_XHEADER_SYSTICK_RELOAD_H_ */
