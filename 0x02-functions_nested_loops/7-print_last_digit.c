#include "main.h"
/**
 *print_last_digit - Prints out a string to 10.
 *Return: 0 if success.
 *@n: Variable.
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = n *(-1);
}
_putchar(n % 10 + '0');
return (n % 10);
}
