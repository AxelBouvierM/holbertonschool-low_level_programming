#include <stddef.h>
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
	int x;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
		{
			if (array[i] == array[x])
			{
				return (i);
			}
			else if (array[i] != array[x])
			{
				return (-1);
			}
		}
		(*cmp)(i);
	}
	return (0);
}
