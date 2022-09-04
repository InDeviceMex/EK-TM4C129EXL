/**
 *
 * @file xTask6_Commands.c
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
 * @verbatim 2 nov. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 nov. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xTask/xHeader/xTask6_Commands.h>

#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/xDriver_MCU.h>
#include <xDriver_MCU/CAN/Peripheral/CAN_Peripheral.h>

#include <xOS/xOS.h>

void CAN0__vInit(void);
void CAN1__vInit(void);
uint32_t CAN0__u32BitRateSet(uint32_t u32BitRate);
uint32_t CAN1__u32BitRateSet(uint32_t u32BitRate);
void CAN0__vSendMessage(uint8_t* pu8Message, uint32_t u32MessageLength);

void CAN1__vSetMessage(void);
void CAN0_ISR(void);
void CAN1_ISR(void);

void xTask6_Commands(void* pvParams)
{
    /*Period Handling*/
    uint32_t u32CurrentTime = 0UL;
    uint32_t u32NewTime = 0UL;
    uint32_t u32DiffTime = 0UL;
    uint32_t u32DiffPeriod = 0UL;
    uint32_t u32PeriodTask = (uint32_t) pvParams;
    uint64_t u64Message = 0x0ULL;

    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOA);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOB);

    SYSCTL__vEnRunModePeripheral(SYSCTL_enCAN0);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enCAN1);

    GPIO__enSetDigitalConfig(GPIO_enCAN0Rx, GPIO_enCONFIG_INPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enCAN1Rx, GPIO_enCONFIG_INPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enCAN0Tx, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enCAN1Tx, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    SCB__vRegisterIRQVectorHandler(&CAN0_ISR, (void (**) (void)) 0UL, SCB_enVECISR_CAN0);
    SCB__vRegisterIRQVectorHandler(&CAN1_ISR, (void (**) (void)) 0UL, SCB_enVECISR_CAN1);
    CAN0__vInit();
    CAN1__vInit();
    CAN0__u32BitRateSet(1000000UL);
    CAN1__u32BitRateSet(1000000UL);


    CAN0_CTL_R |= CAN_CTL_R_EIE_ENA | CAN_CTL_R_SIE_ENA | CAN_CTL_R_IE_ENA;
    CAN1_CTL_R |= CAN_CTL_R_EIE_ENA | CAN_CTL_R_SIE_ENA | CAN_CTL_R_IE_ENA;

    NVIC__vSetEnableIRQ(NVIC_enVECTOR_CAN0, NVIC_enPRI2);
    NVIC__vSetEnableIRQ(NVIC_enVECTOR_CAN1, NVIC_enPRI1);
    CAN0_CTL_R &= ~CAN_CTL_R_INIT_INIT;
    CAN1_CTL_R &= ~CAN_CTL_R_INIT_INIT;

    CAN1__vSetMessage();
    while(1UL)
    {

        u32CurrentTime = OS_Task__uxGetTickCount ();
        u32NewTime = OS_Task__uxGetTickCount();
        u32DiffTime = u32NewTime;
        u32DiffTime -= u32CurrentTime;
        u32DiffPeriod = u32PeriodTask;
        u32DiffPeriod -= u32DiffTime;

        CAN0__vSendMessage((uint8_t*) &u64Message, 8UL);
        u64Message++;
        OS_Task__vDelayUntil(&u32NewTime, u32DiffPeriod);

    }

}

