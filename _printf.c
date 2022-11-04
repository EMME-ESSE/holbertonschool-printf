#include "main.h"
/**
 *
 *
**/
void _runprintf(...);







int _printf(const char *format, ...)
{
	int *printed;
	char *i;
	char *s;

	va_list arg;
	va_start(argumento, format);

	while (format == '%')
		format++;		
	if (*format == 'c')
	{
		i = va_arg(arg, char*);
		putchar(i);
	if (*format == 's')
	{
		i = va_arg(arg, char*);
		putchar(s);
	}

}	
