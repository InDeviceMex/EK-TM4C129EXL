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
    UBase_t uxReg;
    UBase_t uxReady;
    UBase_t uxDMAEnable;
    UBase_t uxInterruptType;
    UBase_t uxPendingReg;
    GPIO_pvfIRQSourceHandler_t pvfCallback;

    uxReady = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & uxReady))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_MAX);
    }
    else
    {
        uxReg = GPIOP_MIS_R;
        uxDMAEnable = GPIOP_DMACTL_R;
        uxInterruptType = GPIOP_SI_R;
        uxInterruptType &= GPIO_SI_R_SUM_MASK;
        if(GPIO_SI_R_SUM_SINGLE == uxInterruptType)
        {
            uxPendingReg = NVIC_ICPR2_R;
            if(0UL == (((UBase_t) GPIO_enPINMASK_0) & uxReg))
            {
                pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_MAX);
            }
            else
            {
                GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_ALL;
                if((UBase_t) GPIO_MIS_R_DMAMIS_ACTIVE & uxReg)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    if((UBase_t) GPIO_enPINMASK_0 & uxDMAEnable)
                    {
                        pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_0);
                        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_0);
                    }
                    if((UBase_t) GPIO_enPINMASK_1 & uxDMAEnable)
                    {
                        if(uxPendingReg & NVIC_ICPR2_R_NVIC_GPIOP1_ENA)
                        {
                            NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP1_ENA;
                            pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_1);
                            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_1);
                        }
                    }
                    if((UBase_t) GPIO_enPINMASK_2 & uxDMAEnable)
                    {
                        if(uxPendingReg & NVIC_ICPR2_R_NVIC_GPIOP2_ENA)
                        {
                            NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP2_ENA;
                            pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_2);
                            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_2);
                        }
                    }
                    if((UBase_t) GPIO_enPINMASK_3 & uxDMAEnable)
                    {
                        if(uxPendingReg & NVIC_ICPR2_R_NVIC_GPIOP3_ENA)
                        {
                            NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP3_ENA;
                            pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_3);
                            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_3);
                        }
                    }
                    if((UBase_t) GPIO_enPINMASK_4 & uxDMAEnable)
                    {
                        if(uxPendingReg & NVIC_ICPR2_R_NVIC_GPIOP4_ENA)
                        {
                            NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP4_ENA;
                            pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_4);
                            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_4);
                        }
                    }
                    if((UBase_t) GPIO_enPINMASK_5 & uxDMAEnable)
                    {
                        if(uxPendingReg & NVIC_ICPR2_R_NVIC_GPIOP5_ENA)
                        {
                            NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP5_ENA;
                            pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_5);
                            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_5);
                        }
                    }
                    if((UBase_t) GPIO_enPINMASK_6 & uxDMAEnable)
                    {
                        if(uxPendingReg & NVIC_ICPR2_R_NVIC_GPIOP6_ENA)
                        {
                            NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP6_ENA;
                            pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_6);
                            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_6);
                        }
                    }
                    if((UBase_t) GPIO_enPINMASK_7 & uxDMAEnable)
                    {
                        if(uxPendingReg & NVIC_ICPR2_R_NVIC_GPIOP7_ENA)
                        {
                            NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP7_ENA;
                            pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_7);
                            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_7);
                        }
                    }
                }
                if((UBase_t) GPIO_enPINMASK_0  & uxReg)
                {
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_0);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_0);
                }
                if(uxPendingReg & NVIC_ICPR2_R_NVIC_GPIOP1_ENA)
                {
                    NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP1_ENA;
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_1);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_1);
                }
                if(uxPendingReg & NVIC_ICPR2_R_NVIC_GPIOP2_ENA)
                {
                    NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP2_ENA;
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_2);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_2);
                }
                if(uxPendingReg & NVIC_ICPR2_R_NVIC_GPIOP3_ENA)
                {
                    NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP3_ENA;
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_3);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_3);
                }
                if(uxPendingReg & NVIC_ICPR2_R_NVIC_GPIOP4_ENA)
                {
                    NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP4_ENA;
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_4);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_4);
                }
                if(uxPendingReg & NVIC_ICPR2_R_NVIC_GPIOP5_ENA)
                {
                    NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP5_ENA;
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_5);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_5);
                }
                if(uxPendingReg & NVIC_ICPR2_R_NVIC_GPIOP6_ENA)
                {
                    NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP6_ENA;
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_6);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_6);
                }
                if(uxPendingReg & NVIC_ICPR2_R_NVIC_GPIOP7_ENA)
                {
                    NVIC_ICPR2_R = NVIC_ICPR2_R_NVIC_GPIOP7_ENA;
                    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_7);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_7);
                }
            }
        }
        else
        {
            if(0UL == (((UBase_t) GPIO_enPINMASK_0) & uxReg))
            {
                pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_0);
            }
            else
            {
                if((UBase_t) GPIO_MIS_R_DMAMIS_ACTIVE & uxReg)
                {
                    uxDMAEnable &= uxReg;
                    if((UBase_t) GPIO_enPINMASK_0 & uxDMAEnable)
                    {
                        GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                        GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_0;
                        pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_0);
                        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_0);
                    }
                }
                if((UBase_t) GPIO_enPINMASK_0 & uxReg)
                {
                    GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_0;
                    pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_0);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_0);
                }
            }
        }
    }
}