void CAN0__vSendMessage(uint8_t* pu8Message, uint32_t u32MessageLength)
{
    uint32_t u32Busy = 0UL;
    uint32_t u32CmdMaskReg = 0UL;
    uint32_t u32ArbReg2 = 0UL;
    uint32_t u32MsgCtrl = 0UL;
    uint32_t u32ID = 0UL;
    uint32_t u32Length = 0UL;
    uint32_t u32Data = 0UL;
    uint32_t u32Data2 = 0UL;
    if((0UL != (uint32_t) pu8Message) && (0UL != u32MessageLength))
    {
        do
        {
            u32Busy = CAN0_IF1CRQ_R;
            u32Busy &= CAN_IFnCRQ_R_BUSY_MASK;
        }while(0UL != u32Busy);

        u32CmdMaskReg = CAN_IFnCMSK_R_WRNRD_REG2FIFO | CAN_IFnCMSK_R_DATAA_TRANSFER |
                        CAN_IFnCMSK_R_DATAB_TRANSFER | CAN_IFnCMSK_R_CONTROL_TRANSFER;

        u32MsgCtrl |= CAN_IFnMCTL_R_TXRQST_REQ;
        u32ArbReg2 = CAN_IFnARB2_R_DIR_TRANSMIT;
        u32CmdMaskReg |= CAN_IFnCMSK_R_ARB_TRANSFER;

        u32ID = 0UL;
        u32ID <<= 2UL;
        u32ID &= CAN_IFnARB2_R_ID_MASK;
        u32ArbReg2 |= u32ID;

        u32ArbReg2 |= CAN_IFnARB2_R_MSGVAL_READY;

        u32Length = u32MessageLength;
        u32Length &= CAN_IFnMCTL_R_DLC_MASK;
        u32MsgCtrl |= u32Length;

        u32MsgCtrl |= CAN_IFnMCTL_R_EOB_END;
        u32MsgCtrl |= CAN_IFnMCTL_R_TXIE_SET;

        u32Data = (uint32_t) *pu8Message;
        pu8Message += 1UL;
        u32Data2 = (uint32_t) *pu8Message;
        pu8Message += 1UL;
        u32Data2 <<= 8UL;
        u32Data |= u32Data2;
        CAN0_IF1DA1_R = (uint32_t) u32Data;

        u32Data = (uint32_t) *pu8Message;
        pu8Message += 1UL;
        u32Data2 = (uint32_t) *pu8Message;
        pu8Message += 1UL;
        u32Data2 <<= 8UL;
        u32Data |= u32Data2;
        CAN0_IF1DA2_R = (uint32_t) u32Data;

        u32Data = (uint32_t) *pu8Message;
        pu8Message += 1UL;
        u32Data2 = (uint32_t) *pu8Message;
        pu8Message += 1UL;
        u32Data2 <<= 8UL;
        u32Data |= u32Data2;
        CAN0_IF1DB1_R = (uint32_t) u32Data;

        u32Data = (uint32_t) *pu8Message;
        pu8Message += 1UL;
        u32Data2 = (uint32_t) *pu8Message;
        pu8Message += 1UL;
        u32Data2 <<= 8UL;
        u32Data |= u32Data2;
        CAN0_IF1DB2_R = (uint32_t) u32Data;

        CAN0_IF1CMSK_R = (uint32_t) u32CmdMaskReg;
        CAN0_IF1ARB2_R = (uint32_t) u32ArbReg2;
        CAN0_IF1MCTL_R = (uint32_t) u32MsgCtrl;
        CAN0_IF1CRQ_R = 1UL & CAN_IFnCRQ_R_MNUM_MASK;
    }

}

