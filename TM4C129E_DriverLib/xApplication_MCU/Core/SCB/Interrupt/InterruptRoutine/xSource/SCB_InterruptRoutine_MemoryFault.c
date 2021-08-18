/**
 *
 * @file SCB_InterruptRoutine_MemoryFault.c
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
 * @verbatim 15 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_MemoryFault.h>

#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_Source.h>
#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

uint32_t SCB_MemoryFault_pu32Context[8UL] = {0UL};

__attribute__((naked))
void MemoryFault__vIRQVectorHandler(void)
{
    __asm volatile(
    " PUSH {R4-R7}\n"
    " MRS R4, MSP\n"
#if defined (__TI_ARM__ )
    " movw R6, SCB_MemoryFault_pu32Context\n"
    " movt R6, SCB_MemoryFault_pu32Context\n"
#elif defined (__GNUC__ )
    " ldr R6, = SCB_MemoryFault_pu32Context\n"
#endif
    " ldr R5, [R4, #0X10]\n"
    " str R5, [R6, #0x0]\n"/*SCB_MemoryFault_pu32Context[0] R4*/
    " ldr R5, [R4, #0x14]\n"
    " str R5, [R6, #0x4]\n"/*SCB_MemoryFault_pu32Context[1] R5*/
    " ldr R5, [R4, #0x18]\n"
    " str R5, [R6, #0x8]\n"/*SCB_MemoryFault_pu32Context[2] R6*/
    " ldr R5, [R4, #0x1C]\n"
    " str R5, [R6, #0xC]\n"/*SCB_MemoryFault_pu32Context[3] R3*/
    " ldr R5, [R4, #0x20]\n"
    " str R5, [R6, #0x10]\n"/*SCB_MemoryFault_pu32Context[4] R52*/
    " ldr R5, [R4, #0x24]\n"
    " str R5, [R6, #0x14]\n"/*SCB_MemoryFault_pu32Context[5] LR*/
    " ldr R5, [R4, #0x28]\n"
    " str R5, [R6, #0x18]\n"/*SCB_MemoryFault_pu32Context[6] PC*/
    " ldr R5, [R4, #0x2C]\n"
    " str R5, [R6, #0x1C]\n"/*SCB_MemoryFault_pu32Context[7] PSR*/
    " pop {R4-R7}\n");

    uint32_t u32MemoryFault = 0U;
    uint32_t u32MemoryAddressFault = 0U;
    uint32_t u32MemoryAddressValid = 0U;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32MemoryFault = SCB_CFSR_R;
    u32MemoryFault >>= 0UL;
    u32MemoryFault &= (uint32_t) SCB_enMEMORY_ALL;

    UART__u32Printf(UART_enMODULE_0, "MemoryFault exception Detected\n\r"
                    "Core Register dump:\n\r"
                    "R0: %X, R1: %X\n\r"
                    "R2: %X, R3: %X\n\r"
                    "R12: %X xPSR: %X\n\r"
                    "LR: %X, PC: %X\n\r",
                    SCB_MemoryFault_pu32Context[0UL],
                    SCB_MemoryFault_pu32Context[1UL],
                    SCB_MemoryFault_pu32Context[2UL],
                    SCB_MemoryFault_pu32Context[3UL],
                    SCB_MemoryFault_pu32Context[4UL],
                    SCB_MemoryFault_pu32Context[7UL],
                    SCB_MemoryFault_pu32Context[5UL],
                    SCB_MemoryFault_pu32Context[6UL]);

    if((uint32_t) SCB_enMEMORY_MMARVALID & u32MemoryFault)
    {
        SCB_CFSR_R = SCB_CFSR_R_MMARVALID_CLEAR;
        u32MemoryFault &= ~(uint32_t) SCB_enMEMORY_MMARVALID;
        u32MemoryAddressValid = 1UL;
        pfvCallback = SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_enMEMORY_BIT_MMARVALID);
        pfvCallback();
    }

    switch(u32MemoryFault)
    {
        case (uint32_t) SCB_enMEMORY_MLSPERR:
                SCB_CFSR_R = SCB_CFSR_R_MLSPERR_CLEAR;
                pfvCallback = SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_enMEMORY_BIT_MLSPERR);
                pfvCallback();
                break;
        case (uint32_t) SCB_enMEMORY_MSTKERR:
                SCB_CFSR_R = SCB_CFSR_R_MSTKERR_CLEAR;
                UART__u32Printf(UART_enMODULE_0, "Context Values could not be invalid\n\r",
                                u32MemoryAddressFault);
                pfvCallback = SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_enMEMORY_BIT_MSTKERR);
                pfvCallback();
                break;
        case (uint32_t) SCB_enMEMORY_MUNSTKERR:
                SCB_CFSR_R = SCB_CFSR_R_MUNSTKERR_CLEAR;
                UART__u32Printf(UART_enMODULE_0, "Context Values could not be invalid\n\r",
                                u32MemoryAddressFault);
                pfvCallback = SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_enMEMORY_BIT_MUNSTKERR);
                pfvCallback();
                break;
        case (uint32_t) SCB_enMEMORY_DACCVIOL:
                SCB_CFSR_R = SCB_CFSR_R_DACCVIOL_CLEAR;
                u32MemoryAddressFault = SCB_MemoryFault_pu32Context[6UL];
                UART__u32Printf(UART_enMODULE_0, "Instruction Access Fault Address: %X\n\r",
                                u32MemoryAddressFault);
                pfvCallback = SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_enMEMORY_BIT_DACCVIOL);
                pfvCallback();
                break;
        case (uint32_t) SCB_enMEMORY_IACCVIOL:
                SCB_CFSR_R = SCB_CFSR_R_IACCVIOL_CLEAR;
                if(1UL == u32MemoryAddressValid)
                {
                    u32MemoryAddressFault = SCB_MMFAR_R;
                    UART__u32Printf(UART_enMODULE_0, "Data Access Fault Address: %X\n\r",
                                    u32MemoryAddressFault);
                }
                u32MemoryAddressFault = SCB_MemoryFault_pu32Context[6UL];
                UART__u32Printf(UART_enMODULE_0, "Instruction Access Fault Address: %X\n\r",
                                u32MemoryAddressFault);
                pfvCallback = SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_enMEMORY_BIT_IACCVIOL);
                pfvCallback();
                break;
        default:
            break;
    }
    __asm volatile(" BX LR");
}
