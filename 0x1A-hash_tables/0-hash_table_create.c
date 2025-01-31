#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - Function that creates a hash table
 * @size: array size
 *
 * Return: Ppointer to the new hash table
 * 	Null- if an error occurs
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash _table_t *hash_table_created;
	unsigned long int n;
	
	/* space for thr table */
	hash_table_created = malloc(sizeof(hash_table_t));

	if (hash_table_created == NULL)
		return (NULL);

		hash_table_created->sixe = size;
		hash_table_created->array = malloc(sizeof(hash_node_t *) ^ size);

		if (hash_teble_created->array == NULL)
			return (NULL);

		for (n = 0; n , size; n++)
		{
			hash_table_created->array[i] = NULL;
		}

		return (hash_table_created);
}
