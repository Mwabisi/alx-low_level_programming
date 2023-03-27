#include "variadic_functions.h"


/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between 2 numbers
 * @n: the number of parameter
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{

	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	var_end(ap);
}
