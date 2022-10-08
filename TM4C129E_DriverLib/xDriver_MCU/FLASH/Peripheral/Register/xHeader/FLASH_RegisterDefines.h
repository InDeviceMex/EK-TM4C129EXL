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

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

/******************************************************************************************
************************************ 1 ADDRESS *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_ADDRESS_R_OFFSET_MASK    ((UBase_t) 0x000FFFFFUL)
#define FLASH_ADDRESS_R_OFFSET_BIT    (0UL)

#define FLASH_ADDRESS_OFFSET_MASK    ((UBase_t) 0x000FFFFFUL)
/*----------*/

/******************************************************************************************
************************************ 2 DATA *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_DATA_R_DATA_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define FLASH_DATA_R_DATA_BIT    (0UL)

#define FLASH_DATA_DATA_MASK    ((UBase_t) 0xFFFFFFFFUL)
/*----------*/

/******************************************************************************************
************************************ 3 CTL *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_CTL_R_WRITE_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_CTL_R_WRITE_BIT    (0UL)
#define FLASH_CTL_R_WRITE_COMPLETE    ((UBase_t) 0x00000000UL)
#define FLASH_CTL_R_WRITE_NOCOMPLETE    ((UBase_t) 0x00000001UL)
#define FLASH_CTL_R_WRITE_WRITE    ((UBase_t) 0x00000001UL)

#define FLASH_CTL_WRITE_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_CTL_WRITE_COMPLETE    ((UBase_t) 0x00000000UL)
#define FLASH_CTL_WRITE_NOCOMPLETE    ((UBase_t) 0x00000001UL)
#define FLASH_CTL_WRITE_WRITE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CTL_R_ERASE_MASK    ((UBase_t) 0x00000002UL)
#define FLASH_CTL_R_ERASE_BIT    (1UL)
#define FLASH_CTL_R_ERASE_COMPLETE    ((UBase_t) 0x00000000UL)
#define FLASH_CTL_R_ERASE_NOCOMPLETE    ((UBase_t) 0x00000002UL)
#define FLASH_CTL_R_ERASE_ERASE    ((UBase_t) 0x00000002UL)

#define FLASH_CTL_ERASE_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_CTL_ERASE_COMPLETE    ((UBase_t) 0x00000000UL)
#define FLASH_CTL_ERASE_NOCOMPLETE    ((UBase_t) 0x00000001UL)
#define FLASH_CTL_ERASE_ERASE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CTL_R_MERASE_MASK    ((UBase_t) 0x00000004UL)
#define FLASH_CTL_R_MERASE_BIT    (2UL)
#define FLASH_CTL_R_MERASE_COMPLETE    ((UBase_t) 0x00000000UL)
#define FLASH_CTL_R_MERASE_NOCOMPLETE    ((UBase_t) 0x00000004UL)
#define FLASH_CTL_R_MERASE_MERASE    ((UBase_t) 0x00000004UL)

#define FLASH_CTL_MERASE_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_CTL_MERASE_COMPLETE    ((UBase_t) 0x00000000UL)
#define FLASH_CTL_MERASE_NOCOMPLETE    ((UBase_t) 0x00000001UL)
#define FLASH_CTL_MERASE_MERASE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CTL_R_COMT_MASK    ((UBase_t) 0x00000008UL)
#define FLASH_CTL_R_COMT_BIT    (3UL)
#define FLASH_CTL_R_COMT_COMPLETE    ((UBase_t) 0x00000000UL)
#define FLASH_CTL_R_COMT_NOCOMPLETE    ((UBase_t) 0x00000008UL)
#define FLASH_CTL_R_COMT_WRITE    ((UBase_t) 0x00000008UL)

#define FLASH_CTL_COMT_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_CTL_COMT_COMPLETE    ((UBase_t) 0x00000000UL)
#define FLASH_CTL_COMT_NOCOMPLETE    ((UBase_t) 0x00000001UL)
#define FLASH_CTL_COMT_WRITE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CTL_R_WRKEY_MASK    ((UBase_t) 0xFFFF0000UL)
#define FLASH_CTL_R_WRKEY_BIT    (16UL)
#define FLASH_CTL_R_WRKEY_KEY1    ((UBase_t) 0xA4420000UL)
#define FLASH_CTL_R_WRKEY_KEY2    ((UBase_t) 0x71D50000UL)

#define FLASH_CTL_WRKEY_MASK    ((UBase_t) 0x0000FFFFUL)
#define FLASH_CTL_WRKEY_KEY1    ((UBase_t) 0x0000A442UL)
#define FLASH_CTL_WRKEY_KEY2    ((UBase_t) 0x000071D5UL)
/*----------*/

