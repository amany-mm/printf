#include "main.h"

/**
 * main - Task 4 Tests, x specifier value in hexadecimal lower case.
 * Return: 0 Always
 */
int main(void)
{
	int len, len2;
	long res, l;

	res = INT_MAX;
	res *= 2;
	len = _printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);
	len2 = printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);
	printf("%d\n", len);
	printf("%d\n\n", len2);
	len = _printf("%X\n", 1024);
	len2 = printf("%X\n", 1024);
	printf("%d\n", len);
	printf("%d\n\n", len2);
	len = _printf("%X\n", -1024);
	len2 = printf("%X\n", -1024);
	printf("%d\n", len);
	printf("%d\n\n", len2);
	len = _printf("%X\n", 0);
	len2 = printf("%X\n", 0);
	printf("%d\n", len);
	printf("%d\n\n", len2);
	len = _printf("%X\n", UINT_MAX);
	len2 = printf("%X\n", UINT_MAX);
	printf("%d\n", len);
	printf("%d\n\n", len2);
	l = UINT_MAX;
	l += 1024;
	len = _printf("%X\n", l);
	len2 = printf("%X\n", l);
	printf("%d\n", len);
	printf("%d\n\n", len2);
	len = _printf("There is %X bytes in %X KB\n", 1024, 1);
	len2 = printf("There is %X bytes in %X KB\n", 1024, 1);
	printf("%d\n", len);
	printf("%d\n\n", len2);
	len = _printf("%X - %X = %X\n", 2048, 1024, 1024);
	len2 = printf("%X - %X = %X\n", 2048, 1024, 1024);
	printf("%d\n", len);
	printf("%d\n", len2);
	return (0);
}
