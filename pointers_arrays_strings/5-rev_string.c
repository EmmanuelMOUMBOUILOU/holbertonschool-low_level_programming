#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: A pointer to the string
 */
void rev_string(char *s)
{
	int deb;
	int fin = _strlen(s) - 1;
	int res;

	deb = 0;

	while (deb < fin)
	{
		res = s[deb];
		s[deb] = s[fin];
		s[fin] = res;

		deb++;
		fin--;
	}
}
