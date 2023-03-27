#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: parameter
 */

void print_rev(char *s)
{
	int i, j, size;

	i = 0;

	while (i != '\0')
	{
		i++;
	}

	size = i;

	for (j = size - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
