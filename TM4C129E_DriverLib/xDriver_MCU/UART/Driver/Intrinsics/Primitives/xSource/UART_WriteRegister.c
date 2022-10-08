/**
 *
 * @file UART_WriteRegister.c
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
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/xHeader/UART_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vWriteRegister(UART_nMODULE enModule, UBase_t uxOffsetRegister,
                          UBase_t uxFeatureValue, UBase_t uxMaskFeature,
                          UBase_t uxBitFeature)
{
    UBase_t uxUartBase = 0UL;
    UBase_t uxModule = 0UL;
    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) UART_enMODULE_MAX);

    uxUartBase = UART__uxBlockBaseAddress((UART_nMODULE) uxModule);
    MCU__vWriteRegister(uxUartBase, uxOffsetRegister, uxFeatureValue,
                        uxMaskFeature, uxBitFeature);
}
