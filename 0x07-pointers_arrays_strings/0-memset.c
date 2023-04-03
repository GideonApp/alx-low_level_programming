#include "main.h"

/**
 * _memset - function that fills the first n bytes of the momery
 * area pointed by s
 * @s: pointer
 * @b: value
 * @n: number of times
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n);
{
	while (n > 0)
	{
		*s = b;
		b++;
		n--;
	}
	return (s)
}
