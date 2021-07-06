/**
 *
 * @file DMA_RegisterDefines_CTLBASE.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_CTLBASE_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_CTLBASE_H_

#include <xUtils/Standard/Standard.h>

/**************************************************************************************
************************************* 6 CTLBASE *************************************
****************************************************************************************/

/*--------*/
#define DMA_CTLBASE_R_ADDR_MASK    ((uint32_t) 0xFFFFFC00UL)
#define DMA_CTLBASE_R_ADDR_BIT    ((uint32_t) 10UL)

#define DMA_CTLBASE_ADDR_MASK    ((uint32_t) 0x003FFFFFUL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_CTLBASE_H_ */
