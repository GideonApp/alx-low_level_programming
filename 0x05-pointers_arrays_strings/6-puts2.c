#include "main.h"

/**
 * puts2 - prints a character followed by another line
 * @str: parameter
 */

void puts2(char *str)
{
	int n;
	int l = 0;

	while (str[0] != '\0')
	{
		l++;
	}
	for (n = 0; n < l; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
