#include "main.h"

/**
 * _printf - custom printf
 * @format: character string
 * Return: no. of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int counter = 0;

	specifier_t specifier[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_int},
		{'d', print_int},
		{'\0', NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(args, format);
	if ((format[0] == '%') && (format[1] == '\0'))
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
		}
		else if (format[i] == '%' && format[i + 1] == specifier[i].letter)
		{
			specifier[i].func(args);
			counter++;
		}
		i++;
	}
	va_end(args);
	return (counter);
}
