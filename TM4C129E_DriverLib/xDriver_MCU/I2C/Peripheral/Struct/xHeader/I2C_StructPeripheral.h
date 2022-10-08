/**
 *
 * @file I2C_StructPeripheral.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/I2C/Peripheral/Struct/xHeader/I2C_StructRegister.h>
#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/*Complete*/
typedef volatile struct
{
    union
    {
        volatile UBase_t MASTER_SA;
        I2C_MASTER_SA_t MASTER_SA_Bit;
    };
    union
    {
        volatile UBase_t MASTER_STS;
        volatile UBase_t MASTER_CTL;
        I2C_MASTER_STS_t MASTER_STS_Bit;
        I2C_MASTER_CTL_t MASTER_CTS_Bit;
    };
    union
    {
        volatile const UBase_t MASTER_DATA;
        I2C_MASTER_DATA_t MASTER_DATA_Bit;
    };
    union
    {
        volatile const UBase_t MASTER_TPR;
        I2C_MASTER_TPR_t MASTER_TPR_Bit;
    };
    union
    {
        volatile UBase_t MASTER_IMR;
        I2C_MASTER_IMR_t MASTER_IMR_Bit;
    };
    union
    {
        volatile const UBase_t MASTER_RIS;
        I2C_MASTER_RIS_t MASTER_RIS_Bit;
    };
    union
    {
        volatile const UBase_t MASTER_MIS;
        I2C_MASTER_MIS_t MASTER_MIS_Bit;
    };
    union
    {
        volatile UBase_t MASTER_ICR;
        I2C_MASTER_ICR_t MASTER_ICR_Bit;
    };
    union
    {
        volatile UBase_t MASTER_CR;
        I2C_MASTER_CR_t MASTER_CR_Bit;
    };
    union
    {
        volatile UBase_t MASTER_CLKOCNT;
        I2C_MASTER_CLKOCNT_t MASTER_CLKOCNT_Bit;
    };
    const UBase_t reserved [1UL];
    union
    {
        volatile UBase_t MASTER_BMON;
        I2C_MASTER_BMON_t MASTER_BMON_Bit;
    };
    union
    {
        volatile UBase_t MASTER_BLEN;
        I2C_MASTER_BLEN_t MASTER_BLEN_Bit;
    };
    union
    {
        volatile UBase_t MASTER_BCNT;
        I2C_MASTER_BCNT_t MASTER_BCNT_Bit;
    };
    const UBase_t reserved3 [498UL];
    union
    {
        volatile UBase_t SLAVE_OAR;
        I2C_SLAVE_OAR_t SLAVE_OAR_Bit;
    };
    union
    {
        volatile UBase_t SLAVE_STS;
        volatile UBase_t SLAVE_CTL;
        I2C_SLAVE_STS_t SLAVE_STS_Bit;
        I2C_SLAVE_CTL_t SLAVE_CTL_Bit;
    };
    union
    {
        volatile UBase_t SLAVE_DATA;
        I2C_SLAVE_DATA_t SLAVE_DATA_Bit;
    };
    union
    {
        volatile UBase_t SLAVE_IMR;
        I2C_SLAVE_IMR_t SLAVE_IMR_Bit;
    };
    union
    {
        volatile UBase_t SLAVE_RIS;
        I2C_SLAVE_RIS_t SLAVE_RIS_Bit;
    };
    union
    {
        volatile UBase_t SLAVE_MIS;
        I2C_SLAVE_MIS_t SLAVE_MIS_Bit;
    };
    union
    {
        volatile UBase_t SLAVE_ICR;
        I2C_SLAVE_ICR_t SLAVE_ICR_Bit;
    };
    union
    {
        volatile UBase_t SLAVE_OAR2;
        I2C_SLAVE_OAR2_t SLAVE_OAR2_Bit;
    };
    union
    {
        volatile UBase_t SLAVE_ACKCTL;
        I2C_SLAVE_ACKCTL_t SLAVE_ACKCTL_Bit;
    };
    const UBase_t reserved4 [439UL];
    union
    {
        volatile const UBase_t FIFO_DATA;
        I2C_FIFO_DATA_t FIFO_DATA_Bit;
    };
    union
    {
        volatile const UBase_t FIFO_CTL;
        I2C_FIFO_CTL_t FIFO_CTL_Bit;
    };
    union
    {
        volatile const UBase_t FIFO_STS;
        I2C_FIFO_STS_t FIFO_STS_Bit;
    };
    const UBase_t reserved5 [45UL];
    union
    {
        volatile const UBase_t PP;
        I2C_PP_t PP_Bit;
    };
    union
    {
        volatile const UBase_t PC;
        I2C_PC_t PC_Bit;
    };
    const UBase_t reserved6 [14UL];
}I2C_t;

