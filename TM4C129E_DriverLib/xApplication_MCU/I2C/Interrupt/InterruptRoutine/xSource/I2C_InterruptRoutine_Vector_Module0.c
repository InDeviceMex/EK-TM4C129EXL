/**
 *
 * @file I2C_InterruptRoutine_Vector_Module0.c
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module0.h>

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Dependencies.h>

void I2C0__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg1 = 0U;
    volatile uint32_t u32Reg2 = 0U;
    volatile uint32_t u32Reg = 0U;
    volatile uint32_t u32RegMaster = 0U;
    volatile uint32_t u32RegSlave = 0U;
    volatile uint32_t u32Ready = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    u32Ready = SYSCTL_PRI2C_R;
    if(SYSCTL_PRI2C_R_I2C0_NOREADY == (SYSCTL_PRI2C_R_I2C0_MASK & u32Ready))
    {
        pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                                   I2C_enMASTER_INTERRUPT_SW);
        pvfCallback();
        pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                                   I2C_enSLAVE_INTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        u32RegMaster = (uint32_t) I2C0_MMIS_R;
        u32RegSlave = (uint32_t) I2C0_SMIS_R;
        u32Reg1 = (uint32_t) I2C_enMASTER_INT_SOURCE_ALL & u32RegMaster;
        u32Reg2 = (uint32_t) I2C_enSLAVE_INT_SOURCE_ALL & u32RegSlave;
        u32Reg = u32Reg1 | u32Reg2;
        if(0UL == u32Reg)
        {
            pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                                       I2C_enMASTER_INTERRUPT_SW);
            pvfCallback();
            pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                                       I2C_enSLAVE_INTERRUPT_SW);
            pvfCallback();
        }
        else
        {
            if(0UL != u32RegMaster)
            {
                if((uint32_t) I2C_enMASTER_INT_SOURCE_MASTER & u32RegMaster)
                {
                    I2C0_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_MASTER;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                                   I2C_enMASTER_INTERRUPT_MASTER);
                    pvfCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_CLOCK_TIMEOUT & u32RegMaster)
                {
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                          I2C_enMASTER_INTERRUPT_CLOCK_TIMEOUT);
                    pvfCallback();
                    I2C0_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_CLOCK_TIMEOUT;
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_RECEIVE_DMA & u32RegMaster)
                {
                    I2C0_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_RECEIVE_DMA;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                              I2C_enMASTER_INTERRUPT_RECEIVE_DMA);
                    pvfCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_TRANSMIT_DMA & u32RegMaster)
                {
                    I2C0_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_TRANSMIT_DMA;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                              I2C_enMASTER_INTERRUPT_TRANSMIT_DMA);
                    pvfCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_ADDR_DATA_NACK & u32RegMaster)
                {
                    I2C0_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_ADDR_DATA_NACK;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                          I2C_enMASTER_INTERRUPT_ADDR_DATA_NACK);
                    pvfCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_START_DETECTION & u32RegMaster)
                {
                    I2C0_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_START_DETECTION;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                          I2C_enMASTER_INTERRUPT_START_DETECTION);
                    pvfCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_STOP_DETECTION & u32RegMaster)
                {
                    I2C0_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_STOP_DETECTION;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                          I2C_enMASTER_INTERRUPT_STOP_DETECTION);
                    pvfCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_ARBITRATION_LOST & u32RegMaster)
                {
                    I2C0_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_ARBITRATION_LOST;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                          I2C_enMASTER_INTERRUPT_ARBITRATION_LOST);
                    pvfCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_TRANSMIT_FIFO_REQ & u32RegMaster)
                {
                    I2C0_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_TRANSMIT_FIFO_REQ;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                              I2C_enMASTER_INTERRUPT_TRANSMIT_FIFO_REQ);
                    pvfCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_RECEIVE_FIFO_REQ & u32RegMaster)
                {
                    I2C0_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_RECEIVE_FIFO_REQ;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                              I2C_enMASTER_INTERRUPT_RECEIVE_FIFO_REQ);
                    pvfCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_TRANSMIT_FIFO_EMPTY & u32RegMaster)
                {
                    I2C0_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_TRANSMIT_FIFO_EMPTY;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                              I2C_enMASTER_INTERRUPT_TRANSMIT_FIFO_EMPTY);
                    pvfCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_RECEIVE_FIFO_FULL & u32RegMaster)
                {
                    I2C0_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_RECEIVE_FIFO_FULL;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                          I2C_enMASTER_INTERRUPT_RECEIVE_FIFO_FULL);
                    pvfCallback();
                }
            }
            if(0UL != u32RegSlave)
            {
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_DATA & u32RegSlave)
                {
                    I2C0_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_DATA;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                                  I2C_enSLAVE_INTERRUPT_DATA);
                    pvfCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_START_CONDITION & u32RegSlave)
                {
                    I2C0_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_START_CONDITION;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                                I2C_enSLAVE_INTERRUPT_START_CONDITION);
                    pvfCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_STOP_CONDITION & u32RegSlave)
                {
                    I2C0_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_STOP_CONDITION;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                                    I2C_enSLAVE_INTERRUPT_STOP_CONDITION);
                    pvfCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_RECEIVE_DMA & u32RegSlave)
                {
                    I2C0_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_RECEIVE_DMA;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                                I2C_enSLAVE_INTERRUPT_RECEIVE_DMA);
                    pvfCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_TRANSMIT_DMA & u32RegSlave)
                {
                    I2C0_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_TRANSMIT_DMA;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                                I2C_enSLAVE_INTERRUPT_TRANSMIT_DMA);
                    pvfCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_TRANSMIT_FIFO_REQ & u32RegSlave)
                {
                    I2C0_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_TRANSMIT_FIFO_REQ;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                                I2C_enSLAVE_INTERRUPT_TRANSMIT_FIFO_REQ);
                    pvfCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_RECEIVE_FIFO_REQ & u32RegSlave)
                {
                    I2C0_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_RECEIVE_FIFO_REQ;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                                I2C_enSLAVE_INTERRUPT_RECEIVE_FIFO_REQ);
                    pvfCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_TRANSMIT_FIFO_EMPTY & u32RegSlave)
                {
                    I2C0_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_TRANSMIT_FIFO_EMPTY;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                                I2C_enSLAVE_INTERRUPT_TRANSMIT_FIFO_EMPTY);
                    pvfCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_RECEIVE_FIFO_FULL & u32RegSlave)
                {
                    I2C0_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_RECEIVE_FIFO_FULL;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_0,
                                                I2C_enSLAVE_INTERRUPT_RECEIVE_FIFO_FULL);
                    pvfCallback();
                }
            }
        }
    }
}
