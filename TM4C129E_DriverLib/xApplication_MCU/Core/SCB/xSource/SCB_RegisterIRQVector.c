/**
 *
 * @file SCB_RegisterIRQVector.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 2 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SCB/xHeader/SCB_RegisterIRQVector.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/SCB.h>
#include <xDriver_MCU/FLASH/FLASH.h>

void SCB__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void), void (**pfIrqVectorHandlerExtern) (void), SCB_nVECISR enVector)
{
    uint32_t u32Vector = 0UL;
    uint32_t u32BaseVector = 0UL;
    uint32_t* pu32BaseVector = 0UL;
    uint32_t u32FlashSize = 0UL;
    uint32_t u32IrqVectorHandler = 0UL;
    MCU_nENABLE enInterruptState = MCU_enENABLE_DIS;

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32IrqVectorHandler = (uint32_t) pfIrqVectorHandler;
        u32IrqVectorHandler |= 1UL;

        u32BaseVector = SCB__u32GetVectorOffset();

        u32Vector = (uint32_t) enVector;
        u32Vector *= 4UL;
        u32BaseVector += u32Vector;

        u32FlashSize = FLASH__u32GetSize();
        if(u32FlashSize > u32BaseVector)
        {
            enInterruptState = MCU__enDisGlobalInterrupt();
            FLASH__enWriteWorld(u32IrqVectorHandler, u32BaseVector);
            MCU__enSetGlobalInterrupt(enInterruptState);
        }
        else
        {
            pu32BaseVector = (uint32_t*) u32BaseVector;
            *pu32BaseVector = (uint32_t) u32IrqVectorHandler;
        }
        if(0UL != (uint32_t) pfIrqVectorHandlerExtern)
        {
            *pfIrqVectorHandlerExtern = (void (*) (void)) u32IrqVectorHandler;
        }
    }
}

/*
void SCB__vUnRegisterIRQVectorHandler(SCB_nVECISR enVector)
{
    uint32_t u32BaseVector = SCB_VTOR_R;

    if(u32BaseVector <= 0x00010000U)
    {
        MCU__enDisGlobalInterrupt();
        FLASH__enWrite((uint32_t) IntDefaultHandler | 1, u32BaseVector+((uint32_t) enVector*4U));
        MCU__enEnGlobalInterrupt();
    }
    else if((u32BaseVector >= 0x20000000U) && (u32BaseVector <= 0x20000400U) )
    {
        *((uint32_t*)u32BaseVector+(uint32_t) enVector)=(uint32_t) IntDefaultHandler | 1;
    }
}
*/




