/**
 *
 * @file GPIO_InterruptRoutine_Vector_GPIOP.c
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
#include <xApplication_MCU/GPIO/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOP.h>

#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Dependencies.h>

void GPIOP__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Enable = 0U;
    volatile uint32_t u32DMaReq = 0UL;
    volatile uint32_t u32IntType = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Enable = SYSCTL_RCGCGPIO_R;
    u32Enable |= SYSCTL_SCGCGPIO_R;
    u32Enable |= SYSCTL_DCGCGPIO_R;
    if(SYSCTL_RCGCGPIO_R_GPIOP_DIS == (SYSCTL_RCGCGPIO_R_GPIOP_MASK & u32Enable))
    {
        pfvCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pfvCallback();
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        u32IntType = GPIOP_SI_R;
        u32IntType &= GPIO_SI_R_SUM_MASK;
        if(GPIO_SI_R_SUM_SINGLE == u32IntType)
        {
            if(0UL == (((uint32_t) GPIO_enPIN_ALL | GPIO_MIS_R_DMAMIS_OCCUR) & u32Reg))
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                pfvCallback();
            }
            else
            {
                if((uint32_t) GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    pfvCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_0 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_0;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_NUMBER0);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_1 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_1;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_NUMBER1);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_2 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_2;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_NUMBER2);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_3 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_3;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_NUMBER3);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_4 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_4;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_NUMBER4);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_5 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_5;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_NUMBER5);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_6 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_6;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_NUMBER6);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_7 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_7;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_NUMBER7);
                    pfvCallback();
                }
            }
        }
        else
        {
            u32DMaReq = GPIOP_DMACTL_R;
            if( GPIO_DMACTL_R_DMAEN0_ENA & u32DMaReq)
            {
                if(0UL == (((uint32_t) GPIO_enPIN_0 | GPIO_MIS_R_DMAMIS_OCCUR) & u32Reg))
                {
                    pfvCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                    pfvCallback();
                }
                else
                {
                    if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
                    {
                        GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                        pfvCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                        pfvCallback();
                    }
                    if((uint32_t) GPIO_enPIN_0 & u32Reg)
                    {
                        GPIOP_ICR_R = (uint32_t) GPIO_enPIN_0;
                        pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                                   GPIO_enPIN_NUMBER0);
                        pfvCallback();
                    }
                }

            }
            else
            {
                if((uint32_t) GPIO_enPIN_0 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_0;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                               GPIO_enPIN_NUMBER0);
                    pfvCallback();
                }
                else
                {
                    pfvCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                    pfvCallback();
                }
            }
        }
    }
}

void GPIOP1__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Enable = 0U;
    volatile uint32_t u32DMaReq = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Enable = SYSCTL_RCGCGPIO_R;
    u32Enable |= SYSCTL_SCGCGPIO_R;
    u32Enable |= SYSCTL_DCGCGPIO_R;
    if(SYSCTL_RCGCGPIO_R_GPIOP_DIS == (SYSCTL_RCGCGPIO_R_GPIOP_MASK & u32Enable))
    {
        pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                        GPIO_enPIN_NUMBER1);
        pfvCallback();
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        u32DMaReq = GPIOP_DMACTL_R;
        if( GPIO_DMACTL_R_DMAEN1_ENA & u32DMaReq)
        {
            if(0UL == (((uint32_t) GPIO_enPIN_1 | GPIO_MIS_R_DMAMIS_OCCUR) & u32Reg))
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                                 GPIO_enPIN_NUMBER1);
                pfvCallback();
            }
            else
            {
                if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    pfvCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_1 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_1;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                               GPIO_enPIN_NUMBER1);
                    pfvCallback();
                }
            }
        }
        else
        {
            if((uint32_t) GPIO_enPIN_1 & u32Reg)
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPIN_1;
                pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                           GPIO_enPIN_NUMBER1);
                pfvCallback();
            }
            else
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                                 GPIO_enPIN_NUMBER1);
                pfvCallback();
            }
        }
    }
}

void GPIOP2__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Enable = 0U;
    volatile uint32_t u32DMaReq = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Enable = SYSCTL_RCGCGPIO_R;
    u32Enable |= SYSCTL_SCGCGPIO_R;
    u32Enable |= SYSCTL_DCGCGPIO_R;
    if(SYSCTL_RCGCGPIO_R_GPIOP_DIS == (SYSCTL_RCGCGPIO_R_GPIOP_MASK & u32Enable))
    {
        pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                        GPIO_enPIN_NUMBER2);
        pfvCallback();
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        u32DMaReq = GPIOP_DMACTL_R;
        if( GPIO_DMACTL_R_DMAEN2_ENA & u32DMaReq)
        {
            if(0UL == (((uint32_t) GPIO_enPIN_2 | GPIO_MIS_R_DMAMIS_OCCUR) & u32Reg))
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                                 GPIO_enPIN_NUMBER2);
                pfvCallback();
            }
            else
            {
                if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    pfvCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_2 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_2;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                               GPIO_enPIN_NUMBER2);
                    pfvCallback();
                }
            }
        }
        else
        {
            if((uint32_t) GPIO_enPIN_2 & u32Reg)
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPIN_2;
                pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                           GPIO_enPIN_NUMBER2);
                pfvCallback();
            }
            else
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                                 GPIO_enPIN_NUMBER2);
                pfvCallback();
            }
        }
    }
}

void GPIOP3__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Enable = 0U;
    volatile uint32_t u32DMaReq = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Enable = SYSCTL_RCGCGPIO_R;
    u32Enable |= SYSCTL_SCGCGPIO_R;
    u32Enable |= SYSCTL_DCGCGPIO_R;
    if(SYSCTL_RCGCGPIO_R_GPIOP_DIS == (SYSCTL_RCGCGPIO_R_GPIOP_MASK & u32Enable))
    {
        pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                        GPIO_enPIN_NUMBER3);
        pfvCallback();
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        u32DMaReq = GPIOP_DMACTL_R;
        if( GPIO_DMACTL_R_DMAEN3_ENA & u32DMaReq)
        {
            if(0UL == (((uint32_t) GPIO_enPIN_3 | GPIO_MIS_R_DMAMIS_OCCUR) & u32Reg))
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                                 GPIO_enPIN_NUMBER3);
                pfvCallback();
            }
            else
            {
                if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    pfvCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_3 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_3;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                               GPIO_enPIN_NUMBER3);
                    pfvCallback();
                }
            }
        }
        else
        {
            if((uint32_t) GPIO_enPIN_3 & u32Reg)
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPIN_3;
                pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                           GPIO_enPIN_NUMBER3);
                pfvCallback();
            }
            else
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                                 GPIO_enPIN_NUMBER3);
                pfvCallback();
            }
        }
    }
}

void GPIOP4__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Enable = 0U;
    volatile uint32_t u32DMaReq = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Enable = SYSCTL_RCGCGPIO_R;
    u32Enable |= SYSCTL_SCGCGPIO_R;
    u32Enable |= SYSCTL_DCGCGPIO_R;
    if(SYSCTL_RCGCGPIO_R_GPIOP_DIS == (SYSCTL_RCGCGPIO_R_GPIOP_MASK & u32Enable))
    {
        pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                        GPIO_enPIN_NUMBER4);
        pfvCallback();
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        u32DMaReq = GPIOP_DMACTL_R;
        if( GPIO_DMACTL_R_DMAEN4_ENA & u32DMaReq)
        {
            if(0UL == (((uint32_t) GPIO_enPIN_4 | GPIO_MIS_R_DMAMIS_OCCUR) & u32Reg))
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                                 GPIO_enPIN_NUMBER4);
                pfvCallback();
            }
            else
            {
                if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    pfvCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_4 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_4;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                               GPIO_enPIN_NUMBER4);
                    pfvCallback();
                }
            }
        }
        else
        {
            if((uint32_t) GPIO_enPIN_4 & u32Reg)
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPIN_4;
                pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                           GPIO_enPIN_NUMBER4);
                pfvCallback();
            }
            else
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                                 GPIO_enPIN_NUMBER4);
                pfvCallback();
            }
        }
    }
}

void GPIOP5__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Enable = 0U;
    volatile uint32_t u32DMaReq = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Enable = SYSCTL_RCGCGPIO_R;
    u32Enable |= SYSCTL_SCGCGPIO_R;
    u32Enable |= SYSCTL_DCGCGPIO_R;
    if(SYSCTL_RCGCGPIO_R_GPIOP_DIS == (SYSCTL_RCGCGPIO_R_GPIOP_MASK & u32Enable))
    {
        pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                        GPIO_enPIN_NUMBER5);
        pfvCallback();
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        u32DMaReq = GPIOP_DMACTL_R;
        if( GPIO_DMACTL_R_DMAEN5_ENA & u32DMaReq)
        {
            if(0UL == (((uint32_t) GPIO_enPIN_5 | GPIO_MIS_R_DMAMIS_OCCUR) & u32Reg))
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                                 GPIO_enPIN_NUMBER5);
                pfvCallback();
            }
            else
            {
                if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    pfvCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_5 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_5;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                               GPIO_enPIN_NUMBER5);
                    pfvCallback();
                }
            }
        }
        else
        {
            if((uint32_t) GPIO_enPIN_5 & u32Reg)
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPIN_5;
                pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                           GPIO_enPIN_NUMBER5);
                pfvCallback();
            }
            else
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                                 GPIO_enPIN_NUMBER5);
                pfvCallback();
            }
        }
    }
}

void GPIOP6__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Enable = 0U;
    volatile uint32_t u32DMaReq = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Enable = SYSCTL_RCGCGPIO_R;
    u32Enable |= SYSCTL_SCGCGPIO_R;
    u32Enable |= SYSCTL_DCGCGPIO_R;
    if(SYSCTL_RCGCGPIO_R_GPIOP_DIS == (SYSCTL_RCGCGPIO_R_GPIOP_MASK & u32Enable))
    {
        pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                        GPIO_enPIN_NUMBER6);
        pfvCallback();
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        u32DMaReq = GPIOP_DMACTL_R;
        if( GPIO_DMACTL_R_DMAEN6_ENA & u32DMaReq)
        {
            if(0UL == (((uint32_t) GPIO_enPIN_6 | GPIO_MIS_R_DMAMIS_OCCUR) & u32Reg))
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                                 GPIO_enPIN_NUMBER6);
                pfvCallback();
            }
            else
            {
                if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    pfvCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_6 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_6;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                               GPIO_enPIN_NUMBER6);
                    pfvCallback();
                }
            }
        }
        else
        {
            if((uint32_t) GPIO_enPIN_6 & u32Reg)
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPIN_6;
                pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                           GPIO_enPIN_NUMBER6);
                pfvCallback();
            }
            else
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                                 GPIO_enPIN_NUMBER6);
                pfvCallback();
            }
        }
    }
}

void GPIOP7__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Enable = 0U;
    volatile uint32_t u32DMaReq = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Enable = SYSCTL_RCGCGPIO_R;
    u32Enable |= SYSCTL_SCGCGPIO_R;
    u32Enable |= SYSCTL_DCGCGPIO_R;
    if(SYSCTL_RCGCGPIO_R_GPIOP_DIS == (SYSCTL_RCGCGPIO_R_GPIOP_MASK & u32Enable))
    {
        pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                        GPIO_enPIN_NUMBER7);
        pfvCallback();
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        u32DMaReq = GPIOP_DMACTL_R;
        if( GPIO_DMACTL_R_DMAEN7_ENA & u32DMaReq)
        {
            if(0UL == (((uint32_t) GPIO_enPIN_7 | GPIO_MIS_R_DMAMIS_OCCUR) & u32Reg))
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                                 GPIO_enPIN_NUMBER7);
                pfvCallback();
            }
            else
            {
                if(GPIO_MIS_R_DMAMIS_OCCUR & u32Reg)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    pfvCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                    pfvCallback();
                }
                if((uint32_t) GPIO_enPIN_7 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPIN_7;
                    pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                               GPIO_enPIN_NUMBER7);
                    pfvCallback();
                }
            }
        }
        else
        {
            if((uint32_t) GPIO_enPIN_7 & u32Reg)
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPIN_7;
                pfvCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P,
                                                           GPIO_enPIN_NUMBER7);
                pfvCallback();
            }
            else
            {
                pfvCallback = GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_enPORT_P,
                                                                 GPIO_enPIN_NUMBER7);
                pfvCallback();
            }
        }
    }
}
