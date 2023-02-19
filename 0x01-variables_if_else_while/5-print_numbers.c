#include <stdio.h>

/**
*main - printing to screen numbers 0 to 9
*
*Return: 0 Always (Success)
*/
int main(void)
{
	int a;

	a = 0;
	while (a < 10)
{
	printf("%d", a);
	a++;
}
	putchar('\n');
	return (0);
}
