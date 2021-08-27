/**
 *
 * @file I2C_Slave_InterruptRoutine_Source.c
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
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_Slave_InterruptRoutine_Source.h>

static void I2C_vIRQSourceHandler_Dummy(void);

void (*I2C_Slave__vIRQSourceHandler[(uint32_t) I2C_enMODULE_MAX][(uint32_t) I2C_enSLAVE_INTERRUPT_MAX]) (void) =
{
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
    },
    {
         &I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,&I2C_vIRQSourceHandler_Dummy,
    },
};
static void I2C_vIRQSourceHandler_Dummy(void)
{
    while(1UL){}
}


