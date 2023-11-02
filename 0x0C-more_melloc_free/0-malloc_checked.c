#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - cause normal process terminnation with a status value of 98
 * @b: Number of bytes to allocate
 * Return: Pointer to allocate memory on success
 */
void *malloc_checked(unsigned int b)
{
	void *i;


	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
