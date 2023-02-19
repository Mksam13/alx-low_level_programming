#include <stdio.h>

/**
 * main - Printing alphabets in Lower case
 *
 * Return: 0 Always (Succes)
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
