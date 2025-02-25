#include "main.h"

/**
 * print_square -  prints a square, followed by a new line.
 * @size: the integer to be c
 *
 * Return: Nothing
 *
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
