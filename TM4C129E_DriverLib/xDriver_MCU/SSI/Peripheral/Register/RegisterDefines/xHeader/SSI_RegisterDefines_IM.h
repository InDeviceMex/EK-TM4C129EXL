/**
 *
 * @file SSI_RegisterDefines_IM.h
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

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_IM_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_IM_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

/******************************************************************************************
************************************ 6 IM *********************************************
******************************************************************************************/

/*--------*/
#define SSI_IM_R_RORIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_IM_R_RORIM_BIT    ((uint32_t) 0UL)
#define SSI_IM_R_RORIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_IM_R_RORIM_ENA    ((uint32_t) 0x00000001UL)

#define SSI_IM_RORIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_IM_RORIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_IM_RORIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_IM_R_RTIM_MASK    ((uint32_t) 0x00000002UL)
#define SSI_IM_R_RTIM_BIT    ((uint32_t) 1UL)
#define SSI_IM_R_RTIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_IM_R_RTIM_ENA    ((uint32_t) 0x00000002UL)

#define SSI_IM_RTIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_IM_RTIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_IM_RTIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_IM_R_RXIM_MASK    ((uint32_t) 0x00000004UL)
#define SSI_IM_R_RXIM_BIT    ((uint32_t) 2UL)
#define SSI_IM_R_RXIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_IM_R_RXIM_ENA    ((uint32_t) 0x00000004UL)

#define SSI_IM_RXIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_IM_RXIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_IM_RXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_IM_R_TXIM_MASK    ((uint32_t) 0x00000008UL)
#define SSI_IM_R_TXIM_BIT    ((uint32_t) 3UL)
#define SSI_IM_R_TXIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_IM_R_TXIM_ENA    ((uint32_t) 0x00000008UL)

#define SSI_IM_TXIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_IM_TXIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_IM_TXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_IM_R_DMARXIM_MASK    ((uint32_t) 0x00000010UL)
#define SSI_IM_R_DMARXIM_BIT    ((uint32_t) 4UL)
#define SSI_IM_R_DMARXIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_IM_R_DMARXIM_ENA    ((uint32_t) 0x00000010UL)

#define SSI_IM_DMARXIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_IM_DMARXIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_IM_DMARXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_IM_R_DMATXIM_MASK    ((uint32_t) 0x00000020UL)
#define SSI_IM_R_DMATXIM_BIT    ((uint32_t) 5UL)
#define SSI_IM_R_DMATXIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_IM_R_DMATXIM_ENA    ((uint32_t) 0x00000020UL)

#define SSI_IM_DMATXIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_IM_DMATXIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_IM_DMATXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_IM_R_EOTIM_MASK    ((uint32_t) 0x00000040UL)
#define SSI_IM_R_EOTIM_BIT    ((uint32_t) 6UL)
#define SSI_IM_R_EOTIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_IM_R_EOTIM_ENA    ((uint32_t) 0x00000040UL)

#define SSI_IM_EOTIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_IM_EOTIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_IM_EOTIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_IM_H_ */
