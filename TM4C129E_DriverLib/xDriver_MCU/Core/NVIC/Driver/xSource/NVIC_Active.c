/**
 *
 * @file NVIC_Active.c
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
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Active.h>

#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_ReadReg.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>

NVIC_nACTIVE NVIC__enGetActiveIRQ(NVIC_nSTIR enIRQ)
{
    NVIC_nACTIVE enStatus = NVIC_enNOACTIVE;
    enStatus = (NVIC_nACTIVE ) NVIC__u32ReadRegister(enIRQ, NVIC_IABR_OFFSET);
    return (enStatus);
}
