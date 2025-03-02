#include <stdio.h>
#include "main.h"

/**
 * _strncpy -  copies a string.
 * @dest: The string
 * @src: The string
 * @n: The integer
 *
 * Return:  A pointer to the destination buffer dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	for (; a < n; a++)
	{
		dest[a] = '\0';
	}

	return (dest);
}
