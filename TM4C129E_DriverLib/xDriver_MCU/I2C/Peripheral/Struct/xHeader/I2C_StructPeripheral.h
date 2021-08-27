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
        I2CMSA_TypeDef MSA_Bit;
    };
    union
    {
        volatile uint32_t MCS;
        I2CMCS_STATUS_TypeDef MCS_STATUS_Bit;
        I2CMCS_CONTROL_TypeDef MCS_CONTROL_Bit;
    };
    union
    {
        volatile const uint32_t MDR;
        I2CMDR_TypeDef MDR_Bit;
    };
    union
    {
        volatile const uint32_t MTPR;
        I2CMTPR_TypeDef MTPR_Bit;
    };
    union
    {
        volatile uint32_t MIMR;
        I2CMIMR_TypeDef MIMR_Bit;
    };
    union
    {
        volatile const uint32_t MRIS;
        I2CMRIS_TypeDef MRIS_Bit;
    };
    union
    {
        volatile const uint32_t MMIS;
        I2CMMIS_TypeDef MMIS_Bit;
    };
    union
    {
        volatile uint32_t MICR;
        I2CMICR_TypeDef MICR_Bit;
    };
    union
    {
        volatile uint32_t MCR;
        I2CMCR_TypeDef MCR_Bit;
    };
    union
    {
        volatile uint32_t MCLKOCNT;
        I2CMCLKOCNT_TypeDef MCLKOCNT_Bit;
    };
    const uint32_t reserved [1UL];
    union
    {
        volatile uint32_t MBMON;
        I2CMBMON_TypeDef MBMON_Bit;
    };
    const uint32_t reserved2 [2UL];
    union
    {
        volatile uint32_t MCR2;
        I2CMCR2_TypeDef MCR2_Bit;
    };
    const uint32_t reserved3 [497UL];
    union
    {
        volatile uint32_t SOAR;
        I2CSOAR_TypeDef SOAR_Bit;
    };
    union
    {
        volatile uint32_t SCSR;
        I2CSCSR_STATUS_TypeDef SCSR_STATUS_Bit;
        I2CSCSR_CONTROL_TypeDef SCSR_CONTROL_Bit;
    };
    union
    {
        volatile uint32_t SDR;
        I2CSDR_TypeDef SDR_Bit;
    };
    union
    {
        volatile uint32_t SIMR;
        I2CSIMR_TypeDef SIMR_Bit;
    };
    union
    {
        volatile uint32_t SRIS;
        I2CSRIS_TypeDef SRIS_Bit;
    };
    union
    {
        volatile uint32_t SMIS;
        I2CSMIS_TypeDef SMIS_Bit;
    };
    union
    {
        volatile uint32_t SICR;
        I2CSICR_TypeDef SICR_Bit;
    };
    union
    {
        volatile uint32_t SOAR2;
        I2CSOAR2_TypeDef SOAR2_Bit;
    };
    union
    {
        volatile uint32_t SACKCTL;
        I2CSACKCTL_TypeDef SACKCTL_Bit;
    };
    const uint32_t reserved4 [487UL];
    union
    {
        volatile const uint32_t PP;
        I2CPP_TypeDef PP_Bit;
    };
    union
    {
        volatile const uint32_t PC;
        I2CPC_TypeDef PC_Bit;
    };
    const uint32_t reserved5 [14UL];
} I2C_TypeDef;

/*Master*/
typedef volatile struct
{
    union
    {
        volatile uint32_t MSA;
        I2CMSA_TypeDef MSA_Bit;
    };
    union
    {
        volatile uint32_t MCS;
        I2CMCS_STATUS_TypeDef MCS_STATUS_Bit;
        I2CMCS_CONTROL_TypeDef MCS_CONTROL_Bit;
    };
    union
    {
        volatile const uint32_t MDR;
        I2CMDR_TypeDef MDR_Bit;
    };
    union
    {
        volatile const uint32_t MTPR;
        I2CMTPR_TypeDef MTPR_Bit;
    };
    union
    {
        volatile uint32_t MIMR;
        I2CMIMR_TypeDef MIMR_Bit;
    };
    union
    {
        volatile const uint32_t MRIS;
        I2CMRIS_TypeDef MRIS_Bit;
    };
    union
    {
        volatile const uint32_t MMIS;
        I2CMMIS_TypeDef MMIS_Bit;
    };
    union
    {
        volatile uint32_t MICR;
        I2CMICR_TypeDef MICR_Bit;
    };
    union
    {
        volatile uint32_t MCR;
        I2CMCR_TypeDef MCR_Bit;
    };
    union
    {
        volatile uint32_t MCLKOCNT;
        I2CMCLKOCNT_TypeDef MCLKOCNT_Bit;
    };
    const uint32_t reserved [1UL];
    union
    {
        volatile uint32_t MBMON;
        I2CMBMON_TypeDef MBMON_Bit;
    };
    const uint32_t reserved2 [2UL];
    union
    {
        volatile uint32_t MCR2;
        I2CMCR2_TypeDef MCR2_Bit;
    };
    const uint32_t reserved3 [497UL];
} I2C_MASTER_TypeDef;

/*Slave*/
typedef volatile struct
{
    union
    {
        volatile uint32_t SOAR;
        I2CSOAR_TypeDef SOAR_Bit;
    };
    union
    {
        volatile uint32_t SCSR;
        I2CSCSR_STATUS_TypeDef SCSR_STATUS_Bit;
        I2CSCSR_CONTROL_TypeDef SCSR_CONTROL_Bit;
    };
    union
    {
        volatile uint32_t SDR;
        I2CSDR_TypeDef SDR_Bit;
    };
    union
    {
        volatile uint32_t SIMR;
        I2CSIMR_TypeDef SIMR_Bit;
    };
    union
    {
        volatile uint32_t SRIS;
        I2CSRIS_TypeDef SRIS_Bit;
    };
    union
    {
        volatile uint32_t SMIS;
        I2CSMIS_TypeDef SMIS_Bit;
    };
    union
    {
        volatile uint32_t SICR;
        I2CSICR_TypeDef SICR_Bit;
    };
    union
    {
        volatile uint32_t SOAR2;
        I2CSOAR2_TypeDef SOAR2_Bit;
    };
    union
    {
        volatile uint32_t SACKCTL;
        I2CSACKCTL_TypeDef SACKCTL_Bit;
    };
    const uint32_t reserved4 [487UL];
} I2C_SLAVE_TypeDef;

/*Status Control*/
typedef volatile struct
{
    union
    {
        volatile const uint32_t PP;
        I2CPP_TypeDef PP_Bit;
    };
    union
    {
        volatile const uint32_t PC;
        I2CPC_TypeDef PC_Bit;
    };
    const uint32_t reserved5 [14UL];
} I2C_CONTROL_TypeDef;

typedef volatile struct
{
        I2C_MASTER_TypeDef MASTER;
        I2C_SLAVE_TypeDef SLAVE;
        I2C_CONTROL_TypeDef STATUS_CONTROL;
} I2CS_UNION_TypeDef;

typedef volatile struct
{
    union
    {
            I2C_TypeDef MODULE [(uint32_t) I2C_enMODULE_MAX];
            I2CS_UNION_TypeDef MODULE_UNION [(uint32_t) I2C_enMODULE_MAX];
    };
} I2CS_TypeDef;

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_STRUCT_XHEADER_I2C_STRUCTPERIPHERAL_H_ */
