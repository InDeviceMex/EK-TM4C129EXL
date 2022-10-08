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

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/*Master*/

typedef volatile struct
{
    volatile UBase_t RS;
    volatile UBase_t SA [7UL];
    const UBase_t reserved [24UL];
}I2C_MASTER_BITBANDING_SA_t;

typedef volatile struct
{
    volatile const UBase_t BUSY;
    volatile const UBase_t ERROR;
    volatile const UBase_t ADRACK;
    volatile const UBase_t DATACK;
    volatile const UBase_t ARBLST;
    volatile const UBase_t IDLE;
    volatile const UBase_t BUSBSY;
    volatile const UBase_t CLKTO;
    const UBase_t reserved [22UL];
    volatile const UBase_t ACTDMATX;
    volatile const UBase_t ACTDMARX;
}I2C_MASTER_BITBANDING_STS_t;

typedef volatile struct
{
    volatile UBase_t RUN;
    volatile UBase_t START;
    volatile UBase_t STOP;
    volatile UBase_t ACK;
    volatile UBase_t HS;
    volatile UBase_t QCMD;
    volatile UBase_t BURST;
    const UBase_t reserved [25UL];
}I2C_MASTER_BITBANDING_CTL_t;

typedef volatile struct
{
    volatile UBase_t DATA [8UL];
    const UBase_t reserved [24UL];
}I2C_MASTER_BITBANDING_DATA_t;

typedef volatile struct
{
    volatile UBase_t TPR [7UL];
    volatile UBase_t HS;
    const UBase_t reserved [8UL];
    volatile UBase_t PULSEL [3UL];
    const UBase_t reserved1 [13UL];
}I2C_MASTER_BITBANDING_TPR_t;

typedef volatile struct
{
    volatile UBase_t IM;
    volatile UBase_t CLKIM;
    volatile UBase_t DMARXIM;
    volatile UBase_t DMATXIM;
    volatile UBase_t NACKIM;
    volatile UBase_t STARTIM;
    volatile UBase_t STOPIM;
    volatile UBase_t ARBLOSTIM;
    volatile UBase_t TXIM;
    volatile UBase_t RXIM;
    volatile UBase_t TXFEIM;
    volatile UBase_t RXFFIM;
    const UBase_t reserved [20UL];
}I2C_MASTER_BITBANDING_IMR_t;

typedef volatile struct
{
    volatile const UBase_t RIS;
    volatile const UBase_t CLKRIS;
    volatile const UBase_t DMARXRIS;
    volatile const UBase_t DMATXRIS;
    volatile const UBase_t NACKRIS;
    volatile const UBase_t STARTRIS;
    volatile const UBase_t STOPRIS;
    volatile const UBase_t ARBLOSTRIS;
    volatile const UBase_t TXRIS;
    volatile const UBase_t RXRIS;
    volatile const UBase_t TXFERIS;
    volatile const UBase_t RXFFRIS;
    const UBase_t reserved [20UL];
}I2C_MASTER_BITBANDING_RIS_t;

typedef volatile struct
{
    volatile const UBase_t MIS;
    volatile const UBase_t CLKMIS;
    volatile const UBase_t DMARXMIS;
    volatile const UBase_t DMATXMIS;
    volatile const UBase_t NACKMIS;
    volatile const UBase_t STARTMIS;
    volatile const UBase_t STOPMIS;
    volatile const UBase_t ARBLOSTMIS;
    volatile const UBase_t TXMIS;
    volatile const UBase_t RXMIS;
    volatile const UBase_t TXFEMIS;
    volatile const UBase_t RXFFMIS;
    const UBase_t reserved [20UL];
}I2C_MASTER_BITBANDING_MIS_t;

typedef volatile struct
{
    volatile UBase_t IC;
    volatile UBase_t CLKIC;
    volatile UBase_t DMARXIC;
    volatile UBase_t DMATXIC;
    volatile UBase_t NACKIC;
    volatile UBase_t STARTIC;
    volatile UBase_t STOPIC;
    volatile UBase_t ARBLOSTIC;
    volatile UBase_t TXIC;
    volatile UBase_t RXIC;
    volatile UBase_t TXFEIC;
    volatile UBase_t RXFFIC;
    const UBase_t reserved [20UL];
}I2C_MASTER_BITBANDING_ICR_t;

typedef volatile struct
{
    volatile UBase_t LPBK;
    const UBase_t reserved [3UL];
    volatile UBase_t MFE;
    volatile UBase_t SFE;
    const UBase_t reserved2 [26UL];
}I2C_MASTER_BITBANDING_CR_t;

typedef volatile struct
{
    volatile UBase_t CNTL [8UL];
    const UBase_t reserved [24UL];
}I2C_MASTER_BITBANDING_CLKOCNT_t;

typedef volatile struct
{
    volatile const UBase_t SCL;
    volatile const UBase_t SDA;
    const UBase_t reserved [30UL];
}I2C_MASTER_BITBANDING_BMON_t;

typedef volatile struct
{
    volatile UBase_t CNTL [8UL];
    const UBase_t reserved [24UL];
}I2C_MASTER_BITBANDING_BLEN_t;

