#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - Applies a given function to each element of an array
* @array: the array of integers
* @size: the size of the array
* @action: a pointer to the function to apply
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
