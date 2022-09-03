/**
 *
 * @file FLASH_RegisterDefines.h
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
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERDEFINES_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 1 FMA *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FMA_R_OFFSET_MASK    ((uint32_t) 0x000FFFFFUL)
#define FLASH_FMA_R_OFFSET_BIT    (0UL)

#define FLASH_FMA_OFFSET_MASK    ((uint32_t) 0x000FFFFFUL)
/*----------*/

/******************************************************************************************
************************************ 2 FMD *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FMD_R_DATA_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define FLASH_FMD_R_DATA_BIT    (0UL)

#define FLASH_FMD_DATA_MASK    ((uint32_t) 0xFFFFFFFFUL)
/*----------*/

/******************************************************************************************
************************************ 3 FMC *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FMC_R_WRITE_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FMC_R_WRITE_BIT    (0UL)
#define FLASH_FMC_R_WRITE_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_FMC_R_WRITE_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define FLASH_FMC_R_WRITE_WRITE    ((uint32_t) 0x00000001UL)

#define FLASH_FMC_WRITE_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FMC_WRITE_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_FMC_WRITE_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define FLASH_FMC_WRITE_WRITE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FMC_R_ERASE_MASK    ((uint32_t) 0x00000002UL)
#define FLASH_FMC_R_ERASE_BIT    (1UL)
#define FLASH_FMC_R_ERASE_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_FMC_R_ERASE_NOCOMPLETE    ((uint32_t) 0x00000002UL)
#define FLASH_FMC_R_ERASE_ERASE    ((uint32_t) 0x00000002UL)

#define FLASH_FMC_ERASE_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FMC_ERASE_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_FMC_ERASE_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define FLASH_FMC_ERASE_ERASE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FMC_R_MERASE_MASK    ((uint32_t) 0x00000004UL)
#define FLASH_FMC_R_MERASE_BIT    (2UL)
#define FLASH_FMC_R_MERASE_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_FMC_R_MERASE_NOCOMPLETE    ((uint32_t) 0x00000004UL)
#define FLASH_FMC_R_MERASE_MERASE    ((uint32_t) 0x00000004UL)

#define FLASH_FMC_MERASE_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FMC_MERASE_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_FMC_MERASE_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define FLASH_FMC_MERASE_MERASE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FMC_R_COMT_MASK    ((uint32_t) 0x00000008UL)
#define FLASH_FMC_R_COMT_BIT    (3UL)
#define FLASH_FMC_R_COMT_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_FMC_R_COMT_NOCOMPLETE    ((uint32_t) 0x00000008UL)
#define FLASH_FMC_R_COMT_WRITE    ((uint32_t) 0x00000008UL)

#define FLASH_FMC_COMT_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FMC_COMT_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_FMC_COMT_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define FLASH_FMC_COMT_WRITE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FMC_R_WRKEY_MASK    ((uint32_t) 0xFFFF0000UL)
#define FLASH_FMC_R_WRKEY_BIT    (16UL)
#define FLASH_FMC_R_WRKEY_KEY1    ((uint32_t) 0xA4420000UL)
#define FLASH_FMC_R_WRKEY_KEY2    ((uint32_t) 0x71D50000UL)

#define FLASH_FMC_WRKEY_MASK    ((uint32_t) 0x0000FFFFUL)
#define FLASH_FMC_WRKEY_KEY1    ((uint32_t) 0x0000A442UL)
#define FLASH_FMC_WRKEY_KEY2    ((uint32_t) 0x000071D5UL)
/*----------*/

