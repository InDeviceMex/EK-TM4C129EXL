/**
 *
 * @file I2C_RegisterDefines_SMIS.h
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
 * @verbatim 7 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SMIS_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SMIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 18 SMIS *********************************************
******************************************************************************************/

/*--------*/
#define SSI_SMIS_R_DATAMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SMIS_R_DATAMIS_BIT    ((uint32_t) 0UL)
#define SSI_SMIS_R_DATAMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_SMIS_R_DATAMIS_OCCUR    ((uint32_t) 0x00000001UL)

#define SSI_SMIS_DATAMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SMIS_DATAMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_SMIS_DATAMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SMIS_R_STARTMIS_MASK    ((uint32_t) 0x00000002UL)
#define SSI_SMIS_R_STARTMIS_BIT    ((uint32_t) 1UL)
#define SSI_SMIS_R_STARTMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_SMIS_R_STARTMIS_OCCUR    ((uint32_t) 0x00000002UL)

#define SSI_SMIS_STARTMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SMIS_STARTMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_SMIS_STARTMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SMIS_R_STOPMIS_MASK    ((uint32_t) 0x00000004UL)
#define SSI_SMIS_R_STOPMIS_BIT    ((uint32_t) 2UL)
#define SSI_SMIS_R_STOPMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_SMIS_R_STOPMIS_OCCUR    ((uint32_t) 0x00000004UL)

#define SSI_SMIS_STOPMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SMIS_STOPMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_SMIS_STOPMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SMIS_H_ */
