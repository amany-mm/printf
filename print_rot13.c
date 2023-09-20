#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to rotate
 * Return: NULL
*/
void rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		while ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] += 13;
			i++;
		}

		if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			str[i] -= 13;

		i++;
	}
}

/**
 * print_rot13_string - print encoded rot13 string
 * @args: variadic arguments
 * Return: no. of characters printed
*/
int print_rot13_string(va_list args)
{
	char *str;
	int no_chars = 0;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	rot13(str);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		no_chars++;
	}
	return (no_chars);
}
