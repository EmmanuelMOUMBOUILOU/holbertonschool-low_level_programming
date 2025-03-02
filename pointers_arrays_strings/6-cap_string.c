#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int n = 1;

	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (n && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
			n = 0;
		}
		else if (strchr(separators, str[i]) != NULL)
		{
			n = 1;
		}
		else
		{
			n = 0;
		}
		i++;
	}
	return (str);
}
