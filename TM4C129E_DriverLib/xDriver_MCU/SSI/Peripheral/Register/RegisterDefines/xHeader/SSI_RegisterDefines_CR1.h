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
#define SSI_CR1_R_LBM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_CR1_R_LBM_BIT    ((uint32_t) 0UL)
#define SSI_CR1_R_LBM_NORMAL    ((uint32_t) 0x00000000UL)
#define SSI_CR1_R_LBM_LOOPBACK    ((uint32_t) 0x00000001UL)

#define SSI_CR1_LBM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_CR1_LBM_NORMAL    ((uint32_t) 0x00000000UL)
#define SSI_CR1_LBM_LOOPBACK    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR1_R_SSE_MASK    ((uint32_t) 0x00000002UL)
#define SSI_CR1_R_SSE_BIT    ((uint32_t) 1UL)
#define SSI_CR1_R_SSE_DIS    ((uint32_t) 0x00000000UL)
#define SSI_CR1_R_SSE_ENA    ((uint32_t) 0x00000002UL)

#define SSI_CR1_SSE_MASK    ((uint32_t) 0x00000001UL)
#define SSI_CR1_SSE_DIS    ((uint32_t) 0x00000000UL)
#define SSI_CR1_SSE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR1_R_MS_MASK    ((uint32_t) 0x00000004UL)
#define SSI_CR1_R_MS_BIT    ((uint32_t) 2UL)
#define SSI_CR1_R_MS_MASTER    ((uint32_t) 0x00000000UL)
#define SSI_CR1_R_MS_SLAVE    ((uint32_t) 0x00000004UL)

#define SSI_CR1_MS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_CR1_MS_MASTER    ((uint32_t) 0x00000000UL)
#define SSI_CR1_MS_SLAVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR1_R_EOT_MASK    ((uint32_t) 0x00000010UL)
#define SSI_CR1_R_EOT_BIT    ((uint32_t) 4UL)
#define SSI_CR1_R_EOT_FIFO    ((uint32_t) 0x00000000UL)
#define SSI_CR1_R_EOT_ALL    ((uint32_t) 0x00000010UL)

#define SSI_CR1_EOT_MASK    ((uint32_t) 0x00000001UL)
#define SSI_CR1_EOT_FIFO    ((uint32_t) 0x00000000UL)
#define SSI_CR1_EOT_ALL    ((uint32_t) 0x00000001UL)
/*--------*/


/*--------*/
#define SSI_CR1_R_MODE_MASK    ((uint32_t) 0x000000C0UL)
#define SSI_CR1_R_MODE_BIT    ((uint32_t) 6UL)
#define SSI_CR1_R_MODE_LEGACY    ((uint32_t) 0x00000000UL)
#define SSI_CR1_R_MODE_BI    ((uint32_t) 0x00000040UL)
#define SSI_CR1_R_MODE_QUAD    ((uint32_t) 0x00000080UL)
#define SSI_CR1_R_MODE_ADVANCED    ((uint32_t) 0x000000C0UL)

#define SSI_CR1_MODE_MASK    ((uint32_t) 0x00000003UL)
#define SSI_CR1_MODE_LEGACY    ((uint32_t) 0x00000000UL)
#define SSI_CR1_MODE_BI    ((uint32_t) 0x00000001UL)
#define SSI_CR1_MODE_QUAD    ((uint32_t) 0x00000002UL)
#define SSI_CR1_MODE_ADVANCED    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define SSI_CR1_R_DIR_MASK    ((uint32_t) 0x00000100UL)
#define SSI_CR1_R_DIR_BIT    ((uint32_t) 8UL)
#define SSI_CR1_R_DIR_TX    ((uint32_t) 0x00000000UL)
#define SSI_CR1_R_DIR_WIRTE    ((uint32_t) 0x00000000UL)
#define SSI_CR1_R_DIR_RX    ((uint32_t) 0x00000100UL)
#define SSI_CR1_R_DIR_READ    ((uint32_t) 0x00000100UL)

#define SSI_CR1_DIR_MASK    ((uint32_t) 0x00000001UL)
#define SSI_CR1_DIR_TX    ((uint32_t) 0x00000000UL)
#define SSI_CR1_DIR_WRITE    ((uint32_t) 0x00000000UL)
#define SSI_CR1_DIR_RX    ((uint32_t) 0x00000001UL)
#define SSI_CR1_DIR_READ    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR1_R_HSCLKEN_MASK    ((uint32_t) 0x00000200UL)
#define SSI_CR1_R_HSCLKEN_BIT    ((uint32_t) 9UL)
#define SSI_CR1_R_HSCLKEN_DIS    ((uint32_t) 0x00000000UL)
#define SSI_CR1_R_HSCLKEN_ENA    ((uint32_t) 0x00000200UL)

#define SSI_CR1_HSCLKEN_MASK    ((uint32_t) 0x00000001UL)
#define SSI_CR1_HSCLKEN_DIS    ((uint32_t) 0x00000000UL)
#define SSI_CR1_HSCLKEN_ENA   ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR1_R_FSSHLDFRM_MASK    ((uint32_t) 0x00000400UL)
#define SSI_CR1_R_FSSHLDFRM_BIT    ((uint32_t) 10UL)
#define SSI_CR1_R_FSSHLDFRM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_CR1_R_FSSHLDFRM_ENA    ((uint32_t) 0x00000400UL)

#define SSI_CR1_FSSHLDFRM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_CR1_FSSHLDFRM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_CR1_FSSHLDFRM_ENA   ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR1_R_EOM_MASK    ((uint32_t) 0x00000800UL)
#define SSI_CR1_R_EOM_BIT    ((uint32_t) 11UL)
#define SSI_CR1_R_EOM_ONGOING    ((uint32_t) 0x00000000UL)
#define SSI_CR1_R_EOM_STOP    ((uint32_t) 0x00000800UL)

#define SSI_CR1_EOM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_CR1_EOM_ONGOING    ((uint32_t) 0x00000000UL)
#define SSI_CR1_EOM_STOP   ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_CR1_H_ */
