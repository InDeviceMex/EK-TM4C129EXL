/**
 *
 * @file ADC_RegisterDefines_SS_CTL.h
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
 * @verbatim 15 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SS_CTL_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SS_CTL_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/******************************************************************************************
************************************ 16 SS_CTL *********************************************
******************************************************************************************/
/*--------*/
#define ADC_SS_CTL_R_D0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_R_D0_BIT    ((UBase_t) 0UL)
#define ADC_SS_CTL_R_D0_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_D0_DIFF    ((UBase_t) 0x00000001UL)

#define ADC_SS_CTL_D0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_D0_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_D0_DIFF    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_END0_MASK    ((UBase_t) 0x00000002UL)
#define ADC_SS_CTL_R_END0_BIT    ((UBase_t) 1UL)
#define ADC_SS_CTL_R_END0_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_END0_END    ((UBase_t) 0x00000002UL)

#define ADC_SS_CTL_END0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_END0_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_END0_END    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_IE0_MASK    ((UBase_t) 0x00000004UL)
#define ADC_SS_CTL_R_IE0_BIT    ((UBase_t) 2UL)
#define ADC_SS_CTL_R_IE0_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_IE0_ENA    ((UBase_t) 0x00000004UL)

#define ADC_SS_CTL_IE0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_IE0_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_IE0_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_TS0_MASK    ((UBase_t) 0x00000008UL)
#define ADC_SS_CTL_R_TS0_BIT    ((UBase_t) 3UL)
#define ADC_SS_CTL_R_TS0_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_TS0_TEMP    ((UBase_t) 0x00000008UL)

#define ADC_SS_CTL_TS0_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_TS0_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_TS0_TEMP    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_D1_MASK    ((UBase_t) 0x00000010UL)
#define ADC_SS_CTL_R_D1_BIT    ((UBase_t) 4UL)
#define ADC_SS_CTL_R_D1_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_D1_DIFF    ((UBase_t) 0x00000010UL)

#define ADC_SS_CTL_D1_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_D1_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_D1_DIFF    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_END1_MASK    ((UBase_t) 0x00000020UL)
#define ADC_SS_CTL_R_END1_BIT    ((UBase_t) 5UL)
#define ADC_SS_CTL_R_END1_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_END1_END    ((UBase_t) 0x00000020UL)

#define ADC_SS_CTL_END1_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_END1_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_END1_END    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_IE1_MASK    ((UBase_t) 0x00000040UL)
#define ADC_SS_CTL_R_IE1_BIT    ((UBase_t) 6UL)
#define ADC_SS_CTL_R_IE1_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_IE1_ENA    ((UBase_t) 0x00000040UL)

#define ADC_SS_CTL_IE1_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_IE1_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_IE1_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_TS1_MASK    ((UBase_t) 0x00000080UL)
#define ADC_SS_CTL_R_TS1_BIT    ((UBase_t) 7UL)
#define ADC_SS_CTL_R_TS1_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_TS1_TEMP    ((UBase_t) 0x00000080UL)

#define ADC_SS_CTL_TS1_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_TS1_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_TS1_TEMP    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_D2_MASK    ((UBase_t) 0x00000100UL)
#define ADC_SS_CTL_R_D2_BIT    ((UBase_t) 8UL)
#define ADC_SS_CTL_R_D2_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_D2_DIFF    ((UBase_t) 0x00000100UL)

#define ADC_SS_CTL_D2_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_D2_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_D2_DIFF    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_END2_MASK    ((UBase_t) 0x00000200UL)
#define ADC_SS_CTL_R_END2_BIT    ((UBase_t) 9UL)
#define ADC_SS_CTL_R_END2_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_END2_END    ((UBase_t) 0x00000200UL)

#define ADC_SS_CTL_END2_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_END2_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_END2_END    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_IE2_MASK    ((UBase_t) 0x00000400UL)
#define ADC_SS_CTL_R_IE2_BIT    ((UBase_t) 10UL)
#define ADC_SS_CTL_R_IE2_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_IE2_ENA    ((UBase_t) 0x00000400UL)

