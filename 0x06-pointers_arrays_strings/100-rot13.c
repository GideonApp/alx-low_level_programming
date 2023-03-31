#include "main.h"

/**
 * rot13 -encodes astring using rot13
 * @str: string
 * Return: string
 */

char *rot13(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		while ((str[j] >= 'a' && str[j] <= 'z') ||
				(str[j] >= 'A' && str[j]))
		{
			if (str[j] <= 'M' || str[j] <= 'm')
			{
				str[j] = str[j] - 13;
			}
			else
			{
				str[j] = str[j] + 13;
			}
			j++;
		}
	}
	return (str);
}
