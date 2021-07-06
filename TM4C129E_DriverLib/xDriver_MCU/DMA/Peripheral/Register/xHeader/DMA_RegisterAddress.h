/**
 *
 * @file DMA_RegisterAddress.h
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
 * @verbatim 28 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define DMA_BASE    ((uint32_t) 0x400FF000UL)
#define DMA_OFFSET    ((uint32_t) 0x000FF000UL)

#define DMA_BITBANDING_BASE    ((uint32_t) 0x42000000UL)

#define DMA_STAT_OFFSET    ((uint32_t) 0x00000000UL)
#define DMA_CFG_OFFSET    ((uint32_t) 0x00000004UL)
#define DMA_CTLBASE_OFFSET    ((uint32_t) 0x00000008UL)
#define DMA_ALTBASE_OFFSET    ((uint32_t) 0x0000000CUL)
#define DMA_WAITSTAT_OFFSET    ((uint32_t) 0x00000010UL)
#define DMA_SWREQ_OFFSET    ((uint32_t) 0x00000014UL)
#define DMA_USEBURSTSET_OFFSET    ((uint32_t) 0x00000018UL)
#define DMA_USEBURSTCLR_OFFSET    ((uint32_t) 0x0000001CUL)
#define DMA_REQMASKSET_OFFSET    ((uint32_t) 0x00000020UL)
#define DMA_REQMASKCLR_OFFSET    ((uint32_t) 0x00000024UL)
#define DMA_ENASET_OFFSET    ((uint32_t) 0x00000028UL)
#define DMA_ENACLR_OFFSET    ((uint32_t) 0x0000002CUL)
#define DMA_ALTSET_OFFSET    ((uint32_t) 0x00000030UL)
#define DMA_ALTCLR_OFFSET    ((uint32_t) 0x00000034UL)
#define DMA_PRIOSET_OFFSET    ((uint32_t) 0x00000038UL)
#define DMA_PRIOCLR_OFFSET    ((uint32_t) 0x0000003CUL)
#define DMA_ERRCLR_OFFSET    ((uint32_t) 0x0000004CUL)
#define DMA_CHASGN_OFFSET    ((uint32_t) 0x00000500UL)
#define DMA_CHIS_OFFSET    ((uint32_t) 0x00000504UL)
#define DMA_CHMAP_OFFSET    ((uint32_t) 0x00000510UL)
#define DMA_CHMAP0_OFFSET    ((uint32_t) 0x00000510UL)
#define DMA_CHMAP1_OFFSET    ((uint32_t) 0x00000514UL)
#define DMA_CHMAP2_OFFSET    ((uint32_t) 0x00000518UL)
#define DMA_CHMAP3_OFFSET    ((uint32_t) 0x0000051CUL)
#define DMA_PeriphID0_OFFSET    ((uint32_t) 0x00000FE0UL)
#define DMA_PeriphID1_OFFSET    ((uint32_t) 0x00000FE4UL)
#define DMA_PeriphID2_OFFSET    ((uint32_t) 0x00000FE8UL)
#define DMA_PeriphID3_OFFSET    ((uint32_t) 0x00000FECUL)
#define DMA_PeriphID4_OFFSET    ((uint32_t) 0x00000FD0UL)
#define DMA_PCellID0_OFFSET    ((uint32_t) 0x00000FF0UL)
#define DMA_PCellID1_OFFSET    ((uint32_t) 0x00000FF4UL)
#define DMA_PCellID2_OFFSET    ((uint32_t) 0x00000FF8UL)
#define DMA_PCellID3_OFFSET    ((uint32_t) 0x00000FFCUL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESS_H_ */
