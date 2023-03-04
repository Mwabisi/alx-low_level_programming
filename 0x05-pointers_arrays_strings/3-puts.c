#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: Always 0
 */

void _puchar(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	putchar('\n');
}

