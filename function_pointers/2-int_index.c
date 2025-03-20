#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: The array to search
 * @size: The number of elements in the array
 * @cmp: The function used to compare values
 *
 * Return: the index of the first matching element, or -1 if none
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

