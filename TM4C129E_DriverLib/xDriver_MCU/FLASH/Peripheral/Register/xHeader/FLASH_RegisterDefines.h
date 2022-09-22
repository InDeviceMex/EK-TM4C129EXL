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
#define FLASH_ADDRESS_R_OFFSET_MASK    ((uint32_t) 0x000FFFFFUL)
#define FLASH_ADDRESS_R_OFFSET_BIT    (0UL)

#define FLASH_ADDRESS_OFFSET_MASK    ((uint32_t) 0x000FFFFFUL)
/*----------*/

/******************************************************************************************
************************************ 2 DATA *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_DATA_R_DATA_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define FLASH_DATA_R_DATA_BIT    (0UL)

#define FLASH_DATA_DATA_MASK    ((uint32_t) 0xFFFFFFFFUL)
/*----------*/

/******************************************************************************************
************************************ 3 CTL *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_CTL_R_WRITE_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_CTL_R_WRITE_BIT    (0UL)
#define FLASH_CTL_R_WRITE_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_CTL_R_WRITE_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define FLASH_CTL_R_WRITE_WRITE    ((uint32_t) 0x00000001UL)

#define FLASH_CTL_WRITE_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_CTL_WRITE_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_CTL_WRITE_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define FLASH_CTL_WRITE_WRITE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CTL_R_ERASE_MASK    ((uint32_t) 0x00000002UL)
#define FLASH_CTL_R_ERASE_BIT    (1UL)
#define FLASH_CTL_R_ERASE_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_CTL_R_ERASE_NOCOMPLETE    ((uint32_t) 0x00000002UL)
#define FLASH_CTL_R_ERASE_ERASE    ((uint32_t) 0x00000002UL)

#define FLASH_CTL_ERASE_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_CTL_ERASE_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_CTL_ERASE_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define FLASH_CTL_ERASE_ERASE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CTL_R_MERASE_MASK    ((uint32_t) 0x00000004UL)
#define FLASH_CTL_R_MERASE_BIT    (2UL)
#define FLASH_CTL_R_MERASE_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_CTL_R_MERASE_NOCOMPLETE    ((uint32_t) 0x00000004UL)
#define FLASH_CTL_R_MERASE_MERASE    ((uint32_t) 0x00000004UL)

#define FLASH_CTL_MERASE_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_CTL_MERASE_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_CTL_MERASE_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define FLASH_CTL_MERASE_MERASE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CTL_R_COMT_MASK    ((uint32_t) 0x00000008UL)
#define FLASH_CTL_R_COMT_BIT    (3UL)
#define FLASH_CTL_R_COMT_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_CTL_R_COMT_NOCOMPLETE    ((uint32_t) 0x00000008UL)
#define FLASH_CTL_R_COMT_WRITE    ((uint32_t) 0x00000008UL)

#define FLASH_CTL_COMT_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_CTL_COMT_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_CTL_COMT_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define FLASH_CTL_COMT_WRITE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CTL_R_WRKEY_MASK    ((uint32_t) 0xFFFF0000UL)
#define FLASH_CTL_R_WRKEY_BIT    (16UL)
#define FLASH_CTL_R_WRKEY_KEY1    ((uint32_t) 0xA4420000UL)
#define FLASH_CTL_R_WRKEY_KEY2    ((uint32_t) 0x71D50000UL)

#define FLASH_CTL_WRKEY_MASK    ((uint32_t) 0x0000FFFFUL)
#define FLASH_CTL_WRKEY_KEY1    ((uint32_t) 0x0000A442UL)
#define FLASH_CTL_WRKEY_KEY2    ((uint32_t) 0x000071D5UL)
/*----------*/

