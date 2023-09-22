#include "main.h"

/**
 * convert_int_to_hexadecimal_lowercase - Convert unsigned integer
 * to hexadecimal.
 * @num: unsigned integer
 * @size: num size
 * Return: s pointer of binary allocated memory
*/
char *convert_int_to_hexadecimal_lowercase(unsigned int num, int size)
{
	char hexadecimal_num, *str;
	int i, reminder;

	str = malloc((size + 1) * sizeof(char));

	if (str == NULL)
		return (str);

	for (i = size - 1; i >= 0; i--)
	{
		reminder = num % 16;

		if (reminder > 9)
			hexadecimal_num = (reminder - 10) + 'a';
		else
			hexadecimal_num = reminder + '0';

		str[i] = hexadecimal_num;
		num = num / 16;
	}

	str[size] = '\0';
	return (str);
}

/**
 * print_hexa_lowercase - print hexadecimal lowercases
 * @args: variadic arguments
 * Return: no. of characters printed
*/
int print_hexa_lowercase(va_list args)
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

	str = convert_int_to_hexadecimal_lowercase(num, size);

	if (str == NULL)
		return (0);

	no_characters = write(STDOUT_FILENO, str, size);

	free(str);
	return (no_characters);
}
