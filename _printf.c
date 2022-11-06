#include "main.h"
/**
 *
 *void _runprintf(...);
**/





int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0; 
	char *str;
	va_start(arg, format);
	while (format[i] == '%')
		format++;		
	if (format[i] == 'c')
	{
		_putchar(va_arg(arg, int));
	}
	if (format[i] == 's')
	{
		str = va_arg(arg, char *);
		for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	}
	return(0);
}	
