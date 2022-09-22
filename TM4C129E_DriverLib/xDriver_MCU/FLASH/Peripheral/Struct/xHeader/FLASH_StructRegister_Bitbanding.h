/**
 *
 * @file FLASH_StructRegister_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTREGISTER_BITBANDING_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

typedef volatile struct
{
    volatile uint32_t OFFSET [18UL];
    const uint32_t reserved [14UL];
}FLASH_BITBANDING_ADDRESS_t;

typedef volatile struct
{
    volatile uint32_t DATA [32UL];
}FLASH_BITBANDING_DATA_t;

typedef volatile struct
{
    volatile uint32_t WRITE;
    volatile uint32_t ERASE;
    volatile uint32_t MERASE;
    volatile uint32_t COMT;
    const uint32_t reserved [12UL];
    volatile uint32_t WRKEY [16UL];
}FLASH_BITBANDING_CTL_t;

typedef volatile struct
{
    volatile const uint32_t ARIS;
    volatile const uint32_t PRIS;
    volatile const uint32_t ERIS;
    const uint32_t reserved [6UL];
    volatile const uint32_t VOLTRIS;
    volatile const uint32_t INVDRIS;
    volatile const uint32_t ERRIS;
    const uint32_t reserved1;
    volatile const uint32_t PROGRIS;
    const uint32_t reserved2 [18UL];
}FLASH_BITBANDING_RIS_t;

typedef volatile struct
{
    volatile uint32_t AMASK;
    volatile uint32_t PMASK;
    volatile uint32_t EMASK;
    const uint32_t reserved [6UL];
    volatile uint32_t VOLTMASK;
    volatile uint32_t INVDMASK;
    volatile uint32_t ERMASK;
    const uint32_t reserved1;
    volatile uint32_t PROGMASK;
    const uint32_t reserved2 [18UL];
}FLASH_BITBANDING_IM_t;

typedef volatile struct
{
    volatile uint32_t AMISC;
    volatile uint32_t PMISC;
    volatile uint32_t EMISC;
    const uint32_t reserved [6UL];
    volatile uint32_t VOLTMISC;
    volatile uint32_t INVDMISC;
    volatile uint32_t ERMISC;
    const uint32_t reserved1;
    volatile uint32_t PROGMISC;
    const uint32_t reserved2 [18UL];
}FLASH_BITBANDING_MISC_t;

typedef volatile struct
{
    volatile uint32_t WRBUF;
    const uint32_t reserved [15UL];
    volatile uint32_t WRKEY [16UL];
}FLASH_BITBANDING_CTL2_t;

typedef volatile struct
{
    volatile uint32_t WB0;
    volatile uint32_t WB1;
    volatile uint32_t WB2;
    volatile uint32_t WB3;
    volatile uint32_t WB4;
    volatile uint32_t WB5;
    volatile uint32_t WB6;
    volatile uint32_t WB7;
    volatile uint32_t WB8;
    volatile uint32_t WB9;
    volatile uint32_t WB10;
    volatile uint32_t WB11;
    volatile uint32_t WB12;
    volatile uint32_t WB13;
    volatile uint32_t WB14;
    volatile uint32_t WB15;
    volatile uint32_t WB16;
    volatile uint32_t WB17;
    volatile uint32_t WB18;
    volatile uint32_t WB19;
    volatile uint32_t WB20;
    volatile uint32_t WB21;
    volatile uint32_t WB22;
    volatile uint32_t WB23;
    volatile uint32_t WB24;
    volatile uint32_t WB25;
    volatile uint32_t WB26;
    volatile uint32_t WB27;
    volatile uint32_t WB28;
    volatile uint32_t WB29;
    volatile uint32_t WB30;
    volatile uint32_t WB31;
}FLASH_BITBANDING_WBVAL_t;

typedef volatile struct
{
    volatile const uint32_t PEKEY [16UL];
    const uint32_t reserved [16UL];
}FLASH_BITBANDING_PEKEY_t;

typedef volatile struct
{
    volatile uint32_t WB [32UL][32UL];
}FLASH_BITBANDING_WBn_t;

typedef volatile struct
{
    volatile uint32_t DATA [32UL];
}FLASH_BITBANDING_WB_t;

typedef volatile struct
{
    volatile const uint32_t SIZE [16UL];
    volatile const uint32_t MAINSS [3UL];
    volatile const uint32_t EESS [4UL];
    const uint32_t reserved [5UL];
    volatile const uint32_t DFA;
    volatile const uint32_t FMM;
    volatile const uint32_t PFC;
    const uint32_t reserved1;
}FLASH_BITBANDING_PP_t;

typedef volatile struct
{
volatile const uint32_t SIZE [16UL];
const uint32_t reserved [16UL];
}SRAM_BITBANDING_SIZE_t;

typedef volatile struct
{
    const uint32_t reserved [16UL];
    volatile uint32_t FPFOFF;
    volatile uint32_t FPFON;
    const uint32_t reserved1 [2UL];
    volatile uint32_t CLRTV;
    const uint32_t reserved2 [8UL];
    volatile uint32_t SPFE;
    volatile uint32_t FMME;
    const uint32_t reserved3;
}FLASH_BITBANDING_CONF_t;

typedef volatile struct
{
    volatile const uint32_t SW0EN [2UL];
    volatile const uint32_t SW1EN [2UL];
    volatile const uint32_t SW2EN [2UL];
    volatile const uint32_t SW3EN [2UL];
    volatile const uint32_t SW4EN [2UL];
    volatile const uint32_t SW5EN [2UL];
    volatile const uint32_t SW6EN [2UL];
    volatile const uint32_t SW7EN [2UL];
    const uint32_t reserved [16UL];
}ROM_BITBANDING_SWMAP_t;

typedef volatile struct
{
    volatile uint32_t SIZE [18UL];
    const uint32_t reserved [14UL];
}FLASH_BITBANDING_DMASZ_t;

typedef volatile struct
{
    const uint32_t reserved [11UL];
    volatile uint32_t ADDR [18UL];
    const uint32_t reserved1 [3UL];
}FLASH_BITBANDING_DMAST_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTREGISTER_BITBANDING_H_ */
