/**
 *
 * @file SSI_RegisterDefines_CR1.h
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
 * @verbatim 16 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_CR1_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_CR1_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

/******************************************************************************************
************************************ 2 CR1 *********************************************
******************************************************************************************/

/*--------*/
#define SSI_CR1_R_LBM_MASK    ((UBase_t) 0x00000001UL)
#define SSI_CR1_R_LBM_BIT    ((UBase_t) 0UL)
#define SSI_CR1_R_LBM_NORMAL    ((UBase_t) 0x00000000UL)
#define SSI_CR1_R_LBM_LOOPBACK    ((UBase_t) 0x00000001UL)

#define SSI_CR1_LBM_MASK    ((UBase_t) 0x00000001UL)
#define SSI_CR1_LBM_NORMAL    ((UBase_t) 0x00000000UL)
#define SSI_CR1_LBM_LOOPBACK    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR1_R_SSE_MASK    ((UBase_t) 0x00000002UL)
#define SSI_CR1_R_SSE_BIT    ((UBase_t) 1UL)
#define SSI_CR1_R_SSE_DIS    ((UBase_t) 0x00000000UL)
#define SSI_CR1_R_SSE_ENA    ((UBase_t) 0x00000002UL)

#define SSI_CR1_SSE_MASK    ((UBase_t) 0x00000001UL)
#define SSI_CR1_SSE_DIS    ((UBase_t) 0x00000000UL)
#define SSI_CR1_SSE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR1_R_MS_MASK    ((UBase_t) 0x00000004UL)
#define SSI_CR1_R_MS_BIT    ((UBase_t) 2UL)
#define SSI_CR1_R_MS_MASTER    ((UBase_t) 0x00000000UL)
#define SSI_CR1_R_MS_SLAVE    ((UBase_t) 0x00000004UL)

#define SSI_CR1_MS_MASK    ((UBase_t) 0x00000001UL)
#define SSI_CR1_MS_MASTER    ((UBase_t) 0x00000000UL)
#define SSI_CR1_MS_SLAVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR1_R_MODE_MASK    ((UBase_t) 0x000000C0UL)
#define SSI_CR1_R_MODE_BIT    ((UBase_t) 6UL)
#define SSI_CR1_R_MODE_LEGACY    ((UBase_t) 0x00000000UL)
#define SSI_CR1_R_MODE_BI    ((UBase_t) 0x00000040UL)
#define SSI_CR1_R_MODE_QUAD    ((UBase_t) 0x00000080UL)
#define SSI_CR1_R_MODE_ADVANCED    ((UBase_t) 0x000000C0UL)

#define SSI_CR1_MODE_MASK    ((UBase_t) 0x00000003UL)
#define SSI_CR1_MODE_LEGACY    ((UBase_t) 0x00000000UL)
#define SSI_CR1_MODE_BI    ((UBase_t) 0x00000001UL)
#define SSI_CR1_MODE_QUAD    ((UBase_t) 0x00000002UL)
#define SSI_CR1_MODE_ADVANCED    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define SSI_CR1_R_DIR_MASK    ((UBase_t) 0x00000100UL)
#define SSI_CR1_R_DIR_BIT    ((UBase_t) 8UL)
#define SSI_CR1_R_DIR_TX    ((UBase_t) 0x00000000UL)
#define SSI_CR1_R_DIR_WIRTE    ((UBase_t) 0x00000000UL)
#define SSI_CR1_R_DIR_RX    ((UBase_t) 0x00000100UL)
#define SSI_CR1_R_DIR_READ    ((UBase_t) 0x00000100UL)

#define SSI_CR1_DIR_MASK    ((UBase_t) 0x00000001UL)
#define SSI_CR1_DIR_TX    ((UBase_t) 0x00000000UL)
#define SSI_CR1_DIR_WRITE    ((UBase_t) 0x00000000UL)
#define SSI_CR1_DIR_RX    ((UBase_t) 0x00000001UL)
#define SSI_CR1_DIR_READ    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR1_R_HSCLKEN_MASK    ((UBase_t) 0x00000200UL)
#define SSI_CR1_R_HSCLKEN_BIT    ((UBase_t) 9UL)
#define SSI_CR1_R_HSCLKEN_DIS    ((UBase_t) 0x00000000UL)
#define SSI_CR1_R_HSCLKEN_ENA    ((UBase_t) 0x00000200UL)

#define SSI_CR1_HSCLKEN_MASK    ((UBase_t) 0x00000001UL)
#define SSI_CR1_HSCLKEN_DIS    ((UBase_t) 0x00000000UL)
#define SSI_CR1_HSCLKEN_ENA   ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR1_R_FSSHLDFRM_MASK    ((UBase_t) 0x00000400UL)
#define SSI_CR1_R_FSSHLDFRM_BIT    ((UBase_t) 10UL)
#define SSI_CR1_R_FSSHLDFRM_DIS    ((UBase_t) 0x00000000UL)
#define SSI_CR1_R_FSSHLDFRM_ENA    ((UBase_t) 0x00000400UL)

#define SSI_CR1_FSSHLDFRM_MASK    ((UBase_t) 0x00000001UL)
#define SSI_CR1_FSSHLDFRM_DIS    ((UBase_t) 0x00000000UL)
#define SSI_CR1_FSSHLDFRM_ENA   ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR1_R_EOM_MASK    ((UBase_t) 0x00000800UL)
#define SSI_CR1_R_EOM_BIT    ((UBase_t) 11UL)
#define SSI_CR1_R_EOM_ONGOING    ((UBase_t) 0x00000000UL)
#define SSI_CR1_R_EOM_STOP    ((UBase_t) 0x00000800UL)

#define SSI_CR1_EOM_MASK    ((UBase_t) 0x00000001UL)
#define SSI_CR1_EOM_ONGOING    ((UBase_t) 0x00000000UL)
#define SSI_CR1_EOM_STOP   ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_CR1_H_ */
