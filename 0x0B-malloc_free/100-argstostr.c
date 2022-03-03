#include "main.h"
#include <stdlib.h>
/**
* argstostr - function that concatenates all the arguments.
* @ac: Variable.
* @av: Pointer to pointer.
* Return: Return poiunter with string
*/
char *argstostr(int ac, char **av)
{
	int i;
	int len = 1;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += (_strlen(av[i]) + 1);
	}
	str = malloc(len * sizeof(char));
	str[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		_strcat(str, av[i]);
	}
	return (str);
	free(str);
}

#include "main.h"
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
