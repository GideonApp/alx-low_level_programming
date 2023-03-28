#include "main.h"

/**
 * rev_string - a function that revese a string
 * @s: parameter
 */

void rev_string(char *s)
{
	int val = s[0];
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		val = s[j];
		s[j] = s[i];
		s[i] = val;
	}
}
