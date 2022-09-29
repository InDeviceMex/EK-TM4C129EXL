/**
 *
 * @file I2C_StructPeripheral_Bitbanding.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/I2C/Peripheral/Struct/xHeader/I2C_StructRegister_Bitbanding.h>
#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/*Complete*/
typedef volatile struct
{
    union
    {
        volatile uint32_t MASTER_SA [32UL];
        I2C_MASTER_BITBANDING_SA_t MASTER_SA_Bit;
    };
    union
    {
        volatile uint32_t MASTER_STS [32UL];
        volatile uint32_t MASTER_CTS [32UL];
        I2C_MASTER_BITBANDING_STS_t MASTER_STS_Bit;
        I2C_MASTER_BITBANDING_CTL_t MASTER_CTS_Bit;
    };
    union
    {
        volatile const uint32_t MASTER_DATA [32UL];
        I2C_MASTER_BITBANDING_DATA_t MASTER_DATA_Bit;
    };
    union
    {
        volatile const uint32_t MASTER_TPR [32UL];
        I2C_MASTER_BITBANDING_TPR_t MASTER_TPR_Bit;
    };
    union
    {
        volatile uint32_t MASTER_IMR [32UL];
        I2C_MASTER_BITBANDING_IMR_t MASTER_IMR_Bit;
    };
    union
    {
        volatile const uint32_t MASTER_RIS [32UL];
        I2C_MASTER_BITBANDING_RIS_t MASTER_RIS_Bit;
    };
    union
    {
        volatile const uint32_t MASTER_MIS [32UL];
        I2C_MASTER_BITBANDING_MIS_t MASTER_MIS_Bit;
    };
    union
    {
        volatile uint32_t MASTER_ICR [32UL];
        I2C_MASTER_BITBANDING_ICR_t MASTER_ICR_Bit;
    };
    union
    {
        volatile uint32_t MASTER_CR [32UL];
        I2C_MASTER_BITBANDING_CR_t MASTER_CR_Bit;
    };
    union
    {
        volatile uint32_t MASTER_CLKOCNT [32UL];
        I2C_MASTER_BITBANDING_CLKOCNT_t MASTER_CLKOCNT_Bit;
    };
    const uint32_t reserved [1UL * 32UL];
    union
    {
        volatile uint32_t MASTER_BMON [32UL];
        I2C_MASTER_BITBANDING_BMON_t MASTER_BMON_Bit;
    };
    union
    {
        volatile uint32_t MASTER_BLEN [32UL];
        I2C_MASTER_BITBANDING_BLEN_t MASTER_BLEN_Bit;
    };
    union
    {
        volatile uint32_t MASTER_BCNT [32UL];
        I2C_MASTER_BITBANDING_BCNT_t MASTER_BCNT_Bit;
    };
    const uint32_t reserved3 [498UL * 32UL];
    union
    {
        volatile uint32_t SLAVE_OAR [32UL];
        I2C_SLAVE_BITBANDING_OAR_t SLAVE_OAR_Bit;
    };
    union
    {
        volatile uint32_t SLAVE_STS [32UL];
        volatile uint32_t SLAVE_CTL [32UL];
        I2C_SLAVE_BITBANDING_STS_t SLAVE_STS_Bit;
        I2C_SLAVE_BITBANDING_CTL_t SLAVE_CTL_Bit;
    };
    union
    {
        volatile uint32_t SLAVE_DATA [32UL];
        I2C_SLAVE_BITBANDING_DATA_t SLAVE_DATA_Bit;
    };
    union
    {
        volatile uint32_t SLAVE_IMR [32UL];
        I2C_SLAVE_BITBANDING_IMR_t SLAVE_IMR_Bit;
    };
    union
    {
        volatile uint32_t SLAVE_RIS [32UL];
        I2C_SLAVE_BITBANDING_RIS_t SLAVE_RIS_Bit;
    };
    union
    {
        volatile uint32_t SLAVE_MIS [32UL];
        I2C_SLAVE_BITBANDING_MIS_t SLAVE_MIS_Bit;
    };
    union
    {
        volatile uint32_t SLAVE_ICR [32UL];
        I2C_SLAVE_BITBANDING_ICR_t SLAVE_ICR_Bit;
    };
    union
    {
        volatile uint32_t SLAVE_OAR2 [32UL];
        I2C_SLAVE_BITBANDING_OAR2_t SLAVE_OAR2_Bit;
    };
    union
    {
        volatile uint32_t SLAVE_ACKCTL [32UL];
        I2C_SLAVE_BITBANDING_ACKCTL_t SLAVE_ACKCTL_Bit;
    };
    const uint32_t reserved4 [439UL * 32UL];
    union
    {
        volatile const uint32_t FIFO_DATA [32UL];
        I2C_FIFO_BITBANDING_DATA_t FIFO_DATA_Bit;
    };
    union
    {
        volatile const uint32_t FIFO_CTL [32UL];
        I2C_FIFO_BITBANDING_CTL_t FIFO_CTL_Bit;
    };
    union
    {
        volatile const uint32_t FIFO_STS [32UL];
        I2C_FIFO_BITBANDING_STS_t FIFO_STS_Bit;
    };
    const uint32_t reserved5 [45UL * 32UL];
    union
    {
        volatile const uint32_t PP [32UL];
        I2C_BITBANDING_PP_t PP_Bit;
    };
    union
    {
        volatile const uint32_t PC [32UL];
        I2C_BITBANDING_PC_t PC_Bit;
    };
    const uint32_t reserved6 [14UL * 32UL];
} I2C_BITBANDING_t;

