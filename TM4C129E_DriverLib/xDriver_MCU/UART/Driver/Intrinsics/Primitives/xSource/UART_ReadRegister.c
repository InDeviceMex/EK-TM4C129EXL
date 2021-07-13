/**
 *
 * @file UART_ReadRegister.c
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
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/xHeader/UART_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/xHeader/UART_Ready.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nSTATUS UART__enReadRegister(UART_nMODULE enModule, uint32_t u32OffsetRegister, uint32_t* pu32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    UART_nSTATUS enStatus = UART_enSTATUS_UNDEF;
    UART_nREADY enReady = UART_enNOREADY;
    uint32_t u32UartBase = 0UL;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) UART_enMODULE_MAX);

    enReady = UART__enIsReady((UART_nMODULE) u32Module);
    if((UART_enREADY == enReady) && (0UL != (uint32_t) pu32FeatureValue))
    {
        enStatus = UART_enSTATUS_OK;
        u32UartBase = UART__u32BlockBaseAddress((UART_nMODULE) u32Module);
        *pu32FeatureValue = MCU__u32ReadRegister(u32UartBase, u32OffsetRegister, u32MaskFeature, u32BitFeature);
    }
    return enStatus;
}
