/**
 *
 * @file MCU_RegisterSourceIRQ.h
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
 * @verbatim 27 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_REGISTERSOURCEIRQ_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_REGISTERSOURCEIRQ_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(MCU__vRegisterIRQSourceHandler_RAM, ".ramcode")

MCU_nERROR MCU__enRegisterIRQSourceHandler_RAM(MCU__pvfIRQSourceHandler_t pfIrqSourceHandler,
                                        MCU__pvfIRQSourceHandler_t* pfIrqArrayHandler,
                                        uint32_t u32InterruptSource,
                                        uint32_t u32InterruptSourceMax);

#elif defined (__GNUC__ )

__attribute__((section(".ramcode")))
MCU_nERROR MCU__enRegisterIRQSourceHandler_RAM(MCU__pvfIRQSourceHandler_t pfIrqSourceHandler,
                                        MCU__pvfIRQSourceHandler_t* pfIrqArrayHandler,
                                        uint32_t u32InterruptSource,
                                        uint32_t u32InterruptSourceMax);

#endif

MCU_nERROR MCU__enRegisterIRQSourceHandler(MCU__pvfIRQSourceHandler_t pfIrqSourceHandler,
                                    MCU__pvfIRQSourceHandler_t* pfIrqArrayHandler,
                                    uint32_t u32InterruptSource,
                                    uint32_t u32InterruptSourceMax);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_REGISTERSOURCEIRQ_H_ */
