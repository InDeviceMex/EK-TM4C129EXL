/**
 *
 * @file OS_Kernel_Critical.h
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
 * @verbatim 8 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_KERNEL_XHEADER_OS_KERNEL_CRITICAL_H_
#define XOS_KERNEL_XHEADER_OS_KERNEL_CRITICAL_H_


#define OS_KERNEL_SYSCALL_PRIORITY (MCU_enPRI5)
#define OS_KERNEL_INTERRUPT_PRIORITY (MCU_enPRI0)


void OS_Kernel__vEnterCritical(void);
void OS_Kernel__vExitCritical(void);


#endif /* XOS_KERNEL_XHEADER_OS_KERNEL_CRITICAL_H_ */
