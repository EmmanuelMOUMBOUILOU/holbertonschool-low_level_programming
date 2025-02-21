#include "main.h"
#include <ctype.h>

/**
 * print_sign -  prints the sign of a number
 * @n: the character to be checked
 *
 * Return: 1 if prints + or, -1 if ptints -,  0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
