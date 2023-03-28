#include "main.h"

/**
 * puts2 - prints a character followed by another line
 * @str: parameter
 */

void puts2(char *str)
{
	int n = 0;
	int l = 0;
	char *j = str;
	int i;

	while (*j != '\0')
	{
		j++;
		n++;
	}
	l = n - 1;
	for (i = 0; i <= l; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