void CAN1__vSetMessage(void)
{
    uint32_t u32Busy = 0UL;
    uint32_t u32CmdMaskReg = 0UL;
    uint32_t u32ArbReg2 = 0UL;
    uint32_t u32MaskReg2 = 0UL;
    uint32_t u32MsgCtrl = 0UL;
    uint32_t u32ID = 0UL;
    uint32_t u32Length = 0UL;

    do
    {
        u32Busy = CAN1_IF1CRQ_R;
        u32Busy &= CAN_IFnCRQ_R_BUSY_MASK;
    }while(0UL != u32Busy);

    u32CmdMaskReg = CAN_IFnCMSK_R_WRNRD_REG2FIFO | CAN_IFnCMSK_R_DATAA_TRANSFER |
                    CAN_IFnCMSK_R_DATAB_TRANSFER | CAN_IFnCMSK_R_CONTROL_TRANSFER;

    u32ArbReg2 = 0UL;
    u32ID = 0UL;
    u32ID <<= 2UL;
    u32ID &= CAN_IFnARB2_R_ID_MASK;
    u32MaskReg2 |= u32ID;

    u32MsgCtrl |= CAN_IFnMCTL_R_UMASK_USE;
    u32CmdMaskReg |= CAN_IFnCMSK_R_MASK_TRANSFER;

    u32CmdMaskReg |= CAN_IFnCMSK_R_ARB_TRANSFER;

    u32ID = 0UL;
    u32ID <<= 2UL;
    u32ID &= CAN_IFnARB2_R_ID_MASK;
    u32ArbReg2 |= u32ID;

    u32ArbReg2 |= CAN_IFnARB2_R_MSGVAL_READY;

    u32Length = 8UL;
    u32Length &= CAN_IFnMCTL_R_DLC_MASK;
    u32MsgCtrl |= u32Length;

    u32MsgCtrl |= CAN_IFnMCTL_R_EOB_END;
    u32MsgCtrl |= CAN_IFnMCTL_R_RXIE_SET;

    CAN1_IF1CMSK_R = (uint32_t) u32CmdMaskReg;
    CAN1_IF1MSK1_R = 0UL;
    CAN1_IF1MSK2_R = (uint32_t) u32MaskReg2;
    CAN1_IF1ARB1_R = 0UL;
    CAN1_IF1ARB2_R = (uint32_t) u32ArbReg2;
    CAN1_IF1MCTL_R = (uint32_t) u32MsgCtrl;
    CAN1_IF1CRQ_R = 1UL & CAN_IFnCRQ_R_MNUM_MASK;

}

void CAN0__vInit(void)
{
    CAN0_CTL_R = CAN_CTL_R_INIT_INIT;
    uint32_t u32Busy = 0UL;
    do
    {
        u32Busy = CAN0_IF1CRQ_R;
        u32Busy &= CAN_IFnCRQ_R_BUSY_MASK;
    }while(0UL != u32Busy);
    CAN0_IF1CMSK_R = CAN_IFnCMSK_R_WRNRD_REG2FIFO | CAN_IFnCMSK_R_ARB_TRANSFER | CAN_IFnCMSK_R_CONTROL_TRANSFER;
    CAN0_IF1ARB2_R = 0UL;
    CAN0_IF1MCTL_R = 0UL;

    uint32_t u32Message = 0UL;
    for(u32Message = 1UL; u32Message <= 32UL; u32Message++)
    {
        do
        {
            u32Busy = (uint32_t) CAN0_IF1CRQ_R;
            u32Busy &= CAN_IFnCRQ_R_BUSY_MASK;
        }while(0UL != u32Busy);
        CAN0_IF1CRQ_R = (uint32_t) u32Message;
    }

    CAN0_IF1CMSK_R = CAN_IFnCMSK_R_NEWDAT_CLEAR | CAN_IFnCMSK_R_CLRINTPND_CLEAR;

    for(u32Message = 1UL; u32Message <= 32UL; u32Message++)
    {
        do
        {
            u32Busy = (uint32_t) CAN0_IF1CRQ_R;
            u32Busy &= CAN_IFnCRQ_R_BUSY_MASK;
        }while(0UL != u32Busy);
        CAN0_IF1CRQ_R = (uint32_t) u32Message;
    }

    uint32_t u32State = CAN0_STS_R;
}

