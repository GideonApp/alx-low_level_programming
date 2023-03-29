#include "main.h"

/**
 * char *_strcat - a function which concatenates 2 strings
 * @dest: first array
 * @src: second array
 * Return: Always dest (Success)
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	while (src[len1] != '\0')
	{
		len1++;
	}
	while (dest[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i <= len1; i++)
	{
		dest[len2 + i] = src[i];
	}
	return (dest);
}
