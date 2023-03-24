#include "main.h"

/**
 * more_numbers - 0-14 in 10 lines
 */

void more_numbers(void)
{
	int i, m;

	for (i = 0; i < 10; i++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m >= 10)
			{
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
