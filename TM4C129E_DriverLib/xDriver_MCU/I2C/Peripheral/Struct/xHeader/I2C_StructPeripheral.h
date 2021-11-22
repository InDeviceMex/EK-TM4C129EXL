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
        volatile uint32_t MSA;
        I2CMSA_t MSA_Bit;
    };
    union
    {
        volatile uint32_t MCS;
        I2CMCS_STATUS_t MCS_STATUS_Bit;
        I2CMCS_CONTROL_t MCS_CONTROL_Bit;
    };
    union
    {
        volatile const uint32_t MDR;
        I2CMDR_t MDR_Bit;
    };
    union
    {
        volatile const uint32_t MTPR;
        I2CMTPR_t MTPR_Bit;
    };
    union
    {
        volatile uint32_t MIMR;
        I2CMIMR_t MIMR_Bit;
    };
    union
    {
        volatile const uint32_t MRIS;
        I2CMRIS_t MRIS_Bit;
    };
    union
    {
        volatile const uint32_t MMIS;
        I2CMMIS_t MMIS_Bit;
    };
    union
    {
        volatile uint32_t MICR;
        I2CMICR_t MICR_Bit;
    };
    union
    {
        volatile uint32_t MCR;
        I2CMCR_t MCR_Bit;
    };
    union
    {
        volatile uint32_t MCLKOCNT;
        I2CMCLKOCNT_t MCLKOCNT_Bit;
    };
    const uint32_t reserved [1UL];
    union
    {
        volatile uint32_t MBMON;
        I2CMBMON_t MBMON_Bit;
    };
    union
    {
        volatile uint32_t MBLEN;
        I2CMBLEN_t MBLEN_Bit;
    };
    union
    {
        volatile uint32_t MBCNT;
        I2CMBCNT_t MBCNT_Bit;
    };
    const uint32_t reserved3 [498UL];
    union
    {
        volatile uint32_t SOAR;
        I2CSOAR_t SOAR_Bit;
    };
    union
    {
        volatile uint32_t SCSR;
        I2CSCSR_STATUS_t SCSR_STATUS_Bit;
        I2CSCSR_CONTROL_t SCSR_CONTROL_Bit;
    };
    union
    {
        volatile uint32_t SDR;
        I2CSDR_t SDR_Bit;
    };
    union
    {
        volatile uint32_t SIMR;
        I2CSIMR_t SIMR_Bit;
    };
    union
    {
        volatile uint32_t SRIS;
        I2CSRIS_t SRIS_Bit;
    };
    union
    {
        volatile uint32_t SMIS;
        I2CSMIS_t SMIS_Bit;
    };
    union
    {
        volatile uint32_t SICR;
        I2CSICR_t SICR_Bit;
    };
    union
    {
        volatile uint32_t SOAR2;
        I2CSOAR2_t SOAR2_Bit;
    };
    union
    {
        volatile uint32_t SACKCTL;
        I2CSACKCTL_t SACKCTL_Bit;
    };
    const uint32_t reserved4 [439UL];
    union
    {
        volatile const uint32_t FIFODATA;
        I2CFIFODATA_t FIFODATA_Bit;
    };
    union
    {
        volatile const uint32_t FIFOCTL;
        I2CFIFOCTL_t FIFOCTL_Bit;
    };
    union
    {
        volatile const uint32_t FIFOSTATUS;
        I2CFIFOSTATUS_t FIFOSTATUS_Bit;
    };
    const uint32_t reserved5 [45UL];
    union
    {
        volatile const uint32_t PP;
        I2CPP_t PP_Bit;
    };
    union
    {
        volatile const uint32_t PC;
        I2CPC_t PC_Bit;
    };
    const uint32_t reserved6 [14UL];
} I2C_t;

