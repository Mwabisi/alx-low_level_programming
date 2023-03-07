#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */

void rev_string(char *s)
{
	char _reverse = s[0];
	int _count = 0;
	int n;

	while (s[_count] != '\0')
	{
		_count++;
	}
	for (n = 0; n < _count; n++)
	{
		_count--;
		_reverse = s[_count];
		s[_count] = _reverse;
	}
}
