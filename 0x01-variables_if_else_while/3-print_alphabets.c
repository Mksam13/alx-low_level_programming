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

	for (a = 'a', A = 'A'; (a <= 'z') & (A <= 'Z'); a++, A++)
	{
		putchar(a);
		putchar(A);
	}
	putchar('\n');
	return (0);
}
