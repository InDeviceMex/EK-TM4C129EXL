/**
 *
 * @file FLASH_Data.h
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
 * @verbatim 19 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_DATA_H_
#define XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_DATA_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(FLASH__enSetData, ".ramcode")
#pragma  CODE_SECTION(FLASH__enSetDataOnBuffer, ".ramcode")
#pragma  CODE_SECTION(FLASH__enSetDataBuffer, ".ramcode")

#pragma  CODE_SECTION(FLASH__enSetDataBufferValidByNumber, ".ramcode")
#pragma  CODE_SECTION(FLASH__enSetDataBufferInvalidByNumber, ".ramcode")
#pragma  CODE_SECTION(FLASH__enSetDataBufferValidByMask, ".ramcode")
#pragma  CODE_SECTION(FLASH__enSetDataBufferInvalidByMask, ".ramcode")

#pragma  CODE_SECTION(FLASH__enIsDataBufferValidByNumber, ".ramcode")
#pragma  CODE_SECTION(FLASH__enIsDataBufferValidByMask, ".ramcode")

FLASH_nERROR FLASH__enSetData(FLASH_nMODULE enModuleArg, uint32_t u32DataArg);
FLASH_nERROR FLASH__enSetDataOnBuffer(FLASH_nMODULE enModuleArg, uint32_t u32DataArg, uint32_t u32IndexArg);
FLASH_nERROR FLASH__enSetDataBuffer(FLASH_nMODULE enModuleArg, uint32_t* pu32DataArg, uint32_t u32StartIndexArg, uint32_t* pu32CountArg);

FLASH_nERROR FLASH__enSetDataBufferValidByNumber(FLASH_nMODULE enModuleArg, uint32_t u32IndexArg);
FLASH_nERROR FLASH__enSetDataBufferInvalidByNumber(FLASH_nMODULE enModuleArg, uint32_t u32IndexArg);
FLASH_nERROR FLASH__enSetDataBufferValidByMask(FLASH_nMODULE enModuleArg, uint32_t u32IndexMaskArg);
FLASH_nERROR FLASH__enSetDataBufferInvalidByMask(FLASH_nMODULE enModuleArg, uint32_t u32IndexMaskArg);
FLASH_nERROR FLASH__enIsDataBufferValidByNumber(FLASH_nMODULE enModuleArg, uint32_t u32IndexArg, FLASH_nSTATUS* penValidArg);
FLASH_nERROR FLASH__enIsDataBufferValidByMask(FLASH_nMODULE enModuleArg, uint32_t u32IndexMaskArg, uint32_t* pu32ValidArg);
#elif defined (__GNUC__ )

FLASH_nERROR FLASH__enSetData(FLASH_nMODULE enModuleArg, uint32_t enDataArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enSetDataOnBuffer(FLASH_nMODULE enModuleArg, uint32_t u32DataArg, uint32_t u32IndexArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enSetDataBuffer(FLASH_nMODULE enModuleArg, uint32_t* pu32DataArg, uint32_t u32StartIndexArg, uint32_t* pu32CountArg) __attribute__((section(".ramcode")));

FLASH_nERROR FLASH__enSetDataBufferValidByNumber(FLASH_nMODULE enModuleArg, uint32_t u32IndexArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enSetDataBufferInvalidByNumber(FLASH_nMODULE enModuleArg, uint32_t u32IndexArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enSetDataBufferValidByMask(FLASH_nMODULE enModuleArg, uint32_t u32IndexMaskArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enSetDataBufferInvalidByMask(FLASH_nMODULE enModuleArg, uint32_t u32IndexMaskArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enIsDataBufferValidByNumber(FLASH_nMODULE enModuleArg, uint32_t u32IndexArg, FLASH_nSTATUS* penValidArg) __attribute__((section(".ramcode")));
FLASH_nERROR FLASH__enIsDataBufferValidByMask(FLASH_nMODULE enModuleArg, uint32_t u32IndexMaskArg, uint32_t* pu32ValidArg) __attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_FLASH_DRIVER_XHEADER_FLASH_DATA_H_ */
