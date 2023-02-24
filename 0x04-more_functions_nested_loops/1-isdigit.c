#include "main.h"

/**
 * _isdigit - check if argumant is digit
 * @c: argument to be checked
 * Return: 0 Always
 */

int _isdigit(int c)
{
	char d;

	d = c;

	if (d >= '0' && d <= '9')
		return (1);
	else
		return (0);
}
