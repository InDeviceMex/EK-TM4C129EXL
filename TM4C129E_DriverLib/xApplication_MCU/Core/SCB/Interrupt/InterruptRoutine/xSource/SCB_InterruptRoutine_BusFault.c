/**
 *
 * @file SCB_InterruptRoutine_BusFault.c
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
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_BusFault.h>

#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_Source.h>
#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

uint32_t SCB_BusFault_pu32Context[8UL] = {0UL};

__attribute__((naked))
void BusFault__vIRQVectorHandler(void)
{
    __asm volatile(
    " PUSH {R4-R7}\n"
    " MRS R4, MSP\n"
#if defined (__TI_ARM__ )
    " movw R6, SCB_BusFault_pu32Context\n"
    " movt R6, SCB_BusFault_pu32Context\n"
#elif defined (__GNUC__ )
    " ldr R6, = SCB_BusFault_pu32Context\n"
#endif
    " ldr R5, [R4, #0X10]\n"
    " str R5, [R6, #0x0]\n"/*SCB_BusFault_pu32Context[0] R4*/
    " ldr R5, [R4, #0x14]\n"
    " str R5, [R6, #0x4]\n"/*SCB_BusFault_pu32Context[1] R5*/
    " ldr R5, [R4, #0x18]\n"
    " str R5, [R6, #0x8]\n"/*SCB_BusFault_pu32Context[2] R6*/
    " ldr R5, [R4, #0x1C]\n"
    " str R5, [R6, #0xC]\n"/*SCB_BusFault_pu32Context[3] R3*/
    " ldr R5, [R4, #0x20]\n"
    " str R5, [R6, #0x10]\n"/*SCB_BusFault_pu32Context[4] R52*/
    " ldr R5, [R4, #0x24]\n"
    " str R5, [R6, #0x14]\n"/*SCB_BusFault_pu32Context[5] LR*/
    " ldr R5, [R4, #0x28]\n"
    " str R5, [R6, #0x18]\n"/*SCB_BusFault_pu32Context[6] PC*/
    " ldr R5, [R4, #0x2C]\n"
    " str R5, [R6, #0x1C]\n"/*SCB_BusFault_pu32Context[7] PSR*/
    " pop {R4-R7}\n");

    uint32_t u32BusFault = 0U;
    uint32_t u32BusAddressFault = 0U;
    uint32_t u32BusAddressValid = 0U;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32BusFault = SCB_CFSR_R;
    u32BusFault >>= 8UL;
    u32BusFault &= (uint32_t) SCB_enBUS_ALL;

    UART__u32Printf(UART_enMODULE_0, "BusFault exception Detected\n\r"
                    "Core Register dump:\n\r"
                    "R0: %X, R1: %X\n\r"
                    "R2: %X, R3: %X\n\r"
                    "R12: %X xPSR: %X\n\r"
                    "LR: %X, PC: %X\n\r",
                    SCB_BusFault_pu32Context[0UL],
                    SCB_BusFault_pu32Context[1UL],
                    SCB_BusFault_pu32Context[2UL],
                    SCB_BusFault_pu32Context[3UL],
                    SCB_BusFault_pu32Context[4UL],
                    SCB_BusFault_pu32Context[7UL],
                    SCB_BusFault_pu32Context[5UL],
                    SCB_BusFault_pu32Context[6UL]);

    if((uint32_t) SCB_enBUS_BFARVALID & u32BusFault)
    {
        SCB_CFSR_R = SCB_CFSR_R_BFARVALID_CLEAR;
        u32BusFault &= ~(uint32_t) SCB_enBUS_BFARVALID;
        u32BusAddressValid = 1UL;
        pfvCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enBUS_BIT_BFARVALID);
        pfvCallback();
    }

    switch(u32BusFault)
    {
        case (uint32_t) SCB_enBUS_LSPERR:
                SCB_CFSR_R = SCB_CFSR_R_LSPERR_CLEAR;
                pfvCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enBUS_BIT_LSPERR);
                pfvCallback();
                break;
        case (uint32_t) SCB_enBUS_STKERR:
                SCB_CFSR_R = SCB_CFSR_R_STKERR_CLEAR;
                UART__u32Printf(UART_enMODULE_0, "Context Values could not be invalid\n\r",
                                u32BusAddressFault);
                pfvCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enBUS_BIT_STKERR);
                pfvCallback();
                break;
        case (uint32_t) SCB_enBUS_UNSTKERR:
                SCB_CFSR_R = SCB_CFSR_R_UNSTKERR_CLEAR;
                UART__u32Printf(UART_enMODULE_0, "Context Values could not be invalid\n\r",
                                u32BusAddressFault);
                pfvCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enBUS_BIT_UNSTKERR);
                pfvCallback();
                break;
        case (uint32_t) SCB_enBUS_IMPRECISERR:
                SCB_CFSR_R = SCB_CFSR_R_IMPRECISERR_CLEAR;
                u32BusAddressFault = SCB_BusFault_pu32Context[6UL];
                UART__u32Printf(UART_enMODULE_0,
                                "Instruction Access Fault Address (Possible or near): %X\n\r",
                                u32BusAddressFault);
                pfvCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enBUS_BIT_IMPRECISERR);
                pfvCallback();
                break;
        case (uint32_t) SCB_enBUS_PRECISERR:
                SCB_CFSR_R = SCB_CFSR_R_PRECISERR_CLEAR;
                if(1UL == u32BusAddressValid)
                {
                    u32BusAddressFault = SCB_BFAR_R;
                    UART__u32Printf(UART_enMODULE_0, "Data Bus Access Fault Address: %X\n\r",
                                    u32BusAddressFault);
                }
                u32BusAddressFault = SCB_BusFault_pu32Context[6UL];
                UART__u32Printf(UART_enMODULE_0, "Instruction Bus Access Fault Address: %X\n\r",
                                u32BusAddressFault);
                pfvCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enBUS_BIT_PRECISERR);
                pfvCallback();
                break;
        case (uint32_t) SCB_enBUS_IBUSERR:
                SCB_CFSR_R = SCB_CFSR_R_IBUSERR_CLEAR;
                u32BusAddressFault = SCB_BusFault_pu32Context[6UL];
                UART__u32Printf(UART_enMODULE_0, "Instruction Bus Access Fault Address: %X\n\r",
                                u32BusAddressFault);
                pfvCallback = SCB_BusFault__pvfGetIRQSourceHandler(SCB_enBUS_BIT_IBUSERR);
                pfvCallback();
                break;
        default:
            break;
    }
    __asm volatile(" BX LR \n");
}




