#include "main.h"

/**
 * _strlen_recursion - Calcul the length of a string.
 * @s: the string
 *
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

