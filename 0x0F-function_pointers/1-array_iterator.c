#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints an array element on a newline
 * @array: arrays to be printed
 * @size: amount of element to print
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;


	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
