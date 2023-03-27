#include "main.h"

/**
 * puts2 - prints a character followed by another line
 * @str: parameter
 */

void puts2(char *str)
{
	int n;

	for (n = 0; n != 0; n++)
	{
		_putchar(str[n]);
		_putchar('\n');
	}
}
