/**
 *
 * @file Accelerometer_Sample.h
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
#ifndef XAPPLICATION_EDUMKII_ACCELEROMETER_XHEADER_ACCELEROMETER_SAMPLE_H_
#define XAPPLICATION_EDUMKII_ACCELEROMETER_XHEADER_ACCELEROMETER_SAMPLE_H_

#include <xUtils/Standard/Standard.h>
#include <xApplication/EDUMKII/Accelerometer/xHeader/Accelerometer_Enum.h>

UBase_t* EDUMKII_Accelerometer_vSampleArray(void);
void EDUMKII_Accelerometer_vSample(Base_t *sxX, Base_t *sxY, Base_t *sxZ );
void EDUMKII_Accelerometer_vIRQSourceHandler(uintptr_t uptrModuleArg, void* pvArgument);


#endif /* XAPPLICATION_EDUMKII_ACCELEROMETER_XHEADER_ACCELEROMETER_SAMPLE_H_ */
