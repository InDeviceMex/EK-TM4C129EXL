/**
 *
 * @file SCB_Exception.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_EXCEPTION_SCB_EXCEPTION_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_EXCEPTION_SCB_EXCEPTION_H_

#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_BusFault.h>
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_DEBUG.h>
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_ISR.h>
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_MemoryFault.h>
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_NMI.h>
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_PendSV.h>
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_SVCall.h>
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_SYSTICK.h>
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_UsageFault.h>

void SCB__vEnableAllExceptions(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_EXCEPTION_SCB_EXCEPTION_H_ */
