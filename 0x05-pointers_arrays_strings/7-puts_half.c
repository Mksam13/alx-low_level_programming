#include "main.h"

/**
 * puts_half - print the half of a string
 * @str: characters to print only half
 * Return: 0
 */

void puts_half(char *str)
{
	int a, n, lon;

	lon = 0;

	for (a = 0; str[a] != '\0'; a++)
		lon++;

	n = (lon / 2);

	if ((lon % 2) == 1)
		n = ((lon + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
