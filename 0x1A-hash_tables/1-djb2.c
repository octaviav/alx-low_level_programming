#include "hash_table.h"

/**
 * hash_djb2 - Function implementing the djb2 algorithm
 * @str: string to hash
 *
 * Return: The calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
		hash = ((hash << 5) + hash) + count; /* calculating the next value */

	return (hash);
}