#define ADC_SS_CTL_IE2_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_IE2_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_IE2_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_TS2_MASK    ((UBase_t) 0x00000800UL)
#define ADC_SS_CTL_R_TS2_BIT    ((UBase_t) 11UL)
#define ADC_SS_CTL_R_TS2_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_TS2_TEMP    ((UBase_t) 0x00000800UL)

#define ADC_SS_CTL_TS2_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_TS2_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_TS2_TEMP    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_D3_MASK    ((UBase_t) 0x00001000UL)
#define ADC_SS_CTL_R_D3_BIT    ((UBase_t) 12UL)
#define ADC_SS_CTL_R_D3_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_D3_DIFF    ((UBase_t) 0x00001000UL)

#define ADC_SS_CTL_D3_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_D3_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_D3_DIFF    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_END3_MASK    ((UBase_t) 0x00002000UL)
#define ADC_SS_CTL_R_END3_BIT    ((UBase_t) 13UL)
#define ADC_SS_CTL_R_END3_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_END3_END    ((UBase_t) 0x00002000UL)

#define ADC_SS_CTL_END3_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_END3_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_END3_END    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_IE3_MASK    ((UBase_t) 0x00004000UL)
#define ADC_SS_CTL_R_IE3_BIT    ((UBase_t) 14UL)
#define ADC_SS_CTL_R_IE3_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_IE3_ENA    ((UBase_t) 0x00004000UL)

#define ADC_SS_CTL_IE3_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_IE3_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_IE3_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_TS3_MASK    ((UBase_t) 0x00008000UL)
#define ADC_SS_CTL_R_TS3_BIT    ((UBase_t) 15UL)
#define ADC_SS_CTL_R_TS3_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_TS3_TEMP    ((UBase_t) 0x00008000UL)

#define ADC_SS_CTL_TS3_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_TS3_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_TS3_TEMP    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_D4_MASK    ((UBase_t) 0x00010000UL)
#define ADC_SS_CTL_R_D4_BIT    ((UBase_t) 16UL)
#define ADC_SS_CTL_R_D4_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_D4_DIFF    ((UBase_t) 0x00010000UL)

#define ADC_SS_CTL_D4_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_D4_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_D4_DIFF    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_END4_MASK    ((UBase_t) 0x00020000UL)
#define ADC_SS_CTL_R_END4_BIT    ((UBase_t) 17UL)
#define ADC_SS_CTL_R_END4_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_END4_END    ((UBase_t) 0x00020000UL)

#define ADC_SS_CTL_END4_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_END4_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_END4_END    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_IE4_MASK    ((UBase_t) 0x00040000UL)
#define ADC_SS_CTL_R_IE4_BIT    ((UBase_t) 18UL)
#define ADC_SS_CTL_R_IE4_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_IE4_ENA    ((UBase_t) 0x00040000UL)

#define ADC_SS_CTL_IE4_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_IE4_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_IE4_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_TS4_MASK    ((UBase_t) 0x00080000UL)
#define ADC_SS_CTL_R_TS4_BIT    ((UBase_t) 19UL)
#define ADC_SS_CTL_R_TS4_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_TS4_TEMP    ((UBase_t) 0x00080000UL)

#define ADC_SS_CTL_TS4_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_TS4_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_TS4_TEMP    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_D5_MASK    ((UBase_t) 0x00100000UL)
#define ADC_SS_CTL_R_D5_BIT    ((UBase_t) 20UL)
#define ADC_SS_CTL_R_D5_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_D5_DIFF    ((UBase_t) 0x00100000UL)

#define ADC_SS_CTL_D5_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_D5_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_D5_DIFF    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_END5_MASK    ((UBase_t) 0x00200000UL)
#define ADC_SS_CTL_R_END5_BIT    ((UBase_t) 21UL)
#define ADC_SS_CTL_R_END5_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_END5_END    ((UBase_t) 0x00200000UL)

