#include "main.h"
/**
 * *leet - check the code
 * @str:  Pointers
 * Return: Retorno
 */
char *leet(char *str)
{
	int i;
	int ln;
	char l[] = "AEOTLaeotl";
	char n[] = "4307143071";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (ln = 0; ln < 10; ln++)
	{
	if (str[i] == l[ln])
	{
		str[i] = n[ln];
	}
	}
	}
	return (str);
}