/******************************************************************************************
************************************ 4 RIS *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_RIS_R_ARIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_RIS_R_ARIS_BIT    (0UL)
#define FLASH_RIS_R_ARIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_RIS_R_ARIS_ACTIVE    ((uint32_t) 0x00000001UL)

#define FLASH_RIS_ARIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_RIS_ARIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_RIS_ARIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_RIS_R_PRIS_MASK    ((uint32_t) 0x00000002UL)
#define FLASH_RIS_R_PRIS_BIT    (1UL)
#define FLASH_RIS_R_PRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_RIS_R_PRIS_ACTIVE    ((uint32_t) 0x00000002UL)

#define FLASH_RIS_PRIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_RIS_PRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_RIS_PRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_RIS_R_ERIS_MASK    ((uint32_t) 0x00000004UL)
#define FLASH_RIS_R_ERIS_BIT    (2UL)
#define FLASH_RIS_R_ERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_RIS_R_ERIS_ACTIVE    ((uint32_t) 0x00000004UL)

#define FLASH_RIS_ERIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_RIS_ERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_RIS_ERIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_RIS_R_VOLTRIS_MASK    ((uint32_t) 0x00000200UL)
#define FLASH_RIS_R_VOLTRIS_BIT    (9UL)
#define FLASH_RIS_R_VOLTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_RIS_R_VOLTRIS_ACTIVE    ((uint32_t) 0x00000200UL)

#define FLASH_RIS_VOLTRIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_RIS_VOLTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_RIS_VOLTRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_RIS_R_INVDRIS_MASK    ((uint32_t) 0x00000400UL)
#define FLASH_RIS_R_INVDRIS_BIT    (10UL)
#define FLASH_RIS_R_INVDRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_RIS_R_INVDRIS_ACTIVE    ((uint32_t) 0x00000400UL)

#define FLASH_RIS_INVDRIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_RIS_INVDRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_RIS_INVDRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_RIS_R_ERRIS_MASK    ((uint32_t) 0x00000800UL)
#define FLASH_RIS_R_ERRIS_BIT    (11UL)
#define FLASH_RIS_R_ERRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_RIS_R_ERRIS_ACTIVE    ((uint32_t) 0x00000800UL)

#define FLASH_RIS_ERRIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_RIS_ERRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_RIS_ERRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_RIS_R_PROGRIS_MASK    ((uint32_t) 0x00002000UL)
#define FLASH_RIS_R_PROGRIS_BIT    (13UL)
#define FLASH_RIS_R_PROGRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_RIS_R_PROGRIS_ACTIVE    ((uint32_t) 0x00002000UL)

#define FLASH_RIS_PROGRIS_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_RIS_PROGRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_RIS_PROGRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 5 FCIM *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_IM_R_AMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_IM_R_AMASK_BIT    (0UL)
#define FLASH_IM_R_AMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_IM_R_AMASK_ENA    ((uint32_t) 0x00000001UL)

#define FLASH_IM_AMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_IM_AMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_IM_AMASK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_IM_R_PMASK_MASK    ((uint32_t) 0x00000002UL)
#define FLASH_IM_R_PMASK_BIT    (1UL)
#define FLASH_IM_R_PMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_IM_R_PMASK_ENA    ((uint32_t) 0x00000002UL)

#define FLASH_IM_PMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_IM_PMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_IM_PMASK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_IM_R_EMASK_MASK    ((uint32_t) 0x00000004UL)
#define FLASH_IM_R_EMASK_BIT    (2UL)
#define FLASH_IM_R_EMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_IM_R_EMASK_ENA    ((uint32_t) 0x00000004UL)

#define FLASH_IM_EMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_IM_EMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_IM_EMASK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_IM_R_VOLTMASK_MASK    ((uint32_t) 0x00000200UL)
#define FLASH_IM_R_VOLTMASK_BIT    (9UL)
#define FLASH_IM_R_VOLTMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_IM_R_VOLTMASK_ENA    ((uint32_t) 0x00000200UL)

#define FLASH_IM_VOLTMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_IM_VOLTMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_IM_VOLTMASK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_IM_R_INVDMASK_MASK    ((uint32_t) 0x00000400UL)
#define FLASH_IM_R_INVDMASK_BIT    (10UL)
#define FLASH_IM_R_INVDMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_IM_R_INVDMASK_ENA    ((uint32_t) 0x00000400UL)

#define FLASH_IM_INVDMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_IM_INVDMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_IM_INVDMASK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_IM_R_ERMASK_MASK    ((uint32_t) 0x00000800UL)
#define FLASH_IM_R_ERMASK_BIT    (11UL)
#define FLASH_IM_R_ERMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_IM_R_ERMASK_ENA    ((uint32_t) 0x00000800UL)

#define FLASH_IM_ERMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_IM_ERMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_IM_ERMASK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_IM_R_PROGMASK_MASK    ((uint32_t) 0x00002000UL)
#define FLASH_IM_R_PROGMASK_BIT    (13UL)
#define FLASH_IM_R_PROGMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_IM_R_PROGMASK_ENA    ((uint32_t) 0x00002000UL)

#define FLASH_IM_PROGMASK_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_IM_PROGMASK_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_IM_PROGMASK_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 6 MISC *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_MISC_R_AMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_R_AMISC_BIT    (0UL)
#define FLASH_MISC_R_AMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_MISC_R_AMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_R_AMISC_CLEAR    ((uint32_t) 0x00000001UL)

#define FLASH_MISC_AMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_AMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_MISC_AMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_AMISC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_MISC_R_PMISC_MASK    ((uint32_t) 0x00000002UL)
#define FLASH_MISC_R_PMISC_BIT    (1UL)
#define FLASH_MISC_R_PMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_MISC_R_PMISC_ACTIVE    ((uint32_t) 0x00000002UL)
#define FLASH_MISC_R_PMISC_CLEAR    ((uint32_t) 0x00000002UL)

#define FLASH_MISC_PMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_PMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_MISC_PMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_PMISC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_MISC_R_EMISC_MASK    ((uint32_t) 0x00000004UL)
#define FLASH_MISC_R_EMISC_BIT    (2UL)
#define FLASH_MISC_R_EMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_MISC_R_EMISC_ACTIVE    ((uint32_t) 0x00000004UL)
#define FLASH_MISC_R_EMISC_CLEAR    ((uint32_t) 0x00000004UL)

#define FLASH_MISC_EMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_EMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_MISC_EMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_EMISC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_MISC_R_VOLTMISC_MASK    ((uint32_t) 0x00000200UL)
#define FLASH_MISC_R_VOLTMISC_BIT    (9UL)
#define FLASH_MISC_R_VOLTMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_MISC_R_VOLTMISC_ACTIVE    ((uint32_t) 0x00000200UL)
#define FLASH_MISC_R_VOLTMISC_CLEAR    ((uint32_t) 0x00000200UL)

#define FLASH_MISC_VOLTMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_VOLTMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_MISC_VOLTMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_VOLTMISC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_MISC_R_INVDMISC_MASK    ((uint32_t) 0x00000400UL)
#define FLASH_MISC_R_INVDMISC_BIT    (10UL)
#define FLASH_MISC_R_INVDMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_MISC_R_INVDMISC_ACTIVE    ((uint32_t) 0x00000400UL)
#define FLASH_MISC_R_INVDMISC_CLEAR    ((uint32_t) 0x00000400UL)

#define FLASH_MISC_INVDMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_INVDMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_MISC_INVDMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_INVDMISC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_MISC_R_ERMISC_MASK    ((uint32_t) 0x00000800UL)
#define FLASH_MISC_R_ERMISC_BIT    (11UL)
#define FLASH_MISC_R_ERMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_MISC_R_ERMISC_ACTIVE    ((uint32_t) 0x00000800UL)
#define FLASH_MISC_R_ERMISC_CLEAR    ((uint32_t) 0x00000800UL)

#define FLASH_MISC_ERMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_ERMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_MISC_ERMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_ERMISC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_MISC_R_PROGMISC_MASK    ((uint32_t) 0x0002000UL)
#define FLASH_MISC_R_PROGMISC_BIT    (13UL)
#define FLASH_MISC_R_PROGMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_MISC_R_PROGMISC_ACTIVE    ((uint32_t) 0x00002000UL)
#define FLASH_MISC_R_PROGMISC_CLEAR    ((uint32_t) 0x00002000UL)

#define FLASH_MISC_PROGMISC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_PROGMISC_INACTIVE    ((uint32_t) 0x00000000UL)
#define FLASH_MISC_PROGMISC_ACTIVE    ((uint32_t) 0x00000001UL)
#define FLASH_MISC_PROGMISC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 7 CTL2 *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_CTL2_R_WRBUF_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_CTL2_R_WRBUF_BIT    (0UL)
#define FLASH_CTL2_R_WRBUF_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_CTL2_R_WRBUF_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define FLASH_CTL2_R_WRBUF_WRITE    ((uint32_t) 0x00000001UL)

#define FLASH_CTL2_WRBUF_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_CTL2_WRBUF_COMPLETE    ((uint32_t) 0x00000000UL)
#define FLASH_CTL2_WRBUF_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define FLASH_CTL2_WRBUF_WRITE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CTL2_R_WRKEY_MASK    ((uint32_t) 0xFFFF0000UL)
#define FLASH_CTL2_R_WRKEY_BIT    (16UL)
#define FLASH_CTL2_R_WRKEY_KEY1    ((uint32_t) 0xA4420000UL)
#define FLASH_CTL2_R_WRKEY_KEY2    ((uint32_t) 0x71D50000UL)

#define FLASH_CTL2_WRKEY_MASK    ((uint32_t) 0x0000FFFFUL)
#define FLASH_CTL2_WRKEY_KEY1    ((uint32_t) 0x0000A442UL)
#define FLASH_CTL2_WRKEY_KEY2    ((uint32_t) 0x000071D5UL)
/*----------*/