/******************************************************************************************
************************************ 4 FCRIS *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FCRIS_R_ARIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCRIS_R_ARIS_BIT    (0UL)
#define FLASH_FCRIS_R_ARIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCRIS_R_ARIS_ACTIVE    ((uint32_t) 0x00000001UL)

#define FLASH_FCRIS_ARIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCRIS_ARIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCRIS_ARIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_PRIS_MASK    ((uint32_t) 0x00000002UL)
#define FLASH_FCRIS_R_PRIS_BIT    (1UL)
#define FLASH_FCRIS_R_PRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCRIS_R_PRIS_ACTIVE    ((uint32_t) 0x00000002UL)

#define FLASH_FCRIS_PRIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCRIS_PRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCRIS_PRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_ERIS_MASK    ((uint32_t) 0x00000004UL)
#define FLASH_FCRIS_R_ERIS_BIT    (2UL)
#define FLASH_FCRIS_R_ERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCRIS_R_ERIS_ACTIVE    ((uint32_t) 0x00000004UL)

#define FLASH_FCRIS_ERIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCRIS_ERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCRIS_ERIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_VOLTRIS_MASK    ((uint32_t) 0x00000200UL)
#define FLASH_FCRIS_R_VOLTRIS_BIT    (9UL)
#define FLASH_FCRIS_R_VOLTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCRIS_R_VOLTRIS_ACTIVE    ((uint32_t) 0x00000200UL)

#define FLASH_FCRIS_VOLTRIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCRIS_VOLTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCRIS_VOLTRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_INVDRIS_MASK    ((uint32_t) 0x00000400UL)
#define FLASH_FCRIS_R_INVDRIS_BIT    (10UL)
#define FLASH_FCRIS_R_INVDRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCRIS_R_INVDRIS_ACTIVE    ((uint32_t) 0x00000400UL)

#define FLASH_FCRIS_INVDRIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCRIS_INVDRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCRIS_INVDRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_ERRIS_MASK    ((uint32_t) 0x00000800UL)
#define FLASH_FCRIS_R_ERRIS_BIT    (11UL)
#define FLASH_FCRIS_R_ERRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCRIS_R_ERRIS_ACTIVE    ((uint32_t) 0x00000800UL)

#define FLASH_FCRIS_ERRIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCRIS_ERRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCRIS_ERRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_PROGRIS_MASK    ((uint32_t) 0x00002000UL)
#define FLASH_FCRIS_R_PROGRIS_BIT    (13UL)
#define FLASH_FCRIS_R_PROGRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCRIS_R_PROGRIS_ACTIVE    ((uint32_t) 0x00002000UL)

#define FLASH_FCRIS_PROGRIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCRIS_PROGRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCRIS_PROGRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 5 FCIM *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FCIM_R_AMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCIM_R_AMASK_BIT    (0UL)
#define FLASH_FCIM_R_AMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FCIM_R_AMASK_ENA    ((uint32_t) 0x00000001UL)

#define FLASH_FCIM_AMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCIM_AMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FCIM_AMASK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_PMASK_MASK    ((uint32_t) 0x00000002UL)
#define FLASH_FCIM_R_PMASK_BIT    (1UL)
#define FLASH_FCIM_R_PMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FCIM_R_PMASK_ENA    ((uint32_t) 0x00000002UL)

#define FLASH_FCIM_PMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCIM_PMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FCIM_PMASK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_EMASK_MASK    ((uint32_t) 0x00000004UL)
#define FLASH_FCIM_R_EMASK_BIT    (2UL)
#define FLASH_FCIM_R_EMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FCIM_R_EMASK_ENA    ((uint32_t) 0x00000004UL)

#define FLASH_FCIM_EMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCIM_EMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FCIM_EMASK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_VOLTMASK_MASK    ((uint32_t) 0x00000200UL)
#define FLASH_FCIM_R_VOLTMASK_BIT    (9UL)
#define FLASH_FCIM_R_VOLTMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FCIM_R_VOLTMASK_ENA    ((uint32_t) 0x00000200UL)

#define FLASH_FCIM_VOLTMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCIM_VOLTMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FCIM_VOLTMASK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_INVDMASK_MASK    ((uint32_t) 0x00000400UL)
#define FLASH_FCIM_R_INVDMASK_BIT    (10UL)
#define FLASH_FCIM_R_INVDMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FCIM_R_INVDMASK_ENA    ((uint32_t) 0x00000400UL)

#define FLASH_FCIM_INVDMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCIM_INVDMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FCIM_INVDMASK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_ERMASK_MASK    ((uint32_t) 0x00000800UL)
#define FLASH_FCIM_R_ERMASK_BIT    (11UL)
#define FLASH_FCIM_R_ERMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FCIM_R_ERMASK_ENA    ((uint32_t) 0x00000800UL)

#define FLASH_FCIM_ERMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCIM_ERMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FCIM_ERMASK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_PROGMASK_MASK    ((uint32_t) 0x00002000UL)
#define FLASH_FCIM_R_PROGMASK_BIT    (13UL)
#define FLASH_FCIM_R_PROGMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FCIM_R_PROGMASK_ENA    ((uint32_t) 0x00002000UL)

#define FLASH_FCIM_PROGMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCIM_PROGMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FCIM_PROGMASK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 6 FCMISC *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FCMISC_R_AMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_R_AMISC_BIT    (0UL)
#define FLASH_FCMISC_R_AMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCMISC_R_AMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_R_AMISC_CLEAR    ((uint32_t) 0x00000001UL)

#define FLASH_FCMISC_AMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_AMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCMISC_AMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_AMISC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_PMISC_MASK    ((uint32_t) 0x00000002UL)
#define FLASH_FCMISC_R_PMISC_BIT    (1UL)
#define FLASH_FCMISC_R_PMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCMISC_R_PMISC_ACTIVE    ((uint32_t) 0x00000002UL)
#define FLASH_FCMISC_R_PMISC_CLEAR    ((uint32_t) 0x00000002UL)

#define FLASH_FCMISC_PMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_PMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCMISC_PMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_PMISC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_EMISC_MASK    ((uint32_t) 0x00000004UL)
#define FLASH_FCMISC_R_EMISC_BIT    (2UL)
#define FLASH_FCMISC_R_EMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCMISC_R_EMISC_ACTIVE    ((uint32_t) 0x00000004UL)
#define FLASH_FCMISC_R_EMISC_CLEAR    ((uint32_t) 0x00000004UL)

#define FLASH_FCMISC_EMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_EMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCMISC_EMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_EMISC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_VOLTMISC_MASK    ((uint32_t) 0x00000200UL)
#define FLASH_FCMISC_R_VOLTMISC_BIT    (9UL)
#define FLASH_FCMISC_R_VOLTMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCMISC_R_VOLTMISC_ACTIVE    ((uint32_t) 0x00000200UL)
#define FLASH_FCMISC_R_VOLTMISC_CLEAR    ((uint32_t) 0x00000200UL)

#define FLASH_FCMISC_VOLTMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_VOLTMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCMISC_VOLTMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_VOLTMISC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_INVDMISC_MASK    ((uint32_t) 0x00000400UL)
#define FLASH_FCMISC_R_INVDMISC_BIT    (10UL)
#define FLASH_FCMISC_R_INVDMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCMISC_R_INVDMISC_ACTIVE    ((uint32_t) 0x00000400UL)
#define FLASH_FCMISC_R_INVDMISC_CLEAR    ((uint32_t) 0x00000400UL)

#define FLASH_FCMISC_INVDMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_INVDMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCMISC_INVDMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_INVDMISC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_ERMISC_MASK    ((uint32_t) 0x00000800UL)
#define FLASH_FCMISC_R_ERMISC_BIT    (11UL)
#define FLASH_FCMISC_R_ERMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCMISC_R_ERMISC_ACTIVE    ((uint32_t) 0x00000800UL)
#define FLASH_FCMISC_R_ERMISC_CLEAR    ((uint32_t) 0x00000800UL)

#define FLASH_FCMISC_ERMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_ERMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCMISC_ERMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_ERMISC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_PROGMISC_MASK    ((uint32_t) 0x0002000UL)
#define FLASH_FCMISC_R_PROGMISC_BIT    (13UL)
#define FLASH_FCMISC_R_PROGMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCMISC_R_PROGMISC_ACTIVE    ((uint32_t) 0x00002000UL)
#define FLASH_FCMISC_R_PROGMISC_CLEAR    ((uint32_t) 0x00002000UL)

#define FLASH_FCMISC_PROGMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_PROGMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_FCMISC_PROGMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_FCMISC_PROGMISC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 7 FMC2 *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FMC2_R_WRBUF_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FMC2_R_WRBUF_BIT    (0UL)
#define FLASH_FMC2_R_WRBUF_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_FMC2_R_WRBUF_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define FLASH_FMC2_R_WRBUF_WRITE    ((uint32_t) 0x00000001UL)

#define FLASH_FMC2_WRBUF_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FMC2_WRBUF_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_FMC2_WRBUF_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define FLASH_FMC2_WRBUF_WRITE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FMC2_R_WRKEY_MASK    ((uint32_t) 0xFFFF0000UL)
#define FLASH_FMC2_R_WRKEY_BIT    (16UL)
#define FLASH_FMC2_R_WRKEY_KEY1    ((uint32_t) 0xA4420000UL)
#define FLASH_FMC2_R_WRKEY_KEY2    ((uint32_t) 0x71D50000UL)

#define FLASH_FMC2_WRKEY_MASK    ((uint32_t) 0x0000FFFFUL)
#define FLASH_FMC2_WRKEY_KEY1    ((uint32_t) 0x0000A442UL)
#define FLASH_FMC2_WRKEY_KEY2    ((uint32_t) 0x000071D5UL)
/*----------*/

