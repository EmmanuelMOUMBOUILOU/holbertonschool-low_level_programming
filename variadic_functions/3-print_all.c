#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  print_all - prints anything, followed by a new line.
 * @format: the pointer
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	char *s;
	int len;

	va_list args;

	va_start(args, format);

	while (format && format[len])
	{
		switch (format[len])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				len++;
				continue;
		}
		if (format[len + 1] != '\0')
			printf(", ");
		len++;
	}
	printf("\n");
	va_end(args);
}
