#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
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
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < i; k++)
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
