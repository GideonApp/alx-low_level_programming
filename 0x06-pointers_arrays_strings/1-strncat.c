#include "main.h"

/**
 * char *_strncat - appends up to n element of an array to another
 * @dest: 1st array
 * @src: 2nd array
 * @n: size to be appended
 * Return: Always dest (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