/******************************************************************************************
************************************ 4 RIS *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_RIS_R_ARIS_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_RIS_R_ARIS_BIT    (0UL)
#define FLASH_RIS_R_ARIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_RIS_R_ARIS_ACTIVE    ((UBase_t) 0x00000001UL)

#define FLASH_RIS_ARIS_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_RIS_ARIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_RIS_ARIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_RIS_R_PRIS_MASK    ((UBase_t) 0x00000002UL)
#define FLASH_RIS_R_PRIS_BIT    (1UL)
#define FLASH_RIS_R_PRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_RIS_R_PRIS_ACTIVE    ((UBase_t) 0x00000002UL)

#define FLASH_RIS_PRIS_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_RIS_PRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_RIS_PRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_RIS_R_ERIS_MASK    ((UBase_t) 0x00000004UL)
#define FLASH_RIS_R_ERIS_BIT    (2UL)
#define FLASH_RIS_R_ERIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_RIS_R_ERIS_ACTIVE    ((UBase_t) 0x00000004UL)

#define FLASH_RIS_ERIS_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_RIS_ERIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_RIS_ERIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_RIS_R_VOLTRIS_MASK    ((UBase_t) 0x00000200UL)
#define FLASH_RIS_R_VOLTRIS_BIT    (9UL)
#define FLASH_RIS_R_VOLTRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_RIS_R_VOLTRIS_ACTIVE    ((UBase_t) 0x00000200UL)

#define FLASH_RIS_VOLTRIS_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_RIS_VOLTRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_RIS_VOLTRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_RIS_R_INVDRIS_MASK    ((UBase_t) 0x00000400UL)
#define FLASH_RIS_R_INVDRIS_BIT    (10UL)
#define FLASH_RIS_R_INVDRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_RIS_R_INVDRIS_ACTIVE    ((UBase_t) 0x00000400UL)

#define FLASH_RIS_INVDRIS_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_RIS_INVDRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_RIS_INVDRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_RIS_R_ERRIS_MASK    ((UBase_t) 0x00000800UL)
#define FLASH_RIS_R_ERRIS_BIT    (11UL)
#define FLASH_RIS_R_ERRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_RIS_R_ERRIS_ACTIVE    ((UBase_t) 0x00000800UL)

#define FLASH_RIS_ERRIS_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_RIS_ERRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_RIS_ERRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_RIS_R_PROGRIS_MASK    ((UBase_t) 0x00002000UL)
#define FLASH_RIS_R_PROGRIS_BIT    (13UL)
#define FLASH_RIS_R_PROGRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_RIS_R_PROGRIS_ACTIVE    ((UBase_t) 0x00002000UL)

#define FLASH_RIS_PROGRIS_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_RIS_PROGRIS_NOACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_RIS_PROGRIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 5 FCIM *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_IM_R_AMASK_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_IM_R_AMASK_BIT    (0UL)
#define FLASH_IM_R_AMASK_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_IM_R_AMASK_ENA    ((UBase_t) 0x00000001UL)

#define FLASH_IM_AMASK_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_IM_AMASK_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_IM_AMASK_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_IM_R_PMASK_MASK    ((UBase_t) 0x00000002UL)
#define FLASH_IM_R_PMASK_BIT    (1UL)
#define FLASH_IM_R_PMASK_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_IM_R_PMASK_ENA    ((UBase_t) 0x00000002UL)

#define FLASH_IM_PMASK_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_IM_PMASK_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_IM_PMASK_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_IM_R_EMASK_MASK    ((UBase_t) 0x00000004UL)
#define FLASH_IM_R_EMASK_BIT    (2UL)
#define FLASH_IM_R_EMASK_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_IM_R_EMASK_ENA    ((UBase_t) 0x00000004UL)

#define FLASH_IM_EMASK_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_IM_EMASK_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_IM_EMASK_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_IM_R_VOLTMASK_MASK    ((UBase_t) 0x00000200UL)
#define FLASH_IM_R_VOLTMASK_BIT    (9UL)
#define FLASH_IM_R_VOLTMASK_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_IM_R_VOLTMASK_ENA    ((UBase_t) 0x00000200UL)

#define FLASH_IM_VOLTMASK_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_IM_VOLTMASK_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_IM_VOLTMASK_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_IM_R_INVDMASK_MASK    ((UBase_t) 0x00000400UL)
#define FLASH_IM_R_INVDMASK_BIT    (10UL)
#define FLASH_IM_R_INVDMASK_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_IM_R_INVDMASK_ENA    ((UBase_t) 0x00000400UL)

#define FLASH_IM_INVDMASK_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_IM_INVDMASK_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_IM_INVDMASK_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_IM_R_ERMASK_MASK    ((UBase_t) 0x00000800UL)
#define FLASH_IM_R_ERMASK_BIT    (11UL)
#define FLASH_IM_R_ERMASK_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_IM_R_ERMASK_ENA    ((UBase_t) 0x00000800UL)

#define FLASH_IM_ERMASK_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_IM_ERMASK_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_IM_ERMASK_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_IM_R_PROGMASK_MASK    ((UBase_t) 0x00002000UL)
#define FLASH_IM_R_PROGMASK_BIT    (13UL)
#define FLASH_IM_R_PROGMASK_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_IM_R_PROGMASK_ENA    ((UBase_t) 0x00002000UL)

#define FLASH_IM_PROGMASK_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_IM_PROGMASK_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_IM_PROGMASK_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_MISC_R_AMISC_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_R_AMISC_BIT    (0UL)
#define FLASH_MISC_R_AMISC_INACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_MISC_R_AMISC_ACTIVE    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_R_AMISC_CLEAR    ((UBase_t) 0x00000001UL)

#define FLASH_MISC_AMISC_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_AMISC_INACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_MISC_AMISC_ACTIVE    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_AMISC_CLEAR    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_MISC_R_PMISC_MASK    ((UBase_t) 0x00000002UL)
#define FLASH_MISC_R_PMISC_BIT    (1UL)
#define FLASH_MISC_R_PMISC_INACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_MISC_R_PMISC_ACTIVE    ((UBase_t) 0x00000002UL)
#define FLASH_MISC_R_PMISC_CLEAR    ((UBase_t) 0x00000002UL)

#define FLASH_MISC_PMISC_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_PMISC_INACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_MISC_PMISC_ACTIVE    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_PMISC_CLEAR    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_MISC_R_EMISC_MASK    ((UBase_t) 0x00000004UL)
#define FLASH_MISC_R_EMISC_BIT    (2UL)
#define FLASH_MISC_R_EMISC_INACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_MISC_R_EMISC_ACTIVE    ((UBase_t) 0x00000004UL)
#define FLASH_MISC_R_EMISC_CLEAR    ((UBase_t) 0x00000004UL)

#define FLASH_MISC_EMISC_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_EMISC_INACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_MISC_EMISC_ACTIVE    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_EMISC_CLEAR    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_MISC_R_VOLTMISC_MASK    ((UBase_t) 0x00000200UL)
#define FLASH_MISC_R_VOLTMISC_BIT    (9UL)
#define FLASH_MISC_R_VOLTMISC_INACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_MISC_R_VOLTMISC_ACTIVE    ((UBase_t) 0x00000200UL)
#define FLASH_MISC_R_VOLTMISC_CLEAR    ((UBase_t) 0x00000200UL)

#define FLASH_MISC_VOLTMISC_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_VOLTMISC_INACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_MISC_VOLTMISC_ACTIVE    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_VOLTMISC_CLEAR    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_MISC_R_INVDMISC_MASK    ((UBase_t) 0x00000400UL)
#define FLASH_MISC_R_INVDMISC_BIT    (10UL)
#define FLASH_MISC_R_INVDMISC_INACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_MISC_R_INVDMISC_ACTIVE    ((UBase_t) 0x00000400UL)
#define FLASH_MISC_R_INVDMISC_CLEAR    ((UBase_t) 0x00000400UL)

#define FLASH_MISC_INVDMISC_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_INVDMISC_INACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_MISC_INVDMISC_ACTIVE    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_INVDMISC_CLEAR    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_MISC_R_ERMISC_MASK    ((UBase_t) 0x00000800UL)
#define FLASH_MISC_R_ERMISC_BIT    (11UL)
#define FLASH_MISC_R_ERMISC_INACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_MISC_R_ERMISC_ACTIVE    ((UBase_t) 0x00000800UL)
#define FLASH_MISC_R_ERMISC_CLEAR    ((UBase_t) 0x00000800UL)

#define FLASH_MISC_ERMISC_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_ERMISC_INACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_MISC_ERMISC_ACTIVE    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_ERMISC_CLEAR    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_MISC_R_PROGMISC_MASK    ((UBase_t) 0x0002000UL)
#define FLASH_MISC_R_PROGMISC_BIT    (13UL)
#define FLASH_MISC_R_PROGMISC_INACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_MISC_R_PROGMISC_ACTIVE    ((UBase_t) 0x00002000UL)
#define FLASH_MISC_R_PROGMISC_CLEAR    ((UBase_t) 0x00002000UL)

#define FLASH_MISC_PROGMISC_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_PROGMISC_INACTIVE    ((UBase_t) 0x00000000UL)
#define FLASH_MISC_PROGMISC_ACTIVE    ((UBase_t) 0x00000001UL)
#define FLASH_MISC_PROGMISC_CLEAR    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 7 CTL2 *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_CTL2_R_WRBUF_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_CTL2_R_WRBUF_BIT    (0UL)
#define FLASH_CTL2_R_WRBUF_COMPLETE    ((UBase_t) 0x00000000UL)
#define FLASH_CTL2_R_WRBUF_NOCOMPLETE    ((UBase_t) 0x00000001UL)
#define FLASH_CTL2_R_WRBUF_WRITE    ((UBase_t) 0x00000001UL)

#define FLASH_CTL2_WRBUF_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_CTL2_WRBUF_COMPLETE    ((UBase_t) 0x00000000UL)
#define FLASH_CTL2_WRBUF_NOCOMPLETE    ((UBase_t) 0x00000001UL)
#define FLASH_CTL2_WRBUF_WRITE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CTL2_R_WRKEY_MASK    ((UBase_t) 0xFFFF0000UL)
#define FLASH_CTL2_R_WRKEY_BIT    (16UL)
#define FLASH_CTL2_R_WRKEY_KEY1    ((UBase_t) 0xA4420000UL)
#define FLASH_CTL2_R_WRKEY_KEY2    ((UBase_t) 0x71D50000UL)

#define FLASH_CTL2_WRKEY_MASK    ((UBase_t) 0x0000FFFFUL)
#define FLASH_CTL2_WRKEY_KEY1    ((UBase_t) 0x0000A442UL)
#define FLASH_CTL2_WRKEY_KEY2    ((UBase_t) 0x000071D5UL)
/*----------*/

