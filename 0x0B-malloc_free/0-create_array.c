#include "main.h"
#include <stdlib.h>
/**
* create_array - function that creates an array of chars.
* @size: Size of string.
* @c: Character
* Return: Return string.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
	free(s);
}
