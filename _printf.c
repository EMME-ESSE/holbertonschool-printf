#include "main.h"
/**
 *
 *void _runprintf(...);
**/





int _printf(const char *format, ...)
{
	char *i;
	va_list arg;

	va_start(arg, format);
	while (*format == '%')
		format++;		
	if (*format == 'c')
	{
		i = va_arg(arg, char*);
		_putchar(i);
	}
	if (*format == 's')
	{
		i = va_arg(arg, char*);
		_putchar(i);
	}
	return (0);
}	
