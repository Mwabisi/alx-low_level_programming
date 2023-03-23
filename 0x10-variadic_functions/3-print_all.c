#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to be function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	var_list list;

	var_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sep, var_arg(list, int));
				break;
			case 'i':
				printf("%s%d", sep, var_arg(list, int));
				break;
			case 'f':
				printf("%s%f", sep, var_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
				default
					i++;
				continue;
			}
			sep = ",";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