void GPIOP1__vIRQVectorHandler(void)
{
    UBase_t uxReg;
    UBase_t uxReady;
    UBase_t uxDMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    uxReady = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & uxReady))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_1);
    }
    else
    {
        uxReg = GPIOP_MIS_R;
        if(0UL == (((UBase_t) GPIO_enPINMASK_1) & uxReg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_1);
        }
        else
        {
            if((UBase_t) GPIO_MIS_R_DMAMIS_ACTIVE & uxReg)
            {
                uxDMAEnable = GPIOP_DMACTL_R;
                uxDMAEnable &= uxReg;
                if((UBase_t) GPIO_enPINMASK_1 & uxDMAEnable)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_1;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_1);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_1);
                }
            }
            if((UBase_t) GPIO_enPINMASK_1 & uxReg)
            {
                GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_1;
                pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_1);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_1);
            }
        }
    }
}

void GPIOP2__vIRQVectorHandler(void)
{
    UBase_t uxReg;
    UBase_t uxReady;
    UBase_t uxDMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    uxReady = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & uxReady))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_2);
    }
    else
    {
        uxReg = GPIOP_MIS_R;
        if(0UL == (((UBase_t) GPIO_enPINMASK_2) & uxReg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_2);
        }
        else
        {
            if((UBase_t) GPIO_MIS_R_DMAMIS_ACTIVE & uxReg)
            {
                uxDMAEnable = GPIOP_DMACTL_R;
                uxDMAEnable &= uxReg;
                if((UBase_t) GPIO_enPINMASK_2 & uxDMAEnable)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_2;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_2);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_2);
                }
            }
            if((UBase_t) GPIO_enPINMASK_2 & uxReg)
            {
                GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_2;
                pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_2);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_2);
            }
        }
    }
}

void GPIOP3__vIRQVectorHandler(void)
{
    UBase_t uxReg;
    UBase_t uxReady;
    UBase_t uxDMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    uxReady = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & uxReady))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_3);
    }
    else
    {
        uxReg = GPIOP_MIS_R;
        if(0UL == (((UBase_t) GPIO_enPINMASK_3) & uxReg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_3);
        }
        else
        {
            if((UBase_t) GPIO_MIS_R_DMAMIS_ACTIVE & uxReg)
            {
                uxDMAEnable = GPIOP_DMACTL_R;
                uxDMAEnable &= uxReg;
                if((UBase_t) GPIO_enPINMASK_3 & uxDMAEnable)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_3;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_3);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_3);
                }
            }
            if((UBase_t) GPIO_enPINMASK_3 & uxReg)
            {
                GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_3;
                pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_3);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_3);
            }
        }
    }
}


