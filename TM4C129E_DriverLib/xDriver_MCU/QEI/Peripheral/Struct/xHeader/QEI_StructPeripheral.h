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
        volatile UBase_t CTL;
        QEI_CTL_t CTL_Bit;
    };
    union
    {
        volatile const UBase_t STAT;
        QEI_STAT_t STAT_Bit;
    };
    union
    {
        volatile UBase_t POS;
        QEI_POS_t POS_Bit;
    };
    union
    {
        volatile UBase_t MAXPOS;
        QEI_MAXPOS_t MAXPOS_Bit;
    };
    union
    {
        volatile UBase_t LOAD;
        QEI_LOAD_t LOAD_Bit;
    };
    union
    {
        volatile const UBase_t TIME;
        QEI_TIME_t TIME_Bit;
    };
    union
    {
        volatile const UBase_t COUNT;
        QEI_COUNT_t COUNT_Bit;
    };
    union
    {
        volatile const UBase_t SPEED;
        QEI_SPEED_t SPEED_Bit;
    };
    union
    {
        volatile UBase_t INTEN;
        QEI_INTEN_t INTEN_Bit;
    };
    union
    {
        volatile const UBase_t RIS;
        QEI_RIS_t RIS_Bit;
    };
    union
    {
        volatile const UBase_t ISC;
        QEI_ISC_t ISC_Bit;
    };
    const UBase_t reserved [1013UL];
}QEI_t;

typedef volatile struct
{
    QEI_t MODULE [(UBase_t) QEI_enMODULE_MAX];
}QEIS_t;

#endif /* XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_H_ */
