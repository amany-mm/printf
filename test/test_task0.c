#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len1, len2;

	len1 = printf(NULL);
	len2 = _printf(NULL);
	printf("len1 %d\n", len1);
	printf("len2 %d\n", len2);
	printf("==================\n");
	printf("");
	_printf("");
	printf("==================\n");
	_printf("_printf[%%]\n");
	printf("printf:[%%]\n");
	len1 =  _printf("\n");
	len2 =  printf("\n");
	printf("len1 %d\n", len1);
	printf("len2 %d\n", len2);
	_printf("_printf:[%c]\n", 'H');
	printf("printf:[%c]\n", 'H');
	_printf("_printf:[%s]\n", "I am a string !");
	printf("printf:[%s]\n", "I am a string !");
	printf("==================\n");
	len1 = _printf("% ");
	len2 = printf("% ");
	printf("len1 %d\n", len1);
	printf("len2 %d\n", len2);
	printf("==================\n");
	_printf("% ");
	printf("% ");
	printf("==================\n");
	_printf("_printf[%%]\n");
	printf("printf:[%%]\n");
	_printf("_printf:[% c]\n", 'T');
	printf("printf:[% c]\n", 'T');
	_printf("_printf:[%r]\n");
	printf("printf:[%r]\n");
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("_printf:[%c]\n", CHAR_MAX);
	printf("printf:[%c]\n", CHAR_MAX);
	return (0);
}
