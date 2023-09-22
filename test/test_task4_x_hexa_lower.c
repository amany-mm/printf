#include "main.h"

/**
 * main - Task 4 Tests, x specifier value in hexadecimal lower case.
 * Return: 0 Always
 */
int main(void)
{
	int len, len2;
	long int l;

	len = _printf("%x\n", 1024);
	len2 = printf("%x\n", 1024);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("%x\n", -1024);
	len2 = printf("%x\n", -1024);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("%x\n", 0);
	len2 = printf("%x\n", 0);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("%x\n", UINT_MAX);
	len2 = printf("%x\n", UINT_MAX);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	l = UINT_MAX;
	l += 1024;
	len = _printf("%x\n", l);
	len2 = printf("%x\n", l);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("There is %x bytes in %x KB\n", 1024, 1);
	len2 = printf("There is %x bytes in %x KB\n", 1024, 1);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("%x - %x = %x\n", 2048, 1024, 1024);
	len2 = printf("%x - %x = %x\n", 2048, 1024, 1024);
	printf("%d\n", len);
	printf("%d\n", len2);
	return (0);
}
