#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Vérifie si une chaîne contient uniquement des chiffres
 * @s: La chaîne à vérifier
 *
 * Return: 1 si vrai, 0 sinon
 */

int is_number(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
* main - Adds positive numbers
* @argc: Number of arguments
* @argv: Array of arguments
*
* Return: 0 on success, 1 on error
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
