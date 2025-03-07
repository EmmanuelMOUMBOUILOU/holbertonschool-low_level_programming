#include "main.h"

/**
* find_sqrt - Finds the square root of a number
* @n: The number
* @i: The current root test
*
* Return: The square root or -1 if not found
*/
int find_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (find_sqrt(n, i + 1));
}

/**
* _sqrt_recursion - Finds the square root of a number
* @n: The number
*
* Return: The square root or -1 if no natural root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}
