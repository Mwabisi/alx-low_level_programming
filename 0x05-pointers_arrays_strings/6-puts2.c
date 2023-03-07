#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be treated
 * return: void
 */
void puts2(char *str)
{
	int s = 0;

	for (; str[s] != '\0'; s++)
	{
		if ((s % 2) == 0)
		{
			_putchar(str[s]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
