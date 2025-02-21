#include "main.h"
#include <ctype.h>

/**
 * _abs - computes the absolute value of an integer.
 * @n: The integer whose absolute value we want.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
