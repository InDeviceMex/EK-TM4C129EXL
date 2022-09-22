/**
 *
 * @file FLASH_WriteRegister.h
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
 * @verbatim 5 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_FLASH_WRITEREGISTER_H_
#define XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_FLASH_WRITEREGISTER_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(FLASH__enWriteRegister, ".ramcode")

FLASH_nERROR FLASH__enWriteRegister(FLASH_nMODULE enModuleArg, FLASH_Register_t* pstRegisterDataArg);

#elif defined (__GNUC__ )

FLASH_nERROR FLASH__enWriteRegister(FLASH_nMODULE enModuleArg, FLASH_Register_t* pstRegisterDataArg) __attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_FLASH_WRITEREGISTER_H_ */
