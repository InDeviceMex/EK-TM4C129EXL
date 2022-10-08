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

NVIC_nERROR NVIC__enGetActiveVector(NVIC_nMODULE enModuleArg, NVIC_nVECTOR enVectorArg, NVIC_nSTATUS* penStatusArg)
{
    NVIC_nERROR enErrorReg;
    enErrorReg = NVIC__enReadValue(enModuleArg, enVectorArg, NVIC_IABR_OFFSET, (UBase_t*) penStatusArg);
    return (enErrorReg);
}
