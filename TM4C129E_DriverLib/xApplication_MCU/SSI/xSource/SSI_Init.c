/**
 *
 * @file SSI_Init.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SSI/xHeader/SSI_Init.h>

#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Ready.h>
#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Dependencies.h>
#include <xApplication_MCU/SSI/Interrupt/SSI_Interrupt.h>

SSI_nERROR SSI__enInit(SSI_nMODULE enModuleArg)
{
    SSI_nERROR enErrorReg;
    SSI_pvfIRQVectorHandler_t pfIrqVectorHandlerReg;

    enErrorReg = SSI__enSetReadyOnRunMode(enModuleArg);
    if(SSI_enERROR_OK == enErrorReg)
    {
        pfIrqVectorHandlerReg = SSI__pvfGetIRQVectorHandler(enModuleArg);
        enErrorReg = SSI__enRegisterIRQVectorHandler(enModuleArg, pfIrqVectorHandlerReg);
    }

    return (enErrorReg);
}