/*Master*/
typedef volatile struct
{
    union
    {
        volatile uint32_t SA [32UL];
        I2C_MASTER_BITBANDING_SA_t SA_Bit;
    };
    union
    {
        volatile uint32_t STS [32UL];
        volatile uint32_t CTS [32UL];
        I2C_MASTER_BITBANDING_STS_t STS_Bit;
        I2C_MASTER_BITBANDING_CTL_t CTL_Bit;
    };
    union
    {
        volatile const uint32_t DATA [32UL];
        I2C_MASTER_BITBANDING_DATA_t DATA_Bit;
    };
    union
    {
        volatile const uint32_t TPR [32UL];
        I2C_MASTER_BITBANDING_TPR_t TPR_Bit;
    };
    union
    {
        volatile uint32_t IMR [32UL];
        I2C_MASTER_BITBANDING_IMR_t IMR_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        I2C_MASTER_BITBANDING_RIS_t RIS_Bit;
    };
    union
    {
        volatile const uint32_t MIS [32UL];
        I2C_MASTER_BITBANDING_MIS_t MIS_Bit;
    };
    union
    {
        volatile uint32_t ICR [32UL];
        I2C_MASTER_BITBANDING_ICR_t ICR_Bit;
    };
    union
    {
        volatile uint32_t CR [32UL];
        I2C_MASTER_BITBANDING_CR_t CR_Bit;
    };
    union
    {
        volatile uint32_t CLKOCNT [32UL];
        I2C_MASTER_BITBANDING_CLKOCNT_t CLKOCNT_Bit;
    };
    const uint32_t reserved [1UL * 32UL];
    union
    {
        volatile uint32_t BMON [32UL];
        I2C_MASTER_BITBANDING_BMON_t BMON_Bit;
    };
    union
    {
        volatile uint32_t BLEN [32UL];
        I2C_MASTER_BITBANDING_BLEN_t BLEN_Bit;
    };
    union
    {
        volatile uint32_t BCNT [32UL];
        I2C_MASTER_BITBANDING_BCNT_t BCNT_Bit;
    };
    const uint32_t reserved3 [498UL * 32UL];
} I2C_MASTER_BITBANDING_t;

