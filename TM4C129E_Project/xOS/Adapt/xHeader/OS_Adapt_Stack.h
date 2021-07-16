/**
 *
 * @file OS_Adapt_Stack.h
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
 * @verbatim 16 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_ADAPT_XHEADER_OS_ADAPT_STACK_H_
#define XOS_ADAPT_XHEADER_OS_ADAPT_STACK_H_

#include <xOS/Adapt/xHeader/OS_Adapt_Defines.h>

uint32_t *OS_Adapt__p32InitialiseStack( uint32_t* pu32TopOfStack, void (*pfvThread)(void * pvParameters), void *pvParameters );

#endif /* XOS_ADAPT_XHEADER_OS_ADAPT_STACK_H_ */
