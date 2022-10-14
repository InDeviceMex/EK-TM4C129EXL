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
    UBase_t uxReady;
    UBase_t uxReg;
    QEI_pvfIRQSourceHandler_t pvfCallback;

    uxReady = SYSCTL_PRQEI_R;
    if(SYSCTL_PRQEI_R_QEI0_NOREADY == (SYSCTL_PRQEI_R_QEI0_MASK & uxReady))
    {
        pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0, QEI_enINT_SW);
        pvfCallback(QEI0_BASE, (void*) QEI_enINT_SW);
    }
    else
    {
        uxReg = (UBase_t) QEI0_ISC_R;

        if(0UL == ((UBase_t) QEI_enINTMASK_ALL & uxReg))
        {
            pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0, QEI_enINT_SW);
            pvfCallback(QEI0_BASE, (void*) QEI_enINT_SW);
        }
        else
        {
            if((UBase_t) QEI_enINTMASK_INDEX & uxReg)
            {
                QEI0_ISC_R = (UBase_t) QEI_enINTMASK_INDEX;
                pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0, QEI_enINT_INDEX);
                pvfCallback(QEI0_BASE, (void*) QEI_enINT_INDEX);
            }
            if((UBase_t) QEI_enINTMASK_TIMER & uxReg)
            {
                QEI0_ISC_R = (UBase_t) QEI_enINTMASK_TIMER;
                pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0, QEI_enINT_TIMER);
                pvfCallback(QEI0_BASE, (void*) QEI_enINT_TIMER);
            }
            if((UBase_t) QEI_enINTMASK_DIRECTION & uxReg)
            {
                QEI0_ISC_R = (UBase_t) QEI_enINTMASK_DIRECTION;
                pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0, QEI_enINT_DIRECTION);
                pvfCallback(QEI0_BASE, (void*) QEI_enINT_DIRECTION);
            }
            if((UBase_t) QEI_enINTMASK_ERROR & uxReg)
            {
                QEI0_ISC_R = (UBase_t) QEI_enINTMASK_ERROR;
                pvfCallback = QEI__pvfGetIRQSourceHandler(QEI_enMODULE_0, QEI_enINT_ERROR);
                pvfCallback(QEI0_BASE, (void*) QEI_enINT_ERROR);
            }
        }
    }
}