void CAN1__vInit(void)
{
    CAN1_CTL_R = CAN_CTL_R_INIT_INIT;
    uint32_t u32Busy = 0UL;
    do
    {
        u32Busy = CAN1_IF1CRQ_R;
        u32Busy &= CAN_IFnCRQ_R_BUSY_MASK;
    }while(0UL != u32Busy);
    CAN1_IF1CMSK_R = CAN_IFnCMSK_R_WRNRD_REG2FIFO | CAN_IFnCMSK_R_ARB_TRANSFER | CAN_IFnCMSK_R_CONTROL_TRANSFER;
    CAN1_IF1ARB2_R = 0UL;
    CAN1_IF1MCTL_R = 0UL;

    uint32_t u32Message = 0UL;
    for(u32Message = 1UL; u32Message <= 32UL; u32Message++)
    {
        do
        {
            u32Busy = (uint32_t) CAN1_IF1CRQ_R;
            u32Busy &= CAN_IFnCRQ_R_BUSY_MASK;
        }while(0UL != u32Busy);
        CAN1_IF1CRQ_R = u32Message;
    }

    CAN1_IF1CMSK_R = CAN_IFnCMSK_R_NEWDAT_CLEAR | CAN_IFnCMSK_R_CLRINTPND_CLEAR;

    for(u32Message = 1UL; u32Message <= 32UL; u32Message++)
    {
        do
        {
            u32Busy = CAN1_IF1CRQ_R;
            u32Busy &= CAN_IFnCRQ_R_BUSY_MASK;
        }while(0UL != u32Busy);
        CAN1_IF1CRQ_R = u32Message;
    }

    uint32_t u32State = CAN1_STS_R;
}

#define CAN_MIN_BIT_DIVISOR     4
#define CAN_MAX_BIT_DIVISOR     19
#define CAN_MAX_PRE_DIVISOR     1024
#define CAN_MIN_PRE_DIVISOR     1
#define CAN_BIT_VALUE(seg1, seg2, sjw)                            \
                    ((((seg1 - 1) << CAN_BIT_R_TSEG1_BIT) &           \
                      CAN_BIT_R_TSEG1_MASK) |                          \
                     (((seg2 - 1) << CAN_BIT_R_TSEG2_BIT) &           \
                      CAN_BIT_R_TSEG2_MASK) |                          \
                     (((sjw - 1) << CAN_BIT_R_SJW_BIT) &              \
                      CAN_BIT_R_SJW_MASK))

static const uint16_t CAN__u16CANBitValues[] =
{
    CAN_BIT_VALUE(2, 1, 1),     /* 4 clocks/bit*/
    CAN_BIT_VALUE(3, 1, 1),     /* 5 clocks/bit*/
    CAN_BIT_VALUE(3, 2, 2),     /* 6 clocks/bit*/
    CAN_BIT_VALUE(4, 2, 2),     /* 7 clocks/bit*/
    CAN_BIT_VALUE(4, 3, 3),     /* 8 clocks/bit*/
    CAN_BIT_VALUE(5, 3, 3),     /* 9 clocks/bit*/
    CAN_BIT_VALUE(5, 4, 4),     /* 10 clocks/bit*/
    CAN_BIT_VALUE(6, 4, 4),     /* 11 clocks/bit*/
    CAN_BIT_VALUE(6, 5, 4),     /* 12 clocks/bit*/
    CAN_BIT_VALUE(7, 5, 4),     /* 13 clocks/bit*/
    CAN_BIT_VALUE(7, 6, 4),     /* 14 clocks/bit*/
    CAN_BIT_VALUE(8, 6, 4),     /* 15 clocks/bit*/
    CAN_BIT_VALUE(8, 7, 4),     /* 16 clocks/bit*/
    CAN_BIT_VALUE(9, 7, 4),     /* 17 clocks/bit*/
    CAN_BIT_VALUE(9, 8, 4),     /* 18 clocks/bit*/
    CAN_BIT_VALUE(10, 8, 4)     /* 19 clocks/bit*/
};

uint32_t CAN0__u32BitRateSet(uint32_t u32BitRate)
{
    uint32_t u32DesiredRatio = 0UL;
    uint32_t u32SourceClock = 0UL;
    uint16_t u16CANCTL = 0U;

    if(0UL !=  u32BitRate)
    {
        u32SourceClock = SYSCTL__u32GetSystemClock();
        u32DesiredRatio = u32SourceClock;
        u32DesiredRatio /= u32BitRate;
        u32DesiredRatio /= 5UL;

        u16CANCTL = (uint16_t) CAN0_CTL_R;
        CAN0_CTL_R = u16CANCTL | CAN_CTL_R_INIT_INIT |
                                 CAN_CTL_R_CCE_ENA;

        CAN0_BIT->BRP = u32DesiredRatio - 1UL;
        CAN0_BIT->TSEG1 = 3UL - 1UL;
        CAN0_BIT->TSEG2 = 1UL - 1UL;
        CAN0_BIT->SJW = 1UL - 1UL;

        CAN0_CTL_R = (uint32_t) u16CANCTL;

    }
    return(0UL);
}

