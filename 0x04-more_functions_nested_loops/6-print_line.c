#include "main.h"
/**
 *print_line - Prints out a string to 10.
 *@n: First variable.
 */
void print_line(int n)
{
int v;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (v = 0; v < n; v++)
{
_putchar('_');
}
_putchar('\n');
}
}

