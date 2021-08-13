/**
 *
 * @file SSI_RegisterDefines_MIS.h
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

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_MIS_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_MIS_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/

/*--------*/
#define SSI_MIS_R_RORMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_MIS_R_RORMIS_BIT    ((uint32_t) 0UL)
#define SSI_MIS_R_RORMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_MIS_R_RORMIS_OCCUR    ((uint32_t) 0x00000001UL)

#define SSI_MIS_RORMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_MIS_RORMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_MIS_RORMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_MIS_R_RTMIS_MASK    ((uint32_t) 0x00000002UL)
#define SSI_MIS_R_RTMIS_BIT    ((uint32_t) 1UL)
#define SSI_MIS_R_RTMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_MIS_R_RTMIS_OCCUR    ((uint32_t) 0x00000002UL)

#define SSI_MIS_RTMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_MIS_RTMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_MIS_RTMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_MIS_R_RXMIS_MASK    ((uint32_t) 0x00000004UL)
#define SSI_MIS_R_RXMIS_BIT    ((uint32_t) 2UL)
#define SSI_MIS_R_RXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_MIS_R_RXMIS_OCCUR    ((uint32_t) 0x00000004UL)

#define SSI_MIS_RXMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_MIS_RXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_MIS_RXMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_MIS_R_TXMIS_MASK    ((uint32_t) 0x00000008UL)
#define SSI_MIS_R_TXMIS_BIT    ((uint32_t) 3UL)
#define SSI_MIS_R_TXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_MIS_R_TXMIS_OCCUR    ((uint32_t) 0x00000008UL)

#define SSI_MIS_TXMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_MIS_TXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_MIS_TXMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_MIS_R_DMARXMIS_MASK    ((uint32_t) 0x00000010UL)
#define SSI_MIS_R_DMARXMIS_BIT    ((uint32_t) 4UL)
#define SSI_MIS_R_DMARXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_MIS_R_DMARXMIS_OCCUR    ((uint32_t) 0x00000010UL)

#define SSI_MIS_DMARXMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_MIS_DMARXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_MIS_DMARXMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_MIS_R_DMATXMIS_MASK    ((uint32_t) 0x00000020UL)
#define SSI_MIS_R_DMATXMIS_BIT    ((uint32_t) 5UL)
#define SSI_MIS_R_DMATXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_MIS_R_DMATXMIS_OCCUR    ((uint32_t) 0x00000020UL)

#define SSI_MIS_DMATXMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_MIS_DMATXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_MIS_DMATXMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_MIS_R_EOTMIS_MASK    ((uint32_t) 0x00000040UL)
#define SSI_MIS_R_EOTMIS_BIT    ((uint32_t) 6UL)
#define SSI_MIS_R_EOTMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_MIS_R_EOTMIS_OCCUR    ((uint32_t) 0x00000040UL)

#define SSI_MIS_EOTMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_MIS_EOTMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_MIS_EOTMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_MIS_H_ */
