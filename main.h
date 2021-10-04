#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: Type to print
* @f: The function to print
*/
typedef struct convert
{
	char *sym;
	int (*f)(va_list);
} conver_t;

int _printf(const char *format, ...);

#endif /* _PRINTF_H_ */
