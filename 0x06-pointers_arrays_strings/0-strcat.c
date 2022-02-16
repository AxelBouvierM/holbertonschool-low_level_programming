#include "main.h"
/**
 * *_strcat - check the code
 * @dest:  Pointers to src
 * @src: pointer to a variable.
 * Return: Retorno
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int length = _strlen(dest);

	for (i = 0; i <= length; i++)
	{
	if (src[i] != '\0')
		dest[length + i] = src[i];
	else
		dest[length + i] = '\0';
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
