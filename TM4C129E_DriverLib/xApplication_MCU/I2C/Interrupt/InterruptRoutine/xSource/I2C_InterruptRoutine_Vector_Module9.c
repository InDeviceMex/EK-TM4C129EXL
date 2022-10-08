/**
 *
 * @file I2C_InterruptRoutine_Vector_Module9.c
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
 * @verbatim 31 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 31 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/I2C/Interrupt/InterruptRoutine/xHeader/I2C_InterruptRoutine_Vector_Module9.h>

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Dependencies.h>

void I2C9__vIRQVectorHandler(void)
{
    UBase_t uxReady;
    UBase_t uxRegMaster;
    UBase_t uxRegSlave;
    I2C_pvfIRQSourceHandler_t pvfCallback;

    uxReady = SYSCTL_PRI2C_R;
    if(SYSCTL_PRI2C_R_I2C9_NOREADY == (SYSCTL_PRI2C_R_I2C9_MASK & uxReady))
    {
        pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enMASTER_INT_SW);
        pvfCallback(I2C9_BASE, (void*) I2C_enSLAVE_INT_SW);
        pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enSLAVE_INT_SW);
        pvfCallback(I2C9_BASE, (void*) I2C_enSLAVE_INT_SW);
    }
    else
    {
        uxRegMaster = (UBase_t) I2C9_MASTER_MIS_R;
        uxRegSlave = (UBase_t) I2C9_SLAVE_MIS_R;
        uxRegMaster &= (UBase_t) I2C_enMASTER_INTMASK_ALL;
        uxRegSlave &= (UBase_t) I2C_enSLAVE_INTMASK_ALL;

        if(0UL == (uxRegMaster | uxRegSlave))
        {
            pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enMASTER_INT_SW);
            pvfCallback(I2C9_BASE, (void*) I2C_enSLAVE_INT_SW);
            pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enSLAVE_INT_SW);
            pvfCallback(I2C9_BASE, (void*) I2C_enSLAVE_INT_SW);
        }
        else
        {
            if(0UL != uxRegMaster)
            {
                if((UBase_t) I2C_enMASTER_INTMASK_MASTER & uxRegMaster)
                {
                    I2C9_MASTER_ICR_R = (UBase_t) I2C_enMASTER_INTMASK_MASTER;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enMASTER_INT_MASTER);
                    pvfCallback(I2C9_BASE, (void*) I2C_enMASTER_INT_MASTER);
                }
                if((UBase_t) I2C_enMASTER_INTMASK_CLOCK_TIMEOUT & uxRegMaster)
                {
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enMASTER_INT_CLOCK_TIMEOUT);
                    pvfCallback(I2C9_BASE, (void*) I2C_enMASTER_INT_CLOCK_TIMEOUT);
                    I2C9_MASTER_ICR_R = (UBase_t) I2C_enMASTER_INTMASK_CLOCK_TIMEOUT;
                }
                if((UBase_t) I2C_enMASTER_INTMASK_RECEIVE_DMA & uxRegMaster)
                {
                    I2C9_MASTER_ICR_R = (UBase_t) I2C_enMASTER_INTMASK_RECEIVE_DMA;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enMASTER_INT_RECEIVE_DMA);
                    pvfCallback(I2C9_BASE, (void*) I2C_enMASTER_INT_RECEIVE_DMA);
                }
                if((UBase_t) I2C_enMASTER_INTMASK_TRANSMIT_DMA & uxRegMaster)
                {
                    I2C9_MASTER_ICR_R = (UBase_t) I2C_enMASTER_INTMASK_TRANSMIT_DMA;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enMASTER_INT_TRANSMIT_DMA);
                    pvfCallback(I2C9_BASE, (void*) I2C_enMASTER_INT_TRANSMIT_DMA);
                }
                if((UBase_t) I2C_enMASTER_INTMASK_ADDR_DATA_NACK & uxRegMaster)
                {
                    I2C9_MASTER_ICR_R = (UBase_t) I2C_enMASTER_INTMASK_ADDR_DATA_NACK;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enMASTER_INT_ADDR_DATA_NACK);
                    pvfCallback(I2C9_BASE, (void*) I2C_enMASTER_INT_ADDR_DATA_NACK);
                }
                if((UBase_t) I2C_enMASTER_INTMASK_START_DETECTION & uxRegMaster)
                {
                    I2C9_MASTER_ICR_R = (UBase_t) I2C_enMASTER_INTMASK_START_DETECTION;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enMASTER_INT_START_DETECTION);
                    pvfCallback(I2C9_BASE, (void*) I2C_enMASTER_INT_START_DETECTION);
                }
                if((UBase_t) I2C_enMASTER_INTMASK_STOP_DETECTION & uxRegMaster)
                {
                    I2C9_MASTER_ICR_R = (UBase_t) I2C_enMASTER_INTMASK_STOP_DETECTION;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enMASTER_INT_STOP_DETECTION);
                    pvfCallback(I2C9_BASE, (void*) I2C_enMASTER_INT_STOP_DETECTION);
                }
                if((UBase_t) I2C_enMASTER_INTMASK_ARBITRATION_LOST & uxRegMaster)
                {
                    I2C9_MASTER_ICR_R = (UBase_t) I2C_enMASTER_INTMASK_ARBITRATION_LOST;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enMASTER_INT_ARBITRATION_LOST);
                    pvfCallback(I2C9_BASE, (void*) I2C_enMASTER_INT_ARBITRATION_LOST);
                }
                if((UBase_t) I2C_enMASTER_INTMASK_TRANSMIT_FIFO_REQ & uxRegMaster)
                {
                    I2C9_MASTER_ICR_R = (UBase_t) I2C_enMASTER_INTMASK_TRANSMIT_FIFO_REQ;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enMASTER_INT_TRANSMIT_FIFO_REQ);
                    pvfCallback(I2C9_BASE, (void*) I2C_enMASTER_INT_TRANSMIT_FIFO_REQ);
                }
                if((UBase_t) I2C_enMASTER_INTMASK_RECEIVE_FIFO_REQ & uxRegMaster)
                {
                    I2C9_MASTER_ICR_R = (UBase_t) I2C_enMASTER_INTMASK_RECEIVE_FIFO_REQ;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enMASTER_INT_RECEIVE_FIFO_REQ);
                    pvfCallback(I2C9_BASE, (void*) I2C_enMASTER_INT_RECEIVE_FIFO_REQ);
                }
                if((UBase_t) I2C_enMASTER_INTMASK_TRANSMIT_FIFO_EMPTY & uxRegMaster)
                {
                    I2C9_MASTER_ICR_R = (UBase_t) I2C_enMASTER_INTMASK_TRANSMIT_FIFO_EMPTY;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enMASTER_INT_TRANSMIT_FIFO_EMPTY);
                    pvfCallback(I2C9_BASE, (void*) I2C_enMASTER_INT_TRANSMIT_FIFO_EMPTY);
                }
                if((UBase_t) I2C_enMASTER_INTMASK_RECEIVE_FIFO_FULL & uxRegMaster)
                {
                    I2C9_MASTER_ICR_R = (UBase_t) I2C_enMASTER_INTMASK_RECEIVE_FIFO_FULL;
                    pvfCallback = I2C_Master__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enMASTER_INT_RECEIVE_FIFO_FULL);
                    pvfCallback(I2C9_BASE, (void*) I2C_enMASTER_INT_RECEIVE_FIFO_FULL);
                }
            }
            if(0UL != uxRegSlave)
            {
                if((UBase_t) I2C_enSLAVE_INTMASK_DATA & uxRegSlave)
                {
                    I2C9_SLAVE_ICR_R = (UBase_t) I2C_enSLAVE_INTMASK_DATA;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enSLAVE_INT_DATA);
                    pvfCallback(I2C9_BASE, (void*) I2C_enSLAVE_INT_DATA);
                }
                if((UBase_t) I2C_enSLAVE_INTMASK_START_CONDITION & uxRegSlave)
                {
                    I2C9_SLAVE_ICR_R = (UBase_t) I2C_enSLAVE_INTMASK_START_CONDITION;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enSLAVE_INT_START_CONDITION);
                    pvfCallback(I2C9_BASE, (void*) I2C_enSLAVE_INT_START_CONDITION);
                }
                if((UBase_t) I2C_enSLAVE_INTMASK_STOP_CONDITION & uxRegSlave)
                {
                    I2C9_SLAVE_ICR_R = (UBase_t) I2C_enSLAVE_INTMASK_STOP_CONDITION;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enSLAVE_INT_STOP_CONDITION);
                    pvfCallback(I2C9_BASE, (void*) I2C_enSLAVE_INT_STOP_CONDITION);
                }
                if((UBase_t) I2C_enSLAVE_INTMASK_RECEIVE_DMA & uxRegSlave)
                {
                    I2C9_SLAVE_ICR_R = (UBase_t) I2C_enSLAVE_INTMASK_RECEIVE_DMA;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enSLAVE_INT_RECEIVE_DMA);
                    pvfCallback(I2C9_BASE, (void*) I2C_enSLAVE_INT_RECEIVE_DMA);
                }
                if((UBase_t) I2C_enSLAVE_INTMASK_TRANSMIT_DMA & uxRegSlave)
                {
                    I2C9_SLAVE_ICR_R = (UBase_t) I2C_enSLAVE_INTMASK_TRANSMIT_DMA;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enSLAVE_INT_TRANSMIT_DMA);
                    pvfCallback(I2C9_BASE, (void*) I2C_enSLAVE_INT_TRANSMIT_DMA);
                }
                if((UBase_t) I2C_enSLAVE_INTMASK_TRANSMIT_FIFO_REQ & uxRegSlave)
                {
                    I2C9_SLAVE_ICR_R = (UBase_t) I2C_enSLAVE_INTMASK_TRANSMIT_FIFO_REQ;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enSLAVE_INT_TRANSMIT_FIFO_REQ);
                    pvfCallback(I2C9_BASE, (void*) I2C_enSLAVE_INT_TRANSMIT_FIFO_REQ);
                }
                if((UBase_t) I2C_enSLAVE_INTMASK_RECEIVE_FIFO_REQ & uxRegSlave)
                {
                    I2C9_SLAVE_ICR_R = (UBase_t) I2C_enSLAVE_INTMASK_RECEIVE_FIFO_REQ;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enSLAVE_INT_RECEIVE_FIFO_REQ);
                    pvfCallback(I2C9_BASE, (void*) I2C_enSLAVE_INT_RECEIVE_FIFO_REQ);
                }
                if((UBase_t) I2C_enSLAVE_INTMASK_TRANSMIT_FIFO_EMPTY & uxRegSlave)
                {
                    I2C9_SLAVE_ICR_R = (UBase_t) I2C_enSLAVE_INTMASK_TRANSMIT_FIFO_EMPTY;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enSLAVE_INT_TRANSMIT_FIFO_EMPTY);
                    pvfCallback(I2C9_BASE, (void*) I2C_enSLAVE_INT_TRANSMIT_FIFO_EMPTY);
                }
                if((UBase_t) I2C_enSLAVE_INTMASK_RECEIVE_FIFO_FULL & uxRegSlave)
                {
                    I2C9_SLAVE_ICR_R = (UBase_t) I2C_enSLAVE_INTMASK_RECEIVE_FIFO_FULL;
                    pvfCallback = I2C_Slave__pvfGetIRQSourceHandler(I2C_enMODULE_9, I2C_enSLAVE_INT_RECEIVE_FIFO_FULL);
                    pvfCallback(I2C9_BASE, (void*) I2C_enSLAVE_INT_RECEIVE_FIFO_FULL);
                }
            }
        }
    }
}

