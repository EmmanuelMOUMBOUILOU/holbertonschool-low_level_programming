#include "main.h"





char *create_array(unsigned int size, char c)
{
	unsigned int size;
	int i;
	int * tb = malloc(size * sizeof(int));

	if (size == 0)
		return (NULL)
	if (tb == NULL)
		return (NULL)

	for (i = 0; i < size; i++)
	{
		tb[i] = c;
	}

	return (tb);
}
