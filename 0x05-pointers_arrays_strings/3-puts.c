#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line to stdout.
 * @str: The string to print
 * Return: Always 0
 */

void _puchar(char *str)
{
	for (; str != '\0'; str++)
	{
		_putchar(*str++);
	}
	putchar('\n');
}

