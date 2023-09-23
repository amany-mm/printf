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
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void rot13(char *str);
char *convert_int_to_binary(unsigned int int_num, int binary_size);
char *convert_long_to_hexadecimal(unsigned long long_num, int p_size);
char *convert_int_to_hexadecimal_lowercase(unsigned int num, int size);
char *convert_int_to_hexadecimal_uppercase(unsigned int num, int size);

/* print functions */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int print_ascii(va_list args);
int print_pointer(va_list args);
int print_rev(va_list args);
int print_rot13_string(va_list args);
int print_hexa_lowercase(va_list args);
int print_hexa_uppercase(va_list args);
int print_unsigned_decimal_u(va_list args);
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
