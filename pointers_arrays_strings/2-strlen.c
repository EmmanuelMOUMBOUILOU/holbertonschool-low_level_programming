#include "main.h"
#include <string.h>

/**
 * _strlen - swaps the values of two integers.
 * @s: the character to be checked
 *
 * Return: Nothing
 */
int _strlen(char *s)
{
	int size;

	size = 0;

	while (s[size] != 0)
		size++;
	return (size);
}