/*Slave*/
typedef volatile struct
{
    union
    {
        volatile uint32_t OAR [32UL];
        I2C_SLAVE_BITBANDING_OAR_t OAR_Bit;
    };
    union
    {
        volatile uint32_t STS [32UL];
        volatile uint32_t CTL [32UL];
        I2C_SLAVE_BITBANDING_STS_t STS_Bit;
        I2C_SLAVE_BITBANDING_CTL_t CTL_Bit;
    };
    union
    {
        volatile uint32_t DATA [32UL];
        I2C_SLAVE_BITBANDING_DATA_t DATA_Bit;
    };
    union
    {
        volatile uint32_t IMR [32UL];
        I2C_SLAVE_BITBANDING_IMR_t IMR_Bit;
    };
    union
    {
        volatile uint32_t RIS [32UL];
        I2C_SLAVE_BITBANDING_RIS_t RIS_Bit;
    };
    union
    {
        volatile uint32_t MIS [32UL];
        I2C_SLAVE_BITBANDING_MIS_t MIS_Bit;
    };
    union
    {
        volatile uint32_t ICR [32UL];
        I2C_SLAVE_BITBANDING_ICR_t ICR_Bit;
    };
    union
    {
        volatile uint32_t OAR2 [32UL];
        I2C_SLAVE_BITBANDING_OAR2_t OAR2_Bit;
    };
    union
    {
        volatile uint32_t ACKCTL [32UL];
        I2C_SLAVE_BITBANDING_ACKCTL_t ACKCTL_Bit;
    };
    const uint32_t reserved4 [439UL * 32UL];
} I2C_SLAVE_BITBANDING_t;

/*Status Control*/
typedef volatile struct
{
    union
    {
        volatile const uint32_t DATA [32UL];
        I2C_FIFO_BITBANDING_DATA_t DATA_Bit;
    };
    union
    {
        volatile const uint32_t CTL [32UL];
        I2C_FIFO_BITBANDING_CTL_t CTL_Bit;
    };
    union
    {
        volatile const uint32_t STS [32UL];
        I2C_FIFO_BITBANDING_STS_t STS_Bit;
    };
    const uint32_t reserved5 [45UL * 32UL];
}I2C_FIFO_BITBANDING_t;

typedef volatile struct
{
    union
    {
        volatile const uint32_t PP [32UL];
        I2C_BITBANDING_PP_t PP_Bit;
    };
    union
    {
        volatile const uint32_t PC [32UL];
        I2C_BITBANDING_PC_t PC_Bit;
    };
    const uint32_t reserved6 [14UL * 32UL];
} I2C_CONTROL_BITBANDING_t;

typedef volatile struct
{
    I2C_MASTER_BITBANDING_t MASTER;
    I2C_SLAVE_BITBANDING_t SLAVE;
    I2C_FIFO_BITBANDING_t FIFO;
    I2C_CONTROL_BITBANDING_t CONTROL;
} I2CS_UNION_BITBANDING_t;

typedef volatile struct
{
    union
    {
        I2C_BITBANDING_t MODULE0_3 [(uint32_t) 4UL];
        I2CS_UNION_BITBANDING_t MODULE_UNION0_3 [(uint32_t) 4UL];
    };
    I2C_BITBANDING_t reserved[148UL];
    union
    {
        I2C_BITBANDING_t MODULE8_9 [(uint32_t) 2UL];
        I2CS_UNION_BITBANDING_t MODULE_UNION8_9 [(uint32_t) 2UL];
    };
    I2C_BITBANDING_t reserved2[7UL];
    union
    {
        I2C_BITBANDING_t MODULE4_7 [(uint32_t) 4UL];
        I2CS_UNION_BITBANDING_t MODULE_UNION4_7 [(uint32_t) 4UL];
    };
} I2CS_BITBANDING_t;

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTPERIPHERAL_BITBANDING_H_ */
