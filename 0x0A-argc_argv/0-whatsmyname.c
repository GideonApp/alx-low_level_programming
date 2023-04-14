#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - a program that prints its name followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */

int main(int argc__attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
