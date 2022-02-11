#include "main.h"
/**
 *print_rev - Prints reverse string.
 *@s: First array
 *@_strlen
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1 ; i >= 0; i--)
{
	_putchar(s[i]);
}
	_putchar('\n');
}

/**
 *_strlen - Prints out a string to 10.
 *@s: First variable
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
{
	count++;
	s++;
}
	return (count);
}
