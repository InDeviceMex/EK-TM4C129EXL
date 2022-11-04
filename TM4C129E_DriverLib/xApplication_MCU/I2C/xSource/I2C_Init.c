/**
 *
 * @file I2C_Init.c
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
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/I2C/xHeader/I2C_Init.h>

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Ready.h>
#include <xApplication_MCU/I2C/Interrupt/I2C_Interrupt.h>


I2C_nERROR I2C__enInit(I2C_nMODULE enModuleArg)
{
    I2C_nERROR enErrorReg;
    I2C_pvfIRQVectorHandler_t pfIrqVectorHandlerReg;

    enErrorReg = I2C__enSetReadyOnRunMode(enModuleArg);
    if(I2C_enERROR_OK == enErrorReg)
    {
        pfIrqVectorHandlerReg = I2C__pvfGetIRQVectorHandler(enModuleArg);
        enErrorReg = I2C__enRegisterIRQVectorHandler(enModuleArg, pfIrqVectorHandlerReg);
    }
    return (enErrorReg);
}


