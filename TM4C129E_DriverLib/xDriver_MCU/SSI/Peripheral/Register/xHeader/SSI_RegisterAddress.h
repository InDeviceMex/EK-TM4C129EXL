/**
 *
 * @file SSI_RegisterAddress.h
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
 * @verbatim 16 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_XHEADER_SSI_REGISTERADDRESS_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_XHEADER_SSI_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define SSI_BASE    ((uint32_t) 0x40008000UL)
#define SSI0_BASE    ((uint32_t) 0x40008000UL)
#define SSI1_BASE    ((uint32_t) 0x40009000UL)
#define SSI2_BASE    ((uint32_t) 0x4000A000UL)
#define SSI3_BASE    ((uint32_t) 0x4000B000UL)

#define SSI_OFFSET    ((uint32_t) 0x00008000UL)
#define SSI0_OFFSET    ((uint32_t) 0x00008000UL)
#define SSI1_OFFSET    ((uint32_t) 0x00009000UL)
#define SSI2_OFFSET    ((uint32_t) 0x0000A000UL)
#define SSI3_OFFSET    ((uint32_t) 0x0000B000UL)

#define SSI_BITBANDING_BASE    ((uint32_t) 0x42000000UL)

#define SSI_CR0_OFFSET    ((uint32_t) 0x0000UL)
#define SSI_CR1_OFFSET    ((uint32_t) 0x0004UL)
#define SSI_DR_OFFSET    ((uint32_t) 0x0008UL)
#define SSI_SR_OFFSET    ((uint32_t) 0x000CUL)
#define SSI_CPSR_OFFSET    ((uint32_t) 0x0010UL)
#define SSI_IM_OFFSET    ((uint32_t) 0x0014UL)
#define SSI_RIS_OFFSET    ((uint32_t) 0x0018UL)
#define SSI_MIS_OFFSET    ((uint32_t) 0x001CUL)
#define SSI_ICR_OFFSET    ((uint32_t) 0x0020UL)
#define SSI_DMACTL_OFFSET    ((uint32_t) 0x0024UL)
#define SSI_PP_OFFSET    ((uint32_t) 0x0FC0UL)
#define SSI_CC_OFFSET    ((uint32_t) 0x0FC8UL)
#define SSI_PeriphID4_OFFSET    ((uint32_t) 0x0FD0UL)
#define SSI_PeriphID5_OFFSET    ((uint32_t) 0x0FD4UL)
#define SSI_PeriphID6_OFFSET    ((uint32_t) 0x0FD8UL)
#define SSI_PeriphID7_OFFSET    ((uint32_t) 0x0FDCUL)
#define SSI_PeriphID0_OFFSET    ((uint32_t) 0x0FE0UL)
#define SSI_PeriphID1_OFFSET    ((uint32_t) 0x0FE4UL)
#define SSI_PeriphID2_OFFSET    ((uint32_t) 0x0FE8UL)
#define SSI_PeriphID3_OFFSET    ((uint32_t) 0x0FECUL)
#define SSI_PCellID0_OFFSET    ((uint32_t) 0x0FF0UL)
#define SSI_PCellID1_OFFSET    ((uint32_t) 0x0FF4UL)
#define SSI_PCellID2_OFFSET    ((uint32_t) 0x0FF8UL)
#define SSI_PCellID3_OFFSET    ((uint32_t) 0x0FFCUL)

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_XHEADER_SSI_REGISTERADDRESS_H_ */
