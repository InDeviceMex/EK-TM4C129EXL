/**
 *
 * @file SYSEXC_RegisterDefines.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERDEFINES_H_

#include <xDriver_MCU/SYSEXC/Peripheral/xHeader/SYSEXC_Enum.h>

/******************************************************************************************
************************************ 1 RIS *********************************************
******************************************************************************************/
/*----------*/
#define SYSEXC_RIS_R_FPIDCRIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_RIS_R_FPIDCRIS_BIT    (0UL)
#define SYSEXC_RIS_R_FPIDCRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_RIS_R_FPIDCRIS_ACTIVE    ((UBase_t) 0x00000001UL)

#define SYSEXC_RIS_FPIDCRIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_RIS_FPIDCRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_RIS_FPIDCRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_RIS_R_FPDZCRIS_MASK    ((UBase_t) 0x00000002UL)
#define SYSEXC_RIS_R_FPDZCRIS_BIT    (1UL)
#define SYSEXC_RIS_R_FPDZCRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_RIS_R_FPDZCRIS_ACTIVE    ((UBase_t) 0x00000002UL)

#define SYSEXC_RIS_FPDZCRIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_RIS_FPDZCRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_RIS_FPDZCRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_RIS_R_FPIOCRIS_MASK    ((UBase_t) 0x00000004UL)
#define SYSEXC_RIS_R_FPIOCRIS_BIT    (2UL)
#define SYSEXC_RIS_R_FPIOCRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_RIS_R_FPIOCRIS_ACTIVE    ((UBase_t) 0x00000004UL)

#define SYSEXC_RIS_FPIOCRIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_RIS_FPIOCRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_RIS_FPIOCRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_RIS_R_FPUFCRIS_MASK    ((UBase_t) 0x00000008UL)
#define SYSEXC_RIS_R_FPUFCRIS_BIT    (3UL)
#define SYSEXC_RIS_R_FPUFCRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_RIS_R_FPUFCRIS_ACTIVE    ((UBase_t) 0x00000008UL)

#define SYSEXC_RIS_FPUFCRIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_RIS_FPUFCRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_RIS_FPUFCRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_RIS_R_FPOFCRIS_MASK    ((UBase_t) 0x00000010UL)
#define SYSEXC_RIS_R_FPOFCRIS_BIT    (4UL)
#define SYSEXC_RIS_R_FPOFCRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_RIS_R_FPOFCRIS_ACTIVE    ((UBase_t) 0x00000010UL)

#define SYSEXC_RIS_FPOFCRIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_RIS_FPOFCRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_RIS_FPOFCRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_RIS_R_FPIXCRIS_MASK    ((UBase_t) 0x00000020UL)
#define SYSEXC_RIS_R_FPIXCRIS_BIT    (5UL)
#define SYSEXC_RIS_R_FPIXCRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_RIS_R_FPIXCRIS_ACTIVE    ((UBase_t) 0x00000010UL)

#define SYSEXC_RIS_FPIXCRIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_RIS_FPIXCRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_RIS_FPIXCRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 2 IM *********************************************
******************************************************************************************/
/*----------*/
#define SYSEXC_IM_R_FPIDCIM_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_IM_R_FPIDCIM_BIT    ((UBase_t) 0)
#define SYSEXC_IM_R_FPIDCIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSEXC_IM_R_FPIDCIM_ENA    ((UBase_t) 0x00000001UL)

#define SYSEXC_IM_FPIDCIM_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_IM_FPIDCIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSEXC_IM_FPIDCIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_IM_R_FPDZCIM_MASK    ((UBase_t) 0x00000002UL)
#define SYSEXC_IM_R_FPDZCIM_BIT    ((UBase_t) 1)
#define SYSEXC_IM_R_FPDZCIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSEXC_IM_R_FPDZCIM_ENA    ((UBase_t) 0x00000002UL)

#define SYSEXC_IM_FPDZCIM_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_IM_FPDZCIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSEXC_IM_FPDZCIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_IM_R_FPIOCIM_MASK    ((UBase_t) 0x00000004UL)
#define SYSEXC_IM_R_FPIOCIM_BIT    (2UL)
#define SYSEXC_IM_R_FPIOCIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSEXC_IM_R_FPIOCIM_ENA    ((UBase_t) 0x00000004UL)

#define SYSEXC_IM_FPIOCIM_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_IM_FPIOCIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSEXC_IM_FPIOCIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_IM_R_FPUFCIM_MASK    ((UBase_t) 0x00000008UL)
#define SYSEXC_IM_R_FPUFCIM_BIT    (3UL)
#define SYSEXC_IM_R_FPUFCIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSEXC_IM_R_FPUFCIM_ENA    ((UBase_t) 0x00000008UL)

#define SYSEXC_IM_FPUFCIM_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_IM_FPUFCIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSEXC_IM_FPUFCIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_IM_R_FPOFCIM_MASK    ((UBase_t) 0x00000010UL)
#define SYSEXC_IM_R_FPOFCIM_BIT    (4UL)
#define SYSEXC_IM_R_FPOFCIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSEXC_IM_R_FPOFCIM_ENA    ((UBase_t) 0x00000010UL)

#define SYSEXC_IM_FPOFCIM_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_IM_FPOFCIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSEXC_IM_FPOFCIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_IM_R_FPIXCIM_MASK    ((UBase_t) 0x00000020UL)
#define SYSEXC_IM_R_FPIXCIM_BIT    (5UL)
#define SYSEXC_IM_R_FPIXCIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSEXC_IM_R_FPIXCIM_ENA    ((UBase_t) 0x00000010UL)

