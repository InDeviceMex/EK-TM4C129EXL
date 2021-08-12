/**
 *
 * @file UART_ReadRegister.h
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
 * @verbatim 5 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_UART_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_UART_READREGISTER_H_
#define XDRIVER_MCU_UART_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_UART_READREGISTER_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

UART_nSTATUS UART__enReadRegister(UART_nMODULE enModule, uint32_t u32OffsetRegister, uint32_t* pu32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_UART_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_UART_READREGISTER_H_ */
