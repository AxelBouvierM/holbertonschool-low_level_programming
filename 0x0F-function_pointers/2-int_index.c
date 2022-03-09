#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Function that search for an integer
 * @array: Pointer of a string
 * @size: Size of a string
 * @cmp: Pointer to function
 * Return: Cero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
		return (-1);
}
