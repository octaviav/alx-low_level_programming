#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s, dojacat = 0;
	unsigned long int cat;
	unsigned long int doja = n ^ m;

	for (s = 63; s >= 0; s--)
	{
		cat = doja >> s;
		if (cat & 1)
			dojacat++;
	}

	return (dojacat);
}
