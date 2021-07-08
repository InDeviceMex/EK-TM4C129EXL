/**
 *
 * @file OS_TCB_Init.h
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
 * @verbatim Mar 23, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 23, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TCB_XHEADER_OS_TCB_INIT_H_
#define XOS_TCB_XHEADER_OS_TCB_INIT_H_

#include <xOS/TCB/xHeader/OS_TCB_Defines.h>

OS_TCB_nSTATUS OS_TCB__enInit(OS_TCB_TypeDef* pstTCB);
OS_TCB_TypeDef* OS_TCB__pstInit(void);
OS_TCB_TypeDef* OS_TCB__pstGet(void);

#endif /* XOS_TCB_XHEADER_OS_TCB_INIT_H_ */
