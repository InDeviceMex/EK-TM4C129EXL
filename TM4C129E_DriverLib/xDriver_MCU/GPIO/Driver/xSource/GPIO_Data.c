/**
 *
 * @file GPIO_Data.c
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
 * @verbatim 3 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_Data.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

inline void GPIO__vSetData(GPIO_nPORT enPort, GPIO_nPINMASK enPin, uint32_t u32Data)
{
    GPIO__vWriteRegister(enPort, GPIO_DATA_OFFSET, u32Data, (uint32_t) enPin, 0UL);
}

inline uint32_t GPIO__u32GetData(GPIO_nPORT enPort, GPIO_nPINMASK enPin)
{
    uint32_t u32DataReg = 0UL;
    u32DataReg = GPIO__u32ReadRegister(enPort, GPIO_DATA_OFFSET, (uint32_t) enPin, 0UL);
    return (u32DataReg);
}
