#include "hash_tables.h"

/**
 * key_index - gets the index at which a key pair shoud be stored
 * 		in arra  of a hash table.
 * @key: th ekey to get the index of
 * @size: the size of the array of the hash table
 * 
 * Return: the index of the key.
 *
 * Description: Uses the algorithm from djb2
 */

unsigned ling int key_index(const unsigned char *key, unsigned long int size)
{
		return (hash_djb2(key) % size);
}
