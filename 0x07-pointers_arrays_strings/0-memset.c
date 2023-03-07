#include "main.h"

/**
 * _memeset - entry point
 * @s: starting addess of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		si[i] = b;
		n--;
	}
	return (s);
}
