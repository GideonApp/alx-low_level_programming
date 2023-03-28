#include "main.h"

/**
 * char *_strcpy - a function to copy an array to another
 * @dest: 1st prameter
 * @src: 2nd parameter
 * Return: always dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}
	for (; i > len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
