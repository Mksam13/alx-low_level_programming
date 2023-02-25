#include "main.h"

/**
 * print_diagonal - printing a diagonal line
 * @n: diagonal size
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
				j++;
			}

			_putchar('\n');
			i++;
		}
	}
}
