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
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    uxReg = (UBase_t) SYSCTL_MISC_R;

    if(0UL == ((UBase_t) SYSCTL_enINT_SOURCE_ALL & uxReg))
    {
        pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enINTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        if(0UL != ((UBase_t) SYSCTL_enINT_SOURCE_BOR & uxReg))
        {
            SYSCTL_MISC_R = (UBase_t) SYSCTL_enINT_SOURCE_BOR;
            pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enINTERRUPT_BOR);
            pvfCallback();
        }
        if(0UL != ((UBase_t) SYSCTL_enINT_SOURCE_MOF & uxReg))
        {
            SYSCTL_MISC_R = (UBase_t) SYSCTL_enINT_SOURCE_MOF;
            pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enINTERRUPT_MOF);
            pvfCallback();
        }
        if(0UL != ((UBase_t) SYSCTL_enINT_SOURCE_PLLL & uxReg))
        {
            SYSCTL_MISC_R = (UBase_t) SYSCTL_enINT_SOURCE_PLLL;
            pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enINTERRUPT_PLLL);
            pvfCallback();
        }
        if(0UL != ((UBase_t) SYSCTL_enINT_SOURCE_MOSCPUP & uxReg))
        {
            SYSCTL_MISC_R = (UBase_t) SYSCTL_enINT_SOURCE_MOSCPUP;
            pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enINTERRUPT_MOSCPUP);
            pvfCallback();
        }
    }
}
