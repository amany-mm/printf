#include "main.h"

/**
 * main - Task 3 Tests, p pointer
 * Return: 0 Always
 */
int main(void)
{
	printf("========== NULL =======\n");

	_printf("_printf:[%p]\n", NULL);
	printf("printf:[%p]\n", NULL);

	printf("========== int number ======\n");

	_printf("_printf:[%p]\n", 5);
	printf("printf:[%p]\n", 5);

	printf("========== long unsigned int number ======\n");

	_printf("_printf:[%p]\n", 1000);
	printf("printf:[%p]\n", 1000);

	printf("========== long long unsigned int number ======\n");

	_printf("_printf:[%p]\n", INT_MAX);
	printf("printf:[%p]\n", INT_MAX);

	return (0);
}
