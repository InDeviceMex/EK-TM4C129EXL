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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/*Master*/

typedef volatile struct
{
    volatile uint32_t RS;
    volatile uint32_t SA [7UL];
    const uint32_t reserved [24UL];
}BITBANDING_I2CMSA_t;

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
    const uint32_t reserved [22UL];
    volatile const uint32_t ACTDMATX;
    volatile const uint32_t ACTDMARX;
}BITBANDING_I2CMCS_STATUS_t;

typedef volatile struct
{
    volatile uint32_t RUN;
    volatile uint32_t START;
    volatile uint32_t STOP;
    volatile uint32_t ACK;
    volatile uint32_t HS;
    volatile uint32_t QCMD;
    volatile uint32_t BURST;
    const uint32_t reserved [25UL];
}BITBANDING_I2CMCS_CONTROL_t;

typedef volatile struct
{
    volatile uint32_t DATA [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_I2CMDR_t;

typedef volatile struct
{
    volatile uint32_t TPR [7UL];
    volatile uint32_t HS;
    const uint32_t reserved [8UL];
    volatile uint32_t PULSEL [3UL];
    const uint32_t reserved1 [13UL];
}BITBANDING_I2CMTPR_t;

typedef volatile struct
{
    volatile uint32_t IM;
    volatile uint32_t CLKIM;
    volatile uint32_t DMARXIM;
    volatile uint32_t DMATXIM;
    volatile uint32_t NACKIM;
    volatile uint32_t STARTIM;
    volatile uint32_t STOPIM;
    volatile uint32_t ARBLOSTIM;
    volatile uint32_t TXIM;
    volatile uint32_t RXIM;
    volatile uint32_t TXFEIM;
    volatile uint32_t RXFFIM;
    const uint32_t reserved [20UL];
}BITBANDING_I2CMIMR_t;

typedef volatile struct
{
    volatile const uint32_t RIS;
    volatile const uint32_t CLKRIS;
    volatile const uint32_t DMARXRIS;
    volatile const uint32_t DMATXRIS;
    volatile const uint32_t NACKRIS;
    volatile const uint32_t STARTRIS;
    volatile const uint32_t STOPRIS;
    volatile const uint32_t ARBLOSTRIS;
    volatile const uint32_t TXRIS;
    volatile const uint32_t RXRIS;
    volatile const uint32_t TXFERIS;
    volatile const uint32_t RXFFRIS;
    const uint32_t reserved [20UL];
}BITBANDING_I2CMRIS_t;

typedef volatile struct
{
    volatile const uint32_t MIS;
    volatile const uint32_t CLKMIS;
    volatile const uint32_t DMARXMIS;
    volatile const uint32_t DMATXMIS;
    volatile const uint32_t NACKMIS;
    volatile const uint32_t STARTMIS;
    volatile const uint32_t STOPMIS;
    volatile const uint32_t ARBLOSTMIS;
    volatile const uint32_t TXMIS;
    volatile const uint32_t RXMIS;
    volatile const uint32_t TXFEMIS;
    volatile const uint32_t RXFFMIS;
    const uint32_t reserved [20UL];
}BITBANDING_I2CMMIS_t;

typedef volatile struct
{
    volatile uint32_t IC;
    volatile uint32_t CLKIC;
    volatile uint32_t DMARXIC;
    volatile uint32_t DMATXIC;
    volatile uint32_t NACKIC;
    volatile uint32_t STARTIC;
    volatile uint32_t STOPIC;
    volatile uint32_t ARBLOSTIC;
    volatile uint32_t TXIC;
    volatile uint32_t RXIC;
    volatile uint32_t TXFEIC;
    volatile uint32_t RXFFIC;
    const uint32_t reserved [20UL];
}BITBANDING_I2CMICR_t;

typedef volatile struct
{
    volatile uint32_t LPBK;
    const uint32_t reserved [3UL];
    volatile uint32_t MFE;
    volatile uint32_t SFE;
    const uint32_t reserved2 [26UL];
}BITBANDING_I2CMCR_t;

typedef volatile struct
{
    volatile uint32_t CNTL [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_I2CMCLKOCNT_t;

typedef volatile struct
{
    volatile const uint32_t SCL;
    volatile const uint32_t SDA;
    const uint32_t reserved [30UL];
}BITBANDING_I2CMBMON_t;

typedef volatile struct
{
    volatile uint32_t CNTL [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_I2CMBLEN_t;

typedef volatile struct
{
    volatile const uint32_t CNTL [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_I2CMBCNT_t;

/*Slave*/

typedef volatile struct
{
    volatile uint32_t OAR [7UL];
    const uint32_t reserved [25UL];
}BITBANDING_I2CSOAR_t;

typedef volatile struct
{
    volatile const uint32_t RREQ;
    volatile const uint32_t TREQ;
    volatile const uint32_t FBR;
    volatile const uint32_t OAR2SEL;
    volatile const uint32_t QCMDST;
    volatile const uint32_t QCMDRW;
    const uint32_t reserved [24UL];
    volatile const uint32_t ACTDMATX;
    volatile const uint32_t ACTDMARX;
}BITBANDING_I2CSCSR_STATUS_t;

typedef volatile struct
{
    volatile uint32_t DA;
    volatile uint32_t TXFIFO;
    volatile uint32_t RXFIFO;
    const uint32_t reserved [29UL];
}BITBANDING_I2CSCSR_CONTROL_t;

typedef volatile struct
{
    volatile uint32_t DATA [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_I2CSDR_t;

typedef volatile struct
{
    volatile uint32_t DATAIM;
    volatile uint32_t STARTIM;
    volatile uint32_t STOPIM;
    volatile uint32_t DMARXIM;
    volatile uint32_t DMATXIM;
    volatile uint32_t TXIM;
    volatile uint32_t RXIM;
    volatile uint32_t TXFEIM;
    volatile uint32_t RXFFIM;
    const uint32_t reserved [23UL];
}BITBANDING_I2CSIMR_t;

typedef volatile struct
{
    volatile const uint32_t DATARIS;
    volatile const uint32_t STARTRIS;
    volatile const uint32_t STOPRIS;
    volatile const uint32_t DMARXRIS;
    volatile const uint32_t DMATXRIS;
    volatile const uint32_t TXRIS;
    volatile const uint32_t RXRIS;
    volatile const uint32_t TXFERIS;
    volatile const uint32_t RXFFRIS;
    const uint32_t reserved [23UL];
}BITBANDING_I2CSRIS_t;

typedef volatile struct
{
    volatile const uint32_t DATAMIS;
    volatile const uint32_t STARTMIS;
    volatile const uint32_t STOPMIS;
    volatile const uint32_t DMARXMIS;
    volatile const uint32_t DMATXMIS;
    volatile const uint32_t TXMIS;
    volatile const uint32_t RXMIS;
    volatile const uint32_t TXFEMIS;
    volatile const uint32_t RXFFMIS;
    const uint32_t reserved [23UL];
}BITBANDING_I2CSMIS_t;

typedef volatile struct
{
    volatile uint32_t DATAIC;
    volatile uint32_t STARTIC;
    volatile uint32_t STOPIC;
    volatile uint32_t DMARXIC;
    volatile uint32_t DMATXIC;
    volatile uint32_t TXIC;
    volatile uint32_t RXIC;
    volatile uint32_t TXFEIC;
    volatile uint32_t RXFFIC;
    const uint32_t reserved [23UL];
}BITBANDING_I2CSICR_t;

typedef volatile struct
{
    volatile uint32_t OAR2 [7UL];
    volatile uint32_t OAR2EN;
    const uint32_t reserved [24UL];
}BITBANDING_I2CSOAR2_t;

typedef volatile struct
{
    volatile uint32_t ACKOEN;
    volatile uint32_t ACKOVAL;
    const uint32_t reserved [30UL];
}BITBANDING_I2CSACKCTL_t;

/*Status Control*/

typedef volatile struct
{
    volatile const uint32_t DATA [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_I2CFIFODATA_t;

typedef volatile struct
{
    volatile uint32_t TXTRIG [3UL];
    const uint32_t reserved [10UL];
    volatile uint32_t DMATXENA;
    volatile uint32_t TXFLUSH;
    volatile uint32_t TXASGNMT;
    volatile uint32_t RXTRIG [3UL];
    const uint32_t reserved2 [10UL];
    volatile uint32_t DMARXENA;
    volatile uint32_t RXFLUSH;
    volatile uint32_t RXASGNMT;
}BITBANDING_I2CFIFOCTL_t;

typedef volatile struct
{
    volatile const uint32_t TXFE;
    volatile const uint32_t TXFF;
    volatile const uint32_t TXBLWTRIG;
    const uint32_t reserved [13UL];
    volatile const uint32_t RXFE;
    volatile const uint32_t RXFF;
    volatile const uint32_t RXABVTRIG;
    const uint32_t reserved2 [13UL];
}BITBANDING_I2CFIFOSTATUS_t;

typedef volatile struct
{
    volatile const uint32_t HS;
    uint32_t reserved [31UL];
}BITBANDING_I2CPP_t;

typedef volatile struct
{
    volatile uint32_t HS;
    uint32_t reserved [31UL];
}BITBANDING_I2CPC_t;

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTREGISTER_BITBANDING_H_ */
