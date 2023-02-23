#include "main.h"

/**
 * _abs - print the absolute value
 *@n: the int to check
 *Return: the absolute value of int
 */
int _abs(int n)
{
	int z;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		z= n * -1;
		return (z);
	}
}
