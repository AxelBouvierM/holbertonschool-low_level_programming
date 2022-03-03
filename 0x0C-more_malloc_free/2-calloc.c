#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Multiplies two numbers.
 * @nmemb: Variable elemnets.
 * @size: Variable bytes.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(nmemb * sizeof(size));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
		str[i] = 0;
	for (x = 0; x < size; x++)
		str[x] = 0;
	return (str);
}
