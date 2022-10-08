/**
 *
 * @file Joystick_Sample.h
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
#ifndef XAPPLICATION_EDUMKII_JOYSTICK_XHEADER_JOYSTICK_SAMPLE_H_
#define XAPPLICATION_EDUMKII_JOYSTICK_XHEADER_JOYSTICK_SAMPLE_H_

#include <xUtils/Standard/Standard.h>
#include <xApplication/EDUMKII/Joystick/xHeader/Joystick_Enum.h>

UBase_t* EDUMKII_Joystick_vSampleArray(void);
void EDUMKII_Joystick_vSampleXY(UBase_t *uxX, UBase_t *uxY);
void EDUMKII_Joystick_vSampleSelect(EDUMKII_nJOYSTICK *enSelect);
void EDUMKII_Joystick_vSample(UBase_t *uxX, UBase_t *uxY, EDUMKII_nJOYSTICK *enSelect);
void EDUMKII_Select_vIRQSourceHandler(uintptr_t uptrModuleArg, void* pvArgument);
void EDUMKII_Joystick_vIRQSourceHandler(uintptr_t uptrModuleArg, void* pvArgument);

#endif /* XAPPLICATION_EDUMKII_JOYSTICK_XHEADER_JOYSTICK_SAMPLE_H_ */
