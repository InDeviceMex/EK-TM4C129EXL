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
    volatile uint32_t RS :1;
    volatile uint32_t SA :7;
    const uint32_t reserved :24;
}I2C_MASTER_SA_t;

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
    const uint32_t reserved :22;
    volatile const uint32_t ACTDMATX :1;
    volatile const uint32_t ACTDMARX :1;
}I2C_MASTER_STS_t;

typedef volatile struct
{
    volatile uint32_t RUN :1;
    volatile uint32_t START :1;
    volatile uint32_t STOP :1;
    volatile uint32_t ACK :1;
    volatile uint32_t HS :1;
    volatile uint32_t QCMD :1;
    volatile uint32_t BURST :1;
    const uint32_t reserved :25;
}I2C_MASTER_CTL_t;

typedef volatile struct
{
    volatile uint32_t DATA :8;
    const uint32_t reserved :24;
}I2C_MASTER_DATA_t;

typedef volatile struct
{
    volatile uint32_t TPR :7;
    volatile uint32_t HS :1;
    const uint32_t reserved :8;
    volatile uint32_t PULSEL :3;
    const uint32_t reserved1 :13;
}I2C_MASTER_TPR_t;

typedef volatile struct
{
    volatile uint32_t IM :1;
    volatile uint32_t CLKIM :1;
    volatile uint32_t DMARXIM :1;
    volatile uint32_t DMATXIM :1;
    volatile uint32_t NACKIM :1;
    volatile uint32_t STARTIM :1;
    volatile uint32_t STOPIM :1;
    volatile uint32_t ARBLOSTIM :1;
    volatile uint32_t TXIM :1;
    volatile uint32_t RXIM :1;
    volatile uint32_t TXFEIM :1;
    volatile uint32_t RXFFIM :1;
    const uint32_t reserved :20;
}I2C_MASTER_IMR_t;

typedef volatile struct
{
    volatile const uint32_t RIS :1;
    volatile const uint32_t CLKRIS :1;
    volatile const uint32_t DMARXRIS :1;
    volatile const uint32_t DMATXRIS :1;
    volatile const uint32_t NACKRIS :1;
    volatile const uint32_t STARTRIS :1;
    volatile const uint32_t STOPRIS :1;
    volatile const uint32_t ARBLOSTRIS :1;
    volatile const uint32_t TXRIS :1;
    volatile const uint32_t RXRIS :1;
    volatile const uint32_t TXFERIS :1;
    volatile const uint32_t RXFFRIS :1;
    const uint32_t reserved :20;
}I2C_MASTER_RIS_t;

typedef volatile struct
{
    volatile const uint32_t MIS :1;
    volatile const uint32_t CLKMIS :1;
    volatile const uint32_t DMARXMIS :1;
    volatile const uint32_t DMATXMIS :1;
    volatile const uint32_t NACKMIS :1;
    volatile const uint32_t STARTMIS :1;
    volatile const uint32_t STOPMIS :1;
    volatile const uint32_t ARBLOSTMIS :1;
    volatile const uint32_t TXMIS :1;
    volatile const uint32_t RXMIS :1;
    volatile const uint32_t TXFEMIS :1;
    volatile const uint32_t RXFFMIS :1;
    const uint32_t reserved :20;
}I2C_MASTER_MIS_t;

typedef volatile struct
{
    volatile uint32_t IC :1;
    volatile uint32_t CLKIC :1;
    volatile uint32_t DMARXIC :1;
    volatile uint32_t DMATXIC :1;
    volatile uint32_t NACKIC :1;
    volatile uint32_t STARTIC :1;
    volatile uint32_t STOPIC :1;
    volatile uint32_t ARBLOSTIC :1;
    volatile uint32_t TXIC :1;
    volatile uint32_t RXIC :1;
    volatile uint32_t TXFEIC :1;
    volatile uint32_t RXFFIC :1;
    const uint32_t reserved :20;
}I2C_MASTER_ICR_t;

typedef volatile struct
{
    volatile uint32_t LPBK :1;
    const uint32_t reserved :3;
    volatile uint32_t MFE :1;
    volatile uint32_t SFE :1;
    const uint32_t reserved2 :26;
}I2C_MASTER_CR_t;

typedef volatile struct
{
    volatile uint32_t CNTL :8;
    const uint32_t reserved :24;
}I2C_MASTER_CLKOCNT_t;

typedef volatile struct
{
    volatile const uint32_t SCL :1;
    volatile const uint32_t SDA :1;
    const uint32_t reserved : 30;
}I2C_MASTER_BMON_t;

typedef volatile struct
{
    volatile uint32_t CNTL :8;
    const uint32_t reserved : 24;
}I2C_MASTER_BLEN_t;

typedef volatile struct
{
    volatile const uint32_t CNTL :8;
    const uint32_t reserved : 24;
}I2C_MASTER_BCNT_t;

/*Slave*/

typedef volatile struct
{
    volatile uint32_t OAR :7;
    const uint32_t reserved :25;
}I2C_SLAVE_OAR_t;

