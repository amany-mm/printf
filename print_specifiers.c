#include "main.h"

/**
 * print_char - prints a character
 * @args: args
 */
void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}

/**
 * print_string - prints a string
 * @args: args
 */
void print_string(va_list args)
{
	int s;

	s  = va_arg(args, int);
	_putchar(s);
}

/**
 * print_percent - prints a percentage
 * @args: args
 */
void print_percent(va_list args)
{
	(void)args;
	_putchar('%');

}

/**
 * print_int - prints an integer
 * @args: args
 */
void print_int(va_list args)
{
	_putchar(va_arg(args, int));

}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