/******************************************************************************************
************************************ 8 WBVAL *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_WBVAL_R_WB0_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_R_WB0_BIT    (0UL)
#define FLASH_WBVAL_R_WB0_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB0_NEWDATA    ((UBase_t) 0x00000001UL)

#define FLASH_WBVAL_WB0_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB0_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB0_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB1_MASK    ((UBase_t) 0x00000002UL)
#define FLASH_WBVAL_R_WB1_BIT    (1UL)
#define FLASH_WBVAL_R_WB1_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB1_NEWDATA    ((UBase_t) 0x00000002UL)

#define FLASH_WBVAL_WB1_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB1_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB1_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB2_MASK    ((UBase_t) 0x00000004UL)
#define FLASH_WBVAL_R_WB2_BIT    (2UL)
#define FLASH_WBVAL_R_WB2_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB2_NEWDATA    ((UBase_t) 0x00000004UL)

#define FLASH_WBVAL_WB2_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB2_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB2_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB3_MASK    ((UBase_t) 0x00000008UL)
#define FLASH_WBVAL_R_WB3_BIT    (3UL)
#define FLASH_WBVAL_R_WB3_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB3_NEWDATA    ((UBase_t) 0x00000008UL)

#define FLASH_WBVAL_WB3_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB3_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB3_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB4_MASK    ((UBase_t) 0x00000010UL)
#define FLASH_WBVAL_R_WB4_BIT    (4UL)
#define FLASH_WBVAL_R_WB4_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB4_NEWDATA    ((UBase_t) 0x00000010UL)

#define FLASH_WBVAL_WB4_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB4_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB4_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB5_MASK    ((UBase_t) 0x00000020UL)
#define FLASH_WBVAL_R_WB5_BIT    (5UL)
#define FLASH_WBVAL_R_WB5_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB5_NEWDATA    ((UBase_t) 0x00000020UL)

#define FLASH_WBVAL_WB5_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB5_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB5_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB6_MASK    ((UBase_t) 0x00000040UL)
#define FLASH_WBVAL_R_WB6_BIT    (6UL)
#define FLASH_WBVAL_R_WB6_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB6_NEWDATA    ((UBase_t) 0x00000040UL)

#define FLASH_WBVAL_WB6_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB6_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB6_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB7_MASK    ((UBase_t) 0x00000080UL)
#define FLASH_WBVAL_R_WB7_BIT    (7UL)
#define FLASH_WBVAL_R_WB7_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB7_NEWDATA    ((UBase_t) 0x00000080UL)

#define FLASH_WBVAL_WB7_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB7_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB7_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB8_MASK    ((UBase_t) 0x00000100UL)
#define FLASH_WBVAL_R_WB8_BIT    (8UL)
#define FLASH_WBVAL_R_WB8_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB8_NEWDATA    ((UBase_t) 0x00000100UL)

#define FLASH_WBVAL_WB8_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB8_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB8_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB9_MASK    ((UBase_t) 0x00000200UL)
#define FLASH_WBVAL_R_WB9_BIT    (9UL)
#define FLASH_WBVAL_R_WB9_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB9_NEWDATA    ((UBase_t) 0x00000200UL)

#define FLASH_WBVAL_WB9_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB9_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB9_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB10_MASK    ((UBase_t) 0x00000400UL)
#define FLASH_WBVAL_R_WB10_BIT    (10UL)
#define FLASH_WBVAL_R_WB10_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB10_NEWDATA    ((UBase_t) 0x00000400UL)

#define FLASH_WBVAL_WB10_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB10_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB10_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB11_MASK    ((UBase_t) 0x00000800UL)
#define FLASH_WBVAL_R_WB11_BIT    (11UL)
#define FLASH_WBVAL_R_WB11_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB11_NEWDATA    ((UBase_t) 0x00000800UL)

#define FLASH_WBVAL_WB11_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB11_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB11_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB12_MASK    ((UBase_t) 0x00001000UL)
#define FLASH_WBVAL_R_WB12_BIT    (12UL)
#define FLASH_WBVAL_R_WB12_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB12_NEWDATA    ((UBase_t) 0x00001000UL)

#define FLASH_WBVAL_WB12_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB12_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB12_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB13_MASK    ((UBase_t) 0x00002000UL)
#define FLASH_WBVAL_R_WB13_BIT    (13UL)
#define FLASH_WBVAL_R_WB13_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB13_NEWDATA    ((UBase_t) 0x00002000UL)

#define FLASH_WBVAL_WB13_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB13_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB13_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB14_MASK    ((UBase_t) 0x00004000UL)
#define FLASH_WBVAL_R_WB14_BIT    (14UL)
#define FLASH_WBVAL_R_WB14_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB14_NEWDATA    ((UBase_t) 0x00004000UL)

#define FLASH_WBVAL_WB14_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB14_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB14_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB15_MASK    ((UBase_t) 0x00008000UL)
#define FLASH_WBVAL_R_WB15_BIT    (15UL)
#define FLASH_WBVAL_R_WB15_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB15_NEWDATA    ((UBase_t) 0x00008000UL)

#define FLASH_WBVAL_WB15_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB15_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB15_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB16_MASK    ((UBase_t) 0x00010000UL)
#define FLASH_WBVAL_R_WB16_BIT    (16UL)
#define FLASH_WBVAL_R_WB16_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB16_NEWDATA    ((UBase_t) 0x00010000UL)

#define FLASH_WBVAL_WB16_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB16_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB16_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB17_MASK    ((UBase_t) 0x00020000UL)
#define FLASH_WBVAL_R_WB17_BIT    (17UL)
#define FLASH_WBVAL_R_WB17_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB17_NEWDATA    ((UBase_t) 0x00020000UL)

#define FLASH_WBVAL_WB17_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB17_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB17_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB18_MASK    ((UBase_t) 0x00040000UL)
#define FLASH_WBVAL_R_WB18_BIT    (18UL)
#define FLASH_WBVAL_R_WB18_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB18_NEWDATA    ((UBase_t) 0x00040000UL)

#define FLASH_WBVAL_WB18_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB18_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB18_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB19_MASK    ((UBase_t) 0x00080000UL)
#define FLASH_WBVAL_R_WB19_BIT    (19UL)
#define FLASH_WBVAL_R_WB19_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB19_NEWDATA    ((UBase_t) 0x00080000UL)

#define FLASH_WBVAL_WB19_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB19_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB19_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB20_MASK    ((UBase_t) 0x00100000UL)
#define FLASH_WBVAL_R_WB20_BIT    (20UL)
#define FLASH_WBVAL_R_WB20_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB20_NEWDATA    ((UBase_t) 0x00100000UL)

#define FLASH_WBVAL_WB20_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB20_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB20_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB21_MASK    ((UBase_t) 0x00200000UL)
#define FLASH_WBVAL_R_WB21_BIT    (21UL)
#define FLASH_WBVAL_R_WB21_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB21_NEWDATA    ((UBase_t) 0x00200000UL)

#define FLASH_WBVAL_WB21_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB21_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB21_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB22_MASK    ((UBase_t) 0x00400000UL)
#define FLASH_WBVAL_R_WB22_BIT    (22UL)
#define FLASH_WBVAL_R_WB22_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB22_NEWDATA    ((UBase_t) 0x00400000UL)

#define FLASH_WBVAL_WB22_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB22_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB22_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB23_MASK    ((UBase_t) 0x00800000UL)
#define FLASH_WBVAL_R_WB23_BIT    (23UL)
#define FLASH_WBVAL_R_WB23_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB23_NEWDATA    ((UBase_t) 0x00800000UL)

#define FLASH_WBVAL_WB23_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB23_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB23_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB24_MASK    ((UBase_t) 0x01000000UL)
#define FLASH_WBVAL_R_WB24_BIT    (24UL)
#define FLASH_WBVAL_R_WB24_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB24_NEWDATA    ((UBase_t) 0x01000000UL)

#define FLASH_WBVAL_WB24_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB24_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB24_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB25_MASK    ((UBase_t) 0x02000000UL)
#define FLASH_WBVAL_R_WB25_BIT    (25UL)
#define FLASH_WBVAL_R_WB25_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB25_NEWDATA    ((UBase_t) 0x02000000UL)

#define FLASH_WBVAL_WB25_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB25_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB25_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB26_MASK    ((UBase_t) 0x04000000UL)
#define FLASH_WBVAL_R_WB26_BIT    (26UL)
#define FLASH_WBVAL_R_WB26_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB26_NEWDATA    ((UBase_t) 0x04000000UL)

#define FLASH_WBVAL_WB26_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB26_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB26_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB27_MASK    ((UBase_t) 0x08000000UL)
#define FLASH_WBVAL_R_WB27_BIT    (27UL)
#define FLASH_WBVAL_R_WB27_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB27_NEWDATA    ((UBase_t) 0x08000000UL)

#define FLASH_WBVAL_WB27_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB27_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB27_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB28_MASK    ((UBase_t) 0x10000000UL)
#define FLASH_WBVAL_R_WB28_BIT    (28UL)
#define FLASH_WBVAL_R_WB28_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB28_NEWDATA    ((UBase_t) 0x10000000UL)

#define FLASH_WBVAL_WB28_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB28_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB28_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB29_MASK    ((UBase_t) 0x20000000UL)
#define FLASH_WBVAL_R_WB29_BIT    (29UL)
#define FLASH_WBVAL_R_WB29_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB29_NEWDATA    ((UBase_t) 0x20000000UL)

#define FLASH_WBVAL_WB29_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB29_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB29_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB30_MASK    ((UBase_t) 0x40000000UL)
#define FLASH_WBVAL_R_WB30_BIT    (30UL)
#define FLASH_WBVAL_R_WB30_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB30_NEWDATA    ((UBase_t) 0x40000000UL)

#define FLASH_WBVAL_WB30_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB30_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB30_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB31_MASK    ((UBase_t) 0x80000000UL)
#define FLASH_WBVAL_R_WB31_BIT    (31UL)
#define FLASH_WBVAL_R_WB31_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB31_NEWDATA    ((UBase_t) 0x80000000UL)

#define FLASH_WBVAL_WB31_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_WBVAL_WB31_NODATA    ((UBase_t) 0x00000000UL)
#define FLASH_WBVAL_WB31_NEWDATA    ((UBase_t) 0x00000001UL)
/*----------*/


