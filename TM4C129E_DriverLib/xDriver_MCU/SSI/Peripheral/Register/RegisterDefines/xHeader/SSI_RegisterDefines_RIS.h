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
#define SSI_RIS_R_RORRIS_MASK    ((UBase_t) 0x00000001UL)
#define SSI_RIS_R_RORRIS_BIT    ((UBase_t) 0UL)
#define SSI_RIS_R_RORRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SSI_RIS_R_RORRIS_ACTIVE    ((UBase_t) 0x00000001UL)

#define SSI_RIS_RORRIS_MASK    ((UBase_t) 0x00000001UL)
#define SSI_RIS_RORRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SSI_RIS_RORRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_RIS_R_RTRIS_MASK    ((UBase_t) 0x00000002UL)
#define SSI_RIS_R_RTRIS_BIT    ((UBase_t) 1UL)
#define SSI_RIS_R_RTRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SSI_RIS_R_RTRIS_ACTIVE    ((UBase_t) 0x00000002UL)

#define SSI_RIS_RTRIS_MASK    ((UBase_t) 0x00000001UL)
#define SSI_RIS_RTRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SSI_RIS_RTRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_RIS_R_RXRIS_MASK    ((UBase_t) 0x00000004UL)
#define SSI_RIS_R_RXRIS_BIT    ((UBase_t) 2UL)
#define SSI_RIS_R_RXRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SSI_RIS_R_RXRIS_ACTIVE    ((UBase_t) 0x00000004UL)

#define SSI_RIS_RXRIS_MASK    ((UBase_t) 0x00000001UL)
#define SSI_RIS_RXRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SSI_RIS_RXRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_RIS_R_TXRIS_MASK    ((UBase_t) 0x00000008UL)
#define SSI_RIS_R_TXRIS_BIT    ((UBase_t) 3UL)
#define SSI_RIS_R_TXRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SSI_RIS_R_TXRIS_ACTIVE    ((UBase_t) 0x00000008UL)

#define SSI_RIS_TXRIS_MASK    ((UBase_t) 0x00000001UL)
#define SSI_RIS_TXRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SSI_RIS_TXRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_RIS_R_DMARXRIS_MASK    ((UBase_t) 0x00000010UL)
#define SSI_RIS_R_DMARXRIS_BIT    ((UBase_t) 4UL)
#define SSI_RIS_R_DMARXRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SSI_RIS_R_DMARXRIS_ACTIVE    ((UBase_t) 0x00000010UL)

#define SSI_RIS_DMARXRIS_MASK    ((UBase_t) 0x00000001UL)
#define SSI_RIS_DMARXRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SSI_RIS_DMARXRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_RIS_R_DMATXRIS_MASK    ((UBase_t) 0x00000020UL)
#define SSI_RIS_R_DMATXRIS_BIT    ((UBase_t) 5UL)
#define SSI_RIS_R_DMATXRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SSI_RIS_R_DMATXRIS_ACTIVE    ((UBase_t) 0x00000020UL)

#define SSI_RIS_DMATXRIS_MASK    ((UBase_t) 0x00000001UL)
#define SSI_RIS_DMATXRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SSI_RIS_DMATXRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_RIS_R_EOTRIS_MASK    ((UBase_t) 0x00000040UL)
#define SSI_RIS_R_EOTRIS_BIT    ((UBase_t) 6UL)
#define SSI_RIS_R_EOTRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SSI_RIS_R_EOTRIS_ACTIVE    ((UBase_t) 0x00000040UL)

#define SSI_RIS_EOTRIS_MASK    ((UBase_t) 0x00000001UL)
#define SSI_RIS_EOTRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SSI_RIS_EOTRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_RIS_H_ */
