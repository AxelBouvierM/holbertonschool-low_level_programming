#include "main.h"
/**
 *print_square - Prints out a string to 10.
 *@size: First variable
 */
void print_square(int size)
{
int l;
int a;
if (size <= 0)
{
_putchar('\n');
}
for (l = 1; l <= size; l++)
{
for (a = 1; a <= size; a++)
{
_putchar('#');
}
_putchar('\n');
}
}
