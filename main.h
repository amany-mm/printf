#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <limits.h>

int _putchar(char c);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int (*get_op_func(char s))(va_list args);
int _printf(const char *format, ...);


/**
 * struct specifier - structure
 * @letter: letter data type
 * @func: function pointer
*/
typedef struct specifier
{
	char letter;
	int (*func)(va_list);
} specifier_t;



#endif