#include "main.h"

/**
 * print_square -  prints a square, followed by a new line.
 * @size: the integer to be c
 *
 * Return: Nothing
 *
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
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
