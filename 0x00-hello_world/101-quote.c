#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * print without printf or puts
 * Return: Always 1 (Success)
 */

int main(void)
{
	write(2,
	"and that of art is useful\" - Dora Kopar, 2015-10-19\n", 59);
	return (1);
}