#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * 0-9
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