/******************************************************************************************
************************************ 8 WBVAL *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_WBVAL_R_WB0_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_R_WB0_BIT    (0UL)
#define FLASH_WBVAL_R_WB0_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB0_NEWDATA    ((uint32_t) 0x00000001UL)

#define FLASH_WBVAL_WB0_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB0_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB0_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB1_MASK    ((uint32_t) 0x00000002UL)
#define FLASH_WBVAL_R_WB1_BIT    (1UL)
#define FLASH_WBVAL_R_WB1_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB1_NEWDATA    ((uint32_t) 0x00000002UL)

#define FLASH_WBVAL_WB1_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB1_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB1_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB2_MASK    ((uint32_t) 0x00000004UL)
#define FLASH_WBVAL_R_WB2_BIT    (2UL)
#define FLASH_WBVAL_R_WB2_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB2_NEWDATA    ((uint32_t) 0x00000004UL)

#define FLASH_WBVAL_WB2_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB2_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB2_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB3_MASK    ((uint32_t) 0x00000008UL)
#define FLASH_WBVAL_R_WB3_BIT    (3UL)
#define FLASH_WBVAL_R_WB3_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB3_NEWDATA    ((uint32_t) 0x00000008UL)

#define FLASH_WBVAL_WB3_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB3_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB3_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB4_MASK    ((uint32_t) 0x00000010UL)
#define FLASH_WBVAL_R_WB4_BIT    (4UL)
#define FLASH_WBVAL_R_WB4_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB4_NEWDATA    ((uint32_t) 0x00000010UL)

#define FLASH_WBVAL_WB4_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB4_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB4_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB5_MASK    ((uint32_t) 0x00000020UL)
#define FLASH_WBVAL_R_WB5_BIT    (5UL)
#define FLASH_WBVAL_R_WB5_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB5_NEWDATA    ((uint32_t) 0x00000020UL)

#define FLASH_WBVAL_WB5_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB5_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB5_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB6_MASK    ((uint32_t) 0x00000040UL)
#define FLASH_WBVAL_R_WB6_BIT    (6UL)
#define FLASH_WBVAL_R_WB6_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB6_NEWDATA    ((uint32_t) 0x00000040UL)

#define FLASH_WBVAL_WB6_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB6_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB6_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB7_MASK    ((uint32_t) 0x00000080UL)
#define FLASH_WBVAL_R_WB7_BIT    (7UL)
#define FLASH_WBVAL_R_WB7_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB7_NEWDATA    ((uint32_t) 0x00000080UL)

#define FLASH_WBVAL_WB7_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB7_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB7_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB8_MASK    ((uint32_t) 0x00000100UL)
#define FLASH_WBVAL_R_WB8_BIT    (8UL)
#define FLASH_WBVAL_R_WB8_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB8_NEWDATA    ((uint32_t) 0x00000100UL)

#define FLASH_WBVAL_WB8_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB8_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB8_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB9_MASK    ((uint32_t) 0x00000200UL)
#define FLASH_WBVAL_R_WB9_BIT    (9UL)
#define FLASH_WBVAL_R_WB9_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB9_NEWDATA    ((uint32_t) 0x00000200UL)

#define FLASH_WBVAL_WB9_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB9_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB9_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB10_MASK    ((uint32_t) 0x00000400UL)
#define FLASH_WBVAL_R_WB10_BIT    (10UL)
#define FLASH_WBVAL_R_WB10_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB10_NEWDATA    ((uint32_t) 0x00000400UL)

#define FLASH_WBVAL_WB10_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB10_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB10_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB11_MASK    ((uint32_t) 0x00000800UL)
#define FLASH_WBVAL_R_WB11_BIT    (11UL)
#define FLASH_WBVAL_R_WB11_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB11_NEWDATA    ((uint32_t) 0x00000800UL)

#define FLASH_WBVAL_WB11_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB11_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB11_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB12_MASK    ((uint32_t) 0x00001000UL)
#define FLASH_WBVAL_R_WB12_BIT    (12UL)
#define FLASH_WBVAL_R_WB12_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB12_NEWDATA    ((uint32_t) 0x00001000UL)

#define FLASH_WBVAL_WB12_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB12_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB12_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB13_MASK    ((uint32_t) 0x00002000UL)
#define FLASH_WBVAL_R_WB13_BIT    (13UL)
#define FLASH_WBVAL_R_WB13_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB13_NEWDATA    ((uint32_t) 0x00002000UL)

#define FLASH_WBVAL_WB13_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB13_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB13_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB14_MASK    ((uint32_t) 0x00004000UL)
#define FLASH_WBVAL_R_WB14_BIT    (14UL)
#define FLASH_WBVAL_R_WB14_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB14_NEWDATA    ((uint32_t) 0x00004000UL)

#define FLASH_WBVAL_WB14_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB14_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB14_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB15_MASK    ((uint32_t) 0x00008000UL)
#define FLASH_WBVAL_R_WB15_BIT    (15UL)
#define FLASH_WBVAL_R_WB15_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB15_NEWDATA    ((uint32_t) 0x00008000UL)

#define FLASH_WBVAL_WB15_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB15_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB15_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB16_MASK    ((uint32_t) 0x00010000UL)
#define FLASH_WBVAL_R_WB16_BIT    (16UL)
#define FLASH_WBVAL_R_WB16_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB16_NEWDATA    ((uint32_t) 0x00010000UL)

#define FLASH_WBVAL_WB16_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB16_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB16_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB17_MASK    ((uint32_t) 0x00020000UL)
#define FLASH_WBVAL_R_WB17_BIT    (17UL)
#define FLASH_WBVAL_R_WB17_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB17_NEWDATA    ((uint32_t) 0x00020000UL)

#define FLASH_WBVAL_WB17_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB17_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB17_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB18_MASK    ((uint32_t) 0x00040000UL)
#define FLASH_WBVAL_R_WB18_BIT    (18UL)
#define FLASH_WBVAL_R_WB18_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB18_NEWDATA    ((uint32_t) 0x00040000UL)

#define FLASH_WBVAL_WB18_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB18_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB18_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB19_MASK    ((uint32_t) 0x00080000UL)
#define FLASH_WBVAL_R_WB19_BIT    (19UL)
#define FLASH_WBVAL_R_WB19_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB19_NEWDATA    ((uint32_t) 0x00080000UL)

#define FLASH_WBVAL_WB19_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB19_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB19_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB20_MASK    ((uint32_t) 0x00100000UL)
#define FLASH_WBVAL_R_WB20_BIT    (20UL)
#define FLASH_WBVAL_R_WB20_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB20_NEWDATA    ((uint32_t) 0x00100000UL)

#define FLASH_WBVAL_WB20_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB20_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB20_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB21_MASK    ((uint32_t) 0x00200000UL)
#define FLASH_WBVAL_R_WB21_BIT    (21UL)
#define FLASH_WBVAL_R_WB21_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB21_NEWDATA    ((uint32_t) 0x00200000UL)

#define FLASH_WBVAL_WB21_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB21_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB21_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB22_MASK    ((uint32_t) 0x00400000UL)
#define FLASH_WBVAL_R_WB22_BIT    (22UL)
#define FLASH_WBVAL_R_WB22_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB22_NEWDATA    ((uint32_t) 0x00400000UL)

#define FLASH_WBVAL_WB22_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB22_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB22_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB23_MASK    ((uint32_t) 0x00800000UL)
#define FLASH_WBVAL_R_WB23_BIT    (23UL)
#define FLASH_WBVAL_R_WB23_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB23_NEWDATA    ((uint32_t) 0x00800000UL)

#define FLASH_WBVAL_WB23_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB23_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB23_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB24_MASK    ((uint32_t) 0x01000000UL)
#define FLASH_WBVAL_R_WB24_BIT    (24UL)
#define FLASH_WBVAL_R_WB24_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB24_NEWDATA    ((uint32_t) 0x01000000UL)

#define FLASH_WBVAL_WB24_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB24_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB24_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB25_MASK    ((uint32_t) 0x02000000UL)
#define FLASH_WBVAL_R_WB25_BIT    (25UL)
#define FLASH_WBVAL_R_WB25_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB25_NEWDATA    ((uint32_t) 0x02000000UL)

#define FLASH_WBVAL_WB25_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB25_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB25_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB26_MASK    ((uint32_t) 0x04000000UL)
#define FLASH_WBVAL_R_WB26_BIT    (26UL)
#define FLASH_WBVAL_R_WB26_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB26_NEWDATA    ((uint32_t) 0x04000000UL)

#define FLASH_WBVAL_WB26_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB26_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB26_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB27_MASK    ((uint32_t) 0x08000000UL)
#define FLASH_WBVAL_R_WB27_BIT    (27UL)
#define FLASH_WBVAL_R_WB27_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB27_NEWDATA    ((uint32_t) 0x08000000UL)

#define FLASH_WBVAL_WB27_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB27_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB27_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB28_MASK    ((uint32_t) 0x10000000UL)
#define FLASH_WBVAL_R_WB28_BIT    (28UL)
#define FLASH_WBVAL_R_WB28_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB28_NEWDATA    ((uint32_t) 0x10000000UL)

#define FLASH_WBVAL_WB28_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB28_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB28_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB29_MASK    ((uint32_t) 0x20000000UL)
#define FLASH_WBVAL_R_WB29_BIT    (29UL)
#define FLASH_WBVAL_R_WB29_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB29_NEWDATA    ((uint32_t) 0x20000000UL)

#define FLASH_WBVAL_WB29_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB29_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB29_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB30_MASK    ((uint32_t) 0x40000000UL)
#define FLASH_WBVAL_R_WB30_BIT    (30UL)
#define FLASH_WBVAL_R_WB30_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB30_NEWDATA    ((uint32_t) 0x40000000UL)

#define FLASH_WBVAL_WB30_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB30_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB30_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_WBVAL_R_WB31_MASK    ((uint32_t) 0x80000000UL)
#define FLASH_WBVAL_R_WB31_BIT    (31UL)
#define FLASH_WBVAL_R_WB31_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_R_WB31_NEWDATA    ((uint32_t) 0x80000000UL)

#define FLASH_WBVAL_WB31_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_WBVAL_WB31_NODATA    ((uint32_t) 0x00000000UL)
#define FLASH_WBVAL_WB31_NEWDATA    ((uint32_t) 0x00000001UL)
/*----------*/


