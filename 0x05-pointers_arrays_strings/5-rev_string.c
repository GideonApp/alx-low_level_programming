#include "main.h"

/**
 * rev_string - a function that revese a string
 * @s: parameter
 */

void rev_string(char *s)
{
	int cont[] = {0};
	int i = 0;
	int j;
	int n;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		cont[j] = s[i];
	}
	for (n = 0; n <= j; n++)
	{
		s[n] = cont[n];
	}
}
