#include "main.h"

/**
 * print_sign - printing + is positve and - is neg
 * @n: the int to check
 * Return: 1 and print + if n is positve
 * 0 and print 0 if n is zero
 * -1 and prints - if is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
