/**
 *
 * @file SYSCTL_RegisterDefines_Status.h
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_STATUS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_STATUS_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/******************************************************************************************
************************************25 SDPMST *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SDPMST_R_SPDERR_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SDPMST_R_SPDERR_BIT    (0UL)
#define SYSCTL_SDPMST_R_SPDERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_R_SPDERR_ERROR    ((UBase_t) 0x00000001UL)

#define SYSCTL_SDPMST_SPDERR_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SDPMST_SPDERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_SPDERR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_FPDERR_MASK    ((UBase_t) 0x00000002UL)
#define SYSCTL_SDPMST_R_FPDERR_BIT    (1UL)
#define SYSCTL_SDPMST_R_FPDERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_R_FPDERR_ERROR    ((UBase_t) 0x00000002UL)

#define SYSCTL_SDPMST_FPDERR_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SDPMST_FPDERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_FPDERR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_SRDERR_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_SDPMST_R_SRDERR_BIT    (2UL)
#define SYSCTL_SDPMST_R_SRDERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_R_SRDERR_ERROR    ((UBase_t) 0x00000004UL)

#define SYSCTL_SDPMST_SRDERR_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SDPMST_SRDERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_SRDERR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LDMINERR_MASK    ((UBase_t) 0x00000008UL)
#define SYSCTL_SDPMST_R_LDMINERR_BIT    (3UL)
#define SYSCTL_SDPMST_R_LDMINERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_R_LDMINERR_ERROR    ((UBase_t) 0x00000008UL)

#define SYSCTL_SDPMST_LDMINERR_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SDPMST_LDMINERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_LDMINERR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LSMINERR_MASK    ((UBase_t) 0x00000010UL)
#define SYSCTL_SDPMST_R_LSMINERR_BIT    (4UL)
#define SYSCTL_SDPMST_R_LSMINERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_R_LSMINERR_ERROR    ((UBase_t) 0x00000010UL)

#define SYSCTL_SDPMST_LSMINERR_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SDPMST_LSMINERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_LSMINERR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LMAXERR_MASK    ((UBase_t) 0x00000040UL)
#define SYSCTL_SDPMST_R_LMAXERR_BIT    (6UL)
#define SYSCTL_SDPMST_R_LMAXERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_R_LMAXERR_ERROR    ((UBase_t) 0x00000040UL)

#define SYSCTL_SDPMST_LMAXERR_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SDPMST_LMAXERR_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_LMAXERR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_SRDW_MASK    ((UBase_t) 0x00000080UL)
#define SYSCTL_SDPMST_R_SRDW_BIT    (7UL)
#define SYSCTL_SDPMST_R_SRDW_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_R_SRDW_ERROR    ((UBase_t) 0x00000080UL)

#define SYSCTL_SDPMST_SRDW_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SDPMST_SRDW_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_SRDW_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_PRACT_MASK    ((UBase_t) 0x00010000UL)
#define SYSCTL_SDPMST_R_PRACT_BIT    (16UL)
#define SYSCTL_SDPMST_R_PRACT_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_R_PRACT_ERROR    ((UBase_t) 0x00010000UL)

#define SYSCTL_SDPMST_PRACT_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SDPMST_PRACT_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_PRACT_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LOWPWR_MASK    ((UBase_t) 0x00020000UL)
#define SYSCTL_SDPMST_R_LOWPWR_BIT    (17UL)
#define SYSCTL_SDPMST_R_LOWPWR_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_R_LOWPWR_ERROR    ((UBase_t) 0x00020000UL)

#define SYSCTL_SDPMST_LOWPWR_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SDPMST_LOWPWR_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_LOWPWR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_FLASHLP_MASK    ((UBase_t) 0x00040000UL)
#define SYSCTL_SDPMST_R_FLASHLP_BIT    (18UL)
#define SYSCTL_SDPMST_R_FLASHLP_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_R_FLASHLP_ERROR    ((UBase_t) 0x00040000UL)

#define SYSCTL_SDPMST_FLASHLP_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SDPMST_FLASHLP_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_FLASHLP_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LDOUA_MASK    ((UBase_t) 0x00080000UL)
#define SYSCTL_SDPMST_R_LDOUA_BIT    (19UL)
#define SYSCTL_SDPMST_R_LDOUA_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_R_LDOUA_ERROR    ((UBase_t) 0x00080000UL)

#define SYSCTL_SDPMST_LDOUA_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SDPMST_LDOUA_NOERROR    ((UBase_t) 0x00000000UL)
#define SYSCTL_SDPMST_LDOUA_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_STATUS_H_ */
