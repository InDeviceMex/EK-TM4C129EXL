/**
 *
 * @file ACMP_InterruptRoutine_Source.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_ACMP_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_ACMP_INTERRUPTROUTINE_SOURCE_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

ACMP_pvfIRQSourceHandler_t ACMP_SW__pvfGetIRQSourceHandler(ACMP_nMODULE enACMPSubmodule,
                                                           ACMP_nCOMP enACMPComparatorNum);
ACMP_pvfIRQSourceHandler_t* ACMP_SW__pvfGetIRQSourceHandlerPointer(ACMP_nMODULE enACMPSubmodule,
                                                                   ACMP_nCOMP enACMPComparatorNum);

ACMP_pvfIRQSourceHandler_t ACMP__pvfGetIRQSourceHandler(ACMP_nMODULE enACMPSubmodule,
                                                        ACMP_nCOMP enACMPComparatorNum);
ACMP_pvfIRQSourceHandler_t*ACMP__pvfGetIRQSourceHandlerPointer(ACMP_nMODULE enACMPSubmodule,
                                                               ACMP_nCOMP enACMPComparatorNum);

#endif /* XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_ACMP_INTERRUPTROUTINE_SOURCE_H_ */
