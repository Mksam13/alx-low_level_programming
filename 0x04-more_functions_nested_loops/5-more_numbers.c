#include "main.h"

/**
 * more_numbers - printing 1-14 10 times
 */

void more_numbers(void)
{
	int a;
	int b;
	char c;
	char d;

	a = 0;
	while (a < 11)
	{
		b = 0;
		while (b <= 14)
		{
			c = b / 10;
			d = b % 10;
			if (b >= 10)
			{
				_putchar(c + '0');
			}
			_putchar(d + '0');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
