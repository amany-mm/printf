#include "main.h"

/**
 * main - Task 5 Tests, S specifier  prints \x, followed by
 * the ASCII code value in hexadecimal (upper case - always 2 characters)
 * Return: 0 Always
 */
int main(void)
{
	int len, len2 = 0;

	len = _printf("%S\n", "No special character.");
	len2 = printf("No special character.\n");
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("%S", "No special character.");
	printf("\n");
	len2 = printf("No special character.");
	printf("\n");
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("%S", "\n");
	printf("\n");
	len2 = printf("\\x0A");
	printf("\n");
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	printf("\n");
	len2 = printf("\\x01\\x02\\x03\\x04\\x05\\x06\\x07");
	printf("\n%d\n", len);
	printf("%d\n", len2);
	printf("======================================\n");
	len = _printf("some non-printable characters\n%S\n", "Sure:\x1F\x7F\n");
	len2 = printf("some non-printable characters\nSure:\\x1F\\x7F\\x0A\n");
	printf("%d\n", len);
	printf("%d\n", len2);
	len = _printf("");
	len2 = printf("");
	printf("\n%d\n", len);
	printf("%d\n", len2);
	len = _printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
	len2 = printf("- What did you say?\n- %s\n- That's what I thought.\n", "");
	printf("%d\n", len);
	printf("%d\n", len2);
	return (0);
}
