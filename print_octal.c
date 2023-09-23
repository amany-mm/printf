#include "main.h"

/**
 * convert_int_to_octal - Convert integer to octal
 * @n: unsigned int
 * @size: n size
 * Return: s pointer of allocated memory
*/
char *convert_int_to_octal(unsigned int  n, int size)
{
	char *str, octal_num;
	int i, reminder;

	str = malloc((size + 1) * sizeof(char));

	if (str == NULL)
		return (str);

	for (i = size - 1; i >= 0; i--)
	{
		reminder = n % 8;
		octal_num = '0' + reminder;
		str[i] = octal_num;
		n = n / 8;
	}

	str[0] = octal_num;
	if (str[0] == '0')
		str[0] = '1';

	str[size] = '\0';

	return (str);
}

/**
 * print_octal - print octal [o specifier]
 * @args: variadic arguments
 * Return: no. of characters printed
*/
int print_octal(va_list args)
{
	unsigned int num, temp;
	int no_digit = 0;
	int size = 0;
	char *str;

	num = va_arg(args, unsigned int);

	if (num == 0 || num == 1)
	{
		_putchar('0' + num);
		return (1);
	}
	temp = num;
	while (temp != 0)
	{
		temp = temp / 8;
		size++;
	}
	str = convert_int_to_octal(num, size);

	if (str == NULL)
		return (0);

	no_digit = write(STDOUT_FILENO, str, size);
	free(str);

	return (no_digit);
}
