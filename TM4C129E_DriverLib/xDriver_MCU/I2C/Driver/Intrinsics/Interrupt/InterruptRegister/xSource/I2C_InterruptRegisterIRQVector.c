/**
 *
 * @file I2C_InterruptRegisterIRQVector.c
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
 * @verbatim 8 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/I2C_InterruptRegisterIRQVector.h>

#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Dependencies.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/I2C_InterruptRoutine.h>

void I2C__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),I2C_nMODULE enModule)
{
    SCB_nVECISR enVector = SCB_enVECISR_I2C0;
    uint32_t u32Module = 0UL;
    const SCB_nVECISR SCB_enVECISR_I2C[(uint32_t) I2C_enMODULE_MAX]=
    {
        SCB_enVECISR_I2C0, SCB_enVECISR_I2C1, SCB_enVECISR_I2C2, SCB_enVECISR_I2C3,
    };

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) I2C_enMODULE_MAX);
        enVector = SCB_enVECISR_I2C[u32Module];
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler, &I2C__pvIRQVectorHandler[u32Module], enVector);
    }
}
