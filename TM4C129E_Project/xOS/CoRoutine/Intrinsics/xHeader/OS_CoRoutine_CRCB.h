/**
 *
 * @file OS_CoRoutine_CRCB.h
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
 * @verbatim 28 nov. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_COROUTINE_INTRINSICS_XHEADER_OS_COROUTINE_CRCB_H_
#define XOS_COROUTINE_INTRINSICS_XHEADER_OS_COROUTINE_CRCB_H_

#include <xOS/CoRoutine/Intrinsics/xHeader/OS_CoRoutine_Defines.h>

OS_CoRoutine_CRCB_t* volatile* OS_CoRoutine__pstGetCurrentCRCBAddress(void);
OS_CoRoutine_CRCB_t* OS_CoRoutine__pstGetCurrentCRCB(void);
void OS_CoRoutine__vSetCurrentCRCB(OS_CoRoutine_CRCB_t* pstNewCRCB);

#endif /* XOS_COROUTINE_INTRINSICS_XHEADER_OS_COROUTINE_CRCB_H_ */
