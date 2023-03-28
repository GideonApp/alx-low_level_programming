#include "main.h"

/**
 * puts_half - a function that prints half of a string followed by a new line
 * @str: parameter
 */

void puts_half(char *str)
{
	int len = 0;
	int len2 = 0;
	char *j = str;
	int i;

	while (*j != '\0')
	{
		j++;
		len++;
	}
	len2 = (len - 1) / 2;
	for (i = 0; i <= len2; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
