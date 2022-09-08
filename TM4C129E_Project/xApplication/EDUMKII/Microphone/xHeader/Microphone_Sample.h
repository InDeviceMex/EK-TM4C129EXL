/**
 *
 * @file Microphone_Sample.h
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
#ifndef XAPPLICATION_EDUMKII_MICROPHONE_XHEADER_MICROPHONE_SAMPLE_H_
#define XAPPLICATION_EDUMKII_MICROPHONE_XHEADER_MICROPHONE_SAMPLE_H_

#include <xUtils/Standard/Standard.h>
#include <xApplication/EDUMKII/Microphone/xHeader/Microphone_Enum.h>

uint32_t* EDUMKII_Microphone_vSampleArray(void);
void EDUMKII_Microphone_vSample(uint32_t *u32Input);
void EDUMKII_Microphone_vIRQSourceHandler(uintptr_t uptrModuleArg, void* pvArgument);



#endif /* XAPPLICATION_EDUMKII_MICROPHONE_XHEADER_MICROPHONE_SAMPLE_H_ */
