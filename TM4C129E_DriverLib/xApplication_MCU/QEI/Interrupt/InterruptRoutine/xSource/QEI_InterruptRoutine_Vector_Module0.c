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
    volatile UBase_t uxReg = 0UL;
    volatile UBase_t uxReady = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    uxReady = SYSCTL_PRQEI_R;
    if(SYSCTL_PRQEI_R_QEI0_NOREADY == (SYSCTL_PRQEI_R_QEI0_MASK & uxReady))
    {
        pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                  QEI_enINTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        uxReg = (UBase_t) QEI0_ISC_R;

        if(0UL == ((UBase_t) QEI_enINT_SOURCE_ALL & uxReg))
        {
            pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                      QEI_enINTERRUPT_SW);
            pvfCallback();
        }
        else
        {
            if((UBase_t) QEI_enINT_SOURCE_INDEX & uxReg)
            {
                QEI0_ISC_R = (UBase_t) QEI_enINT_SOURCE_INDEX;
                pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                          QEI_enINTERRUPT_INDEX);
                pvfCallback();
            }
            if((UBase_t) QEI_enINT_SOURCE_TIMER & uxReg)
            {
                QEI0_ISC_R = (UBase_t) QEI_enINT_SOURCE_TIMER;
                pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                          QEI_enINTERRUPT_TIMER);
                pvfCallback();
            }
            if((UBase_t) QEI_enINT_SOURCE_DIRECTION & uxReg)
            {
                QEI0_ISC_R = (UBase_t) QEI_enINT_SOURCE_DIRECTION;
                pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                          QEI_enINTERRUPT_DIRECTION);
                pvfCallback();
            }
            if((UBase_t) QEI_enINT_SOURCE_ERROR & uxReg)
            {
                QEI0_ISC_R = (UBase_t) QEI_enINT_SOURCE_ERROR;
                pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0,
                                                          QEI_enINTERRUPT_ERROR);
                pvfCallback();
            }
        }
    }
}
