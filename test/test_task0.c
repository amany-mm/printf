#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	/* Empty case */
	len = _printf("");
	len2 = printf("");
	_printf("_printf:[%d]\n", len);
	printf("printf:[%d]\n", len2);

	/* NULL case */
	len = _printf(NULL);
	len2 = printf(NULL);
	_printf("_printf:[%d]\n", len);
	printf("printf:[%d]\n", len2);

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("_printf:[%d, %i]\n", len, len);
	printf("printf:[%d, %i]\n", len2, len2);


	_printf("_printf[%%]\n");
	printf("printf:[%%]\n");


	_printf("Test mix specifiers %i %% Pass\n", 100);
	printf("Test mix specifiers %i %% Pass\n", 100);

	_printf("_printf:[%c]\n", 'H');
	printf("printf:[%c]\n", 'H');

	_printf("_printf:[%s]\n", "I am a string !");
	printf("printf:[%s]\n", "I am a string !");

	return (0);
}