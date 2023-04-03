#include "main.h"

/**
 * _memset - function that fills the first n bytes of the momery
 * area pointed by s
 * @s: pointer
 * @b: value
 * @n: number of times
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
