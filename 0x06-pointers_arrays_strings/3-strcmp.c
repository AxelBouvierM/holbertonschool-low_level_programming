#include "main.h"
/**
 * _strcmp - check the code
 * @s1:  Pointers to src
 * @s2: pointer to a variable.
 * Return: Retorno
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] > s2[i])
	{
		return (s1[i] - s2[i]);
	}
	else if (s1[i] < s2[i])
	{
		return (s1[i] - s2[i]);
	}
	else
	{
		return(0);
	}
}
