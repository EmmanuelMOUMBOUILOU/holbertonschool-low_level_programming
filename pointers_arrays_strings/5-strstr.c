#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to beginning of found substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h && *h == *n)
		{
		h++;
		n++;
		}
		if (!*n)
			return (haystack);
		haystack++;
	}

	return (NULL);
}
