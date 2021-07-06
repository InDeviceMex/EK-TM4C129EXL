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

#include <xUtils/Standard/Standard.h>

#define FLASH_BASE    ((uint32_t) 0x400FD000UL)
#define FLASH_BITBANDING_BASE    ((uint32_t) 0x42000000UL)
#define FLASH_OFFSET    ((uint32_t) 0x000FD000UL)

#define FLASH_ADDRESS_MIN    ((uint32_t) 0x00000000UL)
#define FLASH_PAGE_COUNT    (64UL)
#define FLASH_ERASEWORLD    ((uint32_t) 0xFFFFFFFFUL)
#define FLASH_ERASEHALFWORLD    ((uint32_t) 0xFFFFUL)
#define FLASH_ERASEBYTE    ((uint32_t) 0xFFUL)

#define FLASH_FMA_OFFSET    ((uint32_t) 0x0000UL)
#define FLASH_FMD_OFFSET    ((uint32_t) 0x0004UL)
#define FLASH_FMC_OFFSET    ((uint32_t) 0x0008UL)
#define FLASH_FCRIS_OFFSET    ((uint32_t) 0x000CUL)
#define FLASH_FCIM_OFFSET    ((uint32_t) 0x0010UL)
#define FLASH_FCMISC_OFFSET    ((uint32_t) 0x0014UL)
#define FLASH_FMC2_OFFSET    ((uint32_t) 0x0020UL)
#define FLASH_FWBVAL_OFFSET    ((uint32_t) 0x0030UL)
#define FLASH_FLPEKEY_OFFSET    ((uint32_t) 0x003CUL)
#define FLASH_FWBn_OFFSET    ((uint32_t) 0x0100UL)
#define FLASH_FWB0_OFFSET    ((uint32_t) 0x0100UL)
#define FLASH_FWB1_OFFSET    ((uint32_t) 0x0104UL)
#define FLASH_FWB2_OFFSET    ((uint32_t) 0x0108UL)
#define FLASH_FWB3_OFFSET    ((uint32_t) 0x010CUL)
#define FLASH_FWB4_OFFSET    ((uint32_t) 0x0110UL)
#define FLASH_FWB5_OFFSET    ((uint32_t) 0x0114UL)
#define FLASH_FWB6_OFFSET    ((uint32_t) 0x0118UL)
#define FLASH_FWB7_OFFSET    ((uint32_t) 0x011CUL)
#define FLASH_FWB8_OFFSET    ((uint32_t) 0x0120UL)
#define FLASH_FWB9_OFFSET    ((uint32_t) 0x0124UL)
#define FLASH_FWB10_OFFSET    ((uint32_t) 0x0128UL)
#define FLASH_FWB11_OFFSET    ((uint32_t) 0x012CUL)
#define FLASH_FWB12_OFFSET    ((uint32_t) 0x0130UL)
#define FLASH_FWB13_OFFSET    ((uint32_t) 0x0134UL)
#define FLASH_FWB14_OFFSET    ((uint32_t) 0x0138UL)
#define FLASH_FWB15_OFFSET    ((uint32_t) 0x013CUL)
#define FLASH_FWB16_OFFSET    ((uint32_t) 0x0140UL)
#define FLASH_FWB17_OFFSET    ((uint32_t) 0x0144UL)
#define FLASH_FWB18_OFFSET    ((uint32_t) 0x0148UL)
#define FLASH_FWB19_OFFSET    ((uint32_t) 0x014CUL)
#define FLASH_FWB20_OFFSET    ((uint32_t) 0x0150UL)
#define FLASH_FWB21_OFFSET    ((uint32_t) 0x0154UL)
#define FLASH_FWB22_OFFSET    ((uint32_t) 0x0158UL)
#define FLASH_FWB23_OFFSET    ((uint32_t) 0x015CUL)
#define FLASH_FWB24_OFFSET    ((uint32_t) 0x0160UL)
#define FLASH_FWB25_OFFSET    ((uint32_t) 0x0164UL)
#define FLASH_FWB26_OFFSET    ((uint32_t) 0x0168UL)
#define FLASH_FWB27_OFFSET    ((uint32_t) 0x016CUL)
#define FLASH_FWB28_OFFSET    ((uint32_t) 0x0170UL)
#define FLASH_FWB29_OFFSET    ((uint32_t) 0x0174UL)
#define FLASH_FWB30_OFFSET    ((uint32_t) 0x0178UL)
#define FLASH_FWB31_OFFSET    ((uint32_t) 0x017CUL)
#define FLASH_FLASHPP_OFFSET    ((uint32_t) 0x0FC0UL)
#define FLASH_SSIZE_OFFSET    ((uint32_t) 0x0FC4UL)
#define FLASH_FLASHCONF_OFFSET    ((uint32_t) 0x0FC8UL)
#define FLASH_ROMSWMAP_OFFSET    ((uint32_t) 0x0FCCUL)
#define FLASH_FLASHDMASZ_OFFSET    ((uint32_t) 0x0FD0UL)
#define FLASH_FLASHDMAST_OFFSET    ((uint32_t) 0x0FD4UL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERADDRESS_H_ */
