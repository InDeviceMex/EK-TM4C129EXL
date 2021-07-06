/**
 *
 * @file SYSEXC_Init.h
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_DRIVER_SYSEXC_INIT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_DRIVER_SYSEXC_INIT_H_

#include <xDriver_MCU/SYSEXC/Peripheral/xHeader/SYSEXC_Enum.h>

void SYSEXC__vInit(SYSEXC_nINT_SOURCE enInterruptParam, SYSEXC_nPRIORITY enSYSEXCPriority);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_DRIVER_SYSEXC_INIT_H_ */
