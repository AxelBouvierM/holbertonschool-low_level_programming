#include "main.h"
/**
 * _strchr - check the code
 * @s: Pointers to src
 * @c: Firste variable.
 * Return: Retorno
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return ('\0');
	while (*s != c && *s != '\0')
		s++;
	if (c != '\0' && *s == '\0')
		return (s);
	else
		return (s);
}
