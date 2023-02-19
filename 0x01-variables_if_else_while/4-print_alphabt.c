#include <stdio.h>

/**
 * main - printing alphabets except 'q' and 'e'
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		if ((a != 'q' && a != 'e') && a <= 'z')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
