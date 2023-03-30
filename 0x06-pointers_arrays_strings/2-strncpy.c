#include "main.h"

/**
 * char *_strncpy - function that copies a count to an array
 * @dest: 1st array
 * @src: 2nd array
 * @n: count
 * Return: Always dest (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
