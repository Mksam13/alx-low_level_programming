#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Printing to display the LastDigit(ld) of n with the following conditions:
 * if ld is greater than 5, print ld and is grater than 5
 * else if ld is 0, printf ld and is 0
 * else if id is less than 6 and not 0, printf and is less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ld;
	ld = n % 10;
	printf("Last digit of %d is %d ", n, ld);
	if (ld > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (ld == 0)
	{
		printf("and is 0\n");
	}
	else if (ld < 6 &&! 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}