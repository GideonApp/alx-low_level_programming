#include "main.h"

/**
 * _memcpy - function that copies n bytes from a src to dst
 * @dest: destination
 * @src: source
 * @n:
 * number of times
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
