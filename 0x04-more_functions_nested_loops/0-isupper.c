#include "main.h"

/**
 * _isupper - Main fuction
 * @c: parameter to determine
 * Return: 0 Always
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		_putchar(1 + '0');
	else
		_putchar(0 + '0');

	_putchar('\n');
	return (0);
}
