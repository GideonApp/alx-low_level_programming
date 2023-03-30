#include "main.h"

/**
 * cap_string - a function that capitalizes words in astring
 * @s: string
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
		{
			i++;
		}
		if (s[i] == ' ' ||
				s[i] == '\t' ||
				s[i] == '\n' ||
				s[i] == ',' ||
				s[i] == '.' ||
				s[i] == ';' ||
				s[i] == '!' ||
				s[i] == '?' ||
				s[i] == '"' ||
				s[i] == '(' ||
				s[i] == ')' ||
				s[i] == '{' ||
				s[i] == '}')
		{
			s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}
	return (s);
}
