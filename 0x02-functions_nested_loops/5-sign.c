#include "main.h"
/**
 *print_sign - Prints out a string to 10.
 *Return: 0 if success.
 *@n: Variable.
 */
int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
