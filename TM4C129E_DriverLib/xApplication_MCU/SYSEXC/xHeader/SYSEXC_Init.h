/**
 *
 * @file SYSEXC_Init.h
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_SYSEXC_XHEADER_SYSEXC_INIT_H_
#define XAPPLICATION_MCU_SYSEXC_XHEADER_SYSEXC_INIT_H_

#include <xApplication_MCU/SYSEXC/Intrinsics/xHeader/SYSEXC_Defines.h>

void SYSEXC__vInit(SYSEXC_nINT_SOURCE enInterruptParam, SYSEXC_nPRIORITY enSYSEXCPriority);

#endif /* XAPPLICATION_MCU_SYSEXC_XHEADER_SYSEXC_INIT_H_ */
