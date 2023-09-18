#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int o1;
	int o2;

	o1 = _printf(NULL);
	o2 = printf(NULL);
	_printf("_printf:%d\n", o1);
	printf("printf:%d\n", o2);

	o1 = _printf("");
	o2 = printf("");
	printf("_printf %d\n", o1);
	printf("printf %d\n", o2);

	_printf("_printf:%d\n", 0);
	printf("printf:%d\n", 0);

	_printf("_printf:[%d, %i]\n", 20, 30);
	printf("printf:[%d, %i]\n", 20, 30);

	_printf("_printf %i %% Pass\n", 100);
	printf("printf: %i %% Pass\n", 100);

	_printf("_printf:%d\n", 1000);
	printf("printf:%d\n", 1000);

	_printf("_printf:%d\n", -500);
	printf("printf:%d\n", -500);

	_printf("_printf %d %s\n", 100, "Answer");
	_printf("printf %d %s\n", 100, "Answer");

	_printf("_printf:%d \n", INT_MAX);
	printf("printf:%d\n", INT_MAX);

	_printf("_printf:%d \n", INT_MIN); /* Fails min negative int*/
	printf("printf:%d \n", INT_MIN);

	return (0);
}
