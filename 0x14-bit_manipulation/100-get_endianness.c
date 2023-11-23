#include "main.h"
#include <stdio.h>

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int d;
	char *c;

	d = 1;
	c = (char *)&d;
	return (*c);
}
