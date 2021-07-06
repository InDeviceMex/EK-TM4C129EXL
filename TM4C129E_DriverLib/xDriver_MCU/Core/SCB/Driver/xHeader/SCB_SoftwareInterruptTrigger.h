/**
 *
 * @file SCB_SoftwareInterruptTrigger.h
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
 * @verbatim 2 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CORE_SCB_DRIVER_XHEADER_SCB_SOFTWAREINTERRUPTTRIGGER_H_
#define XDRIVER_MCU_CORE_SCB_DRIVER_XHEADER_SCB_SOFTWAREINTERRUPTTRIGGER_H_

void SCB__vEnUnprivilegedSWTrigger(void);
void SCB__vDisUnprivilegedSWTrigger(void);




#endif /* XDRIVER_MCU_CORE_SCB_DRIVER_XHEADER_SCB_SOFTWAREINTERRUPTTRIGGER_H_ */
