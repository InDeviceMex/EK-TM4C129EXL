/**
 *
 * @file Button_Enum.h
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
#ifndef XAPPLICATION_EDUMKII_BUTTON_XHEADER_BUTTON_ENUM_H_
#define XAPPLICATION_EDUMKII_BUTTON_XHEADER_BUTTON_ENUM_H_

#include <xUtils/Standard/Standard.h>

#define EDUMKII_BUTTON_1 (GPIO_enGPIOL1)
#define EDUMKII_BUTTON_2 (GPIO_enGPIOL2)

#define EDUMKII_BUTTON_1_PORT (GPIO_enPORT_L)
#define EDUMKII_BUTTON_2_PORT (GPIO_enPORT_L)

#define EDUMKII_BUTTON_1_PIN (GPIO_enPIN_1)
#define EDUMKII_BUTTON_2_PIN (GPIO_enPIN_2)

typedef enum
{
    EDUMKII_enBUTTON_NO = 0x0UL,
    EDUMKII_enBUTTON_1 = 0x1UL,
    EDUMKII_enBUTTON_2 = 0x2UL,
    EDUMKII_enBUTTON_ALL = 0x3UL
}EDUMKII_nBUTTON;

typedef enum
{
    EDUMKII_enBUTTON_STATE_NOPRESS = 0x0UL,
    EDUMKII_enBUTTON_STATE_PRESS = 0x1UL,
}EDUMKII_nBUTTON_STATE;


#endif /* XAPPLICATION_EDUMKII_BUTTON_XHEADER_BUTTON_ENUM_H_ */
