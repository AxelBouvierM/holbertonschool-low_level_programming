#include "main.h"
/**
 * *_strpbrk- function that searches a string for any of a set of bytes
 * @s: Pointer
 * @accept: Pointer
 * Return: Value of function
*/
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
