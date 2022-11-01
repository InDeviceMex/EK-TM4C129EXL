/**
 *
 * @file SYSCTL_InterruptRoutine_Vector.c
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
 * @verbatim 12 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SYSCTL/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Vector.h>

#include <xApplication_MCU/SYSCTL/Intrinsics/xHeader/SYSCTL_Dependencies.h>

void SYSCTL__vIRQVectorHandler(void)
{
    volatile UBase_t uxReg = 0UL;
    MCU_pvfIRQSourceHandler_t pvfCallback;

    uxReg = (UBase_t) SYSCTL_MISC_R;

    if(0UL == ((UBase_t) SYSCTL_enINTMASK_ALL & uxReg))
    {
        pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enMODULE_0, SYSCTL_enINT_SW);
        pvfCallback(SYSCTL0_BASE, (void*) SYSCTL_enINT_SW);
    }
    else
    {
        if(0UL != ((UBase_t) SYSCTL_enINTMASK_BOR & uxReg))
        {
            SYSCTL_MISC_R = (UBase_t) SYSCTL_enINTMASK_BOR;
            pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enMODULE_0, SYSCTL_enINT_BOR);
            pvfCallback(SYSCTL0_BASE, (void*) SYSCTL_enINT_BOR);
        }
        if(0UL != ((UBase_t) SYSCTL_enINTMASK_MOSC_FAILURE & uxReg))
        {
            SYSCTL_MISC_R = (UBase_t) SYSCTL_enINTMASK_MOSC_FAILURE;
            pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enMODULE_0, SYSCTL_enINT_MOSC_FAILURE);
            pvfCallback(SYSCTL0_BASE, (void*) SYSCTL_enINT_MOSC_FAILURE);
        }
        if(0UL != ((UBase_t) SYSCTL_enINTMASK_PLL_LOCK & uxReg))
        {
            SYSCTL_MISC_R = (UBase_t) SYSCTL_enINTMASK_PLL_LOCK;
            pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enMODULE_0, SYSCTL_enINT_PLL_LOCK);
            pvfCallback(SYSCTL0_BASE, (void*) SYSCTL_enINT_PLL_LOCK);
        }
        if(0UL != ((UBase_t) SYSCTL_enINTMASK_MOSC_POWERUP & uxReg))
        {
            SYSCTL_MISC_R = (UBase_t) SYSCTL_enINTMASK_MOSC_POWERUP;
            pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enMODULE_0, SYSCTL_enINT_MOSC_POWERUP);
            pvfCallback(SYSCTL0_BASE, (void*) SYSCTL_enINT_MOSC_POWERUP);
        }
    }
}
