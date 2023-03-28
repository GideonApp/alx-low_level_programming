#include "main.h"

/**
 * _atoi - converts string to int
 * @s: parameter
 * Return: int
 */

int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int e = 0;
	int f = 0;
	int g = 0;

	while (s[e] != '\0')
	{
		e++;
	}
	while (a < e && f == 0)
	{
		if (s[a] == '-')
		{
			++b;
		}
		if (s[a] >= '0' && s[a] <= '9')
		{
			g = s[a] - '0';
			if (b % 2)
			{
				g = -g;
			}
			c = c * 10 + g;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
			{
				break;
			}
			f = 0;
		}
		a++;
	}
	if (f == 0)
	{
		return (0);
	}
	return (c);
}
