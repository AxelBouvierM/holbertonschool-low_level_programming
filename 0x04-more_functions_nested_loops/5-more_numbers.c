#include "main.h"
/**
 *more_numbers - Prints out a string to 10.
 *Return: 0 if success.
 */
void more_numbers(void)
{
int x;
int y;
for (x = '0' ; x <= 10 ; x++)
{
for (y = '0' ; y <= 14 ; y++)
{
_putchar(y / 10 + '1');
_putchar(y);
}
_putchar('\n');
}
}