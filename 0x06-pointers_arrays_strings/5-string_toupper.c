#include "main.h"

/**
 * string_toupper - changes lower case to upper in astring
 * @Str: array
 * Return: Str
 */

char *string_toupper(char *Str)
{
	int i = 0;

	while (Str[i] != '\0')
	{
		if (Str[i] >= 'a' && Str[i] <= 'z')
		{
			Str[i] = Str[i] - 32;
		}
		i++;
	}
	return (Str);
}
