#include "main.h"
/**
 *
 *void _runprintf(...);
**/





int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, b = 0; 
	int (*f)(va_list arg);

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
			f = va_arg(arg, char *);
			for (b = 0; f[b] != '\0'; b++)
			_putchar(f[b]);
		}
	}
	return(b);
}	
