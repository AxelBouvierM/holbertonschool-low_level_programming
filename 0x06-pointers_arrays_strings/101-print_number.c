#include "main.h"
/**
 * print_number - check the code
 * @n:  First variable
 * Return: Retorno
 */
void print_number(int n)
{
	if ( n ==  0)
	{
		_putchar('0');
	}
	else if (n >= 10)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 0)
	{
		_putchar('-');
		n *= - 1;
	}
	else
	{
		_putchar(n);
	}
}
