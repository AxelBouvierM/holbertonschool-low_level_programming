#include "main.h"
/**
 * *rot13 - check the code
 * @str:  Pointers
 * Return: Retorno
 */
char *rot13(char *str)
{
	int i; 
	
	for (i = 0; str[i] != '\0'; i++)
	{
	while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	{
		if ((str[i] > 'M' && str[i] <= 'Z') || (str[i] > 'm' && str[i] <= 'z'))
		{
		str[i] -= 13;
		break;
		}
		else
		{
		str[i] += 13;
		break;
		}
	}
	}
	return (str);
}
