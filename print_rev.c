#include "main.h"
/**
 * print_rev - prints a reversed string
 *@args: args
 *Return: no of string characters printed
 */

int print_rev(va_list args)
{
	char *s;
	int no_chars = 0;
	int length = 0;
	int i;

	s = va_arg(args, char*);

	if (s == NULL)
		return (0);

	length = _strlen(s);


	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		no_chars++;
	}

	return (no_chars);
}
