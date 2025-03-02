#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: Array of integers
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int deb = 0;
	int fin = n - 1;
	int res;

	while (deb < fin)
	{
		res = a[deb];
		a[deb] = a[fin];
		a[fin] = res;

		deb++;
		fin--;
	}
}
