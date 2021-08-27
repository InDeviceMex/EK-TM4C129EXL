/**
 *
 * @file I2C_Master_InterruptRegisterIRQSource.c
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
 * @verbatim Mar 24, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 24, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/I2C_Master_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_Master_InterruptRoutine_Source.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C_Master__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),I2C_nMODULE enModule, I2C_nMASTER_INTERRUPT enInterruptSource)
{
    uint32_t u32Module = 0UL;
    uint32_t u32InterruptSource = 0UL;
    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32Module = MCU__u32CheckParams( (uint32_t) enModule,  (uint32_t) I2C_enMODULE_MAX);
        u32InterruptSource = MCU__u32CheckParams( (uint32_t) enInterruptSource,  (uint32_t) I2C_enMASTER_INTERRUPT_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler, &I2C_Master__vIRQSourceHandler[u32Module][u32InterruptSource], 0UL, 1UL);
    }
}

