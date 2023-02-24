#include "main.h"

/**
 * print_numbers - print numbers 1-9 to the screen
 *
 * Return: 0
 */

void print_numbers(void)
{
	char c;

	c = '0';

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
