/**
 *
 * @file GPIO_InterruptRoutine_Vector_GPIOQ.c
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
 * @verbatim 9 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/GPIO/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOQ.h>

#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Dependencies.h>

void GPIOQ__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32DMaReq = 0UL;
    volatile uint32_t u32IntType = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = GPIOQ_MIS_R;
    u32IntType = GPIOQ_SI_R;
    u32IntType &= GPIO_SI_R_SUM_MASK;
    if(GPIO_SI_R_SUM_SINGLE == u32IntType)
    {

        if((uint32_t) GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
        {
            GPIOQ_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
            pfvCallback = GPIO__pvfGetIRQSourceDMAHandler(GPIO_enPORT_Q);
            pfvCallback();
        }

        if((uint32_t) GPIO_enPIN_0 & u32Reg)
        {
            GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_0;
            pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER0);
            pfvCallback();
        }
        if((uint32_t) GPIO_enPIN_1 & u32Reg)
        {
            GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_1;
            pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER1);
            pfvCallback();
        }
        if((uint32_t) GPIO_enPIN_2 & u32Reg)
        {
            GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_2;
            pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER2);
            pfvCallback();
        }
        if((uint32_t) GPIO_enPIN_3 & u32Reg)
        {
            GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_3;
            pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER3);
            pfvCallback();
        }
        if((uint32_t) GPIO_enPIN_4 & u32Reg)
        {
            GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_4;
            pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER4);
            pfvCallback();
        }
        if((uint32_t) GPIO_enPIN_5 & u32Reg)
        {
            GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_5;
            pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER5);
            pfvCallback();
        }
        if((uint32_t) GPIO_enPIN_6 & u32Reg)
        {
            GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_6;
            pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER6);
            pfvCallback();
        }
        if((uint32_t) GPIO_enPIN_7 & u32Reg)
        {
            GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_7;
            pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER7);
            pfvCallback();
        }
    }
    else
    {
        u32DMaReq = GPIOQ_DMACTL_R;
        if( GPIO_DMACTL_R_DMAEN0_ENA & u32DMaReq)
        {
            if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
            {
                GPIOQ_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                pfvCallback = GPIO__pvfGetIRQSourceDMAHandler(GPIO_enPORT_Q);
                pfvCallback();
            }
        }

        GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_0;
        pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER0);
        pfvCallback();
    }
}

void GPIOQ1__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32DMaReq = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = GPIOQ_MIS_R;
    u32DMaReq = GPIOQ_DMACTL_R;
    if( GPIO_DMACTL_R_DMAEN1_ENA & u32DMaReq)
    {
        if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
        {
            GPIOQ_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
            pfvCallback = GPIO__pvfGetIRQSourceDMAHandler(GPIO_enPORT_Q);
            pfvCallback();
        }
    }

    GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_1;
    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER1);
    pfvCallback();
}

void GPIOQ2__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32DMaReq = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = GPIOQ_MIS_R;
    u32DMaReq = GPIOQ_DMACTL_R;
    if( GPIO_DMACTL_R_DMAEN2_ENA & u32DMaReq)
    {
        if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
        {
            GPIOQ_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
            pfvCallback = GPIO__pvfGetIRQSourceDMAHandler(GPIO_enPORT_Q);
            pfvCallback();
        }
    }

    GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_2;
    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER2);
    pfvCallback();
}

void GPIOQ3__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32DMaReq = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = GPIOQ_MIS_R;
    u32DMaReq = GPIOQ_DMACTL_R;
    if( GPIO_DMACTL_R_DMAEN3_ENA & u32DMaReq)
    {
        if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
        {
            GPIOQ_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
            pfvCallback = GPIO__pvfGetIRQSourceDMAHandler(GPIO_enPORT_Q);
            pfvCallback();
        }
    }

    GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_3;
    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER3);
    pfvCallback();
}

void GPIOQ4__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32DMaReq = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = GPIOQ_MIS_R;
    u32DMaReq = GPIOQ_DMACTL_R;
    if( GPIO_DMACTL_R_DMAEN4_ENA & u32DMaReq)
    {
        if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
        {
            GPIOQ_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
            pfvCallback = GPIO__pvfGetIRQSourceDMAHandler(GPIO_enPORT_Q);
            pfvCallback();
        }
    }

    GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_4;
    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER4);
    pfvCallback();
}

void GPIOQ5__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32DMaReq = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = GPIOQ_MIS_R;
    u32DMaReq = GPIOQ_DMACTL_R;
    if( GPIO_DMACTL_R_DMAEN5_ENA & u32DMaReq)
    {
        if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
        {
            GPIOQ_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
            pfvCallback = GPIO__pvfGetIRQSourceDMAHandler(GPIO_enPORT_Q);
            pfvCallback();
        }
    }

    GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_5;
    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER5);
    pfvCallback();
}

void GPIOQ6__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32DMaReq = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = GPIOQ_MIS_R;
    u32DMaReq = GPIOQ_DMACTL_R;
    if( GPIO_DMACTL_R_DMAEN6_ENA & u32DMaReq)
    {
        if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
        {
            GPIOQ_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
            pfvCallback = GPIO__pvfGetIRQSourceDMAHandler(GPIO_enPORT_Q);
            pfvCallback();
        }
    }

    GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_6;
    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER6);
    pfvCallback();
}

void GPIOQ7__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32DMaReq = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = GPIOQ_MIS_R;
    u32DMaReq = GPIOQ_DMACTL_R;
    if( GPIO_DMACTL_R_DMAEN7_ENA & u32DMaReq)
    {
        if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
        {
            GPIOQ_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
            pfvCallback = GPIO__pvfGetIRQSourceDMAHandler(GPIO_enPORT_Q);
            pfvCallback();
        }
    }

    GPIOQ_ICR_R = (uint32_t) GPIO_enPIN_7;
    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_Q, GPIO_enPIN_NUMBER7);
    pfvCallback();
}
