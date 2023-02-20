#include <stdio.h>

/**
 * main - Printing numbers seperated by comma's
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = '0';
	b = ',';
	c = ' ';
	while (a < '9')
	{
		putchar(a);
		a++;
		if (a <= '8')
		{
			putchar(b);
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
