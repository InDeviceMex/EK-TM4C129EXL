/**
 *
 * @file UART_IrDA.h
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
 * @verbatim 6 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_DRIVER_XHEADER_UART_IRDA_H_
#define XDRIVER_MCU_UART_DRIVER_XHEADER_UART_IRDA_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>
#include <xUtils/Standard/Standard.h>

void UART__vSetIrDALowPowerDivider(UART_nMODULE enModule, uint32_t u32Divider);
uint32_t UART__u32GetIrDALowPowerDivider(UART_nMODULE enModule);

void UART__vEnIrDALowPowerFrequency(UART_nMODULE enModule);
uint32_t UART__u32GetIrDALowPowerFrequency(UART_nMODULE enModule);

#endif /* XDRIVER_MCU_UART_DRIVER_XHEADER_UART_IRDA_H_ */
