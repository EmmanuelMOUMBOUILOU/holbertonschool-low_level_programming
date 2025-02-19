#include <stdio.h>

/**
 * main - prints all single digit numbers and can only use the putchar function
 * Return: Always 0.
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
