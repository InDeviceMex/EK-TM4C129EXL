/**
 *
 * @file MCU_WriteReg.h
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
#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_WRITEREG_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_WRITEREG_H_

#include <xDriver_MCU/Common/xHeader/MCU_Interrupt.h>
#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(MCU__vWriteRegister_RAM, ".ramcode")
#pragma  CODE_SECTION(MCU__enWriteRegister_RAM, ".ramcode")

MCU_nERROR MCU__enWriteRegister_RAM(const MCU_Register_t* const pstRegisterDataArg);
void MCU__vWriteRegister_RAM(UBase_t uxPeripheralBase,
                             UBase_t uxOffsetRegister,
                             UBase_t uxFeatureValue,
                             UBase_t uxMaskFeature,
                             UBase_t uxBitFeature);
#elif defined (__GNUC__ )

__attribute__((section(".ramcode")))
MCU_nERROR MCU__enWriteRegister_RAM(const MCU_Register_t* const pstRegisterDataArg);
void MCU__vWriteRegister_RAM(UBase_t uxPeripheralBase,
                             UBase_t uxOffsetRegister,
                             UBase_t uxFeatureValue,
                             UBase_t uxMaskFeature,
                             UBase_t uxBitFeature) ;
#endif

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-8.5")
#endif

MCU_nERROR MCU__enWriteRegister(const MCU_Register_t* const pstRegisterDataArg);
MCU_nERROR MCU__enWriteRegister_Direct(const MCU_Register_t* const pstRegisterDataArg);

void MCU__vWriteRegisterNew(const MCU_Register_t* const pstRegisterDataArg);
void MCU__vWriteRegister_DirectNew(const MCU_Register_t* const pstRegisterDataArg);

void MCU__vWriteRegister(UBase_t uxPeripheralBase,
                                UBase_t uxOffsetRegister,
                                UBase_t uxFeatureValue,
                                UBase_t uxMaskFeature,
                                UBase_t uxBitFeature);
void MCU__vWriteRegister_Direct(UBase_t uxPeripheralBase,
                                       UBase_t uxOffsetRegister,
                                       UBase_t uxFeatureValue,
                                       UBase_t uxMaskFeature,
                                       UBase_t uxBitFeature);

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("8.5")
#endif

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_WRITEREG_H_ */
