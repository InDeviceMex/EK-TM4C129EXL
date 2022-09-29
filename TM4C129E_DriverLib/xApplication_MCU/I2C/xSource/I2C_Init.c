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

#include <xApplication_MCU/I2C/Interrupt/I2C_Interrupt.h>


I2C_nERROR I2C__enInit(void)
{
    I2C_nERROR enErrorReg;
    uint32_t u32ModuleReg;
    I2C_pvfIRQVectorHandler_t pfIrqVectorHandlerReg;

    u32ModuleReg = 0UL;
    enErrorReg = I2C_enERROR_OK;
    while((u32ModuleReg < (uint32_t) I2C_enMODULE_MAX) && (I2C_enERROR_OK == enErrorReg))
    {
        pfIrqVectorHandlerReg = I2C__pvfGetIRQVectorHandler((I2C_nMODULE) u32ModuleReg);
        enErrorReg = I2C__enRegisterIRQVectorHandler((I2C_nMODULE) u32ModuleReg, pfIrqVectorHandlerReg);
        u32ModuleReg++;
    }
    return (enErrorReg);
}