/******************************************************************************************
************************************ 8 FWBVAL *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FWBVAL_R_FWB0_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_R_FWB0_BIT    (0UL)
#define FLASH_FWBVAL_R_FWB0_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB0_NEWDATA    ((uint32_t) 0x00000001UL)

#define FLASH_FWBVAL_FWB0_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB0_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB0_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB1_MASK    ((uint32_t) 0x00000002UL)
#define FLASH_FWBVAL_R_FWB1_BIT    (1UL)
#define FLASH_FWBVAL_R_FWB1_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB1_NEWDATA    ((uint32_t) 0x00000002UL)

#define FLASH_FWBVAL_FWB1_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB1_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB1_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB2_MASK    ((uint32_t) 0x00000004UL)
#define FLASH_FWBVAL_R_FWB2_BIT    (2UL)
#define FLASH_FWBVAL_R_FWB2_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB2_NEWDATA    ((uint32_t) 0x00000004UL)

#define FLASH_FWBVAL_FWB2_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB2_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB2_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB3_MASK    ((uint32_t) 0x00000008UL)
#define FLASH_FWBVAL_R_FWB3_BIT    (3UL)
#define FLASH_FWBVAL_R_FWB3_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB3_NEWDATA    ((uint32_t) 0x00000008UL)

#define FLASH_FWBVAL_FWB3_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB3_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB3_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB4_MASK    ((uint32_t) 0x00000010UL)
#define FLASH_FWBVAL_R_FWB4_BIT    (4UL)
#define FLASH_FWBVAL_R_FWB4_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB4_NEWDATA    ((uint32_t) 0x00000010UL)

#define FLASH_FWBVAL_FWB4_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB4_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB4_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB5_MASK    ((uint32_t) 0x00000020UL)
#define FLASH_FWBVAL_R_FWB5_BIT    (5UL)
#define FLASH_FWBVAL_R_FWB5_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB5_NEWDATA    ((uint32_t) 0x00000020UL)

#define FLASH_FWBVAL_FWB5_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB5_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB5_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB6_MASK    ((uint32_t) 0x00000040UL)
#define FLASH_FWBVAL_R_FWB6_BIT    (6UL)
#define FLASH_FWBVAL_R_FWB6_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB6_NEWDATA    ((uint32_t) 0x00000040UL)

#define FLASH_FWBVAL_FWB6_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB6_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB6_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB7_MASK    ((uint32_t) 0x00000080UL)
#define FLASH_FWBVAL_R_FWB7_BIT    (7UL)
#define FLASH_FWBVAL_R_FWB7_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB7_NEWDATA    ((uint32_t) 0x00000080UL)

#define FLASH_FWBVAL_FWB7_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB7_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB7_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB8_MASK    ((uint32_t) 0x00000100UL)
#define FLASH_FWBVAL_R_FWB8_BIT    (8UL)
#define FLASH_FWBVAL_R_FWB8_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB8_NEWDATA    ((uint32_t) 0x00000100UL)

#define FLASH_FWBVAL_FWB8_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB8_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB8_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB9_MASK    ((uint32_t) 0x00000200UL)
#define FLASH_FWBVAL_R_FWB9_BIT    (9UL)
#define FLASH_FWBVAL_R_FWB9_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB9_NEWDATA    ((uint32_t) 0x00000200UL)

#define FLASH_FWBVAL_FWB9_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB9_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB9_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB10_MASK    ((uint32_t) 0x00000400UL)
#define FLASH_FWBVAL_R_FWB10_BIT    (10UL)
#define FLASH_FWBVAL_R_FWB10_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB10_NEWDATA    ((uint32_t) 0x00000400UL)

#define FLASH_FWBVAL_FWB10_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB10_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB10_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB11_MASK    ((uint32_t) 0x00000800UL)
#define FLASH_FWBVAL_R_FWB11_BIT    (11UL)
#define FLASH_FWBVAL_R_FWB11_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB11_NEWDATA    ((uint32_t) 0x00000800UL)

#define FLASH_FWBVAL_FWB11_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB11_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB11_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB12_MASK    ((uint32_t) 0x00001000UL)
#define FLASH_FWBVAL_R_FWB12_BIT    (12UL)
#define FLASH_FWBVAL_R_FWB12_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB12_NEWDATA    ((uint32_t) 0x00001000UL)

#define FLASH_FWBVAL_FWB12_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB12_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB12_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB13_MASK    ((uint32_t) 0x00002000UL)
#define FLASH_FWBVAL_R_FWB13_BIT    (13UL)
#define FLASH_FWBVAL_R_FWB13_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB13_NEWDATA    ((uint32_t) 0x00002000UL)

#define FLASH_FWBVAL_FWB13_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB13_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB13_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB14_MASK    ((uint32_t) 0x00004000UL)
#define FLASH_FWBVAL_R_FWB14_BIT    (14UL)
#define FLASH_FWBVAL_R_FWB14_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB14_NEWDATA    ((uint32_t) 0x00004000UL)

#define FLASH_FWBVAL_FWB14_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB14_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB14_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB15_MASK    ((uint32_t) 0x00008000UL)
#define FLASH_FWBVAL_R_FWB15_BIT    (15UL)
#define FLASH_FWBVAL_R_FWB15_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB15_NEWDATA    ((uint32_t) 0x00008000UL)

#define FLASH_FWBVAL_FWB15_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB15_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB15_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB16_MASK    ((uint32_t) 0x00010000UL)
#define FLASH_FWBVAL_R_FWB16_BIT    (16UL)
#define FLASH_FWBVAL_R_FWB16_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB16_NEWDATA    ((uint32_t) 0x00010000UL)

#define FLASH_FWBVAL_FWB16_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB16_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB16_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB17_MASK    ((uint32_t) 0x00020000UL)
#define FLASH_FWBVAL_R_FWB17_BIT    (17UL)
#define FLASH_FWBVAL_R_FWB17_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB17_NEWDATA    ((uint32_t) 0x00020000UL)

#define FLASH_FWBVAL_FWB17_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB17_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB17_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB18_MASK    ((uint32_t) 0x00040000UL)
#define FLASH_FWBVAL_R_FWB18_BIT    (18UL)
#define FLASH_FWBVAL_R_FWB18_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB18_NEWDATA    ((uint32_t) 0x00040000UL)

#define FLASH_FWBVAL_FWB18_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB18_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB18_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB19_MASK    ((uint32_t) 0x00080000UL)
#define FLASH_FWBVAL_R_FWB19_BIT    (19UL)
#define FLASH_FWBVAL_R_FWB19_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB19_NEWDATA    ((uint32_t) 0x00080000UL)

#define FLASH_FWBVAL_FWB19_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB19_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB19_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB20_MASK    ((uint32_t) 0x00100000UL)
#define FLASH_FWBVAL_R_FWB20_BIT    (20UL)
#define FLASH_FWBVAL_R_FWB20_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB20_NEWDATA    ((uint32_t) 0x00100000UL)

#define FLASH_FWBVAL_FWB20_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB20_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB20_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB21_MASK    ((uint32_t) 0x00200000UL)
#define FLASH_FWBVAL_R_FWB21_BIT    (21UL)
#define FLASH_FWBVAL_R_FWB21_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB21_NEWDATA    ((uint32_t) 0x00200000UL)

#define FLASH_FWBVAL_FWB21_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB21_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB21_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB22_MASK    ((uint32_t) 0x00400000UL)
#define FLASH_FWBVAL_R_FWB22_BIT    (22UL)
#define FLASH_FWBVAL_R_FWB22_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB22_NEWDATA    ((uint32_t) 0x00400000UL)

#define FLASH_FWBVAL_FWB22_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB22_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB22_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB23_MASK    ((uint32_t) 0x00800000UL)
#define FLASH_FWBVAL_R_FWB23_BIT    (23UL)
#define FLASH_FWBVAL_R_FWB23_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB23_NEWDATA    ((uint32_t) 0x00800000UL)

#define FLASH_FWBVAL_FWB23_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB23_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB23_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB24_MASK    ((uint32_t) 0x01000000UL)
#define FLASH_FWBVAL_R_FWB24_BIT    (24UL)
#define FLASH_FWBVAL_R_FWB24_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB24_NEWDATA    ((uint32_t) 0x01000000UL)

#define FLASH_FWBVAL_FWB24_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB24_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB24_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB25_MASK    ((uint32_t) 0x02000000UL)
#define FLASH_FWBVAL_R_FWB25_BIT    (25UL)
#define FLASH_FWBVAL_R_FWB25_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB25_NEWDATA    ((uint32_t) 0x02000000UL)

#define FLASH_FWBVAL_FWB25_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB25_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB25_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB26_MASK    ((uint32_t) 0x04000000UL)
#define FLASH_FWBVAL_R_FWB26_BIT    (26UL)
#define FLASH_FWBVAL_R_FWB26_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB26_NEWDATA    ((uint32_t) 0x04000000UL)

#define FLASH_FWBVAL_FWB26_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB26_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB26_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB27_MASK    ((uint32_t) 0x08000000UL)
#define FLASH_FWBVAL_R_FWB27_BIT    (27UL)
#define FLASH_FWBVAL_R_FWB27_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB27_NEWDATA    ((uint32_t) 0x08000000UL)

#define FLASH_FWBVAL_FWB27_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB27_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB27_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB28_MASK    ((uint32_t) 0x10000000UL)
#define FLASH_FWBVAL_R_FWB28_BIT    (28UL)
#define FLASH_FWBVAL_R_FWB28_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB28_NEWDATA    ((uint32_t) 0x10000000UL)

#define FLASH_FWBVAL_FWB28_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB28_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB28_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB29_MASK    ((uint32_t) 0x20000000UL)
#define FLASH_FWBVAL_R_FWB29_BIT    (29UL)
#define FLASH_FWBVAL_R_FWB29_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB29_NEWDATA    ((uint32_t) 0x20000000UL)

#define FLASH_FWBVAL_FWB29_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB29_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB29_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB30_MASK    ((uint32_t) 0x40000000UL)
#define FLASH_FWBVAL_R_FWB30_BIT    (30UL)
#define FLASH_FWBVAL_R_FWB30_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB30_NEWDATA    ((uint32_t) 0x40000000UL)

#define FLASH_FWBVAL_FWB30_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB30_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB30_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB31_MASK    ((uint32_t) 0x80000000UL)
#define FLASH_FWBVAL_R_FWB31_BIT    (31UL)
#define FLASH_FWBVAL_R_FWB31_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_R_FWB31_NEWDATA    ((uint32_t) 0x80000000UL)

#define FLASH_FWBVAL_FWB31_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FWBVAL_FWB31_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_FWBVAL_FWB31_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/


/******************************************************************************************
************************************ 9 FLPEKEY *********************************************
******************************************************************************************/
/*----------*/
#define FLASH_FLPEKEY_R_PEKEY_MASK    ((uint32_t) 0x0000FFFFUL)
#define FLASH_FLPEKEY_R_PEKEY_BIT    (16UL)
#define FLASH_FLPEKEY_R_PEKEY_KEY1    ((uint32_t) 0x0000A442UL)
#define FLASH_FLPEKEY_R_PEKEY_KEY2    ((uint32_t) 0x000071D5UL)

