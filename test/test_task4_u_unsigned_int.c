#include "main.h"

/**
 * main - Task 4 Tests, u specifier unsigned integer
 * Return: 0 Always
 */
int main(void)
{
	int len, len2;
	long int l;

	len = _printf("%u\n", 1024);
	len2 = printf("%u\n", 1024);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("%u\n", -1024);
	len2 = printf("%u\n", -1024);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("%u\n", 0);
	len2 = printf("%u\n", 0);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	l = UINT_MAX;
	l += 1024;
	len = _printf("%u\n", l);
	len2 = printf("%u\n", l);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");

	len = _printf("There is %u bytes in %u KB\n", 1024, 1);
	len2 = printf("There is %u bytes in %u KB\n", 1024, 1);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("%u - %u = %u\n", 2048, 1024, 1024);
	len2 = printf("%u - %u = %u\n", 2048, 1024, 1024);
	printf("%d\n", len);
	printf("%d\n", len2);
	return (0);
}
