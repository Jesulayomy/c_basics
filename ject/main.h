#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

typedef struct print
{
	char *c;
	int (*func)(va_list);
} prn;

int _putchar(char c);
int _printf(const char *format, ...);

int (*get_func(const char *, int))(va_list);
int print_char(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_dec(va_list);

#endif