/******************************************************************************************
************************************ 9 PEKEY *********************************************
******************************************************************************************/
/*----------*/
#define FLASH_PEKEY_R_PEKEY_MASK    ((uint32_t) 0x0000FFFFUL)
#define FLASH_PEKEY_R_PEKEY_BIT    (16UL)
#define FLASH_PEKEY_R_PEKEY_KEY1    ((uint32_t) 0x0000A442UL)
#define FLASH_PEKEY_R_PEKEY_KEY2    ((uint32_t) 0x000071D5UL)

#define FLASH_PEKEY_PEKEY_MASK    ((uint32_t) 0x0000FFFFUL)
#define FLASH_PEKEY_PEKEY_KEY1    ((uint32_t) 0x0000A442UL)
#define FLASH_PEKEY_PEKEY_KEY2    ((uint32_t) 0x000071D5UL)
/*----------*/

/******************************************************************************************
************************************ 9-40 WBn *********************************************
******************************************************************************************/



/******************************************************************************************
************************************ 41 PP *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_PP_R_SIZE_MASK    ((uint32_t) 0x0000FFFFUL)
#define FLASH_PP_R_SIZE_BIT    (0UL)
#define FLASH_PP_R_SIZE_256KB    ((uint32_t) 0x0000007FUL)
#define FLASH_PP_R_SIZE_1024KB    ((uint32_t) 0x000001FFUL)

#define FLASH_PP_SIZE_MASK    ((uint32_t) 0x0000FFFFUL)
#define FLASH_PP_SIZE_256KB    ((uint32_t) 0x0000007FUL)
#define FLASH_PP_SIZE_1024KB    ((uint32_t) 0x000001FFUL)
/*----------*/

