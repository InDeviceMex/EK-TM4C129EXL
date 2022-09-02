/**
 *
 * @file MCU_ReadReg.h
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_READREG_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_READREG_H_

#include <xDriver_MCU/Common/xHeader/MCU_enum.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(MCU__u32ReadRegister_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enReadRegister_RAM, ".ramcode")

MCU_nERROR MCU__enReadRegister_RAM(MCU_Register_t* pstRegisterDataArg);
uint32_t MCU__u32ReadRegister_RAM(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister,
                                  uint32_t u32MaskFeature, uint32_t u32BitFeature);

#elif defined (__GNUC__ )

__attribute__((section(".ramcode")))
MCU_nERROR MCU__enReadRegister_RAM(MCU_Register_t* pstRegisterDataArg) ;
__attribute__((section(".ramcode")))
uint32_t MCU__u32ReadRegister_RAM(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister,
                                  uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif

MCU_nERROR MCU__enReadRegister(MCU_Register_t* pstRegisterDataArg);

uint32_t MCU__u32ReadRegister(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister,
                              uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_READREG_H_ */
