#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: The string
 * @src: The string
 * @n: The integer
 *
 * Return:  A pointer to the destination buffer dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
