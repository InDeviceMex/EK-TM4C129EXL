/**
 *
 * @file I2C_InterruptRoutine_Vector_Module5.c
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
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module5.h>

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Dependencies.h>

void I2C5__vIRQVectorHandler(void)
{
    uint32_t u32Ready;
    uint32_t u32RegMaster;
    uint32_t u32RegSlave;
    I2C_pvfIRQSourceHandler_t pvfCallback;

    u32Ready = SYSCTL_PRI2C_R;
    if(SYSCTL_PRI2C_R_I2C5_NOREADY == (SYSCTL_PRI2C_R_I2C5_MASK & u32Ready))
    {
        pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enMASTER_INT_SW);
        pvfCallback(I2C5_BASE, (void*) I2C_enSLAVE_INT_SW);
        pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enSLAVE_INT_SW);
        pvfCallback(I2C5_BASE, (void*) I2C_enSLAVE_INT_SW);
    }
    else
    {
        u32RegMaster = (uint32_t) I2C5_MASTER_MIS_R;
        u32RegSlave = (uint32_t) I2C5_SLAVE_MIS_R;
        u32RegMaster &= (uint32_t) I2C_enMASTER_INTMASK_ALL;
        u32RegSlave &= (uint32_t) I2C_enSLAVE_INTMASK_ALL;

        if(0UL == (u32RegMaster | u32RegSlave))
        {
            pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enMASTER_INT_SW);
            pvfCallback(I2C5_BASE, (void*) I2C_enSLAVE_INT_SW);
            pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enSLAVE_INT_SW);
            pvfCallback(I2C5_BASE, (void*) I2C_enSLAVE_INT_SW);
        }
        else
        {
            if(0UL != u32RegMaster)
            {
                if((uint32_t) I2C_enMASTER_INTMASK_MASTER & u32RegMaster)
                {
                    I2C5_MASTER_ICR_R = (uint32_t) I2C_enMASTER_INTMASK_MASTER;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enMASTER_INT_MASTER);
                    pvfCallback(I2C5_BASE, (void*) I2C_enMASTER_INT_MASTER);
                }
                if((uint32_t) I2C_enMASTER_INTMASK_CLOCK_TIMEOUT & u32RegMaster)
                {
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enMASTER_INT_CLOCK_TIMEOUT);
                    pvfCallback(I2C5_BASE, (void*) I2C_enMASTER_INT_CLOCK_TIMEOUT);
                    I2C5_MASTER_ICR_R = (uint32_t) I2C_enMASTER_INTMASK_CLOCK_TIMEOUT;
                }
                if((uint32_t) I2C_enMASTER_INTMASK_RECEIVE_DMA & u32RegMaster)
                {
                    I2C5_MASTER_ICR_R = (uint32_t) I2C_enMASTER_INTMASK_RECEIVE_DMA;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enMASTER_INT_RECEIVE_DMA);
                    pvfCallback(I2C5_BASE, (void*) I2C_enMASTER_INT_RECEIVE_DMA);
                }
                if((uint32_t) I2C_enMASTER_INTMASK_TRANSMIT_DMA & u32RegMaster)
                {
                    I2C5_MASTER_ICR_R = (uint32_t) I2C_enMASTER_INTMASK_TRANSMIT_DMA;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enMASTER_INT_TRANSMIT_DMA);
                    pvfCallback(I2C5_BASE, (void*) I2C_enMASTER_INT_TRANSMIT_DMA);
                }
                if((uint32_t) I2C_enMASTER_INTMASK_ADDR_DATA_NACK & u32RegMaster)
                {
                    I2C5_MASTER_ICR_R = (uint32_t) I2C_enMASTER_INTMASK_ADDR_DATA_NACK;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enMASTER_INT_ADDR_DATA_NACK);
                    pvfCallback(I2C5_BASE, (void*) I2C_enMASTER_INT_ADDR_DATA_NACK);
                }
                if((uint32_t) I2C_enMASTER_INTMASK_START_DETECTION & u32RegMaster)
                {
                    I2C5_MASTER_ICR_R = (uint32_t) I2C_enMASTER_INTMASK_START_DETECTION;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enMASTER_INT_START_DETECTION);
                    pvfCallback(I2C5_BASE, (void*) I2C_enMASTER_INT_START_DETECTION);
                }
                if((uint32_t) I2C_enMASTER_INTMASK_STOP_DETECTION & u32RegMaster)
                {
                    I2C5_MASTER_ICR_R = (uint32_t) I2C_enMASTER_INTMASK_STOP_DETECTION;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enMASTER_INT_STOP_DETECTION);
                    pvfCallback(I2C5_BASE, (void*) I2C_enMASTER_INT_STOP_DETECTION);
                }
                if((uint32_t) I2C_enMASTER_INTMASK_ARBITRATION_LOST & u32RegMaster)
                {
                    I2C5_MASTER_ICR_R = (uint32_t) I2C_enMASTER_INTMASK_ARBITRATION_LOST;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enMASTER_INT_ARBITRATION_LOST);
                    pvfCallback(I2C5_BASE, (void*) I2C_enMASTER_INT_ARBITRATION_LOST);
                }
                if((uint32_t) I2C_enMASTER_INTMASK_TRANSMIT_FIFO_REQ & u32RegMaster)
                {
                    I2C5_MASTER_ICR_R = (uint32_t) I2C_enMASTER_INTMASK_TRANSMIT_FIFO_REQ;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enMASTER_INT_TRANSMIT_FIFO_REQ);
                    pvfCallback(I2C5_BASE, (void*) I2C_enMASTER_INT_TRANSMIT_FIFO_REQ);
                }
                if((uint32_t) I2C_enMASTER_INTMASK_RECEIVE_FIFO_REQ & u32RegMaster)
                {
                    I2C5_MASTER_ICR_R = (uint32_t) I2C_enMASTER_INTMASK_RECEIVE_FIFO_REQ;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enMASTER_INT_RECEIVE_FIFO_REQ);
                    pvfCallback(I2C5_BASE, (void*) I2C_enMASTER_INT_RECEIVE_FIFO_REQ);
                }
                if((uint32_t) I2C_enMASTER_INTMASK_TRANSMIT_FIFO_EMPTY & u32RegMaster)
                {
                    I2C5_MASTER_ICR_R = (uint32_t) I2C_enMASTER_INTMASK_TRANSMIT_FIFO_EMPTY;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enMASTER_INT_TRANSMIT_FIFO_EMPTY);
                    pvfCallback(I2C5_BASE, (void*) I2C_enMASTER_INT_TRANSMIT_FIFO_EMPTY);
                }
                if((uint32_t) I2C_enMASTER_INTMASK_RECEIVE_FIFO_FULL & u32RegMaster)
                {
                    I2C5_MASTER_ICR_R = (uint32_t) I2C_enMASTER_INTMASK_RECEIVE_FIFO_FULL;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enMASTER_INT_RECEIVE_FIFO_FULL);
                    pvfCallback(I2C5_BASE, (void*) I2C_enMASTER_INT_RECEIVE_FIFO_FULL);
                }
            }
            if(0UL != u32RegSlave)
            {
                if((uint32_t) I2C_enSLAVE_INTMASK_DATA & u32RegSlave)
                {
                    I2C5_SLAVE_ICR_R = (uint32_t) I2C_enSLAVE_INTMASK_DATA;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enSLAVE_INT_DATA);
                    pvfCallback(I2C5_BASE, (void*) I2C_enSLAVE_INT_DATA);
                }
                if((uint32_t) I2C_enSLAVE_INTMASK_START_CONDITION & u32RegSlave)
                {
                    I2C5_SLAVE_ICR_R = (uint32_t) I2C_enSLAVE_INTMASK_START_CONDITION;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enSLAVE_INT_START_CONDITION);
                    pvfCallback(I2C5_BASE, (void*) I2C_enSLAVE_INT_START_CONDITION);
                }
                if((uint32_t) I2C_enSLAVE_INTMASK_STOP_CONDITION & u32RegSlave)
                {
                    I2C5_SLAVE_ICR_R = (uint32_t) I2C_enSLAVE_INTMASK_STOP_CONDITION;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enSLAVE_INT_STOP_CONDITION);
                    pvfCallback(I2C5_BASE, (void*) I2C_enSLAVE_INT_STOP_CONDITION);
                }
                if((uint32_t) I2C_enSLAVE_INTMASK_RECEIVE_DMA & u32RegSlave)
                {
                    I2C5_SLAVE_ICR_R = (uint32_t) I2C_enSLAVE_INTMASK_RECEIVE_DMA;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enSLAVE_INT_RECEIVE_DMA);
                    pvfCallback(I2C5_BASE, (void*) I2C_enSLAVE_INT_RECEIVE_DMA);
                }
                if((uint32_t) I2C_enSLAVE_INTMASK_TRANSMIT_DMA & u32RegSlave)
                {
                    I2C5_SLAVE_ICR_R = (uint32_t) I2C_enSLAVE_INTMASK_TRANSMIT_DMA;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enSLAVE_INT_TRANSMIT_DMA);
                    pvfCallback(I2C5_BASE, (void*) I2C_enSLAVE_INT_TRANSMIT_DMA);
                }
                if((uint32_t) I2C_enSLAVE_INTMASK_TRANSMIT_FIFO_REQ & u32RegSlave)
                {
                    I2C5_SLAVE_ICR_R = (uint32_t) I2C_enSLAVE_INTMASK_TRANSMIT_FIFO_REQ;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enSLAVE_INT_TRANSMIT_FIFO_REQ);
                    pvfCallback(I2C5_BASE, (void*) I2C_enSLAVE_INT_TRANSMIT_FIFO_REQ);
                }
                if((uint32_t) I2C_enSLAVE_INTMASK_RECEIVE_FIFO_REQ & u32RegSlave)
                {
                    I2C5_SLAVE_ICR_R = (uint32_t) I2C_enSLAVE_INTMASK_RECEIVE_FIFO_REQ;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enSLAVE_INT_RECEIVE_FIFO_REQ);
                    pvfCallback(I2C5_BASE, (void*) I2C_enSLAVE_INT_RECEIVE_FIFO_REQ);
                }
                if((uint32_t) I2C_enSLAVE_INTMASK_TRANSMIT_FIFO_EMPTY & u32RegSlave)
                {
                    I2C5_SLAVE_ICR_R = (uint32_t) I2C_enSLAVE_INTMASK_TRANSMIT_FIFO_EMPTY;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enSLAVE_INT_TRANSMIT_FIFO_EMPTY);
                    pvfCallback(I2C5_BASE, (void*) I2C_enSLAVE_INT_TRANSMIT_FIFO_EMPTY);
                }
                if((uint32_t) I2C_enSLAVE_INTMASK_RECEIVE_FIFO_FULL & u32RegSlave)
                {
                    I2C5_SLAVE_ICR_R = (uint32_t) I2C_enSLAVE_INTMASK_RECEIVE_FIFO_FULL;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_5, I2C_enSLAVE_INT_RECEIVE_FIFO_FULL);
                    pvfCallback(I2C5_BASE, (void*) I2C_enSLAVE_INT_RECEIVE_FIFO_FULL);
                }
            }
        }
    }
}
