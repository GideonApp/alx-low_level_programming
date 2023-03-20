#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * base 16
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
