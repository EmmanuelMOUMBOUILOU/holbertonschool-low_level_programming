#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string,
 * @str: The string to print from.
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int start = (len + 1) / 2;
	int i;

	for (i = start; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
