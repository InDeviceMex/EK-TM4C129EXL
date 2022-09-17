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

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(MCU__vRegisterIRQSourceHandler_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enRegisterIRQSourceHandler_RAM, ".ramcode")

MCU_nERROR MCU__enRegisterIRQSourceHandler_RAM(MCU_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                        MCU_pvfIRQSourceHandler_t* pfIrqArrayHandler,
                                        uint32_t u32InterruptSource,
                                        uint32_t u32InterruptSourceMax);

void MCU__vRegisterIRQSourceHandler_RAM(void (*pfIrqSourceHandler) (void),
                                        void (**pfIrqVectorHandler) (void),
                                        uint32_t u32InterruptSource,
                                        uint32_t u32InterruptSourceMax);

#elif defined (__GNUC__ )

__attribute__((section(".ramcode")))
MCU_nERROR MCU__enRegisterIRQSourceHandler_RAM(MCU_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                        MCU_pvfIRQSourceHandler_t* pfIrqArrayHandler,
                                        uint32_t u32InterruptSource,
                                        uint32_t u32InterruptSourceMax);

__attribute__((section(".ramcode")))
void MCU__vRegisterIRQSourceHandler_RAM(void (*pfIrqSourceHandler) (void),
                                        void (**pfIrqVectorHandler) (void),
                                        uint32_t u32InterruptSource,
                                        uint32_t u32InterruptSourceMax);

#endif

MCU_nERROR MCU__enRegisterIRQSourceHandler(MCU_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                    MCU_pvfIRQSourceHandler_t* pfIrqArrayHandler,
                                    uint32_t u32InterruptSource,
                                    uint32_t u32InterruptSourceMax);

void MCU__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                    void (**pfIrqVectorHandler) (void),
                                    uint32_t u32InterruptSource,
                                    uint32_t u32InterruptSourceMax);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_REGISTERSOURCEIRQ_H_ */
