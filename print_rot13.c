#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to rotate
 * Return: NULL
*/
void rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] += 13;
			i++;
		}

		if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			s[i] -= 13;

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
	char *str, *s;
	int no_chars = 0;
	int length = 0;
	int i = 0;

	str = va_arg(args, char*);

	length = _strlen(str);
	s = malloc(sizeof(char) * (length + 1));

	if (s == NULL)
		return (0);

	for (i = 0; i < length; i++)
		*(s + i) = *(str + i);

	s[length] = '\0';

	rot13(s);

	no_chars = write(STDOUT_FILENO, s, length);
	free(s);

	return (no_chars);
}
