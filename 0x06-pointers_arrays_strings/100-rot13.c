#include "main.h"
/**
 * *rot13 - check the code
 * @str:  Pointers
 * Return: Retorno
 */
char *rot13(char *str)
{
	int i;
	int ln;
	char l[] = "ABCDEFGHIJKLMabcdefghijklm";
	char n[] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (ln = 0; ln < 26; ln++)
	{
	if (str[i] == l[ln])
	{
		str[i] = n[ln];
	}
	}
	}
	return (str);
}
