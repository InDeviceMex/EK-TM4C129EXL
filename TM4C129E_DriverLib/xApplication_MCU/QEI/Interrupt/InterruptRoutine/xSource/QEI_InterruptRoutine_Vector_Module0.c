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
    volatile uint32_t u32Ready = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    u32Ready = SYSCTL_PRQEI_R;
    if(SYSCTL_PRQEI_R_QEI0_NOREADY == (SYSCTL_PRQEI_R_QEI0_MASK & u32Ready))
    {
        pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                  QEI_enINTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        u32Reg = (uint32_t) QEI0_ISC_R;

        if(0UL == ((uint32_t) QEI_enINT_SOURCE_ALL & u32Reg))
        {
            pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                      QEI_enINTERRUPT_SW);
            pvfCallback();
        }
        else
        {
            if((uint32_t) QEI_enINT_SOURCE_INDEX & u32Reg)
            {
                QEI0_ISC_R = (uint32_t) QEI_enINT_SOURCE_INDEX;
                pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                          QEI_enINTERRUPT_INDEX);
                pvfCallback();
            }
            if((uint32_t) QEI_enINT_SOURCE_TIMER & u32Reg)
            {
                QEI0_ISC_R = (uint32_t) QEI_enINT_SOURCE_TIMER;
                pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                          QEI_enINTERRUPT_TIMER);
                pvfCallback();
            }
            if((uint32_t) QEI_enINT_SOURCE_DIRECTION & u32Reg)
            {
                QEI0_ISC_R = (uint32_t) QEI_enINT_SOURCE_DIRECTION;
                pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                          QEI_enINTERRUPT_DIRECTION);
                pvfCallback();
            }
            if((uint32_t) QEI_enINT_SOURCE_ERROR & u32Reg)
            {
                QEI0_ISC_R = (uint32_t) QEI_enINT_SOURCE_ERROR;
                pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                          QEI_enINTERRUPT_ERROR);
                pvfCallback();
            }
        }
    }
}
