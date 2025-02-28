#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string.
 * @s: A pointer to the string
 */
void rev_string(char *s)
{
	int deb = 0;
	int fin = 0;
	int res;

	while (s[fin] != '\0')
	{
		fin++;
	}
	fin--;

	while (deb < fin)
	{
		res = s[deb];
		s[deb] = s[fin];
		s[fin] = res;

		deb++;
		fin--;
	}
}
