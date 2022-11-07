#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  * get_op_func - Select the correct operator
 *   * Return: operator
 *    * @prin: chars digited by the user 
**/
int (*get_op_func(const char *prin))(va_list arg)
{
	op_t ops[] = {
		{"%", op_mod},
		{"s", op_s},
		{"c", op_c},
		{"d", op_d},
		{"i", op_i},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *prin)
	{
		i++;
	}
	return (ops[i].f);
}
