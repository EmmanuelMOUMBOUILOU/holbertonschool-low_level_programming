#include <stdio.h>

#include <stdlib.h>

/**
 * main - Prints the size of various types
 * Return: Always 0.
 */
int main(void)

{

printf("Size of an int : %zu octets\n", sizeof(int));
printf("Size of a float : %zu octets\n", sizeof(float));
printf("Size of a long int : %zu octets\n", sizeof(long int));
printf("Size of a long long int : %zu octets\n", sizeof(long long int));
printf("Size of a char : %zu octets\n", sizeof(char));

return (0);

}
