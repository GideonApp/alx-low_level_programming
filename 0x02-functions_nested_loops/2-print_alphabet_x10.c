#include "main.h"

/**
 * print_alphabet_x10 - print alphabets i 10 different line
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
		char c;

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		i++;
		_putchar('\n');
}
