#include "main.h"
/**
 * times_table - prints atable of numbers
 */
void times_table(void)
{
	int col, n;
	int row;

	for (row = 0; row < 10; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col < 10; col++)
		{
			n = (col * row);
			if ((n / 10) > 0)
			{
				_putchar((n / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((n % 10) + '0');
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
