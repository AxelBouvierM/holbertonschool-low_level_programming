#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
int n;
int m;
int result;
for (n = 0 ; n <= 9 ; n++)
{
for (m = 0 ; m <= 9 ; m++)
{
result = n * m;
if (result >= 10 && m != 0)
{
_putchar(result / 10 + '0');
}
else if (result < 10 && m != 0)
{
_putchar(' ');
}
_putchar(result % 10 + '0');
if (m != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
