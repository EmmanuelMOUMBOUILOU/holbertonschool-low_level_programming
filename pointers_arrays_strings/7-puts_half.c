#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string,
 * @str: The string to print from.
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int h;
	int start;

	while (str[len] != '\0')
	{
		len++;
	}
	h = len / 2;
	start = len - h;

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
