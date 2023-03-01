#include "main.h"

/**
 * swap_int - swapping the integer of two variables
 * @a: first variable
 * @b: second variable
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
