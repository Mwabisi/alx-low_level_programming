#include "main.h"

/**
 * prints_numbers - Print the numbers since 0 up to 9
 * Return: The numbers since 0 up to 9
 */
void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
