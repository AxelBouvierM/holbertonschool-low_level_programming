#include "main.h"
/**
 *more_numbers - Prints out a string to 10.
 *Return: 0 if success.
 */
void more_numbers(void)
{
int x;
char y;
for (x = 0; x < 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (y > 9)

_putchar(y / 10 + '0');
_putchar(y % 10 + '0');

}
_putchar('\n');
}
}
