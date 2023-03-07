#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