void GPIOP4__vIRQVectorHandler(void)
{
    UBase_t uxReg;
    UBase_t uxReady;
    UBase_t uxDMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    uxReady = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & uxReady))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_4);
    }
    else
    {
        uxReg = GPIOP_MIS_R;
        if(0UL == (((UBase_t) GPIO_enPINMASK_4) & uxReg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_4);
        }
        else
        {
            if((UBase_t) GPIO_MIS_R_DMAMIS_ACTIVE & uxReg)
            {
                uxDMAEnable = GPIOP_DMACTL_R;
                uxDMAEnable &= uxReg;
                if((UBase_t) GPIO_enPINMASK_4 & uxDMAEnable)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_4;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_4);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_4);
                }
            }
            if((UBase_t) GPIO_enPINMASK_4 & uxReg)
            {
                GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_4;
                pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_4);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_4);
            }
        }
    }
}

void GPIOP5__vIRQVectorHandler(void)
{
    UBase_t uxReg;
    UBase_t uxReady;
    UBase_t uxDMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    uxReady = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & uxReady))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_5);
    }
    else
    {
        uxReg = GPIOP_MIS_R;
        if(0UL == (((UBase_t) GPIO_enPINMASK_5) & uxReg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_5);
        }
        else
        {
            if((UBase_t) GPIO_MIS_R_DMAMIS_ACTIVE & uxReg)
            {
                uxDMAEnable = GPIOP_DMACTL_R;
                uxDMAEnable &= uxReg;
                if((UBase_t) GPIO_enPINMASK_5 & uxDMAEnable)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_5;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_5);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_5);
                }
            }
            if((UBase_t) GPIO_enPINMASK_5 & uxReg)
            {
                GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_5;
                pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_5);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_5);
            }
        }
    }
}

void GPIOP6__vIRQVectorHandler(void)
{
    UBase_t uxReg;
    UBase_t uxReady;
    UBase_t uxDMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    uxReady = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & uxReady))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_6);
    }
    else
    {
        uxReg = GPIOP_MIS_R;
        if(0UL == (((UBase_t) GPIO_enPINMASK_6) & uxReg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_6);
        }
        else
        {
            if((UBase_t) GPIO_MIS_R_DMAMIS_ACTIVE & uxReg)
            {
                uxDMAEnable = GPIOP_DMACTL_R;
                uxDMAEnable &= uxReg;
                if((UBase_t) GPIO_enPINMASK_6 & uxDMAEnable)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_6;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_6);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_6);
                }
            }
            if((UBase_t) GPIO_enPINMASK_6 & uxReg)
            {
                GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_6;
                pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_6);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_6);
            }
        }
    }
}

void GPIOP7__vIRQVectorHandler(void)
{
    UBase_t uxReg;
    UBase_t uxReady;
    UBase_t uxDMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    uxReady = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOP_NOREADY == (SYSCTL_PRGPIO_R_GPIOP_MASK & uxReady))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
        pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_7);
    }
    else
    {
        uxReg = GPIOP_MIS_R;
        if(0UL == (((UBase_t) GPIO_enPINMASK_7) & uxReg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_P);
            pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_7);
        }
        else
        {
            if((UBase_t) GPIO_MIS_R_DMAMIS_ACTIVE & uxReg)
            {
                uxDMAEnable = GPIOP_DMACTL_R;
                uxDMAEnable &= uxReg;
                if((UBase_t) GPIO_enPINMASK_7 & uxDMAEnable)
                {
                    GPIOP_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                    GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_7;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_7);
                    pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_7);
                }
            }
            if((UBase_t) GPIO_enPINMASK_7 & uxReg)
            {
                GPIOP_ICR_R = (UBase_t) GPIO_enPINMASK_7;
                pvfCallback = GPIO_PQ__pvfGetIRQSourceHandler(GPIO_enPORT_P, GPIO_enPIN_7);
                pvfCallback(GPIOP_BASE, (void*) GPIO_enPIN_7);
            }
        }
    }
}