/******************************************************************************************
************************************ 9 PEKEY *********************************************
******************************************************************************************/
/*----------*/
#define FLASH_PEKEY_R_PEKEY_MASK    ((UBase_t) 0x0000FFFFUL)
#define FLASH_PEKEY_R_PEKEY_BIT    (16UL)
#define FLASH_PEKEY_R_PEKEY_KEY1    ((UBase_t) 0x0000A442UL)
#define FLASH_PEKEY_R_PEKEY_KEY2    ((UBase_t) 0x000071D5UL)

#define FLASH_PEKEY_PEKEY_MASK    ((UBase_t) 0x0000FFFFUL)
#define FLASH_PEKEY_PEKEY_KEY1    ((UBase_t) 0x0000A442UL)
#define FLASH_PEKEY_PEKEY_KEY2    ((UBase_t) 0x000071D5UL)
/*----------*/

/******************************************************************************************
************************************ 9-40 WBn *********************************************
******************************************************************************************/



/******************************************************************************************
************************************ 41 PP *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_PP_R_SIZE_MASK    ((UBase_t) 0x0000FFFFUL)
#define FLASH_PP_R_SIZE_BIT    (0UL)
#define FLASH_PP_R_SIZE_256KB    ((UBase_t) 0x0000007FUL)
#define FLASH_PP_R_SIZE_1024KB    ((UBase_t) 0x000001FFUL)

#define FLASH_PP_SIZE_MASK    ((UBase_t) 0x0000FFFFUL)
#define FLASH_PP_SIZE_256KB    ((UBase_t) 0x0000007FUL)
#define FLASH_PP_SIZE_1024KB    ((UBase_t) 0x000001FFUL)
/*----------*/

