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
        volatile uint32_t MSA [32UL];
        BITBANDING_I2CMSA_t MSA_Bit;
    };
    union
    {
        volatile uint32_t MCS [32UL];
        BITBANDING_I2CMCS_STATUS_t MCS_STATUS_Bit;
        BITBANDING_I2CMCS_CONTROL_t MCS_CONTROL_Bit;
    };
    union
    {
        volatile const uint32_t MDR [32UL];
        BITBANDING_I2CMDR_t MDR_Bit;
    };
    union
    {
        volatile const uint32_t MTPR [32UL];
        BITBANDING_I2CMTPR_t MTPR_Bit;
    };
    union
    {
        volatile uint32_t MIMR [32UL];
        BITBANDING_I2CMIMR_t MIMR_Bit;
    };
    union
    {
        volatile const uint32_t MRIS [32UL];
        BITBANDING_I2CMRIS_t MRIS_Bit;
    };
    union
    {
        volatile const uint32_t MMIS [32UL];
        BITBANDING_I2CMMIS_t MMIS_Bit;
    };
    union
    {
        volatile uint32_t MICR [32UL];
        BITBANDING_I2CMICR_t MICR_Bit;
    };
    union
    {
        volatile uint32_t MCR [32UL];
        BITBANDING_I2CMCR_t MCR_Bit;
    };
    union
    {
        volatile uint32_t MCLKOCNT [32UL];
        BITBANDING_I2CMCLKOCNT_t MCLKOCNT_Bit;
    };
    const uint32_t reserved [1UL * 32UL];
    union
    {
        volatile uint32_t MBMON [32UL];
        BITBANDING_I2CMBMON_t MBMON_Bit;
    };
    union
    {
        volatile uint32_t MBLEN [32UL];
        BITBANDING_I2CMBLEN_t MBLEN_Bit;
    };
    union
    {
        volatile uint32_t MBCNT [32UL];
        BITBANDING_I2CMBCNT_t MBCNT_Bit;
    };
    const uint32_t reserved3 [498UL * 32UL];
    union
    {
        volatile uint32_t SOAR [32UL];
        BITBANDING_I2CSOAR_t SOAR_Bit;
    };
    union
    {
        volatile uint32_t SCSR [32UL];
        BITBANDING_I2CSCSR_STATUS_t SCSR_STATUS_Bit;
        BITBANDING_I2CSCSR_CONTROL_t SCSR_CONTROL_Bit;
    };
    union
    {
        volatile uint32_t SDR [32UL];
        BITBANDING_I2CSDR_t SDR_Bit;
    };
    union
    {
        volatile uint32_t SIMR [32UL];
        BITBANDING_I2CSIMR_t SIMR_Bit;
    };
    union
    {
        volatile uint32_t SRIS [32UL];
        BITBANDING_I2CSRIS_t SRIS_Bit;
    };
    union
    {
        volatile uint32_t SMIS [32UL];
        BITBANDING_I2CSMIS_t SMIS_Bit;
    };
    union
    {
        volatile uint32_t SICR [32UL];
        BITBANDING_I2CSICR_t SICR_Bit;
    };
    union
    {
        volatile uint32_t SOAR2 [32UL];
        BITBANDING_I2CSOAR2_t SOAR2_Bit;
    };
    union
    {
        volatile uint32_t SACKCTL [32UL];
        BITBANDING_I2CSACKCTL_t SACKCTL_Bit;
    };
    const uint32_t reserved4 [439UL * 32UL];
    union
    {
        volatile const uint32_t FIFODATA [32UL];
        BITBANDING_I2CFIFODATA_t FIFODATA_Bit;
    };
    union
    {
        volatile const uint32_t FIFOCTL [32UL];
        BITBANDING_I2CFIFOCTL_t FIFOCTL_Bit;
    };
    union
    {
        volatile const uint32_t FIFOSTATUS [32UL];
        BITBANDING_I2CFIFOSTATUS_t FIFOSTATUS_Bit;
    };
    const uint32_t reserved5 [45UL * 32UL];
    union
    {
        volatile const uint32_t PP [32UL];
        BITBANDING_I2CPP_t PP_Bit;
    };
    union
    {
        volatile const uint32_t PC [32UL];
        BITBANDING_I2CPC_t PC_Bit;
    };
    const uint32_t reserved6 [14UL * 32UL];
} I2C_BITBANDING_t;

