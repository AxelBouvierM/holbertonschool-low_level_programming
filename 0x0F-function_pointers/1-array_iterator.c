#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Function that executes a function
 * @array: Array of...
 * @size: Size of...
 * @action: Poitner to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;
	unsigned int total;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		total = array[x];
		(*action)(total);
	}
}
