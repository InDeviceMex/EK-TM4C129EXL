/**
 *
 * @file I2C_StructRegister.h
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
 * @verbatim 3 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTREGISTER_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTREGISTER_H_

#include <xUtils/Standard/Standard.h>

/*Master*/

typedef volatile struct
{
    volatile uint32_t RS :1;
    volatile uint32_t SA :7;
    const uint32_t reserved :24;
} I2CMSA_TypeDef;

typedef volatile struct
{
    volatile const uint32_t BUSY :1;
    volatile const uint32_t ERROR :1;
    volatile const uint32_t ADRACK :1;
    volatile const uint32_t DATACK :1;
    volatile const uint32_t ARBLST :1;
    volatile const uint32_t IDLE :1;
    volatile const uint32_t BUSBSY :1;
    volatile const uint32_t CLKTO :1;
    const uint32_t reserved :24;
} I2CMCS_STATUS_TypeDef;

typedef volatile struct
{
    volatile uint32_t RUN :1;
    volatile uint32_t START :1;
    volatile uint32_t STOP :1;
    volatile uint32_t ACK :1;
    volatile uint32_t HS :1;
    const uint32_t reserved :27;
} I2CMCS_CONTROL_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA :8;
    const uint32_t reserved :24;
} I2CMDR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TPR :7;
    volatile uint32_t HS :1;
    const uint32_t reserved :24;
} I2CMTPR_TypeDef;

typedef volatile struct
{
    volatile uint32_t IM :1;
    volatile uint32_t CLKIM :1;
    const uint32_t reserved :30;
} I2CMIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RIS :1;
    volatile const uint32_t CLKRIS :1;
    const uint32_t reserved :30;
} I2CMRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t MIS :1;
    volatile const uint32_t CLKMIS :1;
    const uint32_t reserved :30;
} I2CMMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t IC :1;
    volatile uint32_t CLKIC :1;
    const uint32_t reserved :30;
} I2CMICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t LPBK :1;
    const uint32_t reserved :3;
    volatile uint32_t MFE :1;
    volatile uint32_t SFE :1;
    volatile uint32_t GFE :1;
    const uint32_t reserved2 :25;
} I2CMCR_TypeDef;

typedef volatile struct
{
    volatile uint32_t CNTL :8;
    const uint32_t reserved :24;
} I2CMCLKOCNT_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SCL :1;
    volatile const uint32_t SDA :1;
    const uint32_t reserved : 30;
} I2CMBMON_TypeDef;

typedef volatile struct
{
    const uint32_t reserved : 4;
    volatile const uint32_t GFPW :3;
    const uint32_t reserved2 : 25;
} I2CMCR2_TypeDef;

/*Slave*/

typedef volatile struct
{
    volatile uint32_t OAR :7;
    const uint32_t reserved :25;
} I2CSOAR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RREQ :1;
    volatile const uint32_t TREQ :1;
    volatile const uint32_t FBR :1;
    volatile const uint32_t OAR2SEL :1;
    const uint32_t reserved :28;
} I2CSCSR_STATUS_TypeDef;

typedef volatile struct
{
    volatile uint32_t DA :1;
    const uint32_t reserved :31;
} I2CSCSR_CONTROL_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA :8;
    const uint32_t reserved :24;
} I2CSDR_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATAIM :1;
    volatile uint32_t STARTIM :1;
    volatile uint32_t STOPIM :1;
    const uint32_t reserved :29;
} I2CSIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DATARIS :1;
    volatile const uint32_t STARTRIS :1;
    volatile const uint32_t STOPRIS :1;
    const uint32_t reserved :29;
} I2CSRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DATAMIS :1;
    volatile const uint32_t STARTMIS :1;
    volatile const uint32_t STOPMIS :1;
    const uint32_t reserved :29;
} I2CSMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATAIC :1;
    volatile uint32_t STARTIC :1;
    volatile uint32_t STOPIC :1;
    const uint32_t reserved :29;
} I2CSICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t OAR2 :7;
    volatile uint32_t OAR2EN :1;
    const uint32_t reserved :24;
} I2CSOAR2_TypeDef;

typedef volatile struct
{
    volatile uint32_t ACKOEN :1;
    volatile uint32_t ACKOVAL :1;
    const uint32_t reserved :30;
} I2CSACKCTL_TypeDef;

/*Status Control*/

typedef volatile struct
{
    volatile const uint32_t HS :1;
    uint32_t reserved : 31;
} I2CPP_TypeDef;

typedef volatile struct
{
    volatile uint32_t HS :1;
    uint32_t reserved : 31;
} I2CPC_TypeDef;


#endif /* XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTREGISTER_H_ */
