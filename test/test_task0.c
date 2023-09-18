#include "main.h"
#include "limits.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

	printf(NULL);
	_printf(NULL);

	printf("--- \n");
	_printf("---\n");

	printf("");
	_printf("");

	_printf("_printf[%%]\n");
	printf("printf:[%%]\n");

	_printf("_printf:[%c]\n", 'H');
	printf("printf:[%c]\n", 'H');

	_printf("_printf:[%s]\n", "I am a string !");
	printf("printf:[%s]\n", "I am a string !");

	_printf("_printf:%\n");
	printf("printf:%\n");

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
