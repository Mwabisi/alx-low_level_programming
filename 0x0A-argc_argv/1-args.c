#include <stdio.h>

/**
 * main -prints the number of arguments passed
 * @args: argument counte
 * @argv: argument vector
 * Return: 0
 *
 */

int main(int args, char *argv[])
{

	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
