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
 * print_int - prints an integer
 * @args: args
 * Return: no of func characters
 */
int print_int(va_list args)
{	int num = va_arg(args, int);
	int divisor = 1;
	int counter = 0;
	int digit;

	if (num < 0)
	{
		_putchar('-');
		counter++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		return (counter + 1);
	}
	while (num / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		digit = num / divisor;
		_putchar('0' + digit);
		counter++;
		num %= divisor;
		divisor /= 10;
	}
	return (counter);
}

