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
    volatile UBase_t OFFSET [18UL];
    const UBase_t reserved [14UL];
}FLASH_BITBANDING_ADDRESS_t;

typedef volatile struct
{
    volatile UBase_t DATA [32UL];
}FLASH_BITBANDING_DATA_t;

typedef volatile struct
{
    volatile UBase_t WRITE;
    volatile UBase_t ERASE;
    volatile UBase_t MERASE;
    volatile UBase_t COMT;
    const UBase_t reserved [12UL];
    volatile UBase_t WRKEY [16UL];
}FLASH_BITBANDING_CTL_t;

typedef volatile struct
{
    volatile const UBase_t ARIS;
    volatile const UBase_t PRIS;
    volatile const UBase_t ERIS;
    const UBase_t reserved [6UL];
    volatile const UBase_t VOLTRIS;
    volatile const UBase_t INVDRIS;
    volatile const UBase_t ERRIS;
    const UBase_t reserved1;
    volatile const UBase_t PROGRIS;
    const UBase_t reserved2 [18UL];
}FLASH_BITBANDING_RIS_t;

typedef volatile struct
{
    volatile UBase_t AMASK;
    volatile UBase_t PMASK;
    volatile UBase_t EMASK;
    const UBase_t reserved [6UL];
    volatile UBase_t VOLTMASK;
    volatile UBase_t INVDMASK;
    volatile UBase_t ERMASK;
    const UBase_t reserved1;
    volatile UBase_t PROGMASK;
    const UBase_t reserved2 [18UL];
}FLASH_BITBANDING_IM_t;

typedef volatile struct
{
    volatile UBase_t AMISC;
    volatile UBase_t PMISC;
    volatile UBase_t EMISC;
    const UBase_t reserved [6UL];
    volatile UBase_t VOLTMISC;
    volatile UBase_t INVDMISC;
    volatile UBase_t ERMISC;
    const UBase_t reserved1;
    volatile UBase_t PROGMISC;
    const UBase_t reserved2 [18UL];
}FLASH_BITBANDING_MISC_t;

typedef volatile struct
{
    volatile UBase_t WRBUF;
    const UBase_t reserved [15UL];
    volatile UBase_t WRKEY [16UL];
}FLASH_BITBANDING_CTL2_t;

typedef volatile struct
{
    volatile UBase_t WB0;
    volatile UBase_t WB1;
    volatile UBase_t WB2;
    volatile UBase_t WB3;
    volatile UBase_t WB4;
    volatile UBase_t WB5;
    volatile UBase_t WB6;
    volatile UBase_t WB7;
    volatile UBase_t WB8;
    volatile UBase_t WB9;
    volatile UBase_t WB10;
    volatile UBase_t WB11;
    volatile UBase_t WB12;
    volatile UBase_t WB13;
    volatile UBase_t WB14;
    volatile UBase_t WB15;
    volatile UBase_t WB16;
    volatile UBase_t WB17;
    volatile UBase_t WB18;
    volatile UBase_t WB19;
    volatile UBase_t WB20;
    volatile UBase_t WB21;
    volatile UBase_t WB22;
    volatile UBase_t WB23;
    volatile UBase_t WB24;
    volatile UBase_t WB25;
    volatile UBase_t WB26;
    volatile UBase_t WB27;
    volatile UBase_t WB28;
    volatile UBase_t WB29;
    volatile UBase_t WB30;
    volatile UBase_t WB31;
}FLASH_BITBANDING_WBVAL_t;

typedef volatile struct
{
    volatile const UBase_t PEKEY [16UL];
    const UBase_t reserved [16UL];
}FLASH_BITBANDING_PEKEY_t;

typedef volatile struct
{
    volatile UBase_t WB [32UL][32UL];
}FLASH_BITBANDING_WBn_t;

typedef volatile struct
{
    volatile UBase_t DATA [32UL];
}FLASH_BITBANDING_WB_t;

typedef volatile struct
{
    volatile const UBase_t SIZE [16UL];
    volatile const UBase_t MAINSS [3UL];
    volatile const UBase_t EESS [4UL];
    const UBase_t reserved [5UL];
    volatile const UBase_t DFA;
    volatile const UBase_t FMM;
    volatile const UBase_t PFC;
    const UBase_t reserved1;
}FLASH_BITBANDING_PP_t;

typedef volatile struct
{
volatile const UBase_t SIZE [16UL];
const UBase_t reserved [16UL];
}SRAM_BITBANDING_SIZE_t;

typedef volatile struct
{
    const UBase_t reserved [16UL];
    volatile UBase_t FPFOFF;
    volatile UBase_t FPFON;
    const UBase_t reserved1 [2UL];
    volatile UBase_t CLRTV;
    const UBase_t reserved2 [8UL];
    volatile UBase_t SPFE;
    volatile UBase_t FMME;
    const UBase_t reserved3;
}FLASH_BITBANDING_CONF_t;

typedef volatile struct
{
    volatile const UBase_t SW0EN [2UL];
    volatile const UBase_t SW1EN [2UL];
    volatile const UBase_t SW2EN [2UL];
    volatile const UBase_t SW3EN [2UL];
    volatile const UBase_t SW4EN [2UL];
    volatile const UBase_t SW5EN [2UL];
    volatile const UBase_t SW6EN [2UL];
    volatile const UBase_t SW7EN [2UL];
    const UBase_t reserved [16UL];
}ROM_BITBANDING_SWMAP_t;

typedef volatile struct
{
    volatile UBase_t SIZE [18UL];
    const UBase_t reserved [14UL];
}FLASH_BITBANDING_DMASZ_t;

typedef volatile struct
{
    const UBase_t reserved [11UL];
    volatile UBase_t ADDR [18UL];
    const UBase_t reserved1 [3UL];
}FLASH_BITBANDING_DMAST_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTREGISTER_BITBANDING_H_ */
