#include "main.h"

/**
 * print_diagonal - a funtion that prints a diagonal line
 * @n: parameter describing the height
 */

void print_diagonal(int n)
{
	int i, m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (m = 1; m <= i; m++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
