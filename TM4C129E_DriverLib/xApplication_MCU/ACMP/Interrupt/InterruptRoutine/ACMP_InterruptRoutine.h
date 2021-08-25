/**
 *
 * @file ACMP_InterruptRoutine.h
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

#ifndef XAPPLICATION_MCU_ACMP_INTERRUPT_INTERRUPTROUTINE_ACMP_INTERRUPTROUTINE_H_
#define XAPPLICATION_MCU_ACMP_INTERRUPT_INTERRUPTROUTINE_ACMP_INTERRUPTROUTINE_H_

#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Defines.h>
#include <xApplication_MCU/ACMP/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/ACMP_InterruptRoutine_Vector_Module0.h>

void (*ACMP__pvfGetIRQVectorHandler(ACMP_nMODULE enACMPModule,
                                    ACMP_nCOMP enACMPComparator))(void);
void (**ACMP__pvfGetIRQVectorHandlerPointer(ACMP_nMODULE enACMPModule,
                                            ACMP_nCOMP enACMPComparator))(void);

#endif /* XAPPLICATION_MCU_ACMP_INTERRUPT_INTERRUPTROUTINE_ACMP_INTERRUPTROUTINE_H_ */
