#include "main.h"

/**
 * puts_half - a function that prints half of a string followed by a new line
 * @str: parameter
 */

void puts_half(char *str)
{
	int len = 0;
	int len2;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		len2 = (len / 2);
	}
	else
	{
		len2 = (len + 1) / 2;
	}
	for (i = len2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
