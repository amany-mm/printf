#include "main.h"

/**
 * main - Task 0 Tests
 * Return: 0 Always
 */
int main(void)
{
int len1, len2, len3, len4, len5, len6, len7, len8;

len1 = _printf("%r", "\nThis sentence is retrieved from va_args!");
len2 = printf("!sgra_av morf deveirter si ecnetnes sihT\n");
printf("%d\n", len1);
printf("%d\n", len2);


len3 = _printf("Complete the sentence: You %r nothing, Jon Snow.\n", "");
len4 = printf("Complete the sentence: You  nothing, Jon Snow.\n");
printf("%d\n", len3);
printf("%d\n", len4);


len5 = _printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");
len6 = printf("Complete the sentence: You wonk nothing, Jon Snow.\n");
printf("%d\n", len5);
printf("%d\n", len6);


len7 = _printf("%r", "\nThis sentence is retrieved from va_args!");
len8 = printf("!sgra_av morf deveirter si ecnetnes sihT\n");
printf("%d\n", len7);
printf("%d\n", len8);

return (0);
}
