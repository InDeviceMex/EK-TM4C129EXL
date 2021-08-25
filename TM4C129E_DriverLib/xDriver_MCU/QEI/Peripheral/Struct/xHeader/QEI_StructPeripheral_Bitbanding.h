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
        BITBANDING_QEICTL_TypeDef CTL_Bit;
    };
    union
    {
        volatile const uint32_t STAT [32UL];
        BITBANDING_QEISTAT_TypeDef STAT_Bit;
    };
    union
    {
        volatile uint32_t POS [32UL];
        BITBANDING_QEIPOS_TypeDef POS_Bit;
    };
    union
    {
        volatile uint32_t MAXPOS [32UL];
        BITBANDING_QEIMAXPOS_TypeDef MAXPOS_Bit;
    };
    union
    {
        volatile uint32_t LOAD [32UL];
        BITBANDING_QEILOAD_TypeDef LOAD_Bit;
    };
    union
    {
        volatile const uint32_t TIME [32UL];
        BITBANDING_QEITIME_TypeDef TIME_Bit;
    };
    union
    {
        volatile const uint32_t COUNT [32UL];
        BITBANDING_QEICOUNT_TypeDef COUNT_Bit;
    };
    union
    {
        volatile const uint32_t SPEED [32UL];
        BITBANDING_QEISPEED_TypeDef SPEED_Bit;
    };
    union
    {
        volatile uint32_t INTEN [32UL];
        BITBANDING_QEIINTEN_TypeDef INTEN_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        BITBANDING_QEIRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile const uint32_t ISC [32UL];
        BITBANDING_QEIISC_TypeDef ISC_Bit;
    };
    const uint32_t reserved [1013UL * 32UL];
}QEI_BITBANDING_TypeDef;

typedef volatile struct
{
    QEI_BITBANDING_TypeDef MODULE [(uint32_t) QEI_enMODULE_MAX];
}QEIS_BITBANDING_TypeDef;


#endif /* XDRIVER_MCU_QEI_PERIPHERAL_STRUCT_XHEADER_QEI_STRUCTPERIPHERAL_BITBANDING_H_ */
