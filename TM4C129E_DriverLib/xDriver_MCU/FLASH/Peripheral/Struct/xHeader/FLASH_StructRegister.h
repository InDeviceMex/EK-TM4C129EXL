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
    volatile uint32_t OFFSET :18;
    const uint32_t reserved :14;
}FLASH_ADDRESS_t;

typedef volatile struct
{
    volatile uint32_t DATA :32;
}FLASH_DATA_t;

typedef volatile struct
{
    volatile uint32_t WRITE :1;
    volatile uint32_t ERASE :1;
    volatile uint32_t MERASE :1;
    volatile uint32_t COMT :1;
    const uint32_t reserved:12;
    volatile uint32_t WRKEY :16;
}FLASH_CTL_t;

typedef volatile struct
{
    volatile const uint32_t ARIS :1;
    volatile const uint32_t PRIS :1;
    volatile const uint32_t ERIS :1;
    const uint32_t reserved :6;
    volatile const uint32_t VOLTRIS :1;
    volatile const uint32_t INVDRIS :1;
    volatile const uint32_t ERRIS :1;
    const uint32_t reserved1:1;
    volatile const uint32_t PROGRIS :1;
    const uint32_t reserved2:18;
}FLASH_RIS_t;

typedef volatile struct
{
    volatile uint32_t AMASK :1;
    volatile uint32_t PMASK :1;
    volatile uint32_t EMASK :1;
    const uint32_t reserved :6;
    volatile uint32_t VOLTMASK :1;
    volatile uint32_t INVDMASK :1;
    volatile uint32_t ERMASK :1;
    const uint32_t reserved1 :1;
    volatile uint32_t PROGMASK :1;
    const uint32_t reserved2 :18;
}FLASH_IM_t;

typedef volatile struct
{
    volatile uint32_t AMISC :1;
    volatile uint32_t PMISC :1;
    volatile uint32_t EMISC :1;
    const uint32_t reserved :6;
    volatile uint32_t VOLTMISC :1;
    volatile uint32_t INVDMISC :1;
    volatile uint32_t ERMISC :1;
    const uint32_t reserved1 :1;
    volatile uint32_t PROGMISC :1;
    const uint32_t reserved2 :18;
}FLASH_MISC_t;

typedef volatile struct
{
    volatile uint32_t WRBUF :1;
    const uint32_t reserved:15;
    volatile uint32_t WRKEY :16;
}FLASH_CTL2_t;

typedef volatile struct
{
    volatile uint32_t WB0 :1;
    volatile uint32_t WB1 :1;
    volatile uint32_t WB2 :1;
    volatile uint32_t WB3 :1;
    volatile uint32_t WB4 :1;
    volatile uint32_t WB5 :1;
    volatile uint32_t WB6 :1;
    volatile uint32_t WB7 :1;
    volatile uint32_t WB8 :1;
    volatile uint32_t WB9 :1;
    volatile uint32_t WB10 :1;
    volatile uint32_t WB11 :1;
    volatile uint32_t WB12 :1;
    volatile uint32_t WB13 :1;
    volatile uint32_t WB14 :1;
    volatile uint32_t WB15 :1;
    volatile uint32_t WB16 :1;
    volatile uint32_t WB17 :1;
    volatile uint32_t WB18 :1;
    volatile uint32_t WB19 :1;
    volatile uint32_t WB20 :1;
    volatile uint32_t WB21 :1;
    volatile uint32_t WB22 :1;
    volatile uint32_t WB23 :1;
    volatile uint32_t WB24 :1;
    volatile uint32_t WB25 :1;
    volatile uint32_t WB26 :1;
    volatile uint32_t WB27 :1;
    volatile uint32_t WB28 :1;
    volatile uint32_t WB29 :1;
    volatile uint32_t WB30 :1;
    volatile uint32_t WB31 :1;
}FLASH_WBVAL_t;

typedef volatile struct
{
    volatile const uint32_t PEKEY :16;
    const uint32_t reserved :16;
}FLASH_PEKEY_t;

typedef volatile struct
{
    volatile uint32_t WB [32UL];
}FLASH_WBn_t;

typedef volatile struct
{
    volatile uint32_t DATA :32;
}FLASH_WB_t;

typedef volatile struct
{
    volatile const uint32_t SIZE :16;
    volatile const uint32_t MAINSS :3;
    volatile const uint32_t EESS :4;
    const uint32_t reserved :5;
    volatile const uint32_t DFA :1;
    volatile const uint32_t FMM :1;
    volatile const uint32_t PFC :1;
    const uint32_t reserved1 :1;
}FLASH_PP_t;

typedef volatile struct
{
    volatile const uint32_t SIZE :16;
    const uint32_t reserved :16;
}SRAM_SIZE_t;

typedef volatile struct
{
    const uint32_t reserved :16;
    volatile uint32_t FPFOFF :1;
    volatile uint32_t FPFON :1;
    const uint32_t reserved1 :2;
    volatile uint32_t CLRTV :1;
    const uint32_t reserved2 :8;
    volatile uint32_t SPFE :1;
    volatile uint32_t FMME :1;
    const uint32_t reserved3 :1;
}FLASH_CONF_t;

typedef volatile struct
{
    volatile const uint32_t SW0EN :2;
    volatile const uint32_t SW1EN :2;
    volatile const uint32_t SW2EN :2;
    volatile const uint32_t SW3EN :2;
    volatile const uint32_t SW4EN :2;
    volatile const uint32_t SW5EN :2;
    volatile const uint32_t SW6EN :2;
    volatile const uint32_t SW7EN :2;
    const uint32_t reserved :16;
}ROM_SWMAP_t;

typedef volatile struct
{
    volatile uint32_t SIZE :18;
    const uint32_t reserved :14;
}FLASH_DMASZ_t;

typedef volatile struct
{
    const uint32_t reserved :11;
    volatile uint32_t ADDR :18;
    const uint32_t reserved1 :3;
}FLASH_DMAST_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTREGISTER_H_ */
