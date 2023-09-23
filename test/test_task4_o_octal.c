#include "main.h"

/**
 * main - Task 4 Tests, o specifier octal
 * Return: 0 Always
 */
int main(void)
{
	int len, len2;
	long int l;

	len = _printf("%o\n", 1024);
	len2 = printf("%o\n", 1024);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("%o\n", -1024);
	len2 = printf("%o\n", -1024);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("%o\n", 0);
	len2 = printf("%o\n", 0);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("%o\n", UINT_MAX);
	len2 = printf("%o\n", UINT_MAX);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	l = UINT_MAX;
	l += 1024;
	len = _printf("%o\n", l);
	len2 = printf("%o\n", l);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("There is %o bytes in %o KB\n", 1024, 1);
	len2 = printf("There is %o bytes in %o KB\n", 1024, 1);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("%o - %o = %o\n", 2048, 1024, 1024);
	len2 = printf("%o - %o = %o\n", 2048, 1024, 1024);
	printf("%d\n", len);
	printf("%d\n", len2);
	return (0);
}
