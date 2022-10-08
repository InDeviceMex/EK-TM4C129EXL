/**
 *
 * @file I2C_RegisterDefines_MCR.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MCR_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MCR_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/******************************************************************************************
************************************ 9 MCR *********************************************
******************************************************************************************/
/*--------*/
#define I2C_MASTER_CR_R_LPBK_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_CR_R_LPBK_BIT    ((UBase_t) 0UL)
#define I2C_MASTER_CR_R_LPBK_NORMAL    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CR_R_LPBK_LOOPBACK    ((UBase_t) 0x00000001UL)

#define I2C_MASTER_CR_LPBK_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_CR_LPBK_NORMAL    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CR_LPBK_LOOPBACK    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_CR_R_MFE_MASK    ((UBase_t) 0x00000010UL)
#define I2C_MASTER_CR_R_MFE_BIT    ((UBase_t) 4UL)
#define I2C_MASTER_CR_R_MFE_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CR_R_MFE_ENA    ((UBase_t) 0x00000010UL)

#define I2C_MASTER_CR_MFE_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_CR_MFE_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CR_MFE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_CR_R_SFE_MASK    ((UBase_t) 0x00000020UL)
#define I2C_MASTER_CR_R_SFE_BIT    ((UBase_t) 5UL)
#define I2C_MASTER_CR_R_SFE_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CR_R_SFE_ENA    ((UBase_t) 0x00000020UL)

#define I2C_MASTER_CR_SFE_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_CR_SFE_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CR_SFE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 9 MCR *********************************************
******************************************************************************************/
/*--------*/
#define I2C_MCR_R_LPBK_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCR_R_LPBK_BIT    ((UBase_t) 0UL)
#define I2C_MCR_R_LPBK_NORMAL    ((UBase_t) 0x00000000UL)
#define I2C_MCR_R_LPBK_LOOPBACK    ((UBase_t) 0x00000001UL)

#define I2C_MCR_LPBK_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCR_LPBK_NORMAL    ((UBase_t) 0x00000000UL)
#define I2C_MCR_LPBK_LOOPBACK    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCR_R_MFE_MASK    ((UBase_t) 0x00000010UL)
#define I2C_MCR_R_MFE_BIT    ((UBase_t) 4UL)
#define I2C_MCR_R_MFE_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCR_R_MFE_ENA    ((UBase_t) 0x00000010UL)

#define I2C_MCR_MFE_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCR_MFE_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCR_MFE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCR_R_SFE_MASK    ((UBase_t) 0x00000020UL)
#define I2C_MCR_R_SFE_BIT    ((UBase_t) 5UL)
#define I2C_MCR_R_SFE_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCR_R_SFE_ENA    ((UBase_t) 0x00000020UL)

#define I2C_MCR_SFE_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCR_SFE_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCR_SFE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/
#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MCR_H_ */
