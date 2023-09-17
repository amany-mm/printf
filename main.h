#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_char(va_list args);
void print_string(va_list args);
void print_percent(va_list args);
void print_int(va_list args);

/**
 * struct specifier - structure
 * @letter: letter data type
 * @func: function pointer
*/
typedef struct specifier
{
	char letter;
	void (*func)(va_list);
} specifier_t;

#endif
