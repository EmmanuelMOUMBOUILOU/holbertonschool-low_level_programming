#include <stdio.h>

/**
 * main - prints the alphabet in lowercase all the letters except q and e
 * Return: Always 0.
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c < 'e')
			putchar(c);
		else if (c < 'q')
			putchar(c);
		else
			putchar(c);
	putchar('\n');
	return (0);
}
