/**
 *
 * @file WDT_InterruptRoutine_Vector.c
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
 * @verbatim 26 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/WDT/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Vector.h>

#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Dependencies.h>

void WDT01__vIRQVectorHandler(void)
{
    volatile UBase_t uxReg0 = 0U;
    volatile UBase_t uxReg1 = 0U;
    volatile UBase_t uxEnable = 0U;
    volatile UBase_t uxReady = 0U;
    volatile UBase_t uxRegWrite1 = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    uxReady = SYSCTL_PRWD_R;
    if(0UL == ((SYSCTL_PRWD_R_WDT0_MASK | SYSCTL_PRWD_R_WDT1_MASK) & uxReady))
    {
        pvfCallback = WDT__pvfGetIRQSourceHandler(WDT_enMODULE_0,
                                                   WDT_enINTERRUPT_SW);
        pvfCallback();
        pvfCallback = WDT__pvfGetIRQSourceHandler(WDT_enMODULE_1,
                                                   WDT_enINTERRUPT_SW);
        pvfCallback();

    }
    else
    {
        if(0UL != ((SYSCTL_PRWD_R_WDT0_MASK) & uxReady))
        {
            uxReg0 = (UBase_t) WDT0_MIS_R;
            if(WDT_MIS_R_MIS_MASK & uxReg0)
            {
                uxEnable = 1UL;
                WDT0_ICR_R = WDT_ICR_R_INTCLR_CLEAR;
                pvfCallback = WDT__pvfGetIRQSourceHandler(WDT_enMODULE_0,
                                                           WDT_enINTERRUPT_WDT);
                pvfCallback();
            }

        }
        if(0UL != ((SYSCTL_PRWD_R_WDT1_MASK) & uxReady))
        {
            uxReg1 = (UBase_t) WDT1_MIS_R;
            if(WDT_MIS_R_MIS_MASK & uxReg1)
            {
                uxEnable = 1UL;
                WDT1_ICR_R = WDT_ICR_R_INTCLR_CLEAR;
                do
                {
                    uxRegWrite1 = WDT1_CTL_R;
                    uxRegWrite1 &= WDT_CTL_R_WRC_MASK;
                }while(WDT_CTL_R_WRC_PROGRESS == uxRegWrite1);

                pvfCallback = WDT__pvfGetIRQSourceHandler(WDT_enMODULE_1,
                                                           WDT_enINTERRUPT_WDT);
                pvfCallback();
            }

        }
        if(0UL == uxEnable)
        {
            pvfCallback = WDT__pvfGetIRQSourceHandler(WDT_enMODULE_0,
                                                       WDT_enINTERRUPT_WDT);
            pvfCallback();
            pvfCallback = WDT__pvfGetIRQSourceHandler(WDT_enMODULE_1,
                                                       WDT_enINTERRUPT_WDT);
            pvfCallback();
        }
    }
}
