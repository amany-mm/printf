#include "main.h"

/**
 * get_op_func - selects the correct function to perform
 * the operation
 * @s: specifier letter
 * Return: int pointer to correct operation
*/
int (*get_op_func(char s))(va_list args)
{
	int i = 0;
	specifier_t specifier[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'p', print_pointer},
		{'r', print_rev},
		{'R', print_rot13_string},
		{'\0', NULL}
	};
	while (specifier[i].letter != '\0')
	{
		if (s == specifier[i].letter)
			return (specifier[i].func);
		i++;
	}
	return (NULL);
}


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
	int (*op_f)(va_list);

	if (!format || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (format[i] == '%' && format[i + 1] == ' ' && !format[i + 2])
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == ' ')
				i++;
			op_f = get_op_func(format[i + 1]);
			if (op_f)
			{
				counter += op_f(args);
				i++;
			}
			else
				_putchar('%'), counter++;
		}
		else
		{
			_putchar(format[i]);
			counter++;
		}
		i++;
	}
	va_end(args);
	return (counter);
}
