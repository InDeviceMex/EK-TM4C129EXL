/**
 *
 * @file DMA_RegisterDefines_STAT.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_STAT_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_STAT_H_

#include <xUtils/Standard/Standard.h>

/**************************************************************************************
************************************* 4 STAT *************************************
****************************************************************************************/

/*--------*/
#define DMA_STAT_R_MASTEN_MASK    ((uint32_t) 0x00000001UL)
#define DMA_STAT_R_MASTEN_BIT    ((uint32_t) 0UL)
#define DMA_STAT_R_MASTEN_DIS    ((uint32_t) 0x00000000UL)
#define DMA_STAT_R_MASTEN_ENA    ((uint32_t) 0x00000001UL)

#define DMA_STAT_MASTEN_MASK    ((uint32_t) 0x00000001UL)
#define DMA_STAT_MASTEN_DIS    ((uint32_t) 0x00000000UL)
#define DMA_STAT_MASTEN_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define DMA_STAT_R_STATE_MASK    ((uint32_t) 0x000000F0UL)
#define DMA_STAT_R_STATE_BIT    ((uint32_t) 4UL)
#define DMA_STAT_R_STATE_IDLE    ((uint32_t) 0x00000000UL)
#define DMA_STAT_R_STATE_RDCH    ((uint32_t) 0x00000010UL)
#define DMA_STAT_R_STATE_RDSRCPT    ((uint32_t) 0x00000020UL)
#define DMA_STAT_R_STATE_RDDSTPT    ((uint32_t) 0x00000030UL)
#define DMA_STAT_R_STATE_RDSRCDT    ((uint32_t) 0x00000040UL)
#define DMA_STAT_R_STATE_WRDSTDT    ((uint32_t) 0x00000050UL)
#define DMA_STAT_R_STATE_WAIT    ((uint32_t) 0x00000060UL)
#define DMA_STAT_R_STATE_WRCH    ((uint32_t) 0x00000070UL)
#define DMA_STAT_R_STATE_STALL    ((uint32_t) 0x00000080UL)
#define DMA_STAT_R_STATE_DONE    ((uint32_t) 0x00000090UL)

#define DMA_STAT_STATE_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_STAT_STATE_IDLE    ((uint32_t) 0x00000000UL)
#define DMA_STAT_STATE_RDCH    ((uint32_t) 0x00000001UL)
#define DMA_STAT_STATE_RDSRCPT    ((uint32_t) 0x00000002UL)
#define DMA_STAT_STATE_RDDSTPT    ((uint32_t) 0x00000003UL)
#define DMA_STAT_STATE_RDSRCDT    ((uint32_t) 0x00000004UL)
#define DMA_STAT_STATE_WRDSTDT    ((uint32_t) 0x00000005UL)
#define DMA_STAT_STATE_WAIT    ((uint32_t) 0x00000006UL)
#define DMA_STAT_STATE_WRCH    ((uint32_t) 0x00000007UL)
#define DMA_STAT_STATE_STALL    ((uint32_t) 0x00000008UL)
#define DMA_STAT_STATE_DONE    ((uint32_t) 0x00000009UL)
/*--------*/

/*--------*/
#define DMA_STAT_R_DMACHANS_MASK    ((uint32_t) 0x001F0000UL)
#define DMA_STAT_R_DMACHANS_BIT    ((uint32_t) 16UL)

#define DMA_STAT_DMACHANS_MASK    ((uint32_t) 0x0000001FUL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_STAT_H_ */
