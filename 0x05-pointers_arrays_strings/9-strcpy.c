#include "main.h"
/**
 * *_strcpy - check the code
 * @dest:  Pointers to src
 * @src: pointer to a variable.
 * Return: Retorno
 */
char *_strcpy(char *dest, char *src)
{
	int length = _strlen(src);
	int i;
	char x;

	for (i = 0; i <= length; i++)
{
	x = *(src + i);
	*(dest + i) = x;
}
	return (dest);
}

/**
   * _strlen - check the code
   * @s: pointer to a
   * Return: length if success.
   */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
{
	length++;
	s++;
}
	return (length);
}
