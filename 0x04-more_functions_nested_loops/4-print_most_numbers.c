#include "main.h"
/**
 *print_most_numbers - Prints out a string to 10.
 *Return: 0 if success.
 */
void print_most_numbers(void)
{
int n;
for (n = '0' ; n <= '9' ; n++)
{
if (!((n == '2') || (n == '4')))
{
_putchar(n);
}
}
_putchar('\n');
}
