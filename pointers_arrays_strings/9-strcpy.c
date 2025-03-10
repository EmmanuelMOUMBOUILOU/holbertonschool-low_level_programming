#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: The destination buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination buffer dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
