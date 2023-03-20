#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
			putchar(c);
		else
		{
		}
	putchar('\n');
	return (0);
}
