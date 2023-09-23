#include "main.h"

/**
 * print_hexa_uppercase - print hexadecimal uppercase
 * @args: variadic arguments
 * Return: no. of characters printed
*/
int print_hexa_uppercase(va_list args)
{
	char *str;
	unsigned int num = 0;
	unsigned int size = 0;
	unsigned int no_characters = 0;
	unsigned int temp;

	num = va_arg(args, unsigned int);

	if (num == 0 || num == 1)
	{
		_putchar(num + '0');
		return (1);
	}

	temp = num;
	while (temp != 0)
	{
		temp = temp / 16;
		size++;
	}

	str = convert_int_to_hexadecimal_uppercase(num, size);

	if (str == NULL)
		return (0);

	no_characters = write(STDOUT_FILENO, str, size);

	free(str);
	return (no_characters);
}