/*----------*/
#define FLASH_PP_R_MAINSS_MASK    ((uint32_t) 0x00070000UL)
#define FLASH_PP_R_MAINSS_BIT    (16UL)
#define FLASH_PP_R_MAINSS_1KB    ((uint32_t) 0x00000000UL)
#define FLASH_PP_R_MAINSS_2KB    ((uint32_t) 0x00010000UL)
#define FLASH_PP_R_MAINSS_4KB    ((uint32_t) 0x00020000UL)
#define FLASH_PP_R_MAINSS_8KB    ((uint32_t) 0x00030000UL)
#define FLASH_PP_R_MAINSS_16KB    ((uint32_t) 0x00040000UL)

#define FLASH_PP_MAINSS_MASK    ((uint32_t) 0x00000007UL)
#define FLASH_PP_MAINSS_1KB    ((uint32_t) 0x00000000UL)
#define FLASH_PP_MAINSS_2KB    ((uint32_t) 0x00000001UL)
#define FLASH_PP_MAINSS_4KB    ((uint32_t) 0x00000002UL)
#define FLASH_PP_MAINSS_8KB    ((uint32_t) 0x00000003UL)
#define FLASH_PP_MAINSS_16KB    ((uint32_t) 0x00000004UL)
/*----------*/

/*----------*/
#define FLASH_PP_R_EESS_MASK    ((uint32_t) 0x00780000UL)
#define FLASH_PP_R_EESS_BIT    (19UL)
#define FLASH_PP_R_EESS_1KB    ((uint32_t) 0x00000000UL)
#define FLASH_PP_R_EESS_2KB    ((uint32_t) 0x00080000UL)
#define FLASH_PP_R_EESS_4KB    ((uint32_t) 0x00100000UL)
#define FLASH_PP_R_EESS_8KB    ((uint32_t) 0x00180000UL)

