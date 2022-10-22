/**
 *
 * @file UART_WriteRegister.h
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
#ifndef XDRIVER_MCU_UART_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_UART_WRITEREGISTER_H_
#define XDRIVER_MCU_UART_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_UART_WRITEREGISTER_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

UART_nERROR UART__enWriteRegister(UART_nMODULE enModuleArg, UART_Register_t* pstRegisterDataArg);
void UART__vWriteRegister(UART_nMODULE enModule, UBase_t uxOffsetRegister,
                          UBase_t uxFeatureValue, UBase_t uxMaskFeature,
                          UBase_t uxBitFeature);

#endif /* XDRIVER_MCU_UART_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_UART_WRITEREGISTER_H_ */
