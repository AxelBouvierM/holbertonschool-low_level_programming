#include "main.h"
#include <stdlib.h>
/**
* str_concat - function that concatenates two strings.
* @s1: Pointer first string.
* @s2: Pointer second string.
* Return: Return string.
*/
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int x, i, n, a = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	x = 0;
	while (s2[x] != '\0')
	{
		i++;
		x++;
	}
	i++;
	s3 = malloc(sizeof(char) * i);
	if (s3 == NULL)
		return ('\0');
	a = 0;
	x = 0;
	for (n = 0; n < i; n++)
	{
	if (s1[n] == '\0')
		a = 1;
	if (a == 0)
		s3[n] = s1[n];
	if (a == 1)
	{
		s3[n] = s2[x];
		x++;
	}
	}
	return (s3);
}
