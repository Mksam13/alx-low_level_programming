#include "main.h"

/**
 * _isupper - Main fuction
 * @c: parameter to determine
 * Return: 0 Always
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		_putchar(0 + '0');
	else if (c >= 'A' && c <= 'Z')
		_putchar(1 + '0');
	_putchar('\n');
	return (0);
}