uint32_t CAN1__u32BitRateSet(uint32_t u32BitRate)
{
    uint32_t u32DesiredRatio = 0UL;
    uint32_t u32SourceClock = 0UL;
    uint16_t u16CANCTL = 0U;

    if(0UL !=  u32BitRate)
    {
        if(0UL !=  u32BitRate)
        {
            u32SourceClock = SYSCTL__u32GetSystemClock();
            u32DesiredRatio = u32SourceClock;
            u32DesiredRatio /= u32BitRate;
            u32DesiredRatio /= 5UL;

            u16CANCTL = (uint16_t) CAN1_CTL_R;
            CAN1_CTL_R = u16CANCTL | CAN_CTL_R_INIT_INIT |
                                     CAN_CTL_R_CCE_ENA;

            CAN1_BIT->BRP = u32DesiredRatio - 1UL;
            CAN1_BIT->TSEG1 = 3UL - 1UL;
            CAN1_BIT->TSEG2 = 1UL - 1UL;
            CAN1_BIT->SJW = 1UL - 1UL;

            CAN1_CTL_R = (uint32_t) u16CANCTL;

        }
    }
    return(0UL);
}


void CAN0_ISR(void)
{
    uint32_t u32Status = 0UL;

    u32Status = CAN0_INT_R;

    if(u32Status == CAN_INT_R_INTID_STATUS)
    {
        uint32_t u32Reg = 0UL;
        u32Reg = CAN0_STS_R;
        CAN0_STS_R = ~(CAN_STS_R_RXOK_OK | CAN_STS_R_TXOK_OK |
                                        CAN_STS_R_LEC_MASK);
    }
    else if(u32Status == CAN_INT_R_INTID_MSG1)
    {
        uint32_t u32Busy = 0UL;
        do
        {
            u32Busy = CAN0_IF1CRQ_R;
            u32Busy &= CAN_IFnCRQ_R_BUSY_MASK;
        }while(0UL != u32Busy);

        CAN0_IF1CMSK_R = CAN_IFnCMSK_R_CLRINTPND_CLEAR;
        CAN0_IF1CRQ_R = 1UL;

        do
        {
            u32Busy = CAN0_IF1CRQ_R;
            u32Busy &= CAN_IFnCRQ_R_BUSY_MASK;
        }while(0UL != u32Busy);

    }

}

void CAN1_ISR(void)
{
    uint32_t u32Status = 0UL;

    u32Status = CAN1_INT_R;

    if(u32Status == CAN_INT_R_INTID_STATUS)
    {
        uint32_t u32Reg = 0UL;
        u32Reg = CAN1_STS_R;
        CAN1_STS_R = ~(CAN_STS_R_RXOK_OK | CAN_STS_R_TXOK_OK |
                                        CAN_STS_R_LEC_MASK);
    }
    else if(u32Status == CAN_INT_R_INTID_MSG1)
    {
        uint32_t u32Busy = 0UL;
        do
        {
            u32Busy = CAN1_IF1CRQ_R;
            u32Busy &= CAN_IFnCRQ_R_BUSY_MASK;
        }while(0UL != u32Busy);

        CAN1_IF1CMSK_R = CAN_IFnCMSK_R_CLRINTPND_CLEAR;
        CAN1_IF1CRQ_R = 1UL;

        do
        {
            u32Busy = CAN1_IF1CRQ_R;
            u32Busy &= CAN_IFnCRQ_R_BUSY_MASK;
        }while(0UL != u32Busy);

    }

}
