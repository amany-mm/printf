#include "main.h"

/**
 * main - Task 3 Tests, R specifier  prints the rot13'ed string
 * Return: 0 Always
 */
int main(void)
{
	int len1, len2 = 0;
	char *str1, *str2;

	str1 = "Guvf fragrapr vf ergevrirq sebz in_netf!\n";
	len1 = _printf("%R", str1);
	len2 = printf("This sentence is retrieved from va_args!\n");

	printf("%d\n", len1);
	printf("%d\n", len2);

	printf("======================================\n");
	str2 = "Complete the sentence: You %R nothing, Jon Snow.\n";

	len1 = _printf(str2, "xabj");
	len2 = printf("Complete the sentence: You know nothing, Jon Snow.\n");

	printf("%d\n", len1);
	printf("%d\n", len2);

	printf("======================================\n");
	len1 = _printf(str2, "");
	len2 = printf("Complete the sentence: You  nothing, Jon Snow.\n");

	printf("%d\n", len1);
	printf("%d\n", len2);

	return (0);
}
