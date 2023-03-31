#include "main.h"

/**
 * rot13 -encodes astring using rot13
 * @str: string
 * Return: string
 */

char *rot13(char *str)
{
	int i, j;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (str[i] == s[j])
			{
				str[i] = code[j];
				break;
		}
	}
	return (str);
}
