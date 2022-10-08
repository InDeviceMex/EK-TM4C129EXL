/**
 *
 * @file FLASH_StructPeripheral.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 21 jun. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTREGISTER_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

typedef volatile struct
{
    volatile UBase_t OFFSET :18;
    const UBase_t reserved :14;
}FLASH_ADDRESS_t;

typedef volatile struct
{
    volatile UBase_t DATA :32;
}FLASH_DATA_t;

typedef volatile struct
{
    volatile UBase_t WRITE :1;
    volatile UBase_t ERASE :1;
    volatile UBase_t MERASE :1;
    volatile UBase_t COMT :1;
    const UBase_t reserved:12;
    volatile UBase_t WRKEY :16;
}FLASH_CTL_t;

typedef volatile struct
{
    volatile const UBase_t ARIS :1;
    volatile const UBase_t PRIS :1;
    volatile const UBase_t ERIS :1;
    const UBase_t reserved :6;
    volatile const UBase_t VOLTRIS :1;
    volatile const UBase_t INVDRIS :1;
    volatile const UBase_t ERRIS :1;
    const UBase_t reserved1:1;
    volatile const UBase_t PROGRIS :1;
    const UBase_t reserved2:18;
}FLASH_RIS_t;

typedef volatile struct
{
    volatile UBase_t AMASK :1;
    volatile UBase_t PMASK :1;
    volatile UBase_t EMASK :1;
    const UBase_t reserved :6;
    volatile UBase_t VOLTMASK :1;
    volatile UBase_t INVDMASK :1;
    volatile UBase_t ERMASK :1;
    const UBase_t reserved1 :1;
    volatile UBase_t PROGMASK :1;
    const UBase_t reserved2 :18;
}FLASH_IM_t;

typedef volatile struct
{
    volatile UBase_t AMISC :1;
    volatile UBase_t PMISC :1;
    volatile UBase_t EMISC :1;
    const UBase_t reserved :6;
    volatile UBase_t VOLTMISC :1;
    volatile UBase_t INVDMISC :1;
    volatile UBase_t ERMISC :1;
    const UBase_t reserved1 :1;
    volatile UBase_t PROGMISC :1;
    const UBase_t reserved2 :18;
}FLASH_MISC_t;

typedef volatile struct
{
    volatile UBase_t WRBUF :1;
    const UBase_t reserved:15;
    volatile UBase_t WRKEY :16;
}FLASH_CTL2_t;

typedef volatile struct
{
    volatile UBase_t WB0 :1;
    volatile UBase_t WB1 :1;
    volatile UBase_t WB2 :1;
    volatile UBase_t WB3 :1;
    volatile UBase_t WB4 :1;
    volatile UBase_t WB5 :1;
    volatile UBase_t WB6 :1;
    volatile UBase_t WB7 :1;
    volatile UBase_t WB8 :1;
    volatile UBase_t WB9 :1;
    volatile UBase_t WB10 :1;
    volatile UBase_t WB11 :1;
    volatile UBase_t WB12 :1;
    volatile UBase_t WB13 :1;
    volatile UBase_t WB14 :1;
    volatile UBase_t WB15 :1;
    volatile UBase_t WB16 :1;
    volatile UBase_t WB17 :1;
    volatile UBase_t WB18 :1;
    volatile UBase_t WB19 :1;
    volatile UBase_t WB20 :1;
    volatile UBase_t WB21 :1;
    volatile UBase_t WB22 :1;
    volatile UBase_t WB23 :1;
    volatile UBase_t WB24 :1;
    volatile UBase_t WB25 :1;
    volatile UBase_t WB26 :1;
    volatile UBase_t WB27 :1;
    volatile UBase_t WB28 :1;
    volatile UBase_t WB29 :1;
    volatile UBase_t WB30 :1;
    volatile UBase_t WB31 :1;
}FLASH_WBVAL_t;

typedef volatile struct
{
    volatile const UBase_t PEKEY :16;
    const UBase_t reserved :16;
}FLASH_PEKEY_t;

typedef volatile struct
{
    volatile UBase_t WB [32UL];
}FLASH_WBn_t;

typedef volatile struct
{
    volatile UBase_t DATA :32;
}FLASH_WB_t;

typedef volatile struct
{
    volatile const UBase_t SIZE :16;
    volatile const UBase_t MAINSS :3;
    volatile const UBase_t EESS :4;
    const UBase_t reserved :5;
    volatile const UBase_t DFA :1;
    volatile const UBase_t FMM :1;
    volatile const UBase_t PFC :1;
    const UBase_t reserved1 :1;
}FLASH_PP_t;

typedef volatile struct
{
    volatile const UBase_t SIZE :16;
    const UBase_t reserved :16;
}SRAM_SIZE_t;

typedef volatile struct
{
    const UBase_t reserved :16;
    volatile UBase_t FPFOFF :1;
    volatile UBase_t FPFON :1;
    const UBase_t reserved1 :2;
    volatile UBase_t CLRTV :1;
    const UBase_t reserved2 :8;
    volatile UBase_t SPFE :1;
    volatile UBase_t FMME :1;
    const UBase_t reserved3 :1;
}FLASH_CONF_t;

typedef volatile struct
{
    volatile const UBase_t SW0EN :2;
    volatile const UBase_t SW1EN :2;
    volatile const UBase_t SW2EN :2;
    volatile const UBase_t SW3EN :2;
    volatile const UBase_t SW4EN :2;
    volatile const UBase_t SW5EN :2;
    volatile const UBase_t SW6EN :2;
    volatile const UBase_t SW7EN :2;
    const UBase_t reserved :16;
}ROM_SWMAP_t;

typedef volatile struct
{
    volatile UBase_t SIZE :18;
    const UBase_t reserved :14;
}FLASH_DMASZ_t;

typedef volatile struct
{
    const UBase_t reserved :11;
    volatile UBase_t ADDR :18;
    const UBase_t reserved1 :3;
}FLASH_DMAST_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTREGISTER_H_ */