#define FLASH_PP_EESS_MASK    ((uint32_t) 0x0000000FUL)
#define FLASH_PP_EESS_1KB    ((uint32_t) 0x00000000UL)
#define FLASH_PP_EESS_2KB    ((uint32_t) 0x00000001UL)
#define FLASH_PP_EESS_4KB    ((uint32_t) 0x00000002UL)
#define FLASH_PP_EESS_8KB    ((uint32_t) 0x00000003UL)
/*----------*/

/*----------*/
#define FLASH_PP_R_DFA_MASK    ((uint32_t) 0x10000000UL)
#define FLASH_PP_R_DFA_BIT    (28UL)
#define FLASH_PP_R_DFA_NO    ((uint32_t) 0x00000000UL)
#define FLASH_PP_R_DFA_YES    ((uint32_t) 0x10000000UL)

#define FLASH_PP_DFA_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_PP_DFA_NO    ((uint32_t) 0x00000000UL)
#define FLASH_PP_DFA_YES    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_PP_R_FMM_MASK    ((uint32_t) 0x20000000UL)
#define FLASH_PP_R_FMM_BIT    (29UL)
#define FLASH_PP_R_FMM_NO    ((uint32_t) 0x00000000UL)
#define FLASH_PP_R_FMM_YES    ((uint32_t) 0x20000000UL)

