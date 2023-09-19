#include "main.h"

/**
 * convert_int_to_binary - Convert unsigned int number to binary
 * @int_num: unsigned int number
 * @binary_size: binary number size
 * Return: s pointer of binary allocated memory
*/
char *convert_int_to_binary(unsigned int int_num, int binary_size)
{
	char *str, binary_num;
	int i, reminder;

	str = malloc(sizeof(char) * (binary_size + 1));
	if (str == NULL)
		return (str);
	for (i = binary_size - 1; i >= 0 ; i--)
	{
		reminder = int_num % 2;
		binary_num = '0' + reminder;
		str[i] = binary_num;
		int_num = int_num / 2;
	}

	str[binary_size] = '\0';
	return (str);
}


/**
 * print_binary - print binary representation given unsigned integer number
 * @args: variadic arguments
 * Return: no. of binary digits to print
*/
int print_binary(va_list args)
{
	char *str, binary_num;
	unsigned int int_num, temp, binary_counter;

	int_num = va_arg(args, unsigned int);
	temp = int_num;
	binary_counter = 0;

	if (int_num == 0 || int_num == 1)
	{
		binary_num = int_num + '0';
		_putchar(binary_num);
		return (1);
	}

	while (temp != 0)
	{
		temp = temp / 2;
		binary_counter++;
	}
	str = convert_int_to_binary(int_num, (binary_counter));
	if (str == NULL)
		return (0);

	binary_counter =  write(STDOUT_FILENO, str, binary_counter);
	free(str);

	return (binary_counter);
}
