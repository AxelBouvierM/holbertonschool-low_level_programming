#include "main.h"
/**
 * get_endianness - Function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;
	char *endian = (char *)&x;

	if (*endian == 1)
	{
		return (1);
	}
	return (0);
}