#define FLASH_FLPEKEY_PEKEY_MASK    ((uint32_t) 0x0000FFFFUL)
#define FLASH_FLPEKEY_PEKEY_KEY1    ((uint32_t) 0x0000A442UL)
#define FLASH_FLPEKEY_PEKEY_KEY2    ((uint32_t) 0x000071D5UL)
/*----------*/

/******************************************************************************************
************************************ 9-40 FWBn *********************************************
******************************************************************************************/



/******************************************************************************************
************************************ 41 FLASHPP *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FLASHPP_R_SIZE_MASK    ((uint32_t) 0x0000FFFFUL)
#define FLASH_FLASHPP_R_SIZE_BIT    (0UL)
#define FLASH_FLASHPP_R_SIZE_256KB    ((uint32_t) 0x0000007FUL)
#define FLASH_FLASHPP_R_SIZE_1024KB    ((uint32_t) 0x000001FFUL)

#define FLASH_FLASHPP_SIZE_MASK    ((uint32_t) 0x0000FFFFUL)
#define FLASH_FLASHPP_SIZE_256KB    ((uint32_t) 0x0000007FUL)
#define FLASH_FLASHPP_SIZE_1024KB    ((uint32_t) 0x000001FFUL)
/*----------*/

/*----------*/
#define FLASH_FLASHPP_R_MAINSS_MASK    ((uint32_t) 0x00070000UL)
#define FLASH_FLASHPP_R_MAINSS_BIT    (16UL)
#define FLASH_FLASHPP_R_MAINSS_1KB    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHPP_R_MAINSS_2KB    ((uint32_t) 0x00010000UL)
#define FLASH_FLASHPP_R_MAINSS_4KB    ((uint32_t) 0x00020000UL)
#define FLASH_FLASHPP_R_MAINSS_8KB    ((uint32_t) 0x00030000UL)
#define FLASH_FLASHPP_R_MAINSS_16KB    ((uint32_t) 0x00040000UL)

