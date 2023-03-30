#include "main.h"

/**
 * reverse_array - function which reveses an array
 * @a: array
 * @n: length of array
 */

void reverse_array(int *a, int n)
{
	int i, cont;

	for (i = 0; i < n--; i++)
	{
		cont = a[i];
		a[i] = a[n];
		a[n] = cont;
	}
}