/*----------*/
#define FLASH_PP_R_MAINSS_MASK    ((UBase_t) 0x00070000UL)
#define FLASH_PP_R_MAINSS_BIT    (16UL)
#define FLASH_PP_R_MAINSS_1KB    ((UBase_t) 0x00000000UL)
#define FLASH_PP_R_MAINSS_2KB    ((UBase_t) 0x00010000UL)
#define FLASH_PP_R_MAINSS_4KB    ((UBase_t) 0x00020000UL)
#define FLASH_PP_R_MAINSS_8KB    ((UBase_t) 0x00030000UL)
#define FLASH_PP_R_MAINSS_16KB    ((UBase_t) 0x00040000UL)

#define FLASH_PP_MAINSS_MASK    ((UBase_t) 0x00000007UL)
#define FLASH_PP_MAINSS_1KB    ((UBase_t) 0x00000000UL)
#define FLASH_PP_MAINSS_2KB    ((UBase_t) 0x00000001UL)
#define FLASH_PP_MAINSS_4KB    ((UBase_t) 0x00000002UL)
#define FLASH_PP_MAINSS_8KB    ((UBase_t) 0x00000003UL)
#define FLASH_PP_MAINSS_16KB    ((UBase_t) 0x00000004UL)
/*----------*/

/*----------*/
#define FLASH_PP_R_EESS_MASK    ((UBase_t) 0x00780000UL)
#define FLASH_PP_R_EESS_BIT    (19UL)
#define FLASH_PP_R_EESS_1KB    ((UBase_t) 0x00000000UL)
#define FLASH_PP_R_EESS_2KB    ((UBase_t) 0x00080000UL)
#define FLASH_PP_R_EESS_4KB    ((UBase_t) 0x00100000UL)
#define FLASH_PP_R_EESS_8KB    ((UBase_t) 0x00180000UL)

