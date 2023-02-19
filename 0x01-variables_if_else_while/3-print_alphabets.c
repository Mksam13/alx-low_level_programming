#include <stdio.h>

/**
 * main - Printing lower case and upper case alphabets
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int a;
	int A;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