typedef volatile struct
{
    volatile const uint32_t RREQ :1;
    volatile const uint32_t TREQ :1;
    volatile const uint32_t FBR :1;
    volatile const uint32_t OAR2SEL :1;
    volatile const uint32_t QCMDST :1;
    volatile const uint32_t QCMDRW :1;
    const uint32_t reserved :24;
    volatile const uint32_t ACTDMATX :1;
    volatile const uint32_t ACTDMARX :1;
}I2C_SLAVE_STS_t;

typedef volatile struct
{
    volatile uint32_t DA :1;
    volatile uint32_t TXFIFO :1;
    volatile uint32_t RXFIFO :1;
    const uint32_t reserved :29;
}I2C_SLAVE_CTL_t;

typedef volatile struct
{
    volatile uint32_t DATA :8;
    const uint32_t reserved :24;
}I2C_SLAVE_DATA_t;

typedef volatile struct
{
    volatile uint32_t DATAIM :1;
    volatile uint32_t STARTIM :1;
    volatile uint32_t STOPIM :1;
    volatile uint32_t DMARXIM :1;
    volatile uint32_t DMATXIM :1;
    volatile uint32_t TXIM :1;
    volatile uint32_t RXIM :1;
    volatile uint32_t TXFEIM :1;
    volatile uint32_t RXFFIM :1;
    const uint32_t reserved :23;
}I2C_SLAVE_IMR_t;

typedef volatile struct
{
    volatile const uint32_t DATARIS :1;
    volatile const uint32_t STARTRIS :1;
    volatile const uint32_t STOPRIS :1;
    volatile const uint32_t DMARXRIS :1;
    volatile const uint32_t DMATXRIS :1;
    volatile const uint32_t TXRIS :1;
    volatile const uint32_t RXRIS :1;
    volatile const uint32_t TXFERIS :1;
    volatile const uint32_t RXFFRIS :1;
    const uint32_t reserved :23;
}I2C_SLAVE_RIS_t;

typedef volatile struct
{
    volatile const uint32_t DATAMIS :1;
    volatile const uint32_t STARTMIS :1;
    volatile const uint32_t STOPMIS :1;
    volatile const uint32_t DMARXMIS :1;
    volatile const uint32_t DMATXMIS :1;
    volatile const uint32_t TXMIS :1;
    volatile const uint32_t RXMIS :1;
    volatile const uint32_t TXFEMIS :1;
    volatile const uint32_t RXFFMIS :1;
    const uint32_t reserved :23;
}I2C_SLAVE_MIS_t;

typedef volatile struct
{
    volatile uint32_t DATAIC :1;
    volatile uint32_t STARTIC :1;
    volatile uint32_t STOPIC :1;
    volatile uint32_t DMARXIC :1;
    volatile uint32_t DMATXIC :1;
    volatile uint32_t TXIC :1;
    volatile uint32_t RXIC :1;
    volatile uint32_t TXFEIC :1;
    volatile uint32_t RXFFIC :1;
    const uint32_t reserved :23;
}I2C_SLAVE_ICR_t;

typedef volatile struct
{
    volatile uint32_t OAR2 :7;
    volatile uint32_t OAR2EN :1;
    const uint32_t reserved :24;
}I2C_SLAVE_OAR2_t;

typedef volatile struct
{
    volatile uint32_t ACKOEN :1;
    volatile uint32_t ACKOVAL :1;
    const uint32_t reserved :30;
}I2C_SLAVE_ACKCTL_t;

/*Status Control*/

typedef volatile struct
{
    volatile const uint32_t DATA :8;
    const uint32_t reserved : 24;
}I2C_FIFO_DATA_t;

typedef volatile struct
{
    volatile uint32_t TXTRIG :3;
    const uint32_t reserved : 10;
    volatile uint32_t DMATXENA :1;
    volatile uint32_t TXFLUSH :1;
    volatile uint32_t TXASGNMT :1;
    volatile uint32_t RXTRIG :3;
    const uint32_t reserved2 : 10;
    volatile uint32_t DMARXENA :1;
    volatile uint32_t RXFLUSH :1;
    volatile uint32_t RXASGNMT :1;
}I2C_FIFO_CTL_t;

typedef volatile struct
{
    volatile const uint32_t TXFE :1;
    volatile const uint32_t TXFF :1;
    volatile const uint32_t TXBLWTRIG :1;
    const uint32_t reserved : 13;
    volatile const uint32_t RXFE :1;
    volatile const uint32_t RXFF :1;
    volatile const uint32_t RXABVTRIG :1;
    const uint32_t reserved2 : 13;
}I2C_FIFO_STS_t;

typedef volatile struct
{
    volatile const uint32_t HS :1;
    const uint32_t reserved : 31;
}I2C_PP_t;

typedef volatile struct
{
    volatile uint32_t HS :1;
    const uint32_t reserved : 31;
}I2C_PC_t;

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTREGISTER_H_ */
