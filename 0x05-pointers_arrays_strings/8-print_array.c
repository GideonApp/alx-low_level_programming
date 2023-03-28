#include "main.h"

/**
 * print_ array - print element of an array f.f by a comma and space
 * @a: parameter
 * @n: parameter
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i == (n - 1))
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d ,", a[i]);
		}
}
