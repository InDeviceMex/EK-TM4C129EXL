/**
 *
 * @file DMA_RegisterDefines_CFG.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_CFG_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_CFG_H_

#include <xUtils/Standard/Standard.h>

/**************************************************************************************
************************************* 5 CFG *************************************
****************************************************************************************/

/*--------*/
#define DMA_CFG_R_MASTEN_MASK    ((uint32_t) 0x00000001UL)
#define DMA_CFG_R_MASTEN_BIT    ((uint32_t) 0UL)
#define DMA_CFG_R_MASTEN_DIS    ((uint32_t) 0x00000000UL)
#define DMA_CFG_R_MASTEN_ENA    ((uint32_t) 0x00000001UL)

#define DMA_CFG_MASTEN_MASK    ((uint32_t) 0x00000001UL)
#define DMA_CFG_MASTEN_DIS    ((uint32_t) 0x00000000UL)
#define DMA_CFG_MASTEN_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_CFG_H_ */
