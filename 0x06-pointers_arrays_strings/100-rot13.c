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
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (ln = 0; ln < 52; ln++)
	{
	if (str[i] == l[ln])
	{
		str[i] = n[ln];
	}
	}
	}
	return (str);
}
