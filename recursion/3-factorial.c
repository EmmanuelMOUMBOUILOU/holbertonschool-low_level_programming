#include "main.h"

/**
* factorial - Calculates the factorial of a number
* @n: The number
*
* Return: The factorial of n or -1 if error
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
