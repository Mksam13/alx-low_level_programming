#include <stdio.h>

/**
 * main - Printing to display numbers 0-9 using only putchar
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
