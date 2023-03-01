#include "main.h"

/**
 * print_rev - printing string characters in reverse form
 * @s: characters to be reversed
 * Return: nothing
 */

void print_rev(char *s)
{
	int Long;
	int o;

	Long = 0;

	while (*s != '\0')
	{
		Long++;
		s++;
	}
	s--;
	for (o = Long; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
}
