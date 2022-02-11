#include "main.h"
/**
 *_strlen - Prints out a string to 10.
 *@s: First variable
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
