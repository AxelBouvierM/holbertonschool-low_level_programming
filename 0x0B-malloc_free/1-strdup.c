#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory.
* @str: Size of string.
* Return: Return string.
*/
char *_strdup(char *str)
{
	char *s;
	int length = 0;
	int i = 0;
	int n = 0;

	s = malloc(length * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}
	n++;
	for ( ; i < n; i++)
		s[i] = str[i];
	return (s);
	free(s);
}
