#include <stdio.h>

/**
* main - Displays the number of arguments
* @argc: Number of arguments
* @argv: Array of arguments (unused)
*
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
