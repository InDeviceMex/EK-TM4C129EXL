/**
 *
 * @file ACMP_InterruptRoutine_Vector_Module0_COMP2.c
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
#include <xApplication_MCU/ACMP/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/xHeader/ACMP_InterruptRoutine_Vector_Module0_COMP2.h>

#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Dependencies.h>

void ACMP0_Comp2__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Enable = 0U;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Enable = SYSCTL_RCGCACMP_R;
    u32Enable |= SYSCTL_SCGCACMP_R;
    u32Enable |= SYSCTL_DCGCACMP_R;
    if(SYSCTL_RCGCACMP_R_ACMP_DIS == (SYSCTL_RCGCACMP_R_ACMP_MASK & u32Enable))
    {
        pfvCallback = ACMP_SW__pvfGetIRQSourceHandler(ACMP_enMODULE_0,
                                                      ACMP_enCOMP_2);
        pfvCallback();
    }
    else
    {
        u32Reg = ACMP0_MIS_R;
        if((uint32_t) ACMP_enCOMPMASK_2 & u32Reg)
        {
            ACMP0_MIS_R = (uint32_t) ACMP_enCOMPMASK_2;
            pfvCallback = ACMP__pvfGetIRQSourceHandler(ACMP_enMODULE_0,
                                                       ACMP_enCOMP_2);
            pfvCallback();
        }
        else
        {
            pfvCallback = ACMP_SW__pvfGetIRQSourceHandler(ACMP_enMODULE_0,
                                                          ACMP_enCOMP_2);
            pfvCallback();
        }
    }
}
