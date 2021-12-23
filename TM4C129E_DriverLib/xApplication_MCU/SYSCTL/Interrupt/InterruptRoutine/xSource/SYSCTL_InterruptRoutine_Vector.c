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
    volatile uint32_t u32Reg = 0UL;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = (uint32_t) SYSCTL_MISC_R;

    if(0UL == ((uint32_t) SYSCTL_enINT_SOURCE_ALL & u32Reg))
    {
        pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enINTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        if(0UL != ((uint32_t) SYSCTL_enINT_SOURCE_BOR & u32Reg))
        {
            SYSCTL_MISC_R = (uint32_t) SYSCTL_enINT_SOURCE_BOR;
            pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enINTERRUPT_BOR);
            pvfCallback();
        }
        if(0UL != ((uint32_t) SYSCTL_enINT_SOURCE_MOF & u32Reg))
        {
            SYSCTL_MISC_R = (uint32_t) SYSCTL_enINT_SOURCE_MOF;
            pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enINTERRUPT_MOF);
            pvfCallback();
        }
        if(0UL != ((uint32_t) SYSCTL_enINT_SOURCE_PLLL & u32Reg))
        {
            SYSCTL_MISC_R = (uint32_t) SYSCTL_enINT_SOURCE_PLLL;
            pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enINTERRUPT_PLLL);
            pvfCallback();
        }
        if(0UL != ((uint32_t) SYSCTL_enINT_SOURCE_MOSCPUP & u32Reg))
        {
            SYSCTL_MISC_R = (uint32_t) SYSCTL_enINT_SOURCE_MOSCPUP;
            pvfCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enINTERRUPT_MOSCPUP);
            pvfCallback();
        }
    }
}
