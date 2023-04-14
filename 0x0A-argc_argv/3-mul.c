#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		mul *= _atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
