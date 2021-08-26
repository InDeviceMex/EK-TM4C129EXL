/**
 *
 * @file QEI_InterruptRoutine_Vector_Module0.c
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
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/QEI/Interrupt/InterruptRoutine/xHeader/QEI_InterruptRoutine_Vector_Module0.h>

#include <xApplication_MCU/QEI/Intrinsics/xHeader/QEI_Dependencies.h>

void QEI0__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32Enable = 0U;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Enable = SYSCTL_RCGCQEI_R;
    u32Enable |= SYSCTL_SCGCQEI_R;
    u32Enable |= SYSCTL_DCGCQEI_R;
    if(SYSCTL_RCGCQEI_R_QEI0_DIS == (SYSCTL_RCGCQEI_R_QEI0_MASK & u32Enable))
    {
        pfvCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                  QEI_enINTERRUPT_SW);
        pfvCallback();
    }
    else
    {
        u32Reg = (uint32_t) QEI0_ISC_R;

        if(0UL == ((uint32_t) QEI_enINT_SOURCE_ALL & u32Reg))
        {
            pfvCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                      QEI_enINTERRUPT_SW);
            pfvCallback();
        }
        else
        {
            if((uint32_t) QEI_enINT_SOURCE_INDEX & u32Reg)
            {
                QEI0_ISC_R = (uint32_t) QEI_enINT_SOURCE_INDEX;
                pfvCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                          QEI_enINTERRUPT_INDEX);
                pfvCallback();
            }
            if((uint32_t) QEI_enINT_SOURCE_TIMER & u32Reg)
            {
                QEI0_ISC_R = (uint32_t) QEI_enINT_SOURCE_TIMER;
                pfvCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                          QEI_enINTERRUPT_TIMER);
                pfvCallback();
            }
            if((uint32_t) QEI_enINT_SOURCE_DIRECTION & u32Reg)
            {
                QEI0_ISC_R = (uint32_t) QEI_enINT_SOURCE_DIRECTION;
                pfvCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                          QEI_enINTERRUPT_DIRECTION);
                pfvCallback();
            }
            if((uint32_t) QEI_enINT_SOURCE_ERROR & u32Reg)
            {
                QEI0_ISC_R = (uint32_t) QEI_enINT_SOURCE_ERROR;
                pfvCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                          QEI_enINTERRUPT_ERROR);
                pfvCallback();
            }
        }
    }
}
