/**
 *
 * @file I2C_InterruptRoutine_Vector_Module2.c
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
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module2.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_Master_InterruptRoutine_Source.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/I2C_Slave_InterruptRoutine_Source.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C2__vIRQVectorHandler(void)
{
    volatile uint32_t u32RegMaster = 0U;
    volatile uint32_t u32RegSlave = 0U;

    u32RegMaster = (uint32_t) I2C2_MMIS_R;
    u32RegSlave = (uint32_t) I2C2_SMIS_R;

    if((uint32_t) I2C_enMASTER_INT_SOURCE_MASTER & u32RegMaster)
    {
        I2C2_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_MASTER;
        I2C_Master__vIRQSourceHandler[(uint32_t) I2C_enMODULE_2][(uint32_t) I2C_enMASTER_INTERRUPT_MASTER]();
    }
    if((uint32_t) I2C_enMASTER_INT_SOURCE_CLOCK_TIMEOUT & u32RegMaster)
    {
        I2C_Master__vIRQSourceHandler[(uint32_t) I2C_enMODULE_2][(uint32_t) I2C_enMASTER_INTERRUPT_CLOCK_TIMEOUT]();
        I2C2_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_CLOCK_TIMEOUT;
    }

    if((uint32_t) I2C_enSLAVE_INT_SOURCE_DATA & u32RegSlave)
    {
        I2C2_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_DATA;
        I2C_Slave__vIRQSourceHandler[(uint32_t) I2C_enMODULE_2][(uint32_t) I2C_enSLAVE_INTERRUPT_DATA]();
    }
    if((uint32_t) I2C_enSLAVE_INT_SOURCE_START & u32RegSlave)
    {
        I2C2_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_START;
        I2C_Slave__vIRQSourceHandler[(uint32_t) I2C_enMODULE_2][(uint32_t) I2C_enSLAVE_INTERRUPT_START]();
    }
    if((uint32_t) I2C_enSLAVE_INT_SOURCE_STOP & u32RegSlave)
    {
        I2C2_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_STOP;
        I2C_Slave__vIRQSourceHandler[(uint32_t) I2C_enMODULE_2][(uint32_t) I2C_enSLAVE_INTERRUPT_STOP]();
    }
}
