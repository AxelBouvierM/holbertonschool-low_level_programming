#include "main.h"
/**
 * get_bit - Function that return the value of a bit at a given index
 * @n: Numbers
 * @index: Position of a string
 * Return: The value of a bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}
