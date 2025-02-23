#include <ctype.h>
#include "main.h"

/**
 * times_table - imprime la table de multiplication par 9
 */
void times_table(void)
{
	int x;
	int y;
	int res;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			res = (x * y);
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res < 10)
			{
				if (y != 0)
				{
					_putchar(' ');
				}
				_putchar(res + '0');
			}
			else
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
