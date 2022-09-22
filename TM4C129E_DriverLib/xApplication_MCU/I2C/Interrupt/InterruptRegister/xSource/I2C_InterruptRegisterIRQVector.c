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

void I2C__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),I2C_nMODULE enModule)
{
    SCB_nVECISR enVector = SCB_enVECISR_I2C0;
    uint32_t u32Module = 0UL;
    const SCB_nVECISR SCB_enVECISR_I2C[(uint32_t) I2C_enMODULE_MAX]=
    {
        SCB_enVECISR_I2C0, SCB_enVECISR_I2C1,
        SCB_enVECISR_I2C2, SCB_enVECISR_I2C3,
        SCB_enVECISR_I2C4, SCB_enVECISR_I2C5,
        SCB_enVECISR_I2C6, SCB_enVECISR_I2C7,
        SCB_enVECISR_I2C8, SCB_enVECISR_I2C9
    };


    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) I2C_enMODULE_MAX);
        enVector = SCB_enVECISR_I2C[u32Module];
        SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVector, pfIrqVectorHandler,
                           I2C__pvfGetIRQVectorHandlerPointer((I2C_nMODULE) u32Module));
    }
}
