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
    uint32_t u32Reg;
    uint32_t u32Ready;
    uint32_t u32DMAEnable;
    uint32_t u32InterruptType;
    uint32_t u32PendingReg;
    GPIO_pvfIRQSourceHandler_t pvfCallback;

    u32Ready = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & u32Ready))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_MAX);
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        u32DMAEnable = GPIOP_DMACTL_R;
        u32InterruptType = GPIOP_SI_R;
        u32InterruptType &= GPIO_SI_R_SUM_MASK;
        if(GPIO_SI_R_SUM_SINGLE == u32InterruptType)
        {
            u32PendingReg = NVIC_ICPR2_R;
            if(0UL == (((uint32_t) GPIO_enPINMASK_0) & u32Reg))
            {
                pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_MAX);
            }
            else
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_ALL;
                if((uint32_t) GPIO_MIS_R_DMAMIS_ACTIVE & u32Reg)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    if((uint32_t) GPIO_enPINMASK_0 & u32DMAEnable)
                    {
                        pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_0);
                        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_0);
                    }
                    if((uint32_t) GPIO_enPINMASK_1 & u32DMAEnable)
                    {
                        if(u32PendingReg & NVIC_ICPR2_R_NVIC_GPIOP1_ENA)
                        {
                            NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP1_ENA;
                            pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_1);
                            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_1);
                        }
                    }
                    if((uint32_t) GPIO_enPINMASK_2 & u32DMAEnable)
                    {
                        if(u32PendingReg & NVIC_ICPR2_R_NVIC_GPIOP2_ENA)
                        {
                            NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP2_ENA;
                            pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_2);
                            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_2);
                        }
                    }
                    if((uint32_t) GPIO_enPINMASK_3 & u32DMAEnable)
                    {
                        if(u32PendingReg & NVIC_ICPR2_R_NVIC_GPIOP3_ENA)
                        {
                            NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP3_ENA;
                            pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_3);
                            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_3);
                        }
                    }
                    if((uint32_t) GPIO_enPINMASK_4 & u32DMAEnable)
                    {
                        if(u32PendingReg & NVIC_ICPR2_R_NVIC_GPIOP4_ENA)
                        {
                            NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP4_ENA;
                            pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_4);
                            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_4);
                        }
                    }
                    if((uint32_t) GPIO_enPINMASK_5 & u32DMAEnable)
                    {
                        if(u32PendingReg & NVIC_ICPR2_R_NVIC_GPIOP5_ENA)
                        {
                            NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP5_ENA;
                            pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_5);
                            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_5);
                        }
                    }
                    if((uint32_t) GPIO_enPINMASK_6 & u32DMAEnable)
                    {
                        if(u32PendingReg & NVIC_ICPR2_R_NVIC_GPIOP6_ENA)
                        {
                            NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP6_ENA;
                            pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_6);
                            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_6);
                        }
                    }
                    if((uint32_t) GPIO_enPINMASK_7 & u32DMAEnable)
                    {
                        if(u32PendingReg & NVIC_ICPR2_R_NVIC_GPIOP7_ENA)
                        {
                            NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP7_ENA;
                            pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_7);
                            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_7);
                        }
                    }
                }
                if((uint32_t) GPIO_enPINMASK_0  & u32Reg)
                {
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_0);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_0);
                }
                if(u32PendingReg & NVIC_ICPR2_R_NVIC_GPIOP1_ENA)
                {
                    NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP1_ENA;
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_1);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_1);
                }
                if(u32PendingReg & NVIC_ICPR2_R_NVIC_GPIOP2_ENA)
                {
                    NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP2_ENA;
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_2);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_2);
                }
                if(u32PendingReg & NVIC_ICPR2_R_NVIC_GPIOP3_ENA)
                {
                    NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP3_ENA;
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_3);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_3);
                }
                if(u32PendingReg & NVIC_ICPR2_R_NVIC_GPIOP4_ENA)
                {
                    NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP4_ENA;
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_4);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_4);
                }
                if(u32PendingReg & NVIC_ICPR2_R_NVIC_GPIOP5_ENA)
                {
                    NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP5_ENA;
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_5);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_5);
                }
                if(u32PendingReg & NVIC_ICPR2_R_NVIC_GPIOP6_ENA)
                {
                    NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP6_ENA;
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_6);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_6);
                }
                if(u32PendingReg & NVIC_ICPR2_R_NVIC_GPIOP7_ENA)
                {
                    NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP7_ENA;
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_7);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_7);
                }
            }
        }
        else
        {
            if(0UL == (((uint32_t) GPIO_enPINMASK_0) & u32Reg))
            {
                pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_0);
            }
            else
            {
                if((uint32_t) GPIO_MIS_R_DMAMIS_ACTIVE & u32Reg)
                {
                    u32DMAEnable &= u32Reg;
                    if((uint32_t) GPIO_enPINMASK_0 & u32DMAEnable)
                    {
                        GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                        GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_0;
                        pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_0);
                        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_0);
                    }
                }
                if((uint32_t) GPIO_enPINMASK_0 & u32Reg)
                {
                    GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_0;
                    pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_0);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_0);
                }
            }
        }
    }
}

