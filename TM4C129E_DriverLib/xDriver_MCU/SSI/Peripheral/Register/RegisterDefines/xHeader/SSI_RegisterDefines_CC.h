/**
 *
 * @file SSI_RegisterDefines_CC.h
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_CC_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_CC_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 11 CC *********************************************
******************************************************************************************/
/*--------*/
#define SSI_CC_R_CS_MASK    ((uint32_t) 0x0000000FUL)
#define SSI_CC_R_CS_BIT    ((uint32_t) 0UL)
#define SSI_CC_R_CS_SYSCLK    ((uint32_t) 0x00000000UL)
#define SSI_CC_R_CS_ALTCLK    ((uint32_t) 0x00000005UL)

#define SSI_CC_CS_MASK    ((uint32_t) 0x0000000FUL)
#define SSI_CC_CS_SYSCLK    ((uint32_t) 0x00000000UL)
#define SSI_CC_CS_ALTCLK    ((uint32_t) 0x00000005UL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_CC_H_ */
