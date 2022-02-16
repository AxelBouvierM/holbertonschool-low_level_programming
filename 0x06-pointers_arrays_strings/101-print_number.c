#include "main.h"
/**
 * print_number - check the code
 * @n:  First variable
 * Return: Retorno
 */
void print_number(int n)
{
	unsigned int num = n;
	
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
		_putchar((num % 10) + '0');
	}
}
