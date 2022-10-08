/**
 *
 * @file SSI_RegisterDefines_PP.h
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
 * @verbatim 7 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_PP_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_PP_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

/******************************************************************************************
************************************ 9 PP *********************************************
******************************************************************************************/

/*--------*/
#define SSI_PP_R_HSCLK_MASK    ((UBase_t) 0x00000001UL)
#define SSI_PP_R_HSCLK_BIT    ((UBase_t) 0UL)
#define SSI_PP_R_HSCLK_NOCAPABLE    ((UBase_t) 0x00000000UL)
#define SSI_PP_R_HSCLK_CAPABLE    ((UBase_t) 0x00000001UL)

#define SSI_PP_HSCLK_MASK    ((UBase_t) 0x00000001UL)
#define SSI_PP_HSCLK_NOCAPABLE    ((UBase_t) 0x00000000UL)
#define SSI_PP_HSCLK_CAPABLE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_PP_R_MODE_MASK    ((UBase_t) 0x00000006UL)
#define SSI_PP_R_MODE_BIT    ((UBase_t) 1UL)
#define SSI_PP_R_MODE_LEGACY    ((UBase_t) 0x00000000UL)
#define SSI_PP_R_MODE_BI    ((UBase_t) 0x00000002UL)
#define SSI_PP_R_MODE_QUAD    ((UBase_t) 0x00000004UL)

#define SSI_PP_MODE_MASK    ((UBase_t) 0x00000003UL)
#define SSI_PP_MODE_LEGACY    ((UBase_t) 0x00000000UL)
#define SSI_PP_MODE_BI    ((UBase_t) 0x00000001UL)
#define SSI_PP_MODE_QUAD    ((UBase_t) 0x00000002UL)
/*--------*/

/*--------*/
#define SSI_PP_R_FSSHLDFRM_MASK    ((UBase_t) 0x00000008UL)
#define SSI_PP_R_FSSHLDFRM_BIT    ((UBase_t) 3UL)
#define SSI_PP_R_FSSHLDFRM_DIS    ((UBase_t) 0x00000000UL)
#define SSI_PP_R_FSSHLDFRM_ENA    ((UBase_t) 0x00000008UL)

#define SSI_PP_FSSHLDFRM_MASK    ((UBase_t) 0x00000001UL)
#define SSI_PP_FSSHLDFRM_DIS    ((UBase_t) 0x00000000UL)
#define SSI_PP_FSSHLDFRM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_PP_H_ */
