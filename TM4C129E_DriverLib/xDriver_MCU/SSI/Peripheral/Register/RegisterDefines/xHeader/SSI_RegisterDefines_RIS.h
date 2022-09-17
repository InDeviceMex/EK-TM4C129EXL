/**
 *
 * @file SSI_RegisterDefines_RIS.h
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

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_RIS_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_RIS_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/

/*--------*/
#define SSI_RIS_R_RORRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_RIS_R_RORRIS_BIT    ((uint32_t) 0UL)
#define SSI_RIS_R_RORRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_RIS_R_RORRIS_ACTIVE    ((uint32_t) 0x00000001UL)

#define SSI_RIS_RORRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_RIS_RORRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_RIS_RORRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_RIS_R_RTRIS_MASK    ((uint32_t) 0x00000002UL)
#define SSI_RIS_R_RTRIS_BIT    ((uint32_t) 1UL)
#define SSI_RIS_R_RTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_RIS_R_RTRIS_ACTIVE    ((uint32_t) 0x00000002UL)

#define SSI_RIS_RTRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_RIS_RTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_RIS_RTRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_RIS_R_RXRIS_MASK    ((uint32_t) 0x00000004UL)
#define SSI_RIS_R_RXRIS_BIT    ((uint32_t) 2UL)
#define SSI_RIS_R_RXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_RIS_R_RXRIS_ACTIVE    ((uint32_t) 0x00000004UL)

#define SSI_RIS_RXRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_RIS_RXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_RIS_RXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_RIS_R_TXRIS_MASK    ((uint32_t) 0x00000008UL)
#define SSI_RIS_R_TXRIS_BIT    ((uint32_t) 3UL)
#define SSI_RIS_R_TXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_RIS_R_TXRIS_ACTIVE    ((uint32_t) 0x00000008UL)

#define SSI_RIS_TXRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_RIS_TXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_RIS_TXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_RIS_R_DMARXRIS_MASK    ((uint32_t) 0x00000010UL)
#define SSI_RIS_R_DMARXRIS_BIT    ((uint32_t) 4UL)
#define SSI_RIS_R_DMARXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_RIS_R_DMARXRIS_ACTIVE    ((uint32_t) 0x00000010UL)

#define SSI_RIS_DMARXRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_RIS_DMARXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_RIS_DMARXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_RIS_R_DMATXRIS_MASK    ((uint32_t) 0x00000020UL)
#define SSI_RIS_R_DMATXRIS_BIT    ((uint32_t) 5UL)
#define SSI_RIS_R_DMATXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_RIS_R_DMATXRIS_ACTIVE    ((uint32_t) 0x00000020UL)

#define SSI_RIS_DMATXRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_RIS_DMATXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_RIS_DMATXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_RIS_R_EOTRIS_MASK    ((uint32_t) 0x00000040UL)
#define SSI_RIS_R_EOTRIS_BIT    ((uint32_t) 6UL)
#define SSI_RIS_R_EOTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_RIS_R_EOTRIS_ACTIVE    ((uint32_t) 0x00000040UL)

#define SSI_RIS_EOTRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_RIS_EOTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_RIS_EOTRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_RIS_H_ */
