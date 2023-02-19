#include <stdio.h>

/**
 * main - printing to screen the various data type sizes of my laptop which is a 64-bit laptop
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