/*Master*/
typedef volatile struct
{
    union
    {
        volatile uint32_t MSA [32UL];
        BITBANDING_I2CMSA_t MSA_Bit;
    };
    union
    {
        volatile uint32_t MCS [32UL];
        BITBANDING_I2CMCS_STATUS_t MCS_STATUS_Bit;
        BITBANDING_I2CMCS_CONTROL_t MCS_CONTROL_Bit;
    };
    union
    {
        volatile const uint32_t MDR [32UL];
        BITBANDING_I2CMDR_t MDR_Bit;
    };
    union
    {
        volatile const uint32_t MTPR [32UL];
        BITBANDING_I2CMTPR_t MTPR_Bit;
    };
    union
    {
        volatile uint32_t MIMR [32UL];
        BITBANDING_I2CMIMR_t MIMR_Bit;
    };
    union
    {
        volatile const uint32_t MRIS [32UL];
        BITBANDING_I2CMRIS_t MRIS_Bit;
    };
    union
    {
        volatile const uint32_t MMIS [32UL];
        BITBANDING_I2CMMIS_t MMIS_Bit;
    };
    union
    {
        volatile uint32_t MICR [32UL];
        BITBANDING_I2CMICR_t MICR_Bit;
    };
    union
    {
        volatile uint32_t MCR [32UL];
        BITBANDING_I2CMCR_t MCR_Bit;
    };
    union
    {
        volatile uint32_t MCLKOCNT [32UL];
        BITBANDING_I2CMCLKOCNT_t MCLKOCNT_Bit;
    };
    const uint32_t reserved [1UL * 32UL];
    union
    {
        volatile uint32_t MBMON [32UL];
        BITBANDING_I2CMBMON_t MBMON_Bit;
    };
    union
    {
        volatile uint32_t MBLEN [32UL];
        BITBANDING_I2CMBLEN_t MBLEN_Bit;
    };
    union
    {
        volatile uint32_t MBCNT [32UL];
        BITBANDING_I2CMBCNT_t MBCNT_Bit;
    };
    const uint32_t reserved3 [498UL * 32UL];
} I2C_MASTER_BITBANDING_t;

/*Slave*/
typedef volatile struct
{
    union
    {
        volatile uint32_t SOAR [32UL];
        BITBANDING_I2CSOAR_t SOAR_Bit;
    };
    union
    {
        volatile uint32_t SCSR [32UL];
        BITBANDING_I2CSCSR_STATUS_t SCSR_STATUS_Bit;
        BITBANDING_I2CSCSR_CONTROL_t SCSR_CONTROL_Bit;
    };
    union
    {
        volatile uint32_t SDR [32UL];
        BITBANDING_I2CSDR_t SDR_Bit;
    };
    union
    {
        volatile uint32_t SIMR [32UL];
        BITBANDING_I2CSIMR_t SIMR_Bit;
    };
    union
    {
        volatile uint32_t SRIS [32UL];
        BITBANDING_I2CSRIS_t SRIS_Bit;
    };
    union
    {
        volatile uint32_t SMIS [32UL];
        BITBANDING_I2CSMIS_t SMIS_Bit;
    };
    union
    {
        volatile uint32_t SICR [32UL];
        BITBANDING_I2CSICR_t SICR_Bit;
    };
    union
    {
        volatile uint32_t SOAR2 [32UL];
        BITBANDING_I2CSOAR2_t SOAR2_Bit;
    };
    union
    {
        volatile uint32_t SACKCTL [32UL];
        BITBANDING_I2CSACKCTL_t SACKCTL_Bit;
    };
    const uint32_t reserved4 [439UL * 32UL];
} I2C_SLAVE_BITBANDING_t;

/*Status Control*/
typedef volatile struct
{
    union
    {
        volatile const uint32_t FIFODATA [32UL];
        BITBANDING_I2CFIFODATA_t FIFODATA_Bit;
    };
    union
    {
        volatile const uint32_t FIFOCTL [32UL];
        BITBANDING_I2CFIFOCTL_t FIFOCTL_Bit;
    };
    union
    {
        volatile const uint32_t FIFOSTATUS [32UL];
        BITBANDING_I2CFIFOSTATUS_t FIFOSTATUS_Bit;
    };
    const uint32_t reserved5 [45UL * 32UL];
    union
    {
        volatile const uint32_t PP [32UL];
        BITBANDING_I2CPP_t PP_Bit;
    };
    union
    {
        volatile const uint32_t PC [32UL];
        BITBANDING_I2CPC_t PC_Bit;
    };
    const uint32_t reserved6 [14UL * 32UL];
} I2C_CONTROL_BITBANDING_t;

typedef volatile struct
{
    I2C_MASTER_BITBANDING_t MASTER;
    I2C_SLAVE_BITBANDING_t SLAVE;
    I2C_CONTROL_BITBANDING_t STATUS_CONTROL;
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
