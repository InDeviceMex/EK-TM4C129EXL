/**
 *
 * @file UART_AllError.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/Errors/xHeader/UART_AllError.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

uint32_t UART__u32GetErrorState(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_RSR_OFFSET, &u32Reg,
    (UART_RSR_R_BE_MASK | UART_RSR_R_FE_MASK | UART_RSR_R_OE_MASK | UART_RSR_R_PE_MASK), 0UL);
    return u32Reg;
}

void UART__vClearErrorState(UART_nMODULE enModule)
{
    UART__vWriteRegister(enModule, UART_ECR_OFFSET,
    (UART_RSR_R_BE_MASK | UART_RSR_R_FE_MASK | UART_RSR_R_OE_MASK | UART_RSR_R_PE_MASK), 0xFFFFFFFFUL, 0UL);
}
