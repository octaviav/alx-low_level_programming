#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int sim;

	sim = 0;
	if (!b)
		return (0);
	for (d = 0; b[d] != '\0'; d++)
	{
		if (b[d] != '0' && b[d] != '1')
			return (0);
	}
	for (d = 0; b[d] != '\0'; d++)
	{
		sim <<= 1;
		if (b[d] == '1')
			sim += 1;
	}
	return (sim);
}