/*Master*/
typedef volatile struct
{
    union
    {
        volatile UBase_t SA;
        I2C_MASTER_SA_t SA_Bit;
    };
    union
    {
        volatile UBase_t STS;
        volatile UBase_t CTL;
        I2C_MASTER_STS_t STS_Bit;
        I2C_MASTER_CTL_t CTL_Bit;
    };
    union
    {
        volatile const UBase_t DATA;
        I2C_MASTER_DATA_t DATA_Bit;
    };
    union
    {
        volatile const UBase_t TPR;
        I2C_MASTER_TPR_t TPR_Bit;
    };
    union
    {
        volatile UBase_t IMR;
        I2C_MASTER_IMR_t IMR_Bit;
    };
    union
    {
        volatile const UBase_t RIS;
        I2C_MASTER_RIS_t RIS_Bit;
    };
    union
    {
        volatile const UBase_t MIS;
        I2C_MASTER_MIS_t MIS_Bit;
    };
    union
    {
        volatile UBase_t ICR;
        I2C_MASTER_ICR_t ICR_Bit;
    };
    union
    {
        volatile UBase_t CR;
        I2C_MASTER_CR_t CR_Bit;
    };
    union
    {
        volatile UBase_t CLKOCNT;
        I2C_MASTER_CLKOCNT_t CLKOCNT_Bit;
    };
    const UBase_t reserved [1UL];
    union
    {
        volatile UBase_t BMON;
        I2C_MASTER_BMON_t BMON_Bit;
    };
    union
    {
        volatile UBase_t BLEN;
        I2C_MASTER_BLEN_t BLEN_Bit;
    };
    union
    {
        volatile UBase_t BCNT;
        I2C_MASTER_BCNT_t BCNT_Bit;
    };
    const UBase_t reserved3 [498UL];
} I2C_MASTER_t;

/*Slave*/
typedef volatile struct
{
    union
    {
        volatile UBase_t OAR;
        I2C_SLAVE_OAR_t OAR_Bit;
    };
    union
    {
        volatile UBase_t STS;
        volatile UBase_t CTL;
        I2C_SLAVE_STS_t STS_Bit;
        I2C_SLAVE_CTL_t CTL_Bit;
    };
    union
    {
        volatile UBase_t DATA;
        I2C_SLAVE_DATA_t DATA_Bit;
    };
    union
    {
        volatile UBase_t IMR;
        I2C_SLAVE_IMR_t IMR_Bit;
    };
    union
    {
        volatile UBase_t RIS;
        I2C_SLAVE_RIS_t RIS_Bit;
    };
    union
    {
        volatile UBase_t MIS;
        I2C_SLAVE_MIS_t MIS_Bit;
    };
    union
    {
        volatile UBase_t ICR;
        I2C_SLAVE_ICR_t ICR_Bit;
    };
    union
    {
        volatile UBase_t OAR2;
        I2C_SLAVE_OAR2_t OAR2_Bit;
    };
    union
    {
        volatile UBase_t ACKCTL;
        I2C_SLAVE_ACKCTL_t ACKCTL_Bit;
    };
    const UBase_t reserved4 [439UL];
} I2C_SLAVE_t;

/*Status Control*/
typedef volatile struct
{
    union
    {
        volatile const UBase_t DATA;
        I2C_FIFO_DATA_t DATA_Bit;
    };
    union
    {
        volatile const UBase_t CTL;
        I2C_FIFO_CTL_t CTL_Bit;
    };
    union
    {
        volatile const UBase_t STS;
        I2C_FIFO_STS_t STS_Bit;
    };
    const UBase_t reserved5 [45UL];
} I2C_FIFO_t;

typedef volatile struct
{
    union
    {
        volatile const UBase_t PP;
        I2C_PP_t PP_Bit;
    };
    union
    {
        volatile const UBase_t PC;
        I2C_PC_t PC_Bit;
    };
    const UBase_t reserved6 [14UL];
} I2C_CONTROL_t;

typedef volatile struct
{
    I2C_MASTER_t MASTER;
    I2C_SLAVE_t SLAVE;
    I2C_FIFO_t FIFO;
    I2C_CONTROL_t CONTROL;
} I2CS_UNION_t;

typedef volatile struct
{
    union
    {
        I2C_t MODULE0_3 [(UBase_t) 4UL];
        I2CS_UNION_t MODULE_UNION0_3 [(UBase_t) 4UL];
    };
    I2C_t reserved[148UL];
    union
    {
        I2C_t MODULE8_9 [(UBase_t) 2UL];
        I2CS_UNION_t MODULE_UNION8_9 [(UBase_t) 2UL];
    };
    I2C_t reserved2[7UL];
    union
    {
        I2C_t MODULE4_7 [(UBase_t) 4UL];
        I2CS_UNION_t MODULE_UNION4_7 [(UBase_t) 4UL];
    };
} I2CS_t;

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTPERIPHERAL_H_ */
