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
    volatile uint32_t u32Reg = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = ACMP0_MIS_R;
    if((uint32_t) ACMP_enCOMPMASK_1 & u32Reg)
    {
        ACMP0_MIS_R = (uint32_t) ACMP_enCOMPMASK_1;
        pfvCallback = ACMP__pvfGetIRQSourceHandler(ACMP_enMODULE_0,
                                                   ACMP_enCOMP_1);
        pfvCallback();
    }
}