void GPIOP1__vIRQVectorHandler(void)
{
    uint32_t u32Reg;
    uint32_t u32Ready;
    uint32_t u32DMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    u32Ready = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & u32Ready))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_1);
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        if(0UL == (((uint32_t) GPIO_enPINMASK_1) & u32Reg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_1);
        }
        else
        {
            if((uint32_t) GPIO_MIS_R_DMAMIS_ACTIVE & u32Reg)
            {
                u32DMAEnable = GPIOP_DMACTL_R;
                u32DMAEnable &= u32Reg;
                if((uint32_t) GPIO_enPINMASK_1 & u32DMAEnable)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_1;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_1);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_1);
                }
            }
            if((uint32_t) GPIO_enPINMASK_1 & u32Reg)
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_1;
                pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_1);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_1);
            }
        }
    }
}

void GPIOP2__vIRQVectorHandler(void)
{
    uint32_t u32Reg;
    uint32_t u32Ready;
    uint32_t u32DMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    u32Ready = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & u32Ready))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_2);
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        if(0UL == (((uint32_t) GPIO_enPINMASK_2) & u32Reg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_2);
        }
        else
        {
            if((uint32_t) GPIO_MIS_R_DMAMIS_ACTIVE & u32Reg)
            {
                u32DMAEnable = GPIOP_DMACTL_R;
                u32DMAEnable &= u32Reg;
                if((uint32_t) GPIO_enPINMASK_2 & u32DMAEnable)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_2;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_2);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_2);
                }
            }
            if((uint32_t) GPIO_enPINMASK_2 & u32Reg)
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_2;
                pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_2);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_2);
            }
        }
    }
}

void GPIOP3__vIRQVectorHandler(void)
{
    uint32_t u32Reg;
    uint32_t u32Ready;
    uint32_t u32DMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    u32Ready = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & u32Ready))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_3);
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        if(0UL == (((uint32_t) GPIO_enPINMASK_3) & u32Reg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_3);
        }
        else
        {
            if((uint32_t) GPIO_MIS_R_DMAMIS_ACTIVE & u32Reg)
            {
                u32DMAEnable = GPIOP_DMACTL_R;
                u32DMAEnable &= u32Reg;
                if((uint32_t) GPIO_enPINMASK_3 & u32DMAEnable)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_3;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_3);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_3);
                }
            }
            if((uint32_t) GPIO_enPINMASK_3 & u32Reg)
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_3;
                pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_3);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_3);
            }
        }
    }
}


void GPIOP4__vIRQVectorHandler(void)
{
    uint32_t u32Reg;
    uint32_t u32Ready;
    uint32_t u32DMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    u32Ready = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & u32Ready))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_4);
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        if(0UL == (((uint32_t) GPIO_enPINMASK_4) & u32Reg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_4);
        }
        else
        {
            if((uint32_t) GPIO_MIS_R_DMAMIS_ACTIVE & u32Reg)
            {
                u32DMAEnable = GPIOP_DMACTL_R;
                u32DMAEnable &= u32Reg;
                if((uint32_t) GPIO_enPINMASK_4 & u32DMAEnable)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_4;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_4);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_4);
                }
            }
            if((uint32_t) GPIO_enPINMASK_4 & u32Reg)
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_4;
                pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_4);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_4);
            }
        }
    }
}

void GPIOP5__vIRQVectorHandler(void)
{
    uint32_t u32Reg;
    uint32_t u32Ready;
    uint32_t u32DMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    u32Ready = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & u32Ready))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_5);
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        if(0UL == (((uint32_t) GPIO_enPINMASK_5) & u32Reg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_5);
        }
        else
        {
            if((uint32_t) GPIO_MIS_R_DMAMIS_ACTIVE & u32Reg)
            {
                u32DMAEnable = GPIOP_DMACTL_R;
                u32DMAEnable &= u32Reg;
                if((uint32_t) GPIO_enPINMASK_5 & u32DMAEnable)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_5;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_5);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_5);
                }
            }
            if((uint32_t) GPIO_enPINMASK_5 & u32Reg)
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_5;
                pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_5);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_5);
            }
        }
    }
}

void GPIOP6__vIRQVectorHandler(void)
{
    uint32_t u32Reg;
    uint32_t u32Ready;
    uint32_t u32DMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    u32Ready = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & u32Ready))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_6);
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        if(0UL == (((uint32_t) GPIO_enPINMASK_6) & u32Reg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_6);
        }
        else
        {
            if((uint32_t) GPIO_MIS_R_DMAMIS_ACTIVE & u32Reg)
            {
                u32DMAEnable = GPIOP_DMACTL_R;
                u32DMAEnable &= u32Reg;
                if((uint32_t) GPIO_enPINMASK_6 & u32DMAEnable)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_6;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_6);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_6);
                }
            }
            if((uint32_t) GPIO_enPINMASK_6 & u32Reg)
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_6;
                pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_6);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_6);
            }
        }
    }
}

void GPIOP7__vIRQVectorHandler(void)
{
    uint32_t u32Reg;
    uint32_t u32Ready;
    uint32_t u32DMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    u32Ready = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & u32Ready))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_7);
    }
    else
    {
        u32Reg = GPIOP_MIS_R;
        if(0UL == (((uint32_t) GPIO_enPINMASK_7) & u32Reg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_7);
        }
        else
        {
            if((uint32_t) GPIO_MIS_R_DMAMIS_ACTIVE & u32Reg)
            {
                u32DMAEnable = GPIOP_DMACTL_R;
                u32DMAEnable &= u32Reg;
                if((uint32_t) GPIO_enPINMASK_7 & u32DMAEnable)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_7;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_7);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_7);
                }
            }
            if((uint32_t) GPIO_enPINMASK_7 & u32Reg)
            {
                GPIOP_ICR_R = (uint32_t) GPIO_enPINMASK_7;
                pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_7);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_7);
            }
        }
    }
}
