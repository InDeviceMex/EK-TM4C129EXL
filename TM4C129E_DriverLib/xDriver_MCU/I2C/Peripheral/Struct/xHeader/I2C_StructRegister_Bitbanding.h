/**
 *
 * @file I2C_StructRegister_Bitbanding.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTREGISTER_BITBANDING_H_

#include <xUtils/Standard/Standard.h>

/*Master*/

typedef volatile struct
{
    volatile uint32_t RS;
    volatile uint32_t SA [7UL];
    const uint32_t reserved [24UL];
}BITBANDING_I2CMSA_TypeDef;

typedef volatile struct
{
    volatile const uint32_t BUSY;
    volatile const uint32_t ERROR;
    volatile const uint32_t ADRACK;
    volatile const uint32_t DATACK;
    volatile const uint32_t ARBLST;
    volatile const uint32_t IDLE;
    volatile const uint32_t BUSBSY;
    volatile const uint32_t CLKTO;
    const uint32_t reserved [24UL];
}BITBANDING_I2CMCS_STATUS_TypeDef;

typedef volatile struct
{
    volatile uint32_t RUN;
    volatile uint32_t START;
    volatile uint32_t STOP;
    volatile uint32_t ACK;
    volatile uint32_t HS;
    const uint32_t reserved [27UL];
}BITBANDING_I2CMCS_CONTROL_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_I2CMDR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TPR [7UL];
    volatile uint32_t HS;
    const uint32_t reserved [24UL];
}BITBANDING_I2CMTPR_TypeDef;

typedef volatile struct
{
    volatile uint32_t IM;
    volatile uint32_t CLKIM;
    const uint32_t reserved [30UL];
}BITBANDING_I2CMIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RIS;
    volatile const uint32_t CLKRIS;
    const uint32_t reserved [30UL];
}BITBANDING_I2CMRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t MIS;
    volatile const uint32_t CLKMIS;
    const uint32_t reserved [30UL];
}BITBANDING_I2CMMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t IC;
    volatile uint32_t CLKIC;
    const uint32_t reserved [30UL];
}BITBANDING_I2CMICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t LPBK;
    const uint32_t reserved [3UL];
    volatile uint32_t MFE;
    volatile uint32_t SFE;
    volatile uint32_t GFE;
    const uint32_t reserved2 [25UL];
}BITBANDING_I2CMCR_TypeDef;

typedef volatile struct
{
    volatile uint32_t CNTL [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_I2CMCLKOCNT_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SCL;
    volatile const uint32_t SDA;
    const uint32_t reserved [30UL];
}BITBANDING_I2CMBMON_TypeDef;

typedef volatile struct
{
    const uint32_t reserved [4UL];
    volatile const uint32_t GFPW [3UL];
    const uint32_t reserved2 [25UL];
}BITBANDING_I2CMCR2_TypeDef;

/*Slave*/

typedef volatile struct
{
    volatile uint32_t OAR [7UL];
    const uint32_t reserved [25UL];
}BITBANDING_I2CSOAR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RREQ;
    volatile const uint32_t TREQ;
    volatile const uint32_t FBR;
    volatile const uint32_t OAR2SEL;
    const uint32_t reserved [28UL];
}BITBANDING_I2CSCSR_STATUS_TypeDef;

typedef volatile struct
{
    volatile uint32_t DA;
    const uint32_t reserved [31UL];
}BITBANDING_I2CSCSR_CONTROL_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_I2CSDR_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATAIM;
    volatile uint32_t STARTIM;
    volatile uint32_t STOPIM;
    const uint32_t reserved [29UL];
}BITBANDING_I2CSIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DATARIS;
    volatile const uint32_t STARTRIS;
    volatile const uint32_t STOPRIS;
    const uint32_t reserved [29UL];
}BITBANDING_I2CSRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DATAMIS;
    volatile const uint32_t STARTMIS;
    volatile const uint32_t STOPMIS;
    const uint32_t reserved [29UL];
}BITBANDING_I2CSMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATAIC;
    volatile uint32_t STARTIC;
    volatile uint32_t STOPIC;
    const uint32_t reserved [29UL];
}BITBANDING_I2CSICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t OAR2 [7UL];
    volatile uint32_t OAR2EN;
    const uint32_t reserved [24UL];
}BITBANDING_I2CSOAR2_TypeDef;

typedef volatile struct
{
    volatile uint32_t ACKOEN;
    volatile uint32_t ACKOVAL;
    const uint32_t reserved [30UL];
}BITBANDING_I2CSACKCTL_TypeDef;

/*Status Control*/

typedef volatile struct
{
    volatile const uint32_t HS;
    uint32_t reserved [31UL];
}BITBANDING_I2CPP_TypeDef;

typedef volatile struct
{
    volatile uint32_t HS;
    uint32_t reserved [31UL];
}BITBANDING_I2CPC_TypeDef;

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTREGISTER_BITBANDING_H_ */
