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
	char c;
	int i;
	float f;
	char *s;
	int len;

	va_list args;

	va_start(args, format);

	while (format[len])
	{
		if (format[len] == 'c')
		{
			c = va_arg(args, int);
			printf("%c, ", c);
		}
		else if (format[len] == 'i')
		{
			i = va_arg(args, int);
			printf("%d, ", i);
		}
		else if (format[len] == 'f')
		{
			f = va_arg(args, double);
			printf("%f, ", f);
		}
		else if (format[len] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		len++;
	}
	va_end(args);
	printf("\n");
}
