#include "main.h"

/**
 * print_unsigned_decimal_u - print unsigned decimal [u specifier]
 * @args: variadic arguments
 * Return: no. of characters printed
*/
int print_unsigned_decimal_u(va_list args)
{
	unsigned int divisor, num;
	int no_digit = 0;
	char n;

	num = va_arg(args, unsigned int);

	if (num == 0)
	{   n = '0';
		_putchar(n);
		return (1);
	}
	divisor = 1;
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
