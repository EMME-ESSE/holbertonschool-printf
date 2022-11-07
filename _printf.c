#include "main.h"
/**
 *
 *void _runprintf(...);
**/





int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, b = 0; 
	int *str;

	va_start(arg, format);
	while (!format)
		return (-1);
	while (format[i] == '%')
	{	
		i++;
		b++;
		if (format[i] == 'c')
		{
			_putchar(va_arg(arg, int));
		}
		if (format[i] == 's')
		{
			str = va_arg(arg, char *);
			for (b = 0; str[b] != '\0'; b++)
			_putchar(str[b]);
		}
	}
	return(b);
}	
