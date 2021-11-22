/**
 *
 * @file Joystick_Enum.h
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
#ifndef XAPPLICATION_EDUMKII_JOYSTICK_XHEADER_JOYSTICK_ENUM_H_
#define XAPPLICATION_EDUMKII_JOYSTICK_XHEADER_JOYSTICK_ENUM_H_

#include <xUtils/Standard/Standard.h>

#define EDUMKII_SELECT (GPIO_enGPIOC6)
#define EDUMKII_SELECT_PORT (GPIO_enPORT_C)
#define EDUMKII_SELECT_PIN (GPIO_enPIN_6)

#define EDUMKII_AXIS_X (GPIO_enAIN9)
#define EDUMKII_AXIS_X_INPUT (ADC_enSEQ_INPUT_9)

#define EDUMKII_AXIS_Y (GPIO_enAIN0)
#define EDUMKII_AXIS_Y_INPUT (ADC_enSEQ_INPUT_0)

typedef enum
{
    EDUMKII_enJOYSTICK_NOPRESS = 0x0UL,
    EDUMKII_enJOYSTICK_PRESS = 0x1UL,
}EDUMKII_nJOYSTICK;

#endif /* XAPPLICATION_EDUMKII_JOYSTICK_XHEADER_JOYSTICK_ENUM_H_ */
