#include "main.h"
/**
 * binary_to_uint - Function that convert a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	unsigned int x = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
		{
			return (0);
		}
		x = 2 * x + (b[count] - '0');
	}
	return (x);
}
