#include "main.h"



/**
 * convert_int_to_hexadecimal_uppercase - Convert unsigned integer
 * to hexadecimal caps.
 * @num: unsigned long integer
 * @size: pointer size
 * Return: s pointer of allocated memory
*/

char *convert_int_to_hexadecimal_uppercase(unsigned int num, int size)
{
	char hexadecimal_num, *s;
	int i, reminder;

	s = malloc((size + 1) * sizeof(char));

	if (s == NULL)
		return (s);

	for (i = size - 1; i >= 0; i--)
	{
		reminder = num % 16;

		if (reminder > 9)
			hexadecimal_num = (reminder - 10) + 'A';
		else
			hexadecimal_num = reminder + '0';

		s[i] = hexadecimal_num;
		num = num / 16;
	}

	s[size] = '\0';
	return (s);
}


/**
 * print_ascii - handle S specifier that print \x, followed by
 * the ASCII code value in hexadecimal (upper case - always 2 characters)
 * @args: variadic arguments
 * Return: no. of characters printed
*/
int print_ascii(va_list args)
{
	char *str, *s;
	int i = 0;
	int no_characters = 0;
	int length = 0;

	str = va_arg(args, char*);

	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		write(STDOUT_FILENO, str, length);
		return (length);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] >= 127)
		{
			s = convert_int_to_hexadecimal_uppercase(str[i], 2);
			no_characters += write(STDOUT_FILENO, "\\x", 2);
			no_characters += write(STDOUT_FILENO, s, 2);
			free(s);
		}
		else
		{
			write(STDOUT_FILENO, &str[i], 1);
			no_characters++;
		}
		i++;

	}
	return (no_characters);
}
