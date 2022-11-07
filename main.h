#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);

int (*get_op_func(const char *s))(va_list arg);
typedef struct op
{
	char *op;
	int (*f)(va_list arg);
} op_t;
int op_i(char *);
int op_d(char *);
int op_mod(char *);
int op_c(char *);
int op_s(char *);
#endif
