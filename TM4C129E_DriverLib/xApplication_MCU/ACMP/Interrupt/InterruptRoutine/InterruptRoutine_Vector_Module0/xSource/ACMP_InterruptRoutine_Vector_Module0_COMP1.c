/**
 *
 * @file ACMP_InterruptRoutine_Vector_Module0_COMP1.c
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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ACMP/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/xHeader/ACMP_InterruptRoutine_Vector_Module0_COMP1.h>

#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Dependencies.h>

void ACMP0_Comp1__vIRQVectorHandler(void)
{
    uint32_t u32Reg;
    uint32_t u32Ready;
    ACMP_pvfIRQSourceHandler_t pvfCallback;

    u32Ready = SYSCTL_PRACMP_R;
    if(SYSCTL_PRACMP_R_ACMP_NOREADY == (SYSCTL_PRACMP_R_ACMP_MASK & u32Ready))
    {
        pvfCallback = ACMP_SW__pvfGetIRQSourceHandler(ACMP_enMODULE_0, ACMP_enCOMP_1);
        pvfCallback(ACMP0_BASE, (void*) ACMP_enCOMP_1);
    }
    else
    {
        u32Reg = ACMP0_MIS_R;
        if((uint32_t) ACMP_enCOMPMASK_1 & u32Reg)
        {
            ACMP0_MIS_R = (uint32_t) ACMP_enCOMPMASK_1;
            pvfCallback = ACMP__pvfGetIRQSourceHandler(ACMP_enMODULE_0, ACMP_enCOMP_1);
            pvfCallback(ACMP0_BASE, (void*) ACMP_enCOMP_1);
        }
        else
        {
            pvfCallback = ACMP_SW__pvfGetIRQSourceHandler(ACMP_enMODULE_0, ACMP_enCOMP_1);
            pvfCallback(ACMP0_BASE, (void*) ACMP_enCOMP_1);
        }
    }
}
