#include "main.h"

/**
 * _islower - Returns 1 if c is lower and 0 otherwise
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, ottherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
