/**
 *
 * @file Button_Read.h
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
 * @verbatim 17 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XAPPLICATION_EDUMKII_BUTTON_XHEADER_BUTTON_READ_H_
#define XAPPLICATION_EDUMKII_BUTTON_XHEADER_BUTTON_READ_H_

#include <xApplication/EDUMKII/Button/xHeader/Button_Enum.h>

EDUMKII_nBUTTON EDUMKII_Button_enRead(EDUMKII_nBUTTON enButtonSelect);

void EDUMKII_Button1_vIRQSourceHandler(void);
void EDUMKII_Button2_vIRQSourceHandler(void);
#endif /* XAPPLICATION_EDUMKII_BUTTON_XHEADER_BUTTON_READ_H_ */