#define ADC_SS_CTL_END5_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_END5_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_END5_END    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_IE5_MASK    ((UBase_t) 0x00400000UL)
#define ADC_SS_CTL_R_IE5_BIT    ((UBase_t) 22UL)
#define ADC_SS_CTL_R_IE5_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_IE5_ENA    ((UBase_t) 0x00400000UL)

#define ADC_SS_CTL_IE5_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_IE5_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_IE5_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_TS5_MASK    ((UBase_t) 0x00800000UL)
#define ADC_SS_CTL_R_TS5_BIT    ((UBase_t) 23UL)
#define ADC_SS_CTL_R_TS5_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_TS5_TEMP    ((UBase_t) 0x00800000UL)

#define ADC_SS_CTL_TS5_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_TS5_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_TS5_TEMP    ((UBase_t) 0x00000001UL)
/*--------*/


/*--------*/
#define ADC_SS_CTL_R_D6_MASK    ((UBase_t) 0x01000000UL)
#define ADC_SS_CTL_R_D6_BIT    ((UBase_t) 24UL)
#define ADC_SS_CTL_R_D6_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_D6_DIFF    ((UBase_t) 0x01000000UL)

#define ADC_SS_CTL_D6_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_D6_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_D6_DIFF    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_END6_MASK    ((UBase_t) 0x02000000UL)
#define ADC_SS_CTL_R_END6_BIT    ((UBase_t) 25UL)
#define ADC_SS_CTL_R_END6_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_END6_END    ((UBase_t) 0x02000000UL)

#define ADC_SS_CTL_END6_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_END6_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_END6_END    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_IE6_MASK    ((UBase_t) 0x04000000UL)
#define ADC_SS_CTL_R_IE6_BIT    ((UBase_t) 26UL)
#define ADC_SS_CTL_R_IE6_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_IE6_ENA    ((UBase_t) 0x04000000UL)

#define ADC_SS_CTL_IE6_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_IE6_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_IE6_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_TS6_MASK    ((UBase_t) 0x0800000UL)
#define ADC_SS_CTL_R_TS6_BIT    ((UBase_t) 27UL)
#define ADC_SS_CTL_R_TS6_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_TS6_TEMP    ((UBase_t) 0x08000000UL)

#define ADC_SS_CTL_TS6_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_TS6_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_TS6_TEMP    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_D7_MASK    ((UBase_t) 0x10000000UL)
#define ADC_SS_CTL_R_D7_BIT    ((UBase_t) 28UL)
#define ADC_SS_CTL_R_D7_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_D7_DIFF    ((UBase_t) 0x10000000UL)

#define ADC_SS_CTL_D7_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_D7_SINGLE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_D7_DIFF    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_END7_MASK    ((UBase_t) 0x20000000UL)
#define ADC_SS_CTL_R_END7_BIT    ((UBase_t) 29UL)
#define ADC_SS_CTL_R_END7_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_END7_END    ((UBase_t) 0x20000000UL)

#define ADC_SS_CTL_END7_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_END7_CONTINUE    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_END7_END    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_IE7_MASK    ((UBase_t) 0x40000000UL)
#define ADC_SS_CTL_R_IE7_BIT    ((UBase_t) 30UL)
#define ADC_SS_CTL_R_IE7_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_IE7_ENA    ((UBase_t) 0x40000000UL)

#define ADC_SS_CTL_IE7_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_IE7_DIS    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_IE7_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_SS_CTL_R_TS7_MASK    ((UBase_t) 0x8000000UL)
#define ADC_SS_CTL_R_TS7_BIT    ((UBase_t) 31UL)
#define ADC_SS_CTL_R_TS7_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_R_TS7_TEMP    ((UBase_t) 0x80000000UL)

#define ADC_SS_CTL_TS7_MASK    ((UBase_t) 0x00000001UL)
#define ADC_SS_CTL_TS7_INPUT    ((UBase_t) 0x00000000UL)
#define ADC_SS_CTL_TS7_TEMP    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_SS_CTL_H_ */
