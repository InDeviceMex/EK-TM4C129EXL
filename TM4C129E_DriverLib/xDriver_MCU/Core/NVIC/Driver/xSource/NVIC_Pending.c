/**
 *
 * @file NVIC_Pending.c
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
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Pending.h>

#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_ReadReg.h>
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_WriteReg.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>

NVIC_nPENDSTATE NVIC__enGetPendingIRQ(NVIC_nVECTOR enIRQ)
{
    NVIC_nPENDSTATE enPendingReg = NVIC_enNOPENDING;
    enPendingReg = (NVIC_nPENDSTATE) NVIC__u32ReadRegister(enIRQ, NVIC_ISPR_OFFSET);
    return (enPendingReg);
}

void NVIC__vSetPendingIRQ(NVIC_nVECTOR enIRQ)
{
    NVIC__vWriteRegister(enIRQ, NVIC_ISPR_OFFSET, (uint32_t) NVIC_enSTATE_ENA);
}

void NVIC__vClearPendingIRQ(NVIC_nVECTOR enIRQ)
{
    NVIC__vWriteRegister(enIRQ, NVIC_ICPR_OFFSET, (uint32_t) NVIC_enSTATE_ENA);
}
