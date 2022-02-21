#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: Pointer
 * @accept: Pointer
 * Return: Value of function
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int b;
	unsigned int flag;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		flag = 1;
	for (b = 0; *(accept + b) != '\0'; b++)
	{
	if (*(s + i) == *(accept + b))
	{
		flag = 0;
		break;
	}
	}
	if (flag == 1)
	break;
	}
	return (i);
}
