#include "main.h"
/**
 * op_c - selects the option char
 * @c: the char
 * Return: 1
 */

int op_c(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * op_s - selects the string option
 * @s: the string
 * Return: the number of characters
 */

int op_s(va_list s)
{
	int counter = 0;
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(null)";
	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}

	return (counter);
}
/**
 * op_i - selects a number option
 * @i: int
 * Return: number of characters
 */
int op_i(va_list i)
{
	int x, dc = 1, counter = 0;
	unsigned int num;

	x = va_arg(i, int);

	if (x < 0)
	{
		counter += _putchar('-');
		num = x * -1;
	}

	else
	{
		num = x;
	}

	while (num / dc > 9)
		dc = dc * 10;

	while (dc != 0)
	{
		counter += _putchar((num / dc) + '0');
		num = num % dc;
		dc = dc / 10;
	}
	return (counter);
}
/**
 * op_d - selects a number option
 * @d: int
 * Return: number of characters
 */
int op_d(va_list d)
{
	int x, dc = 1, counter = 0;
	unsigned int num;

	x = va_arg(d, int);

	if (x < 0)
	{
		counter += _putchar('-');
		num = x * -1;
	}
	else
	{
		num = x;
	}

	while (num / dc > 9)
		dc = dc * 10;

	while (dc != 0)
	{
		counter += _putchar((num / dc) + '0');
		num = num % dc;
		dc = dc / 10;
	}
	return (counter);
}
