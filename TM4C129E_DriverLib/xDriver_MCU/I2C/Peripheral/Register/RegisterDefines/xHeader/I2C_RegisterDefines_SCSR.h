/**
 *
 * @file I2C_RegisterDefines_SCSR.h
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
 * @verbatim 6 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SCSR_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SCSR_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 14 SCSR *********************************************
******************************************************************************************/
/*--------*/
#define I2C_SCSR_R_RREQ_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SCSR_R_RREQ_BIT    ((uint32_t) 0UL)
#define I2C_SCSR_R_RREQ_NOREQ    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_R_RREQ_REQ    ((uint32_t) 0x00000001UL)

#define I2C_SCSR_RREQ_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SCSR_RREQ_NOREQ    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_RREQ_REQ    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SCSR_R_TREQ_MASK    ((uint32_t) 0x00000002UL)
#define I2C_SCSR_R_TREQ_BIT    ((uint32_t) 1UL)
#define I2C_SCSR_R_TREQ_NOREQ    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_R_TREQ_REQ    ((uint32_t) 0x00000002UL)

#define I2C_SCSR_TREQ_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SCSR_TREQ_NOREQ    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_TREQ_REQ    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SCSR_R_FBR_MASK    ((uint32_t) 0x00000004UL)
#define I2C_SCSR_R_FBR_BIT    ((uint32_t) 2UL)
#define I2C_SCSR_R_FBR_NORECEIVE    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_R_FBR_RECEIVE    ((uint32_t) 0x00000004UL)

#define I2C_SCSR_FBR_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SCSR_FBR_NORECEIVE    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_FBR_RECEIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SCSR_R_OAR2SEL_MASK    ((uint32_t) 0x00000008UL)
#define I2C_SCSR_R_OAR2SEL_BIT    ((uint32_t) 3UL)
#define I2C_SCSR_R_OAR2SEL_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_R_OAR2SEL_MATCHED    ((uint32_t) 0x00000008UL)

#define I2C_SCSR_OAR2SEL_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SCSR_OAR2SEL_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_OAR2SEL_MATCHED    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SCSR_R_QCMDST_MASK    ((uint32_t) 0x00000010UL)
#define I2C_SCSR_R_QCMDST_BIT    ((uint32_t) 4UL)
#define I2C_SCSR_R_QCMDST_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_R_QCMDST_OCCUR    ((uint32_t) 0x00000010UL)

#define I2C_SCSR_QCMDST_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SCSR_QCMDST_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_QCMDST_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SCSR_R_QCMDRW_MASK    ((uint32_t) 0x00000020UL)
#define I2C_SCSR_R_QCMDRW_BIT    ((uint32_t) 5UL)
#define I2C_SCSR_R_QCMDRW_WRITE    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_R_QCMDRW_READ    ((uint32_t) 0x00000020UL)

#define I2C_SCSR_QCMDRW_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SCSR_QCMDRW_WRITE    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_QCMDRW_READ    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SCSR_R_ACTDMATX_MASK    ((uint32_t) 0x40000000UL)
#define I2C_SCSR_R_ACTDMATX_BIT    ((uint32_t) 30UL)
#define I2C_SCSR_R_ACTDMATX_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_R_ACTDMATX_ACTIVE    ((uint32_t) 0x40000000UL)

#define I2C_SCSR_ACTDMATX_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SCSR_ACTDMATX_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_ACTDMATX_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SCSR_R_ACTDMARX_MASK    ((uint32_t) 0x80000000UL)
#define I2C_SCSR_R_ACTDMARX_BIT    ((uint32_t) 31UL)
#define I2C_SCSR_R_ACTDMARX_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_R_ACTDMARX_ACTIVE    ((uint32_t) 0x80000000UL)

#define I2C_SCSR_ACTDMARX_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SCSR_ACTDMARX_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_ACTDMARX_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SCSR_R_DA_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SCSR_R_DA_BIT    ((uint32_t) 0UL)
#define I2C_SCSR_R_DA_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_R_DA_ENA    ((uint32_t) 0x00000001UL)

#define I2C_SCSR_DA_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SCSR_DA_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_DA_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SCSR_R_TXFIFO_MASK    ((uint32_t) 0x00000002UL)
#define I2C_SCSR_R_TXFIFO_BIT    ((uint32_t) 1UL)
#define I2C_SCSR_R_TXFIFO_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_R_TXFIFO_ENA    ((uint32_t) 0x00000002UL)

#define I2C_SCSR_TXFIFO_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SCSR_TXFIFO_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_TXFIFO_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SCSR_R_RXFIFO_MASK    ((uint32_t) 0x00000004UL)
#define I2C_SCSR_R_RXFIFO_BIT    ((uint32_t) 2UL)
#define I2C_SCSR_R_RXFIFO_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_R_RXFIFO_ENA    ((uint32_t) 0x00000004UL)

#define I2C_SCSR_RXFIFO_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SCSR_RXFIFO_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SCSR_RXFIFO_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SCSR_H_ */
