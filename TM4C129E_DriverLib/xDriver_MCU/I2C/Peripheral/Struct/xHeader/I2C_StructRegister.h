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

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/*Master*/

typedef volatile struct
{
    volatile UBase_t RS :1;
    volatile UBase_t SA :7;
    const UBase_t reserved :24;
}I2C_MASTER_SA_t;

typedef volatile struct
{
    volatile const UBase_t BUSY :1;
    volatile const UBase_t ERROR :1;
    volatile const UBase_t ADRACK :1;
    volatile const UBase_t DATACK :1;
    volatile const UBase_t ARBLST :1;
    volatile const UBase_t IDLE :1;
    volatile const UBase_t BUSBSY :1;
    volatile const UBase_t CLKTO :1;
    const UBase_t reserved :22;
    volatile const UBase_t ACTDMATX :1;
    volatile const UBase_t ACTDMARX :1;
}I2C_MASTER_STS_t;

typedef volatile struct
{
    volatile UBase_t RUN :1;
    volatile UBase_t START :1;
    volatile UBase_t STOP :1;
    volatile UBase_t ACK :1;
    volatile UBase_t HS :1;
    volatile UBase_t QCMD :1;
    volatile UBase_t BURST :1;
    const UBase_t reserved :25;
}I2C_MASTER_CTL_t;

typedef volatile struct
{
    volatile UBase_t DATA :8;
    const UBase_t reserved :24;
}I2C_MASTER_DATA_t;

typedef volatile struct
{
    volatile UBase_t TPR :7;
    volatile UBase_t HS :1;
    const UBase_t reserved :8;
    volatile UBase_t PULSEL :3;
    const UBase_t reserved1 :13;
}I2C_MASTER_TPR_t;

typedef volatile struct
{
    volatile UBase_t IM :1;
    volatile UBase_t CLKIM :1;
    volatile UBase_t DMARXIM :1;
    volatile UBase_t DMATXIM :1;
    volatile UBase_t NACKIM :1;
    volatile UBase_t STARTIM :1;
    volatile UBase_t STOPIM :1;
    volatile UBase_t ARBLOSTIM :1;
    volatile UBase_t TXIM :1;
    volatile UBase_t RXIM :1;
    volatile UBase_t TXFEIM :1;
    volatile UBase_t RXFFIM :1;
    const UBase_t reserved :20;
}I2C_MASTER_IMR_t;

typedef volatile struct
{
    volatile const UBase_t RIS :1;
    volatile const UBase_t CLKRIS :1;
    volatile const UBase_t DMARXRIS :1;
    volatile const UBase_t DMATXRIS :1;
    volatile const UBase_t NACKRIS :1;
    volatile const UBase_t STARTRIS :1;
    volatile const UBase_t STOPRIS :1;
    volatile const UBase_t ARBLOSTRIS :1;
    volatile const UBase_t TXRIS :1;
    volatile const UBase_t RXRIS :1;
    volatile const UBase_t TXFERIS :1;
    volatile const UBase_t RXFFRIS :1;
    const UBase_t reserved :20;
}I2C_MASTER_RIS_t;

typedef volatile struct
{
    volatile const UBase_t MIS :1;
    volatile const UBase_t CLKMIS :1;
    volatile const UBase_t DMARXMIS :1;
    volatile const UBase_t DMATXMIS :1;
    volatile const UBase_t NACKMIS :1;
    volatile const UBase_t STARTMIS :1;
    volatile const UBase_t STOPMIS :1;
    volatile const UBase_t ARBLOSTMIS :1;
    volatile const UBase_t TXMIS :1;
    volatile const UBase_t RXMIS :1;
    volatile const UBase_t TXFEMIS :1;
    volatile const UBase_t RXFFMIS :1;
    const UBase_t reserved :20;
}I2C_MASTER_MIS_t;

typedef volatile struct
{
    volatile UBase_t IC :1;
    volatile UBase_t CLKIC :1;
    volatile UBase_t DMARXIC :1;
    volatile UBase_t DMATXIC :1;
    volatile UBase_t NACKIC :1;
    volatile UBase_t STARTIC :1;
    volatile UBase_t STOPIC :1;
    volatile UBase_t ARBLOSTIC :1;
    volatile UBase_t TXIC :1;
    volatile UBase_t RXIC :1;
    volatile UBase_t TXFEIC :1;
    volatile UBase_t RXFFIC :1;
    const UBase_t reserved :20;
}I2C_MASTER_ICR_t;

typedef volatile struct
{
    volatile UBase_t LPBK :1;
    const UBase_t reserved :3;
    volatile UBase_t MFE :1;
    volatile UBase_t SFE :1;
    const UBase_t reserved2 :26;
}I2C_MASTER_CR_t;

typedef volatile struct
{
    volatile UBase_t CNTL :8;
    const UBase_t reserved :24;
}I2C_MASTER_CLKOCNT_t;

typedef volatile struct
{
    volatile const UBase_t SCL :1;
    volatile const UBase_t SDA :1;
    const UBase_t reserved : 30;
}I2C_MASTER_BMON_t;

typedef volatile struct
{
    volatile UBase_t CNTL :8;
    const UBase_t reserved : 24;
}I2C_MASTER_BLEN_t;

