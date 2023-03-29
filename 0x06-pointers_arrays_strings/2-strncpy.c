#include "main.h"

/**
 * char *_strncpy - function that copies a count to an array
 * @dest: 1st array
 * @src: 2nd array
 * @n: count
 * Return: Always dest (Success)
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
