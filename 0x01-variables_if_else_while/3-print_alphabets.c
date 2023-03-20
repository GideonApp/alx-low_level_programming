#include <stdio.h>
/**
 * main - Entry piont
 * uppercase and lower case
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char c, x;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (x = 'A'; x <= 'Z'; ++x)
		putchar(x);
	putchar('\n');
	return (0);
}
