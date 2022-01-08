/**
 *
 * @file Microphone_Enum.h
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
 * @verbatim 18 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XAPPLICATION_EDUMKII_MICROPHONE_XHEADER_MICROPHONE_ENUM_H_
#define XAPPLICATION_EDUMKII_MICROPHONE_XHEADER_MICROPHONE_ENUM_H_

#include <xUtils/Standard/Standard.h>

#if defined(BOOSTER_PACK1)
#define EDUMKII_MICROPHONE (GPIO_enAIN8)
#define EDUMKII_MICROPHONE_INPUT (ADC_enSEQ_INPUT_8)
#else
#define EDUMKII_MICROPHONE (GPIO_enAIN6)
#define EDUMKII_MICROPHONE_INPUT (ADC_enSEQ_INPUT_6)
#endif


#endif /* XAPPLICATION_EDUMKII_MICROPHONE_XHEADER_MICROPHONE_ENUM_H_ */