#define FLASH_PP_FMM_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_PP_FMM_NO    ((uint32_t) 0x00000000UL)
#define FLASH_PP_FMM_YES    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_PP_R_PFC_MASK    ((uint32_t) 0x40000000UL)
#define FLASH_PP_R_PFC_BIT    (30UL)
#define FLASH_PP_R_PFC_SINGLE    ((uint32_t) 0x00000000UL)
#define FLASH_PP_R_PFC_TWO    ((uint32_t) 0x40000000UL)

#define FLASH_PP_PFC_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_PP_PFC_SINGLE    ((uint32_t) 0x00000000UL)
#define FLASH_PP_PFC_TWO    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 42 SRAM_SIZE *********************************************
******************************************************************************************/

/*----------*/
#define SRAM_SIZE_R_SIZE_MASK    ((uint32_t) 0x0000FFFFUL)
#define SRAM_SIZE_R_SIZE_BIT    (0UL)
#define SRAM_SIZE_R_SIZE_32KB    ((uint32_t) 0x0000007FUL)
#define SRAM_SIZE_R_SIZE_256KB    ((uint32_t) 0x000003FFUL)

#define SRAM_SIZE_SIZE_MASK    ((uint32_t) 0x0000FFFFUL)
#define SRAM_SIZE_SIZE_32KB    ((uint32_t) 0x0000007FUL)
#define SRAM_SIZE_SIZE_256KB    ((uint32_t) 0x000003FFUL)
/*----------*/

/******************************************************************************************
************************************ 43 CONF *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_CONF_R_FPFOFF_MASK    ((uint32_t) 0x00010000UL)
#define FLASH_CONF_R_FPFOFF_BIT    (16UL)
#define FLASH_CONF_R_FPFOFF_NA    ((uint32_t) 0x00000000UL)
#define FLASH_CONF_R_FPFOFF_FORCE    ((uint32_t) 0x00010000UL)

#define FLASH_CONF_FPFOFF_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_CONF_FPFOFF_NA    ((uint32_t) 0x00000000UL)
#define FLASH_CONF_FPFOFF_FORCE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CONF_R_FPFON_MASK    ((uint32_t) 0x00020000UL)
#define FLASH_CONF_R_FPFON_BIT    (17UL)
#define FLASH_CONF_R_FPFON_NA    ((uint32_t) 0x00000000UL)
#define FLASH_CONF_R_FPFON_FORCE    ((uint32_t) 0x00020000UL)

#define FLASH_CONF_FPFON_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_CONF_FPFON_NA    ((uint32_t) 0x00000000UL)
#define FLASH_CONF_FPFON_FORCE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CONF_R_CLRTV_MASK    ((uint32_t) 0x00100000UL)
#define FLASH_CONF_R_CLRTV_BIT    (20UL)
#define FLASH_CONF_R_CLRTV_NA    ((uint32_t) 0x00000000UL)
#define FLASH_CONF_R_CLRTV_CLEAR    ((uint32_t) 0x00100000UL)

#define FLASH_CONF_CLRTV_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_CONF_CLRTV_NA    ((uint32_t) 0x00000000UL)
#define FLASH_CONF_CLRTV_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CONF_R_SPFE_MASK    ((uint32_t) 0x20000000UL)
#define FLASH_CONF_R_SPFE_BIT    (29UL)
#define FLASH_CONF_R_SPFE_FOUR    ((uint32_t) 0x00000000UL)
#define FLASH_CONF_R_SPFE_TWO    ((uint32_t) 0x20000000UL)

#define FLASH_CONF_SPFE_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_CONF_SPFE_FOUR    ((uint32_t) 0x00000000UL)
#define FLASH_CONF_SPFE_TWO    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FLASH_CONF_R_FMME_MASK    ((uint32_t) 0x40000000UL)
#define FLASH_CONF_R_FMME_BIT    (30UL)
#define FLASH_CONF_R_FMME_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_CONF_R_FMME_ENA    ((uint32_t) 0x40000000UL)

#define FLASH_CONF_FMME_MASK    ((uint32_t) 0x00000001UL)
#define FLASH_CONF_FMME_DIS    ((uint32_t) 0x00000000UL)
#define FLASH_CONF_FMME_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 44 ROM_SWMAP *********************************************
******************************************************************************************/