#define SYSEXC_IM_FPIXCIM_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_IM_FPIXCIM_DIS    ((UBase_t) 0x00000000UL)
#define SYSEXC_IM_FPIXCIM_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 3 MIS *********************************************
******************************************************************************************/
/*----------*/
#define SYSEXC_MIS_R_FPIDCMIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_MIS_R_FPIDCMIS_BIT    (0UL)
#define SYSEXC_MIS_R_FPIDCMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_MIS_R_FPIDCMIS_ACTIVE    ((UBase_t) 0x00000001UL)

#define SYSEXC_MIS_FPIDCMIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_MIS_FPIDCMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_MIS_FPIDCMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_MIS_R_FPDZCMIS_MASK    ((UBase_t) 0x00000002UL)
#define SYSEXC_MIS_R_FPDZCMIS_BIT    (1UL)
#define SYSEXC_MIS_R_FPDZCMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_MIS_R_FPDZCMIS_ACTIVE    ((UBase_t) 0x00000002UL)

#define SYSEXC_MIS_FPDZCMIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_MIS_FPDZCMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_MIS_FPDZCMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_MIS_R_FPIOCMIS_MASK    ((UBase_t) 0x00000004UL)
#define SYSEXC_MIS_R_FPIOCMIS_BIT    (2UL)
#define SYSEXC_MIS_R_FPIOCMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_MIS_R_FPIOCMIS_ACTIVE    ((UBase_t) 0x00000004UL)

#define SYSEXC_MIS_FPIOCMIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_MIS_FPIOCMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_MIS_FPIOCMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_MIS_R_FPUFCMIS_MASK    ((UBase_t) 0x00000008UL)
#define SYSEXC_MIS_R_FPUFCMIS_BIT    (3UL)
#define SYSEXC_MIS_R_FPUFCMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_MIS_R_FPUFCMIS_ACTIVE    ((UBase_t) 0x00000008UL)

#define SYSEXC_MIS_FPUFCMIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_MIS_FPUFCMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_MIS_FPUFCMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_MIS_R_FPOFCMIS_MASK    ((UBase_t) 0x00000010UL)
#define SYSEXC_MIS_R_FPOFCMIS_BIT    (4UL)
#define SYSEXC_MIS_R_FPOFCMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_MIS_R_FPOFCMIS_ACTIVE    ((UBase_t) 0x00000010UL)

#define SYSEXC_MIS_FPOFCMIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_MIS_FPOFCMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_MIS_FPOFCMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_MIS_R_FPIXCMIS_MASK    ((UBase_t) 0x00000020UL)
#define SYSEXC_MIS_R_FPIXCMIS_BIT    (5UL)
#define SYSEXC_MIS_R_FPIXCMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_MIS_R_FPIXCMIS_ACTIVE    ((UBase_t) 0x00000010UL)

#define SYSEXC_MIS_FPIXCMIS_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_MIS_FPIXCMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define SYSEXC_MIS_FPIXCMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 4 IC *********************************************
******************************************************************************************/
/*----------*/
#define SYSEXC_IC_R_FPIDCIC_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_IC_R_FPIDCIC_BIT    (0UL)
#define SYSEXC_IC_R_FPIDCIC_CLEAR    ((UBase_t) 0x00000001UL)

#define SYSEXC_IC_FPIDCIC_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_IC_FPIDCIC_CLEAR    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_IC_R_FPDZCIC_MASK    ((UBase_t) 0x00000002UL)
#define SYSEXC_IC_R_FPDZCIC_BIT    (1UL)
#define SYSEXC_IC_R_FPDZCIC_CLEAR    ((UBase_t) 0x00000002UL)

#define SYSEXC_IC_FPDZCIC_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_IC_FPDZCIC_CLEAR    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_IC_R_FPIOCIC_MASK    ((UBase_t) 0x00000004UL)
#define SYSEXC_IC_R_FPIOCIC_BIT    (2UL)
#define SYSEXC_IC_R_FPIOCIC_CLEAR    ((UBase_t) 0x00000004UL)

#define SYSEXC_IC_FPIOCIC_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_IC_FPIOCIC_CLEAR    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_IC_R_FPUFCIC_MASK    ((UBase_t) 0x00000008UL)
#define SYSEXC_IC_R_FPUFCIC_BIT    (3UL)
#define SYSEXC_IC_R_FPUFCIC_CLEAR    ((UBase_t) 0x00000008UL)

#define SYSEXC_IC_FPUFCIC_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_IC_FPUFCIC_CLEAR    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_IC_R_FPOFCIC_MASK    ((UBase_t) 0x00000010UL)
#define SYSEXC_IC_R_FPOFCIC_BIT    (4UL)
#define SYSEXC_IC_R_FPOFCIC_CLEAR    ((UBase_t) 0x00000010UL)

#define SYSEXC_IC_FPOFCIC_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_IC_FPOFCIC_CLEAR    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define SYSEXC_IC_R_FPIXCIC_MASK    ((UBase_t) 0x00000020UL)
#define SYSEXC_IC_R_FPIXCIC_BIT    (5UL)
#define SYSEXC_IC_R_FPIXCIC_CLEAR    ((UBase_t) 0x00000010UL)

#define SYSEXC_IC_FPIXCIC_MASK    ((UBase_t) 0x00000001UL)
#define SYSEXC_IC_FPIXCIC_CLEAR    ((UBase_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERDEFINES_H_ */