#define FLASH_FLASHPP_MAINSS_MASK    ((uint32_t) 0x00000007UL)
#define FLASH_FLASHPP_MAINSS_1KB    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHPP_MAINSS_2KB    ((uint32_t) 0x00000001UL)
#define FLASH_FLASHPP_MAINSS_4KB    ((uint32_t) 0x00000002UL)
#define FLASH_FLASHPP_MAINSS_8KB    ((uint32_t) 0x00000003UL)
#define FLASH_FLASHPP_MAINSS_16KB    ((uint32_t) 0x00000004UL)
/*----------*/

/*----------*/
#define FLASH_FLASHPP_R_EESS_MASK    ((uint32_t) 0x00780000UL)
#define FLASH_FLASHPP_R_EESS_BIT    (19UL)
#define FLASH_FLASHPP_R_EESS_1KB    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHPP_R_EESS_2KB    ((uint32_t) 0x00080000UL)
#define FLASH_FLASHPP_R_EESS_4KB    ((uint32_t) 0x00100000UL)
#define FLASH_FLASHPP_R_EESS_8KB    ((uint32_t) 0x00180000UL)

#define FLASH_FLASHPP_EESS_MASK    ((uint32_t) 0x0000000FUL)
#define FLASH_FLASHPP_EESS_1KB    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHPP_EESS_2KB    ((uint32_t) 0x00000001UL)
#define FLASH_FLASHPP_EESS_4KB    ((uint32_t) 0x00000002UL)
#define FLASH_FLASHPP_EESS_8KB    ((uint32_t) 0x00000003UL)
/*----------*/

