#include "main.h"
/**
 *
 *void _runprintf(...);
**/





int _printf(const char *format, ...)
{
	va_list arg;

	va_start(arg, format);
	while (*format == '%')
		format++;		
	if (*format == 'c')
	{
		_putchar(va_arg(char*));
	}
	if (*format == 's')
	{
		_putchar(va_arcg(arg, char*));
	}
	return (0);
}	
