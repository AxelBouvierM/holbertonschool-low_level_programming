#include "main.h"
/**
 * _atoi - check the code
 * @s:  Pointers to src
 * Return: Retorno
 */
int _atoi(char *s)
{
	int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] > '9' || s[i] < '0')
{
	res = ((res * 10) + (s[i] - '0'));
	return (res);
}
	else if (s[i] == ('0' && '9'))
{
	return (0);
}
}
	return (-1);
}
