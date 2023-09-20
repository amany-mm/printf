#include "main.h"

/**
 * convert_long_to_hexadecimal - Convert unsigned long integer
 * to hexadecimal.
 * @long_num: unsigned long integer
 * @p_size: pointer size
 * Return: s pointer of binary allocated memory
*/

char *convert_long_to_hexadecimal(unsigned long long_num, int p_size)
{
	char hexadecimal_num, *str;
	int i, reminder;

	str = malloc((p_size + 1) * sizeof(char));

	if (str == NULL)
		return (str);

	for (i = p_size - 1; i >= 0; i--)
	{
		reminder = long_num % 16;

		if (reminder > 9)
			hexadecimal_num = (reminder - 10) + 'a';
		else
			hexadecimal_num = reminder + '0';

		str[i] = hexadecimal_num;
		long_num = long_num / 16;
	}

	str[p_size] = '\0';
	return (str);
}


/**
 * print_pointer - print pointer address hexadecimal
 * @args: variadic arguments
 * Return: no. of characters printed
*/
int print_pointer(va_list args)
{
	char *str;
	int digit_count = 0;
	int no_chars_printed = 0;
	unsigned long long_num, temp;

	long_num = (unsigned long) va_arg(args, void *);

	if (long_num == 0)
	{
		no_chars_printed += write(STDOUT_FILENO, "(nil)", 5);
		return (no_chars_printed);
	}
	no_chars_printed += write(STDOUT_FILENO, "0x", 2);
	temp = long_num;

	while (temp != 0)
	{
		temp = temp / 16;
		digit_count++;
	}

	str = convert_long_to_hexadecimal(long_num, digit_count);

	if (str == NULL)
		return (0);

	no_chars_printed = write(STDOUT_FILENO, str, digit_count);

	free(str);

	return (no_chars_printed + 2);

}
