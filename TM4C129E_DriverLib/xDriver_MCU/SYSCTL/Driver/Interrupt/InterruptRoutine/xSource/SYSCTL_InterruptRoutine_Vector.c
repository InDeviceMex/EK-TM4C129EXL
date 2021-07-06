

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
 * @verbatim 16 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Vector.h>

#include <xDriver_MCU/SYSCTL/Driver/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Source.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = (uint32_t) SYSCTL_MISC_R;

    if(0UL != ((uint32_t) SYSCTL_enINT_SOURCE_BOR & u32Reg))
    {
        SYSCTL_MISC_R = (uint32_t) SYSCTL_enINT_SOURCE_BOR;
        pfvCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enINTERRUPT_BOR);
        pfvCallback();
    }
    if(0UL != ((uint32_t) SYSCTL_enINT_SOURCE_MOF & u32Reg))
    {
        SYSCTL_MISC_R = (uint32_t) SYSCTL_enINT_SOURCE_MOF;
        pfvCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enINTERRUPT_MOF);
        pfvCallback();
    }
    if(0UL != ((uint32_t) SYSCTL_enINT_SOURCE_PLLL & u32Reg))
    {
        SYSCTL_MISC_R = (uint32_t) SYSCTL_enINT_SOURCE_PLLL;
        pfvCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enINTERRUPT_PLLL);
        pfvCallback();
    }
    if(0UL != ((uint32_t) SYSCTL_enINT_SOURCE_MOSCPUP & u32Reg))
    {
        SYSCTL_MISC_R = (uint32_t) SYSCTL_enINT_SOURCE_MOSCPUP;
        pfvCallback = SYSCTL__pvfGetIRQSourceHandler(SYSCTL_enINTERRUPT_MOSCPUP);
        pfvCallback();
    }
}

