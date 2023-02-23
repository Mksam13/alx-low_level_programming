#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		a = -a;
	}
	_putchar('0' + a);
	return (a);
}
