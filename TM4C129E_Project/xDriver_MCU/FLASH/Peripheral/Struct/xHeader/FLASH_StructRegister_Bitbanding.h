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

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile uint32_t OFFSET [18UL];
    const uint32_t reserved [14UL];
}BITBANDING_FMA_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA [32UL];
}BITBANDING_FMD_TypeDef;

typedef volatile struct
{
    volatile uint32_t WRITE;
    volatile uint32_t ERASE;
    volatile uint32_t MERASE;
    volatile uint32_t COMT;
    const uint32_t reserved [12UL];
    volatile uint32_t WRKEY [16UL];
}BITBANDING_FMC_TypeDef;

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
}BITBANDING_FCRIS_TypeDef;

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
}BITBANDING_FCIM_TypeDef;

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
}BITBANDING_FCMISC_TypeDef;

typedef volatile struct
{
    volatile uint32_t WRBUF;
    const uint32_t reserved [15UL];
    volatile uint32_t WRKEY [16UL];
}BITBANDING_FMC2_TypeDef;

typedef volatile struct
{
    volatile uint32_t FWB0;
    volatile uint32_t FWB1;
    volatile uint32_t FWB2;
    volatile uint32_t FWB3;
    volatile uint32_t FWB4;
    volatile uint32_t FWB5;
    volatile uint32_t FWB6;
    volatile uint32_t FWB7;
    volatile uint32_t FWB8;
    volatile uint32_t FWB9;
    volatile uint32_t FWB10;
    volatile uint32_t FWB11;
    volatile uint32_t FWB12;
    volatile uint32_t FWB13;
    volatile uint32_t FWB14;
    volatile uint32_t FWB15;
    volatile uint32_t FWB16;
    volatile uint32_t FWB17;
    volatile uint32_t FWB18;
    volatile uint32_t FWB19;
    volatile uint32_t FWB20;
    volatile uint32_t FWB21;
    volatile uint32_t FWB22;
    volatile uint32_t FWB23;
    volatile uint32_t FWB24;
    volatile uint32_t FWB25;
    volatile uint32_t FWB26;
    volatile uint32_t FWB27;
    volatile uint32_t FWB28;
    volatile uint32_t FWB29;
    volatile uint32_t FWB30;
    volatile uint32_t FWB31;
}BITBANDING_FWBVAL_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PEKEY [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_FLPEKEY_TypeDef;

typedef volatile struct
{
    volatile uint32_t FWB [32UL][32UL];
}BITBANDING_FWBn_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA [32UL];
}BITBANDING_FWB_TypeDef;

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
}BITBANDING_FLASHPP_TypeDef;

typedef volatile struct
{
volatile const uint32_t SIZE [16UL];
const uint32_t reserved [16UL];
}BITBANDING_SSIZE_TypeDef;

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
}BITBANDING_FLASHCONF_TypeDef;

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
}BITBANDING_ROMSWMAP_TypeDef;

typedef volatile struct
{
    volatile uint32_t SIZE [18UL];
    const uint32_t reserved [14UL];
}BITBANDING_FLASHDMASZ_TypeDef;

typedef volatile struct
{
    const uint32_t reserved [11UL];
    volatile uint32_t ADDR [18UL];
    const uint32_t reserved1 [3UL];
}BITBANDING_FLASHDMAST_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_STRUCT_FLASH_STRUCTREGISTER_BITBANDING_H_ */
