/**
 *
 * @file I2C_InterruptRoutine_Vector_Module1.c
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
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module1.h>

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Dependencies.h>

void I2C1__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg1 = 0U;
    volatile uint32_t u32Reg2 = 0U;
    volatile uint32_t u32Reg = 0U;
    volatile uint32_t u32RegMaster = 0U;
    volatile uint32_t u32RegSlave = 0U;
    volatile uint32_t u32Ready = 0U;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Ready = SYSCTL_PRI2C_R;
    if(SYSCTL_PRI2C_R_I2C1_NOREADY == (SYSCTL_PRI2C_R_I2C1_MASK & u32Ready))
    {
        pfvCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                                   I2C_enMASTER_INTERRUPT_SW);
        pfvCallback();
        pfvCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                                   I2C_enSLAVE_INTERRUPT_SW);
        pfvCallback();
    }
    else
    {
        u32RegMaster = (uint32_t) I2C1_MMIS_R;
        u32RegSlave = (uint32_t) I2C1_SMIS_R;
        u32Reg1 = (uint32_t) I2C_enMASTER_INT_SOURCE_ALL & u32RegMaster;
        u32Reg2 = (uint32_t) I2C_enSLAVE_INT_SOURCE_ALL & u32RegSlave;
        u32Reg = u32Reg1 | u32Reg2;
        if(0UL == u32Reg)
        {
            pfvCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                                       I2C_enMASTER_INTERRUPT_SW);
            pfvCallback();
            pfvCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                                       I2C_enSLAVE_INTERRUPT_SW);
            pfvCallback();
        }
        else
        {
            if(0UL != u32RegMaster)
            {
                if((uint32_t) I2C_enMASTER_INT_SOURCE_MASTER & u32RegMaster)
                {
                    I2C1_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_MASTER;
                    pfvCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                                   I2C_enMASTER_INTERRUPT_MASTER);
                    pfvCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_CLOCK_TIMEOUT & u32RegMaster)
                {
                    pfvCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                          I2C_enMASTER_INTERRUPT_CLOCK_TIMEOUT);
                    pfvCallback();
                    I2C1_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_CLOCK_TIMEOUT;
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_RECEIVE_DMA & u32RegMaster)
                {
                    I2C1_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_RECEIVE_DMA;
                    pfvCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                              I2C_enMASTER_INTERRUPT_RECEIVE_DMA);
                    pfvCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_TRANSMIT_DMA & u32RegMaster)
                {
                    I2C1_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_TRANSMIT_DMA;
                    pfvCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                              I2C_enMASTER_INTERRUPT_TRANSMIT_DMA);
                    pfvCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_ADDR_DATA_NACK & u32RegMaster)
                {
                    I2C1_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_ADDR_DATA_NACK;
                    pfvCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                          I2C_enMASTER_INTERRUPT_ADDR_DATA_NACK);
                    pfvCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_START_DETECTION & u32RegMaster)
                {
                    I2C1_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_START_DETECTION;
                    pfvCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                          I2C_enMASTER_INTERRUPT_START_DETECTION);
                    pfvCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_STOP_DETECTION & u32RegMaster)
                {
                    I2C1_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_STOP_DETECTION;
                    pfvCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                          I2C_enMASTER_INTERRUPT_STOP_DETECTION);
                    pfvCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_ARBITRATION_LOST & u32RegMaster)
                {
                    I2C1_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_ARBITRATION_LOST;
                    pfvCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                          I2C_enMASTER_INTERRUPT_ARBITRATION_LOST);
                    pfvCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_TRANSMIT_FIFO_REQ & u32RegMaster)
                {
                    I2C1_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_TRANSMIT_FIFO_REQ;
                    pfvCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                              I2C_enMASTER_INTERRUPT_TRANSMIT_FIFO_REQ);
                    pfvCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_RECEIVE_FIFO_REQ & u32RegMaster)
                {
                    I2C1_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_RECEIVE_FIFO_REQ;
                    pfvCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                              I2C_enMASTER_INTERRUPT_RECEIVE_FIFO_REQ);
                    pfvCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_TRANSMIT_FIFO_EMPTY & u32RegMaster)
                {
                    I2C1_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_TRANSMIT_FIFO_EMPTY;
                    pfvCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                              I2C_enMASTER_INTERRUPT_TRANSMIT_FIFO_EMPTY);
                    pfvCallback();
                }
                if((uint32_t) I2C_enMASTER_INT_SOURCE_RECEIVE_FIFO_FULL & u32RegMaster)
                {
                    I2C1_MICR_R = (uint32_t) I2C_enMASTER_INT_SOURCE_RECEIVE_FIFO_FULL;
                    pfvCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                          I2C_enMASTER_INTERRUPT_RECEIVE_FIFO_FULL);
                    pfvCallback();
                }
            }
            if(0UL != u32RegSlave)
            {
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_DATA & u32RegSlave)
                {
                    I2C1_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_DATA;
                    pfvCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                                  I2C_enSLAVE_INTERRUPT_DATA);
                    pfvCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_START_CONDITION & u32RegSlave)
                {
                    I2C1_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_START_CONDITION;
                    pfvCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                                I2C_enSLAVE_INTERRUPT_START_CONDITION);
                    pfvCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_STOP_CONDITION & u32RegSlave)
                {
                    I2C1_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_STOP_CONDITION;
                    pfvCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                                    I2C_enSLAVE_INTERRUPT_STOP_CONDITION);
                    pfvCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_RECEIVE_DMA & u32RegSlave)
                {
                    I2C1_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_RECEIVE_DMA;
                    pfvCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                                I2C_enSLAVE_INTERRUPT_RECEIVE_DMA);
                    pfvCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_TRANSMIT_DMA & u32RegSlave)
                {
                    I2C1_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_TRANSMIT_DMA;
                    pfvCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                                I2C_enSLAVE_INTERRUPT_TRANSMIT_DMA);
                    pfvCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_TRANSMIT_FIFO_REQ & u32RegSlave)
                {
                    I2C1_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_TRANSMIT_FIFO_REQ;
                    pfvCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                                I2C_enSLAVE_INTERRUPT_TRANSMIT_FIFO_REQ);
                    pfvCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_RECEIVE_FIFO_REQ & u32RegSlave)
                {
                    I2C1_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_RECEIVE_FIFO_REQ;
                    pfvCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                                I2C_enSLAVE_INTERRUPT_RECEIVE_FIFO_REQ);
                    pfvCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_TRANSMIT_FIFO_EMPTY & u32RegSlave)
                {
                    I2C1_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_TRANSMIT_FIFO_EMPTY;
                    pfvCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                                I2C_enSLAVE_INTERRUPT_TRANSMIT_FIFO_EMPTY);
                    pfvCallback();
                }
                if((uint32_t) I2C_enSLAVE_INT_SOURCE_RECEIVE_FIFO_FULL & u32RegSlave)
                {
                    I2C1_SICR_R = (uint32_t) I2C_enSLAVE_INT_SOURCE_RECEIVE_FIFO_FULL;
                    pfvCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_1,
                                                I2C_enSLAVE_INTERRUPT_RECEIVE_FIFO_FULL);
                    pfvCallback();
                }
            }
        }
    }
}