typedef volatile struct
{
    volatile const UBase_t CNTL :8;
    const UBase_t reserved : 24;
}I2C_MASTER_BCNT_t;

/*Slave*/

typedef volatile struct
{
    volatile UBase_t OAR :7;
    const UBase_t reserved :25;
}I2C_SLAVE_OAR_t;

typedef volatile struct
{
    volatile const UBase_t RREQ :1;
    volatile const UBase_t TREQ :1;
    volatile const UBase_t FBR :1;
    volatile const UBase_t OAR2SEL :1;
    volatile const UBase_t QCMDST :1;
    volatile const UBase_t QCMDRW :1;
    const UBase_t reserved :24;
    volatile const UBase_t ACTDMATX :1;
    volatile const UBase_t ACTDMARX :1;
}I2C_SLAVE_STS_t;

typedef volatile struct
{
    volatile UBase_t DA :1;
    volatile UBase_t TXFIFO :1;
    volatile UBase_t RXFIFO :1;
    const UBase_t reserved :29;
}I2C_SLAVE_CTL_t;

typedef volatile struct
{
    volatile UBase_t DATA :8;
    const UBase_t reserved :24;
}I2C_SLAVE_DATA_t;

typedef volatile struct
{
    volatile UBase_t DATAIM :1;
    volatile UBase_t STARTIM :1;
    volatile UBase_t STOPIM :1;
    volatile UBase_t DMARXIM :1;
    volatile UBase_t DMATXIM :1;
    volatile UBase_t TXIM :1;
    volatile UBase_t RXIM :1;
    volatile UBase_t TXFEIM :1;
    volatile UBase_t RXFFIM :1;
    const UBase_t reserved :23;
}I2C_SLAVE_IMR_t;

typedef volatile struct
{
    volatile const UBase_t DATARIS :1;
    volatile const UBase_t STARTRIS :1;
    volatile const UBase_t STOPRIS :1;
    volatile const UBase_t DMARXRIS :1;
    volatile const UBase_t DMATXRIS :1;
    volatile const UBase_t TXRIS :1;
    volatile const UBase_t RXRIS :1;
    volatile const UBase_t TXFERIS :1;
    volatile const UBase_t RXFFRIS :1;
    const UBase_t reserved :23;
}I2C_SLAVE_RIS_t;

typedef volatile struct
{
    volatile const UBase_t DATAMIS :1;
    volatile const UBase_t STARTMIS :1;
    volatile const UBase_t STOPMIS :1;
    volatile const UBase_t DMARXMIS :1;
    volatile const UBase_t DMATXMIS :1;
    volatile const UBase_t TXMIS :1;
    volatile const UBase_t RXMIS :1;
    volatile const UBase_t TXFEMIS :1;
    volatile const UBase_t RXFFMIS :1;
    const UBase_t reserved :23;
}I2C_SLAVE_MIS_t;

typedef volatile struct
{
    volatile UBase_t DATAIC :1;
    volatile UBase_t STARTIC :1;
    volatile UBase_t STOPIC :1;
    volatile UBase_t DMARXIC :1;
    volatile UBase_t DMATXIC :1;
    volatile UBase_t TXIC :1;
    volatile UBase_t RXIC :1;
    volatile UBase_t TXFEIC :1;
    volatile UBase_t RXFFIC :1;
    const UBase_t reserved :23;
}I2C_SLAVE_ICR_t;

typedef volatile struct
{
    volatile UBase_t OAR2 :7;
    volatile UBase_t OAR2EN :1;
    const UBase_t reserved :24;
}I2C_SLAVE_OAR2_t;

typedef volatile struct
{
    volatile UBase_t ACKOEN :1;
    volatile UBase_t ACKOVAL :1;
    const UBase_t reserved :30;
}I2C_SLAVE_ACKCTL_t;

/*Status Control*/

typedef volatile struct
{
    volatile const UBase_t DATA :8;
    const UBase_t reserved : 24;
}I2C_FIFO_DATA_t;

typedef volatile struct
{
    volatile UBase_t TXTRIG :3;
    const UBase_t reserved : 10;
    volatile UBase_t DMATXENA :1;
    volatile UBase_t TXFLUSH :1;
    volatile UBase_t TXASGNMT :1;
    volatile UBase_t RXTRIG :3;
    const UBase_t reserved2 : 10;
    volatile UBase_t DMARXENA :1;
    volatile UBase_t RXFLUSH :1;
    volatile UBase_t RXASGNMT :1;
}I2C_FIFO_CTL_t;

typedef volatile struct
{
    volatile const UBase_t TXFE :1;
    volatile const UBase_t TXFF :1;
    volatile const UBase_t TXBLWTRIG :1;
    const UBase_t reserved : 13;
    volatile const UBase_t RXFE :1;
    volatile const UBase_t RXFF :1;
    volatile const UBase_t RXABVTRIG :1;
    const UBase_t reserved2 : 13;
}I2C_FIFO_STS_t;

typedef volatile struct
{
    volatile const UBase_t HS :1;
    const UBase_t reserved : 31;
}I2C_PP_t;

typedef volatile struct
{
    volatile UBase_t HS :1;
    const UBase_t reserved : 31;
}I2C_PC_t;

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTREGISTER_H_ */
