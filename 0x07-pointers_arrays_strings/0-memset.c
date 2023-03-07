#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: byte
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned in n)
{
	unsigned in i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
