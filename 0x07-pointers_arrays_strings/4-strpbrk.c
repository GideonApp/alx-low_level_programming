#include "main.h"

/**
 * _strpbrk - prints similar characters
 * @s: 1st string
 * @accept: 2nd string
 * Return: always n;
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
