#include "main.h"

/**
 * _isupper - Main fuction
 * @c: parameter to determine
 * Return: 0 Always
 */

int _isupper(int c)
{
	char results;

	results = c;

	if (results >= 'A' && results <= 'Z')
		return (1);
	else
		return (0);

	_putchar('\n');
}
