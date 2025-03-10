#include <stdlib.h>
#include "main.h"

/**
* create_array - Creates an array of char
* @size : Size of the array
* @c : Character to initialize
*
* Return: Pointer to the array, or NULL on failure
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *tb = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (tb == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		tb[i] = c;
	}

	return (tb);
}
