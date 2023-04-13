#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: parameter
 * @max: parameter
 * Return: Null or array
 */

int *array_range(int min, int max)
{
	int *str;
	int i, l;

	str = malloc(sizeof(*str) * (max - min + 1));
	if (min > max)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++; min++)
	{
		str[i] = min;
	}
	return (str);
}
