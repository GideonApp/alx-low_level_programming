#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: parameter
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	for (i = len; i >= 0; i--)
	{
		_putchar(str[i]);
	}
}
