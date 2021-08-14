/**
 *
 * @file SSI_MasterSlave.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/Control/xHeader/SSI_MasterSlave.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vSetMasterSlave(SSI_nMODULE enModule, SSI_nMS enMasterSlaveArg)
{
    SSI__vWriteRegister(enModule, SSI_CR1_OFFSET,
        (uint32_t) enMasterSlaveArg, SSI_CR1_MS_MASK, SSI_CR1_R_MS_BIT);
}

SSI_nMS SSI__enGetMasterSlave(SSI_nMODULE enModule)
{
    SSI_nMS enMasterSlaveReg = SSI_enMS_MASTER;
    enMasterSlaveReg = (SSI_nMS) SSI__u32ReadRegister(enModule,
                      SSI_CR1_OFFSET, SSI_CR1_MS_MASK, SSI_CR1_R_MS_BIT);
    return (enMasterSlaveReg);
}
