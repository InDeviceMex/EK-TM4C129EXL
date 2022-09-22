/**
 *
 * @file FLASH_RegisterAddress.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERADDRESS_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#define FLASH_BASE    ((uint32_t) 0x400FD000UL)
#define FLASH_BITBANDING_BASE    ((uint32_t) 0x42000000UL)
#define FLASH_OFFSET    ((uint32_t) 0x000FD000UL)

#define FLASH_ADDRESS_MIN    ((uint32_t) 0x00000000UL)
#define FLASH_PAGE_COUNT    (64UL)
#define FLASH_ERASE_WORD    ((uint32_t) 0xFFFFFFFFUL)
#define FLASH_ERASE_HALFWORD    ((uint32_t) 0xFFFFUL)
#define FLASH_ERASE_BYTE    ((uint32_t) 0xFFUL)

#define FLASH_ADDRESS_OFFSET    ((uint32_t) 0x0000UL)
#define FLASH_DATA_OFFSET    ((uint32_t) 0x0004UL)
#define FLASH_CTL_OFFSET    ((uint32_t) 0x0008UL)
#define FLASH_RIS_OFFSET    ((uint32_t) 0x000CUL)
#define FLASH_IM_OFFSET    ((uint32_t) 0x0010UL)
#define FLASH_MISC_OFFSET    ((uint32_t) 0x0014UL)
#define FLASH_CTL2_OFFSET    ((uint32_t) 0x0020UL)
#define FLASH_WBVAL_OFFSET    ((uint32_t) 0x0030UL)
#define FLASH_PEKEY_OFFSET    ((uint32_t) 0x003CUL)
#define FLASH_WBn_OFFSET    ((uint32_t) 0x0100UL)
#define FLASH_WB0_OFFSET    ((uint32_t) 0x0100UL)
#define FLASH_WB1_OFFSET    ((uint32_t) 0x0104UL)
#define FLASH_WB2_OFFSET    ((uint32_t) 0x0108UL)
#define FLASH_WB3_OFFSET    ((uint32_t) 0x010CUL)
#define FLASH_WB4_OFFSET    ((uint32_t) 0x0110UL)
#define FLASH_WB5_OFFSET    ((uint32_t) 0x0114UL)
#define FLASH_WB6_OFFSET    ((uint32_t) 0x0118UL)
#define FLASH_WB7_OFFSET    ((uint32_t) 0x011CUL)
#define FLASH_WB8_OFFSET    ((uint32_t) 0x0120UL)
#define FLASH_WB9_OFFSET    ((uint32_t) 0x0124UL)
#define FLASH_WB10_OFFSET    ((uint32_t) 0x0128UL)
#define FLASH_WB11_OFFSET    ((uint32_t) 0x012CUL)
#define FLASH_WB12_OFFSET    ((uint32_t) 0x0130UL)
#define FLASH_WB13_OFFSET    ((uint32_t) 0x0134UL)
#define FLASH_WB14_OFFSET    ((uint32_t) 0x0138UL)
#define FLASH_WB15_OFFSET    ((uint32_t) 0x013CUL)
#define FLASH_WB16_OFFSET    ((uint32_t) 0x0140UL)
#define FLASH_WB17_OFFSET    ((uint32_t) 0x0144UL)
#define FLASH_WB18_OFFSET    ((uint32_t) 0x0148UL)
#define FLASH_WB19_OFFSET    ((uint32_t) 0x014CUL)
#define FLASH_WB20_OFFSET    ((uint32_t) 0x0150UL)
#define FLASH_WB21_OFFSET    ((uint32_t) 0x0154UL)
#define FLASH_WB22_OFFSET    ((uint32_t) 0x0158UL)
#define FLASH_WB23_OFFSET    ((uint32_t) 0x015CUL)
#define FLASH_WB24_OFFSET    ((uint32_t) 0x0160UL)
#define FLASH_WB25_OFFSET    ((uint32_t) 0x0164UL)
#define FLASH_WB26_OFFSET    ((uint32_t) 0x0168UL)
#define FLASH_WB27_OFFSET    ((uint32_t) 0x016CUL)
#define FLASH_WB28_OFFSET    ((uint32_t) 0x0170UL)
#define FLASH_WB29_OFFSET    ((uint32_t) 0x0174UL)
#define FLASH_WB30_OFFSET    ((uint32_t) 0x0178UL)
#define FLASH_WB31_OFFSET    ((uint32_t) 0x017CUL)
#define FLASH_PP_OFFSET    ((uint32_t) 0x0FC0UL)
#define SRAM_SIZE_OFFSET    ((uint32_t) 0x0FC4UL)
#define FLASH_CONF_OFFSET    ((uint32_t) 0x0FC8UL)
#define ROM_SWMAP_OFFSET    ((uint32_t) 0x0FCCUL)
#define FLASH_DMASZ_OFFSET    ((uint32_t) 0x0FD0UL)
#define FLASH_DMAST_OFFSET    ((uint32_t) 0x0FD4UL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERADDRESS_H_ */
