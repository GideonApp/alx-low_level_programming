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
		if (c == 'q' || c == 'e')
			putchar(++c);
		else 
			putchar(c);
	putchar('\n');
	return (0);
}
