#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int a;
	int b;

	a = '0';
	b = 'a';
	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
