#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on format.
 * @format: A string of format characters to specify the types of arguments.
 * @...: The arguments to be printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;
	const char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", sep, va_arg(args, int));
			sep = ", ";
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", sep, va_arg(args, int));
			sep = ", ";
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", sep, va_arg(args, double)); /* float promoted to double */
			sep = ", ";
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s)
				printf("%s%s", sep, s);
			else
				printf("%s(nil)", sep);
			sep = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