/*Master*/
typedef volatile struct
{
    union
    {
        volatile uint32_t MSA;
        I2CMSA_t MSA_Bit;
    };
    union
    {
        volatile uint32_t MCS;
        I2CMCS_STATUS_t MCS_STATUS_Bit;
        I2CMCS_CONTROL_t MCS_CONTROL_Bit;
    };
    union
    {
        volatile const uint32_t MDR;
        I2CMDR_t MDR_Bit;
    };
    union
    {
        volatile const uint32_t MTPR;
        I2CMTPR_t MTPR_Bit;
    };
    union
    {
        volatile uint32_t MIMR;
        I2CMIMR_t MIMR_Bit;
    };
    union
    {
        volatile const uint32_t MRIS;
        I2CMRIS_t MRIS_Bit;
    };
    union
    {
        volatile const uint32_t MMIS;
        I2CMMIS_t MMIS_Bit;
    };
    union
    {
        volatile uint32_t MICR;
        I2CMICR_t MICR_Bit;
    };
    union
    {
        volatile uint32_t MCR;
        I2CMCR_t MCR_Bit;
    };
    union
    {
        volatile uint32_t MCLKOCNT;
        I2CMCLKOCNT_t MCLKOCNT_Bit;
    };
    const uint32_t reserved [1UL];
    union
    {
        volatile uint32_t MBMON;
        I2CMBMON_t MBMON_Bit;
    };
    union
    {
        volatile uint32_t MBLEN;
        I2CMBLEN_t MBLEN_Bit;
    };
    union
    {
        volatile uint32_t MBCNT;
        I2CMBCNT_t MBCNT_Bit;
    };
    const uint32_t reserved3 [498UL];
} I2C_MASTER_t;

/*Slave*/
typedef volatile struct
{
    union
    {
        volatile uint32_t SOAR;
        I2CSOAR_t SOAR_Bit;
    };
    union
    {
        volatile uint32_t SCSR;
        I2CSCSR_STATUS_t SCSR_STATUS_Bit;
        I2CSCSR_CONTROL_t SCSR_CONTROL_Bit;
    };
    union
    {
        volatile uint32_t SDR;
        I2CSDR_t SDR_Bit;
    };
    union
    {
        volatile uint32_t SIMR;
        I2CSIMR_t SIMR_Bit;
    };
    union
    {
        volatile uint32_t SRIS;
        I2CSRIS_t SRIS_Bit;
    };
    union
    {
        volatile uint32_t SMIS;
        I2CSMIS_t SMIS_Bit;
    };
    union
    {
        volatile uint32_t SICR;
        I2CSICR_t SICR_Bit;
    };
    union
    {
        volatile uint32_t SOAR2;
        I2CSOAR2_t SOAR2_Bit;
    };
    union
    {
        volatile uint32_t SACKCTL;
        I2CSACKCTL_t SACKCTL_Bit;
    };
    const uint32_t reserved4 [439UL];
} I2C_SLAVE_t;

/*Status Control*/
typedef volatile struct
{
    union
    {
        volatile const uint32_t FIFODATA;
        I2CFIFODATA_t FIFODATA_Bit;
    };
    union
    {
        volatile const uint32_t FIFOCTL;
        I2CFIFOCTL_t FIFOCTL_Bit;
    };
    union
    {
        volatile const uint32_t FIFOSTATUS;
        I2CFIFOSTATUS_t FIFOSTATUS_Bit;
    };
    const uint32_t reserved5 [45UL];
    union
    {
        volatile const uint32_t PP;
        I2CPP_t PP_Bit;
    };
    union
    {
        volatile const uint32_t PC;
        I2CPC_t PC_Bit;
    };
    const uint32_t reserved6 [14UL];
} I2C_CONTROL_t;

typedef volatile struct
{
    I2C_MASTER_t MASTER;
    I2C_SLAVE_t SLAVE;
    I2C_CONTROL_t STATUS_CONTROL;
} I2CS_UNION_t;

typedef volatile struct
{
    union
    {
        I2C_t MODULE0_3 [(uint32_t) 4UL];
        I2CS_UNION_t MODULE_UNION0_3 [(uint32_t) 4UL];
    };
    I2C_t reserved[148UL];
    union
    {
        I2C_t MODULE8_9 [(uint32_t) 2UL];
        I2CS_UNION_t MODULE_UNION8_9 [(uint32_t) 2UL];
    };
    I2C_t reserved2[7UL];
    union
    {
        I2C_t MODULE4_7 [(uint32_t) 4UL];
        I2CS_UNION_t MODULE_UNION4_7 [(uint32_t) 4UL];
    };
} I2CS_t;

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTPERIPHERAL_H_ */
