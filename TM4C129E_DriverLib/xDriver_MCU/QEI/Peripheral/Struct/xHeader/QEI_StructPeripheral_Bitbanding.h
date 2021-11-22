/**
 *
 * @file QEI_StructPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/QEI/Peripheral/Struct/xHeader/QEI_StructRegister_Bitbanding.h>
#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>


typedef volatile struct
{
    union
    {
        volatile uint32_t CTL [32UL];
        BITBANDING_QEICTL_t CTL_Bit;
    };
    union
    {
        volatile const uint32_t STAT [32UL];
        BITBANDING_QEISTAT_t STAT_Bit;
    };
    union
    {
        volatile uint32_t POS [32UL];
        BITBANDING_QEIPOS_t POS_Bit;
    };
    union
    {
        volatile uint32_t MAXPOS [32UL];
        BITBANDING_QEIMAXPOS_t MAXPOS_Bit;
    };
    union
    {
        volatile uint32_t LOAD [32UL];
        BITBANDING_QEILOAD_t LOAD_Bit;
    };
    union
    {
        volatile const uint32_t TIME [32UL];
        BITBANDING_QEITIME_t TIME_Bit;
    };
    union
    {
        volatile const uint32_t COUNT [32UL];
        BITBANDING_QEICOUNT_t COUNT_Bit;
    };
    union
    {
        volatile const uint32_t SPEED [32UL];
        BITBANDING_QEISPEED_t SPEED_Bit;
    };
    union
    {
        volatile uint32_t INTEN [32UL];
        BITBANDING_QEIINTEN_t INTEN_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        BITBANDING_QEIRIS_t RIS_Bit;
    };
    union
    {
        volatile const uint32_t ISC [32UL];
        BITBANDING_QEIISC_t ISC_Bit;
    };
    const uint32_t reserved [1013UL * 32UL];
}QEI_BITBANDING_t;

typedef volatile struct
{
    QEI_BITBANDING_t MODULE [(uint32_t) QEI_enMODULE_MAX];
}QEIS_BITBANDING_t;


#endif /* XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_BITBANDING_H_ */