#define FLASH_PP_EESS_MASK    ((UBase_t) 0x0000000FUL)
#define FLASH_PP_EESS_1KB    ((UBase_t) 0x00000000UL)
#define FLASH_PP_EESS_2KB    ((UBase_t) 0x00000001UL)
#define FLASH_PP_EESS_4KB    ((UBase_t) 0x00000002UL)
#define FLASH_PP_EESS_8KB    ((UBase_t) 0x00000003UL)
/*----------*/

/*----------*/
#define FLASH_PP_R_DFA_MASK    ((UBase_t) 0x10000000UL)
#define FLASH_PP_R_DFA_BIT    (28UL)
#define FLASH_PP_R_DFA_NO    ((UBase_t) 0x00000000UL)
#define FLASH_PP_R_DFA_YES    ((UBase_t) 0x10000000UL)

#define FLASH_PP_DFA_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_PP_DFA_NO    ((UBase_t) 0x00000000UL)
#define FLASH_PP_DFA_YES    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_PP_R_FMM_MASK    ((UBase_t) 0x20000000UL)
#define FLASH_PP_R_FMM_BIT    (29UL)
#define FLASH_PP_R_FMM_NO    ((UBase_t) 0x00000000UL)
#define FLASH_PP_R_FMM_YES    ((UBase_t) 0x20000000UL)

