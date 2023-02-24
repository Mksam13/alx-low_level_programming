#include "main.h"

/**
 * print_most_numbers - print 1 - 9 with 2 and 4
 *
 * Return: 0 Always
 */

void print_most_numbers(void)
{
	char c;

	c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		_putchar(c);
	}
	_putchar('\n');
}
