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

	while (src[len] != '\0')
	{
		len++;
		dest[len] = src[len];
	}
	dest[len] = '\0';
	return (dest);
}
