/**
 *
 * @file Standard.h
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
 * @verbatim 5 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_STANDARD_STANDARD_H_
#define XUTILS_STANDARD_STANDARD_H_

#include <float.h>
#include <stdint.h>
#include <stddef.h>
/*Float standard typedef defines*/
typedef float float32_t;
typedef double float64_t;
typedef long double float128_t;

#define UNDEF_VALUE (0x7FFFFFFFUL)

/*boolean variables*/
typedef enum
{
    FALSE = 0UL,
    TRUE = 1UL,
    BOOLEAN_UNDEF = UNDEF_VALUE,
}boolean_t;

typedef enum
{
    ERROR_OK = 0UL,
    ERROR_POINTER = 1UL,
    ERROR_VALUE = 2UL,
    ERROR_RANGE = 3UL,
    ERROR_EMPTY = 4UL,
    ERROR_BUSY = 5UL,
    ERROR_TIMEOUT = 6UL,
    ERROR_OUT_OF_RANGE = 7UL,
    ERROR_FULL = 8UL,
    ERROR_UNDEF = UNDEF_VALUE,
}error_t;

typedef unsigned int UBase_t;
typedef int Base_t;

#endif /* XUTILS_STANDARD_STANDARD_H_ */
