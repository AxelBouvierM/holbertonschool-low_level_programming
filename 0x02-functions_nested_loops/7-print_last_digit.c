#include "main.h"
/**
 *print_last_digit - Prints out a string to 10.
 *Return: 0 if success.
 *@n: Variable.
 */
int print_last_digit(int n)
{
int last;
if (n < 0)
{
n = -n;
}
_putchar(n + '0');
last = n % 10;
return (last);
}
