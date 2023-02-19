#include <stdio.h>

/**
 * main - Printing alphabets in reverse order
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int a;

	a = 'z';
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
