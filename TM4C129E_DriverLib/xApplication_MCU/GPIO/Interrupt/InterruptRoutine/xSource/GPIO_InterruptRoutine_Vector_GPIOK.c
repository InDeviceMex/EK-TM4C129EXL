/**
 *
 * @file GPIO_InterruptRoutine_Vector_GPIOK.c
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
#include <xApplication_MCU/GPIO/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOK.h>

#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Dependencies.h>

void GPIOK__vIRQVectorHandler(void)
{
    UBase_t uxReg;
    UBase_t uxReady;
    UBase_t uxDMAEnable;
    GPIO_pvfIRQSourceHandler_t pvfCallback;
    uxReady = SYSCTL_PRGPIO_R;
    if(SYSCTL_PRGPIO_R_GPIOK_NOREADY == (SYSCTL_PRGPIO_R_GPIOK_MASK & uxReady))
    {
        pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_K);
        pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_MAX);
    }
    else
    {
        uxReg = GPIOK_MIS_R;

        if(0UL == (((UBase_t) GPIO_enPINMASK_ALL) & uxReg))
        {
            pvfCallback = GPIO_SW__pvfGetIRQSourceHandler(GPIO_enPORT_K);
            pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_MAX);
        }
        else
        {
            if((UBase_t) GPIO_MIS_R_DMAMIS_ACTIVE & uxReg)
            {
                uxDMAEnable = GPIOK_DMACTL_R;
                uxDMAEnable &= uxReg;
                GPIOK_ICR_R = GPIO_ICR_R_DMAIC_CLEAR;
                if((UBase_t) GPIO_enPINMASK_0 & uxDMAEnable)
                {
                    GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_0;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_0);
                    pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_0);
                }
                if((UBase_t) GPIO_enPINMASK_1 & uxDMAEnable)
                {
                    GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_1;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_1);
                    pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_1);
                }
                if((UBase_t) GPIO_enPINMASK_2 & uxDMAEnable)
                {
                    GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_2;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_2);
                    pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_2);
                }
                if((UBase_t) GPIO_enPINMASK_3 & uxDMAEnable)
                {
                    GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_3;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_3);
                    pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_3);
                }
                if((UBase_t) GPIO_enPINMASK_4 & uxDMAEnable)
                {
                    GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_4;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_4);
                    pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_4);
                }
                if((UBase_t) GPIO_enPINMASK_5 & uxDMAEnable)
                {
                    GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_5;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_5);
                    pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_5);
                }
                if((UBase_t) GPIO_enPINMASK_6 & uxDMAEnable)
                {
                    GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_6;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_6);
                    pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_6);
                }
                if((UBase_t) GPIO_enPINMASK_7 & uxDMAEnable)
                {
                    GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_7;
                    pvfCallback = GPIO_DMA__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_7);
                    pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_7);
                }
            }
            if((UBase_t) GPIO_enPINMASK_0 & uxReg)
            {
                GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_0;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_0);
                pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_0);
            }
            if((UBase_t) GPIO_enPINMASK_1 & uxReg)
            {
                GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_1;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_1);
                pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_1);
            }
            if((UBase_t) GPIO_enPINMASK_2 & uxReg)
            {
                GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_2;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_2);
                pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_2);
            }
            if((UBase_t) GPIO_enPINMASK_3 & uxReg)
            {
                GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_3;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_3);
                pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_3);
            }
            if((UBase_t) GPIO_enPINMASK_4 & uxReg)
            {
                GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_4;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_4);
                pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_4);
            }
            if((UBase_t) GPIO_enPINMASK_5 & uxReg)
            {
                GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_5;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_5);
                pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_5);
            }
            if((UBase_t) GPIO_enPINMASK_6 & uxReg)
            {
                GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_6;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_6);
                pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_6);
            }
            if((UBase_t) GPIO_enPINMASK_7 & uxReg)
            {
                GPIOK_ICR_R = (UBase_t) GPIO_enPINMASK_7;
                pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enPORT_K, GPIO_enPIN_7);
                pvfCallback(GPIOK_BASE, (void*) GPIO_enPIN_7);
            }
        }
    }
}