/*----------*/
#define FLASH_FLASHPP_R_DFA_MASK    ((uint32_t) 0x10000000UL)
#define FLASH_FLASHPP_R_DFA_BIT    (28UL)
#define FLASH_FLASHPP_R_DFA_NO    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHPP_R_DFA_YES    ((uint32_t) 0x10000000UL)

#define FLASH_FLASHPP_DFA_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FLASHPP_DFA_NO    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHPP_DFA_YES    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FLASHPP_R_FMM_MASK    ((uint32_t) 0x20000000UL)
#define FLASH_FLASHPP_R_FMM_BIT    (29UL)
#define FLASH_FLASHPP_R_FMM_NO    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHPP_R_FMM_YES    ((uint32_t) 0x20000000UL)

#define FLASH_FLASHPP_FMM_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FLASHPP_FMM_NO    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHPP_FMM_YES    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FLASHPP_R_PFC_MASK    ((uint32_t) 0x40000000UL)
#define FLASH_FLASHPP_R_PFC_BIT    (30UL)
#define FLASH_FLASHPP_R_PFC_SINGLE    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHPP_R_PFC_TWO    ((uint32_t) 0x40000000UL)

#define FLASH_FLASHPP_PFC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FLASHPP_PFC_SINGLE    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHPP_PFC_TWO    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 42 SSIZE *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_SSIZE_R_SIZE_MASK    ((uint32_t) 0x0000FFFFUL)
#define FLASH_SSIZE_R_SIZE_BIT    (0UL)
#define FLASH_SSIZE_R_SIZE_32KB    ((uint32_t) 0x0000007FUL)
#define FLASH_SSIZE_R_SIZE_256KB    ((uint32_t) 0x000003FFUL)

