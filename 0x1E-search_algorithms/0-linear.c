#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of
 * integers using the linear search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: if value is not present or if array is null, -1
 *	otherwise, the first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t k;

	if (array == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%ld] - [%d]\n", k, array[k]);

		if (array[k] == value)

			return (k);
	}

	return (-1);
}
