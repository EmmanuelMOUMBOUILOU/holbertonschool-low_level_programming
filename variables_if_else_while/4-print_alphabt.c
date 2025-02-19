#include <stdio.h>

/**
 * main - prints the alphabet in lowercase all the letters except q and e
 * Return: Always 0.
 */

int main(void)
{
	char c;

	for (c = 'a'; c < 'e'; c++)
		putchar(c);

	for (c = 'f'; c < 'q'; c++)
		putchar(c);

	for (c = 'r'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
