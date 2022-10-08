/**
 *
 * @file I2C_RegisterDefines_MSA.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MSA_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MSA_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/******************************************************************************************
************************************ 1 MSA *********************************************
******************************************************************************************/
/*--------*/
#define I2C_MASTER_SA_R_RS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_SA_R_RS_BIT    ((UBase_t) 0UL)
#define I2C_MASTER_SA_R_RS_TRANSMIT    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_SA_R_RS_RECEIVE    ((UBase_t) 0x00000001UL)

#define I2C_MASTER_SA_RS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_SA_RS_TRANSMIT    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_SA_RS_RECEIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_SA_R_SA_MASK    ((UBase_t) 0x000000FEUL)
#define I2C_MASTER_SA_R_SA_BIT    ((UBase_t) 1UL)

#define I2C_MASTER_SA_SA_MASK    ((UBase_t) 0x0000007FUL)
/*--------*/

/******************************************************************************************
************************************ 1 MSA *********************************************
******************************************************************************************/
/*--------*/
#define I2C_MSA_R_RS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MSA_R_RS_BIT    ((UBase_t) 0UL)
#define I2C_MSA_R_RS_TRANSMIT    ((UBase_t) 0x00000000UL)
#define I2C_MSA_R_RS_RECEIVE    ((UBase_t) 0x00000001UL)

#define I2C_MSA_RS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MSA_RS_TRANSMIT    ((UBase_t) 0x00000000UL)
#define I2C_MSA_RS_RECEIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MSA_R_SA_MASK    ((UBase_t) 0x000000FEUL)
#define I2C_MSA_R_SA_BIT    ((UBase_t) 1UL)

#define I2C_MSA_SA_MASK    ((UBase_t) 0x0000007FUL)
/*--------*/
#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MSA_H_ */
