/**
 *
 * @file I2C_InterruptRegisterIRQVector.c
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
#include <xApplication_MCU/I2C/Interrupt/InterruptRegister/xHeader/I2C_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/I2C_InterruptRoutine.h>
#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Dependencies.h>

I2C_nERROR I2C__enRegisterIRQVectorHandler(I2C_nMODULE enModuleArg, I2C_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_enVECISR_I2C[(uint32_t) I2C_enMODULE_MAX] =
    {
     SCB_enVECISR_I2C0, SCB_enVECISR_I2C1, SCB_enVECISR_I2C2, SCB_enVECISR_I2C3, SCB_enVECISR_I2C4,
     SCB_enVECISR_I2C5, SCB_enVECISR_I2C6, SCB_enVECISR_I2C7, SCB_enVECISR_I2C8, SCB_enVECISR_I2C9
    };
    SCB_nVECISR enVectorReg;
    I2C_nERROR enErrorReg;
    I2C_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enErrorReg = (I2C_nERROR) MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) I2C_enMODULE_MAX);
    if(I2C_enERROR_OK == enErrorReg)
    {
        enVectorReg = SCB_enVECISR_I2C[(uint32_t) enModuleArg];
        pvfVectorHandlerReg = I2C__pvfGetIRQVectorHandlerPointer(enModuleArg);
        enErrorReg = (I2C_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}
