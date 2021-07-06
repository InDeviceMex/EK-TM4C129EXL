/**
 *
 * @file NVIC_Enable.c
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
 * @verbatim 20 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Enable.h>

#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_ReadReg.h>
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_WriteReg.h>
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Priority.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>

NVIC_nENABLE NVIC__enGetEnableIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nENABLE enStatus = NVIC_enDISABLE;
    enStatus = (NVIC_nENABLE) NVIC__u32ReadRegister(enIRQ, NVIC_ISER_OFFSET);
    return (enStatus);
}

void NVIC__vSetEnableIRQ(NVIC_nSTIR enIRQ, NVIC_nPRIORITY enPriority)
{
    NVIC__vSetPriorityIRQ(enIRQ, enPriority);
    NVIC__vWriteRegister(enIRQ, NVIC_ISER_OFFSET, (uint32_t) NVIC_enENABLE);

}

void NVIC__vClearEnableIRQ(NVIC_nSTIR enIRQ)
{
    NVIC__vWriteRegister(enIRQ, NVIC_ICER_OFFSET, (uint32_t) NVIC_enENABLE);
}
