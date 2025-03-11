#include <stdlib.h>
#include "main.h"

/**
* _calloc - Allocates memory for an array and initializes to zero
* @nmemb: Number of elements
* @size: Size in bytes of each element
*
* Return: Pointer to the deployed memory or NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *grid;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	grid = malloc(nmemb * size);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		grid[i] = 0;
	}

	return (grid);
}