/*----------*/
#define ROM_SWMAP_R_SW0EN_MASK    ((uint32_t) 0x00000003UL)
#define ROM_SWMAP_R_SW0EN_BIT    (0UL)
#define ROM_SWMAP_R_SW0EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_R_SW0EN_PRESENT    ((uint32_t) 0x00000001UL)

#define ROM_SWMAP_SW0EN_MASK    ((uint32_t) 0x00000003UL)
#define ROM_SWMAP_SW0EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_SW0EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define ROM_SWMAP_R_SW1EN_MASK    ((uint32_t) 0x0000000CUL)
#define ROM_SWMAP_R_SW1EN_BIT    (2UL)
#define ROM_SWMAP_R_SW1EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_R_SW1EN_PRESENT    ((uint32_t) 0x00000004UL)

#define ROM_SWMAP_SW1EN_MASK    ((uint32_t) 0x00000003UL)
#define ROM_SWMAP_SW1EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_SW1EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define ROM_SWMAP_R_SW2EN_MASK    ((uint32_t) 0x00000030UL)
#define ROM_SWMAP_R_SW2EN_BIT    (4UL)
#define ROM_SWMAP_R_SW2EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_R_SW2EN_PRESENT    ((uint32_t) 0x00000010UL)

#define ROM_SWMAP_SW2EN_MASK    ((uint32_t) 0x00000003UL)
#define ROM_SWMAP_SW2EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_SW2EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define ROM_SWMAP_R_SW3EN_MASK    ((uint32_t) 0x000000C0UL)
#define ROM_SWMAP_R_SW3EN_BIT    (6UL)
#define ROM_SWMAP_R_SW3EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_R_SW3EN_PRESENT    ((uint32_t) 0x00000040UL)

#define ROM_SWMAP_SW3EN_MASK    ((uint32_t) 0x00000003UL)
#define ROM_SWMAP_SW3EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_SW3EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define ROM_SWMAP_R_SW4EN_MASK    ((uint32_t) 0x00000300UL)
#define ROM_SWMAP_R_SW4EN_BIT    (8UL)
#define ROM_SWMAP_R_SW4EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_R_SW4EN_PRESENT    ((uint32_t) 0x00000100UL)

#define ROM_SWMAP_SW4EN_MASK    ((uint32_t) 0x00000003UL)
#define ROM_SWMAP_SW4EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_SW4EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define ROM_SWMAP_R_SW5EN_MASK    ((uint32_t) 0x00000C00UL)
#define ROM_SWMAP_R_SW5EN_BIT    (10UL)
#define ROM_SWMAP_R_SW5EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_R_SW5EN_PRESENT    ((uint32_t) 0x00000400UL)

#define ROM_SWMAP_SW5EN_MASK    ((uint32_t) 0x00000003UL)
#define ROM_SWMAP_SW5EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_SW5EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define ROM_SWMAP_R_SW6EN_MASK    ((uint32_t) 0x00003000UL)
#define ROM_SWMAP_R_SW6EN_BIT    (12UL)
#define ROM_SWMAP_R_SW6EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_R_SW6EN_PRESENT    ((uint32_t) 0x00001000UL)

#define ROM_SWMAP_SW6EN_MASK    ((uint32_t) 0x00000003UL)
#define ROM_SWMAP_SW6EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_SW6EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define ROM_SWMAP_R_SW7EN_MASK    ((uint32_t) 0x0000C000UL)
#define ROM_SWMAP_R_SW7EN_BIT    (14UL)
#define ROM_SWMAP_R_SW7EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_R_SW7EN_PRESENT    ((uint32_t) 0x00004000UL)

#define ROM_SWMAP_SW7EN_MASK    ((uint32_t) 0x00000003UL)
#define ROM_SWMAP_SW7EN_NOPRESENT    ((uint32_t) 0x00000000UL)
#define ROM_SWMAP_SW7EN_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 45 DMASZ *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_DMASZ_R_SIZE_MASK    ((uint32_t) 0x0003FFFFUL)
#define FLASH_DMASZ_R_SIZE_BIT    (0UL)

#define FLASH_DMASZ_SIZE_MASK    ((uint32_t) 0x0003FFFFUL)
/*----------*/

/******************************************************************************************
************************************ 46 DMAST *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_DMAST_R_ADDR_MASK    ((uint32_t) 0x1FFFF800UL)
#define FLASH_DMAST_R_ADDR_BIT    (11UL)

#define FLASH_DMAST_ADDR_MASK    ((uint32_t) 0x0003FFFFUL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERDEFINES_H_ */
