#include "main.h"
/**
 * *string_toupper - check the code
 * @str: Pinter
 * Return: Retorno
 */
char *string_toupper(char *str)
{
	int length = _strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	}
	return (str);
}

/**
 *    * _strlen - check the code
 *       * @s: pointer to a
 *          * Return: length if success.
 *             */
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
