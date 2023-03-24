#include "main.h"

/**
 * print_line - prints a straight line
 * @n: length of the line
 */

void print_line(int n)
{
	int i;

	for ( i = 1; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
