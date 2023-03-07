#include "main.h"
#include <stdio>

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 * Return: void
 */

void print_rev(char *s)
{
	int _length = strlen(s);

	while (_length--)
	{
		_putchar(*(s + _length));
	}
	_putchar(10);
}
