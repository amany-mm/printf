#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

/* helpers functions */
int _putchar(char c);
char *convert_int_to_binary(unsigned int int_num, int binary_size);
char *convert_long_to_hexadecimal(unsigned long long_num, int p_size);

/* print functions */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int print_pointer(va_list args);
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
