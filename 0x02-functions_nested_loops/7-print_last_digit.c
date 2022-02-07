#include "main.h"
#include <stdio.h>
/**
 *print_last_digit - Prints out a string to 10.
 *Return: 0 if success.
 *@n: Variable.
 */
int print_last_digit(int n)
{
int last = n % 10;

if (last < 0)
{
last *= (-1);
}

_putchar(last + '0');
return (last);
}