#define FLASH_PP_FMM_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_PP_FMM_NO    ((UBase_t) 0x00000000UL)
#define FLASH_PP_FMM_YES    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_PP_R_PFC_MASK    ((UBase_t) 0x40000000UL)
#define FLASH_PP_R_PFC_BIT    (30UL)
#define FLASH_PP_R_PFC_SINGLE    ((UBase_t) 0x00000000UL)
#define FLASH_PP_R_PFC_TWO    ((UBase_t) 0x40000000UL)

#define FLASH_PP_PFC_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_PP_PFC_SINGLE    ((UBase_t) 0x00000000UL)
#define FLASH_PP_PFC_TWO    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 42 SRAM_SIZE *********************************************
******************************************************************************************/

/*----------*/
#define SRAM_SIZE_R_SIZE_MASK    ((UBase_t) 0x0000FFFFUL)
#define SRAM_SIZE_R_SIZE_BIT    (0UL)
#define SRAM_SIZE_R_SIZE_32KB    ((UBase_t) 0x0000007FUL)
#define SRAM_SIZE_R_SIZE_256KB    ((UBase_t) 0x000003FFUL)

#define SRAM_SIZE_SIZE_MASK    ((UBase_t) 0x0000FFFFUL)
#define SRAM_SIZE_SIZE_32KB    ((UBase_t) 0x0000007FUL)
#define SRAM_SIZE_SIZE_256KB    ((UBase_t) 0x000003FFUL)
/*----------*/

/******************************************************************************************
************************************ 43 CONF *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_CONF_R_FPFOFF_MASK    ((UBase_t) 0x00010000UL)
#define FLASH_CONF_R_FPFOFF_BIT    (16UL)
#define FLASH_CONF_R_FPFOFF_NA    ((UBase_t) 0x00000000UL)
#define FLASH_CONF_R_FPFOFF_FORCE    ((UBase_t) 0x00010000UL)

#define FLASH_CONF_FPFOFF_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_CONF_FPFOFF_NA    ((UBase_t) 0x00000000UL)
#define FLASH_CONF_FPFOFF_FORCE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CONF_R_FPFON_MASK    ((UBase_t) 0x00020000UL)
#define FLASH_CONF_R_FPFON_BIT    (17UL)
#define FLASH_CONF_R_FPFON_NA    ((UBase_t) 0x00000000UL)
#define FLASH_CONF_R_FPFON_FORCE    ((UBase_t) 0x00020000UL)

#define FLASH_CONF_FPFON_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_CONF_FPFON_NA    ((UBase_t) 0x00000000UL)
#define FLASH_CONF_FPFON_FORCE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CONF_R_CLRTV_MASK    ((UBase_t) 0x00100000UL)
#define FLASH_CONF_R_CLRTV_BIT    (20UL)
#define FLASH_CONF_R_CLRTV_NA    ((UBase_t) 0x00000000UL)
#define FLASH_CONF_R_CLRTV_CLEAR    ((UBase_t) 0x00100000UL)

#define FLASH_CONF_CLRTV_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_CONF_CLRTV_NA    ((UBase_t) 0x00000000UL)
#define FLASH_CONF_CLRTV_CLEAR    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CONF_R_SPFE_MASK    ((UBase_t) 0x20000000UL)
#define FLASH_CONF_R_SPFE_BIT    (29UL)
#define FLASH_CONF_R_SPFE_FOUR    ((UBase_t) 0x00000000UL)
#define FLASH_CONF_R_SPFE_TWO    ((UBase_t) 0x20000000UL)

#define FLASH_CONF_SPFE_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_CONF_SPFE_FOUR    ((UBase_t) 0x00000000UL)
#define FLASH_CONF_SPFE_TWO    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CONF_R_FMME_MASK    ((UBase_t) 0x40000000UL)
#define FLASH_CONF_R_FMME_BIT    (30UL)
#define FLASH_CONF_R_FMME_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_CONF_R_FMME_ENA    ((UBase_t) 0x40000000UL)

#define FLASH_CONF_FMME_MASK    ((UBase_t) 0x00000001UL)
#define FLASH_CONF_FMME_DIS    ((UBase_t) 0x00000000UL)
#define FLASH_CONF_FMME_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 44 ROM_SWMAP *********************************************
******************************************************************************************/

