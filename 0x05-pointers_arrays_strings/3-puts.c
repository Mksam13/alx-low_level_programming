#include "main.h"

/**
 * _puts - prints a string to standard output
 * @str: characters to be printed
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
