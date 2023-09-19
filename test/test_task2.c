#include "main.h"

/**
 * main - Task 2 Tests
 * Return: 0 Always
 */
int main(void)
{	/**
	* printf doesn't have b specifier so we match
	* expected output binary
	*/

	printf("========== unsigned int number =======\n");

	_printf("%b\n", 98);
	printf("%s\n", "1100010");

	printf("========== long unsigned int number ======\n");


	_printf("%b\n", 10000);
	printf("%s\n", "10011100010000");


	printf("========== long  long unsigned int number =====\n");

	_printf("%b\n", INT_MAX);
	printf("%s\n", "1111111111111111111111111111111");


	return (0);
}
