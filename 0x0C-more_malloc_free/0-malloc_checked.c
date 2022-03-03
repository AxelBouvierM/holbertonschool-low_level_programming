#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked -  function that allocates memory.
 * @b: Variable
 * Return: return.
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(sizeof(b));
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
