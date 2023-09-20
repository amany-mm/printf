#include "main.h"

/**
 * main - Task 3 Tests, R specifier  prints the rot13'ed string
 * Return: 0 Always
 */
int main(void)
{
	char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13)";
	char *p;

	p = s;

	_printf("_printf:[%R]\n", p);
	/**
	 * expected output:
	 * EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13)
	*/

	_printf("_printf:[%R]\n", p);

	/**
	 * expected output
	 * "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13)
	*/

	_printf("_printf:[%R]\n", p);
	/**
	* expected output
		* EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13)
	*/
	return (0);
}