/*----------*/
#define ROM_SWMAP_R_SW0EN_MASK    ((UBase_t) 0x00000003UL)
#define ROM_SWMAP_R_SW0EN_BIT    (0UL)
#define ROM_SWMAP_R_SW0EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_R_SW0EN_PRESENT    ((UBase_t) 0x00000001UL)

#define ROM_SWMAP_SW0EN_MASK    ((UBase_t) 0x00000003UL)
#define ROM_SWMAP_SW0EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_SW0EN_PRESENT    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define ROM_SWMAP_R_SW1EN_MASK    ((UBase_t) 0x0000000CUL)
#define ROM_SWMAP_R_SW1EN_BIT    (2UL)
#define ROM_SWMAP_R_SW1EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_R_SW1EN_PRESENT    ((UBase_t) 0x00000004UL)

#define ROM_SWMAP_SW1EN_MASK    ((UBase_t) 0x00000003UL)
#define ROM_SWMAP_SW1EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_SW1EN_PRESENT    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define ROM_SWMAP_R_SW2EN_MASK    ((UBase_t) 0x00000030UL)
#define ROM_SWMAP_R_SW2EN_BIT    (4UL)
#define ROM_SWMAP_R_SW2EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_R_SW2EN_PRESENT    ((UBase_t) 0x00000010UL)

#define ROM_SWMAP_SW2EN_MASK    ((UBase_t) 0x00000003UL)
#define ROM_SWMAP_SW2EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_SW2EN_PRESENT    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define ROM_SWMAP_R_SW3EN_MASK    ((UBase_t) 0x000000C0UL)
#define ROM_SWMAP_R_SW3EN_BIT    (6UL)
#define ROM_SWMAP_R_SW3EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_R_SW3EN_PRESENT    ((UBase_t) 0x00000040UL)

#define ROM_SWMAP_SW3EN_MASK    ((UBase_t) 0x00000003UL)
#define ROM_SWMAP_SW3EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_SW3EN_PRESENT    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define ROM_SWMAP_R_SW4EN_MASK    ((UBase_t) 0x00000300UL)
#define ROM_SWMAP_R_SW4EN_BIT    (8UL)
#define ROM_SWMAP_R_SW4EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_R_SW4EN_PRESENT    ((UBase_t) 0x00000100UL)

#define ROM_SWMAP_SW4EN_MASK    ((UBase_t) 0x00000003UL)
#define ROM_SWMAP_SW4EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_SW4EN_PRESENT    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define ROM_SWMAP_R_SW5EN_MASK    ((UBase_t) 0x00000C00UL)
#define ROM_SWMAP_R_SW5EN_BIT    (10UL)
#define ROM_SWMAP_R_SW5EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_R_SW5EN_PRESENT    ((UBase_t) 0x00000400UL)

#define ROM_SWMAP_SW5EN_MASK    ((UBase_t) 0x00000003UL)
#define ROM_SWMAP_SW5EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_SW5EN_PRESENT    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define ROM_SWMAP_R_SW6EN_MASK    ((UBase_t) 0x00003000UL)
#define ROM_SWMAP_R_SW6EN_BIT    (12UL)
#define ROM_SWMAP_R_SW6EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_R_SW6EN_PRESENT    ((UBase_t) 0x00001000UL)

#define ROM_SWMAP_SW6EN_MASK    ((UBase_t) 0x00000003UL)
#define ROM_SWMAP_SW6EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_SW6EN_PRESENT    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define ROM_SWMAP_R_SW7EN_MASK    ((UBase_t) 0x0000C000UL)
#define ROM_SWMAP_R_SW7EN_BIT    (14UL)
#define ROM_SWMAP_R_SW7EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_R_SW7EN_PRESENT    ((UBase_t) 0x00004000UL)

#define ROM_SWMAP_SW7EN_MASK    ((UBase_t) 0x00000003UL)
#define ROM_SWMAP_SW7EN_NOPRESENT    ((UBase_t) 0x00000000UL)
#define ROM_SWMAP_SW7EN_PRESENT    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 45 DMASZ *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_DMASZ_R_SIZE_MASK    ((UBase_t) 0x0003FFFFUL)
#define FLASH_DMASZ_R_SIZE_BIT    (0UL)

#define FLASH_DMASZ_SIZE_MASK    ((UBase_t) 0x0003FFFFUL)
/*----------*/

/******************************************************************************************
************************************ 46 DMAST *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_DMAST_R_ADDR_MASK    ((UBase_t) 0x1FFFF800UL)
#define FLASH_DMAST_R_ADDR_BIT    (11UL)

#define FLASH_DMAST_ADDR_MASK    ((UBase_t) 0x0003FFFFUL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERDEFINES_H_ */
