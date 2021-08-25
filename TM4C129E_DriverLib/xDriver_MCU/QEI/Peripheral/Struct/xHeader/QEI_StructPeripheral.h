/**
 *
 * @file QEI_StructPeripheral.h
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/QEI/Peripheral/Struct/xHeader/QEI_StructRegister.h>
#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>


typedef volatile struct
{
    union
    {
        volatile uint32_t CTL;
        QEICTL_TypeDef CTL_Bit;
    };
    union
    {
        volatile const uint32_t STAT;
        QEISTAT_TypeDef STAT_Bit;
    };
    union
    {
        volatile uint32_t POS;
        QEIPOS_TypeDef POS_Bit;
    };
    union
    {
        volatile uint32_t MAXPOS;
        QEIMAXPOS_TypeDef MAXPOS_Bit;
    };
    union
    {
        volatile uint32_t LOAD;
        QEILOAD_TypeDef LOAD_Bit;
    };
    union
    {
        volatile const uint32_t TIME;
        QEITIME_TypeDef TIME_Bit;
    };
    union
    {
        volatile const uint32_t COUNT;
        QEICOUNT_TypeDef COUNT_Bit;
    };
    union
    {
        volatile const uint32_t SPEED;
        QEISPEED_TypeDef SPEED_Bit;
    };
    union
    {
        volatile uint32_t INTEN;
        QEIINTEN_TypeDef INTEN_Bit;
    };
    union
    {
        volatile const uint32_t RIS;
        QEIRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile const uint32_t ISC;
        QEIISC_TypeDef ISC_Bit;
    };
    const uint32_t reserved [1013UL];
}QEI_TypeDef;

typedef volatile struct
{
    QEI_TypeDef MODULE [(uint32_t) QEI_enMODULE_MAX];
}QEIS_TypeDef;

#endif /* XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_H_ */
