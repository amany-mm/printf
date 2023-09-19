#include "main.h"

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


/**
 * print_char - prints a character
 * @args: args
 * Return: no of func characters
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - prints a string
 * @args: args
 * Return: no of func characters
 */
int print_string(va_list args)
{
	char *s;
	int no_chars = 0;

	s  = va_arg(args, char*);

	if (s == NULL)
		return (_printf("(null)"));

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		no_chars++;
	}
	return (no_chars);
}

/**
 * print_percent - prints a percentage
 * @args: args
 * Return: no of func characters
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}

/**
 * print_int - prints integers signed & unsigned
 * @args: args
 * Return: no of func characters
 */
int print_int(va_list args)
{
	unsigned int num;
	int arg;
	int no_digit = 0;
	int divisor = 1;
	char n;

	arg = va_arg(args, int);
	if (arg == 0)
	{
		n = '0';
		_putchar(n);
		return (1);
	}
	if (arg < 0)
	{
		n = '-';
		_putchar(n);
		no_digit = 1;
		num = arg * -1;
	}
	else
		num = arg;

	while ((num / divisor) >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		n = '0' + (num / divisor);
		_putchar(n);
		no_digit++;

		num %= divisor;
		divisor /= 10;
	}

	return (no_digit);
}
