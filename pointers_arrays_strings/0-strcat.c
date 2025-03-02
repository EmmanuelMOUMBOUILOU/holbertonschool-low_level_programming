#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: The string
 * @src: The string
 *
 * Return: A pointer to the destination buffer dest.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';

	return dest;
}
