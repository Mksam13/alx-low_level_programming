#include "main.h"

/**
 * times_table - printing 9 times table
 */

void times_table(void)
{
	int d;
	int b;
	int c;
	
	b = 0;
	while ( b < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = b * d;
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(c + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			d++;
		}
		_putchar('\n');
		b++;
	}
}


