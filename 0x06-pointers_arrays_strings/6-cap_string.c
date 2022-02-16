#include "main.h"
/**
 * *cap_string - check the code
 * @str:  Pointers
 * Return: Retorno
 */
char *cap_string(char *str)
{
	int i;
	int length = _strlen(str);

	for (i = 0; i < length; i++)
	{
	if (str[i] == ' ' || str[i] == 9 || str[i] == '\n' || str[i] == ',' ||
	str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
	str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
	str[i] == '}')
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] = str[i + 1] - 32;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
	}
	}
	return (str);
}

/**
 * * _strlen - check the code
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
