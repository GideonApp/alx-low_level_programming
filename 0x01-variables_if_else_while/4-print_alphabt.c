#include <stdio.h>
/**
 * main - Entry point
 * except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		if (c != 'e' && c != 'z')
			putchar(c);
		else
	putchar('\n');
	return (0);
}
