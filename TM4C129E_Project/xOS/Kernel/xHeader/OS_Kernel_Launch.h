/**
 *
 * @file OS_Kernel_Launch.h
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
 * @verbatim Mar 23, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 23, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XOS_KERNEL_XHEADER_OS_KERNEL_LAUNCH_H_
#define XOS_KERNEL_XHEADER_OS_KERNEL_LAUNCH_H_

#include <xUtils/Standard/Standard.h>

void OS_Kernel__vLaunch(uint32_t u32Ticks);
void OS_Kernel__vLaunchMs(uint32_t u32Ms);


#endif /* XOS_KERNEL_XHEADER_OS_KERNEL_LAUNCH_H_ */