typedef volatile struct
{
    volatile const UBase_t CNTL [8UL];
    const UBase_t reserved [24UL];
}I2C_MASTER_BITBANDING_BCNT_t;

/*Slave*/

typedef volatile struct
{
    volatile UBase_t OAR [7UL];
    const UBase_t reserved [25UL];
}I2C_SLAVE_BITBANDING_OAR_t;

typedef volatile struct
{
    volatile const UBase_t RREQ;
    volatile const UBase_t TREQ;
    volatile const UBase_t FBR;
    volatile const UBase_t OAR2SEL;
    volatile const UBase_t QCMDST;
    volatile const UBase_t QCMDRW;
    const UBase_t reserved [24UL];
    volatile const UBase_t ACTDMATX;
    volatile const UBase_t ACTDMARX;
}I2C_SLAVE_BITBANDING_STS_t;

typedef volatile struct
{
    volatile UBase_t DA;
    volatile UBase_t TXFIFO;
    volatile UBase_t RXFIFO;
    const UBase_t reserved [29UL];
}I2C_SLAVE_BITBANDING_CTL_t;

typedef volatile struct
{
    volatile UBase_t DATA [8UL];
    const UBase_t reserved [24UL];
}I2C_SLAVE_BITBANDING_DATA_t;

typedef volatile struct
{
    volatile UBase_t DATAIM;
    volatile UBase_t STARTIM;
    volatile UBase_t STOPIM;
    volatile UBase_t DMARXIM;
    volatile UBase_t DMATXIM;
    volatile UBase_t TXIM;
    volatile UBase_t RXIM;
    volatile UBase_t TXFEIM;
    volatile UBase_t RXFFIM;
    const UBase_t reserved [23UL];
}I2C_SLAVE_BITBANDING_IMR_t;

typedef volatile struct
{
    volatile const UBase_t DATARIS;
    volatile const UBase_t STARTRIS;
    volatile const UBase_t STOPRIS;
    volatile const UBase_t DMARXRIS;
    volatile const UBase_t DMATXRIS;
    volatile const UBase_t TXRIS;
    volatile const UBase_t RXRIS;
    volatile const UBase_t TXFERIS;
    volatile const UBase_t RXFFRIS;
    const UBase_t reserved [23UL];
}I2C_SLAVE_BITBANDING_RIS_t;

typedef volatile struct
{
    volatile const UBase_t DATAMIS;
    volatile const UBase_t STARTMIS;
    volatile const UBase_t STOPMIS;
    volatile const UBase_t DMARXMIS;
    volatile const UBase_t DMATXMIS;
    volatile const UBase_t TXMIS;
    volatile const UBase_t RXMIS;
    volatile const UBase_t TXFEMIS;
    volatile const UBase_t RXFFMIS;
    const UBase_t reserved [23UL];
}I2C_SLAVE_BITBANDING_MIS_t;

typedef volatile struct
{
    volatile UBase_t DATAIC;
    volatile UBase_t STARTIC;
    volatile UBase_t STOPIC;
    volatile UBase_t DMARXIC;
    volatile UBase_t DMATXIC;
    volatile UBase_t TXIC;
    volatile UBase_t RXIC;
    volatile UBase_t TXFEIC;
    volatile UBase_t RXFFIC;
    const UBase_t reserved [23UL];
}I2C_SLAVE_BITBANDING_ICR_t;

typedef volatile struct
{
    volatile UBase_t OAR2 [7UL];
    volatile UBase_t OAR2EN;
    const UBase_t reserved [24UL];
}I2C_SLAVE_BITBANDING_OAR2_t;

typedef volatile struct
{
    volatile UBase_t ACKOEN;
    volatile UBase_t ACKOVAL;
    const UBase_t reserved [30UL];
}I2C_SLAVE_BITBANDING_ACKCTL_t;

/*Status Control*/

typedef volatile struct
{
    volatile const UBase_t DATA [8UL];
    const UBase_t reserved [24UL];
}I2C_FIFO_BITBANDING_DATA_t;

typedef volatile struct
{
    volatile UBase_t TXTRIG [3UL];
    const UBase_t reserved [10UL];
    volatile UBase_t DMATXENA;
    volatile UBase_t TXFLUSH;
    volatile UBase_t TXASGNMT;
    volatile UBase_t RXTRIG [3UL];
    const UBase_t reserved2 [10UL];
    volatile UBase_t DMARXENA;
    volatile UBase_t RXFLUSH;
    volatile UBase_t RXASGNMT;
}I2C_FIFO_BITBANDING_CTL_t;

typedef volatile struct
{
    volatile const UBase_t TXFE;
    volatile const UBase_t TXFF;
    volatile const UBase_t TXBLWTRIG;
    const UBase_t reserved [13UL];
    volatile const UBase_t RXFE;
    volatile const UBase_t RXFF;
    volatile const UBase_t RXABVTRIG;
    const UBase_t reserved2 [13UL];
}I2C_FIFO_BITBANDING_STS_t;

typedef volatile struct
{
    volatile const UBase_t HS;
    UBase_t reserved [31UL];
}I2C_BITBANDING_PP_t;

typedef volatile struct
{
    volatile UBase_t HS;
    UBase_t reserved [31UL];
}I2C_BITBANDING_PC_t;

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTREGISTER_BITBANDING_H_ */
