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
        QEICTL_t CTL_Bit;
    };
    union
    {
        volatile const uint32_t STAT;
        QEISTAT_t STAT_Bit;
    };
    union
    {
        volatile uint32_t POS;
        QEIPOS_t POS_Bit;
    };
    union
    {
        volatile uint32_t MAXPOS;
        QEIMAXPOS_t MAXPOS_Bit;
    };
    union
    {
        volatile uint32_t LOAD;
        QEILOAD_t LOAD_Bit;
    };
    union
    {
        volatile const uint32_t TIME;
        QEITIME_t TIME_Bit;
    };
    union
    {
        volatile const uint32_t COUNT;
        QEICOUNT_t COUNT_Bit;
    };
    union
    {
        volatile const uint32_t SPEED;
        QEISPEED_t SPEED_Bit;
    };
    union
    {
        volatile uint32_t INTEN;
        QEIINTEN_t INTEN_Bit;
    };
    union
    {
        volatile const uint32_t RIS;
        QEIRIS_t RIS_Bit;
    };
    union
    {
        volatile const uint32_t ISC;
        QEIISC_t ISC_Bit;
    };
    const uint32_t reserved [1013UL];
}QEI_t;

typedef volatile struct
{
    QEI_t MODULE [(uint32_t) QEI_enMODULE_MAX];
}QEIS_t;

#endif /* XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_H_ */
