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
	int i = 0;
	int n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}
	s = malloc(n + 1 * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for ( ; i < n; i++)
		s[i] = str[i];
	return (s);
}