#define FLASH_SSIZE_SIZE_MASK    ((uint32_t) 0x0000FFFFUL)
#define FLASH_SSIZE_SIZE_32KB    ((uint32_t) 0x0000007FUL)
#define FLASH_SSIZE_SIZE_256KB    ((uint32_t) 0x000003FFUL)
/*----------*/

/******************************************************************************************
************************************ 43 FLASHCONF *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FLASHCONF_R_FPFOFF_MASK    ((uint32_t) 0x00010000UL)
#define FLASH_FLASHCONF_R_FPFOFF_BIT    (16UL)
#define FLASH_FLASHCONF_R_FPFOFF_NA    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHCONF_R_FPFOFF_FORCE    ((uint32_t) 0x00010000UL)

#define FLASH_FLASHCONF_FPFOFF_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FLASHCONF_FPFOFF_NA    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHCONF_FPFOFF_FORCE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FLASHCONF_R_FPFON_MASK    ((uint32_t) 0x00020000UL)
#define FLASH_FLASHCONF_R_FPFON_BIT    (17UL)
#define FLASH_FLASHCONF_R_FPFON_NA    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHCONF_R_FPFON_FORCE    ((uint32_t) 0x00020000UL)

#define FLASH_FLASHCONF_FPFON_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FLASHCONF_FPFON_NA    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHCONF_FPFON_FORCE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FLASHCONF_R_CLRTV_MASK    ((uint32_t) 0x00100000UL)
#define FLASH_FLASHCONF_R_CLRTV_BIT    (20UL)
#define FLASH_FLASHCONF_R_CLRTV_NA    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHCONF_R_CLRTV_CLEAR    ((uint32_t) 0x00100000UL)

#define FLASH_FLASHCONF_CLRTV_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FLASHCONF_CLRTV_NA    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHCONF_CLRTV_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FLASHCONF_R_SPFE_MASK    ((uint32_t) 0x20000000UL)
#define FLASH_FLASHCONF_R_SPFE_BIT    (29UL)
#define FLASH_FLASHCONF_R_SPFE_FOUR    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHCONF_R_SPFE_TWO    ((uint32_t) 0x20000000UL)

#define FLASH_FLASHCONF_SPFE_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FLASHCONF_SPFE_FOUR    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHCONF_SPFE_TWO    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_FLASHCONF_R_FMME_MASK    ((uint32_t) 0x40000000UL)
#define FLASH_FLASHCONF_R_FMME_BIT    (30UL)
#define FLASH_FLASHCONF_R_FMME_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHCONF_R_FMME_ENA    ((uint32_t) 0x40000000UL)

#define FLASH_FLASHCONF_FMME_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_FLASHCONF_FMME_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_FLASHCONF_FMME_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 44 ROMSWMAP *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_ROMSWMAP_R_SW0EN_MASK    ((uint32_t) 0x00000003UL)
#define FLASH_ROMSWMAP_R_SW0EN_BIT    (0UL)
#define FLASH_ROMSWMAP_R_SW0EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_R_SW0EN_PRESENT    ((uint32_t) 0x00000001UL)

#define FLASH_ROMSWMAP_SW0EN_MASK    ((uint32_t) 0x00000003UL)
#define FLASH_ROMSWMAP_SW0EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_SW0EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_ROMSWMAP_R_SW1EN_MASK    ((uint32_t) 0x0000000CUL)
#define FLASH_ROMSWMAP_R_SW1EN_BIT    (2UL)
#define FLASH_ROMSWMAP_R_SW1EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_R_SW1EN_PRESENT    ((uint32_t) 0x00000004UL)

#define FLASH_ROMSWMAP_SW1EN_MASK    ((uint32_t) 0x00000003UL)
#define FLASH_ROMSWMAP_SW1EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_SW1EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_ROMSWMAP_R_SW2EN_MASK    ((uint32_t) 0x00000030UL)
#define FLASH_ROMSWMAP_R_SW2EN_BIT    (4UL)
#define FLASH_ROMSWMAP_R_SW2EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_R_SW2EN_PRESENT    ((uint32_t) 0x00000010UL)

#define FLASH_ROMSWMAP_SW2EN_MASK    ((uint32_t) 0x00000003UL)
#define FLASH_ROMSWMAP_SW2EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_SW2EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_ROMSWMAP_R_SW3EN_MASK    ((uint32_t) 0x000000C0UL)
#define FLASH_ROMSWMAP_R_SW3EN_BIT    (6UL)
#define FLASH_ROMSWMAP_R_SW3EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_R_SW3EN_PRESENT    ((uint32_t) 0x00000040UL)

#define FLASH_ROMSWMAP_SW3EN_MASK    ((uint32_t) 0x00000003UL)
#define FLASH_ROMSWMAP_SW3EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_SW3EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_ROMSWMAP_R_SW4EN_MASK    ((uint32_t) 0x00000300UL)
#define FLASH_ROMSWMAP_R_SW4EN_BIT    (8UL)
#define FLASH_ROMSWMAP_R_SW4EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_R_SW4EN_PRESENT    ((uint32_t) 0x00000100UL)

#define FLASH_ROMSWMAP_SW4EN_MASK    ((uint32_t) 0x00000003UL)
#define FLASH_ROMSWMAP_SW4EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_SW4EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_ROMSWMAP_R_SW5EN_MASK    ((uint32_t) 0x00000C00UL)
#define FLASH_ROMSWMAP_R_SW5EN_BIT    (10UL)
#define FLASH_ROMSWMAP_R_SW5EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_R_SW5EN_PRESENT    ((uint32_t) 0x00000400UL)

#define FLASH_ROMSWMAP_SW5EN_MASK    ((uint32_t) 0x00000003UL)
#define FLASH_ROMSWMAP_SW5EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_SW5EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_ROMSWMAP_R_SW6EN_MASK    ((uint32_t) 0x00003000UL)
#define FLASH_ROMSWMAP_R_SW6EN_BIT    (12UL)
#define FLASH_ROMSWMAP_R_SW6EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_R_SW6EN_PRESENT    ((uint32_t) 0x00001000UL)

#define FLASH_ROMSWMAP_SW6EN_MASK    ((uint32_t) 0x00000003UL)
#define FLASH_ROMSWMAP_SW6EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_SW6EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_ROMSWMAP_R_SW7EN_MASK    ((uint32_t) 0x0000C000UL)
#define FLASH_ROMSWMAP_R_SW7EN_BIT    (14UL)
#define FLASH_ROMSWMAP_R_SW7EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_R_SW7EN_PRESENT    ((uint32_t) 0x00004000UL)

#define FLASH_ROMSWMAP_SW7EN_MASK    ((uint32_t) 0x00000003UL)
#define FLASH_ROMSWMAP_SW7EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define FLASH_ROMSWMAP_SW7EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 45 FLASHDMASZ *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FLASHDMASZ_R_SIZE_MASK    ((uint32_t) 0x0003FFFFUL)
#define FLASH_FLASHDMASZ_R_SIZE_BIT    (0UL)

#define FLASH_FLASHDMASZ_SIZE_MASK    ((uint32_t) 0x0003FFFFUL)
/*----------*/

/******************************************************************************************
************************************ 46 FLASHDMAST *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FLASHDMAST_R_ADDR_MASK    ((uint32_t) 0x1FFFF800UL)
#define FLASH_FLASHDMAST_R_ADDR_BIT    (11UL)

#define FLASH_FLASHDMAST_ADDR_MASK    ((uint32_t) 0x0003FFFFUL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERDEFINES_H_ */
