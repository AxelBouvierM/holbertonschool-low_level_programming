#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check the code
 * @n: Variable.
 * Return: Always 0.
 */
void print_to_98(int n)
{
int a;
a = n;
if (n < 98)
{
for (; n <= 98; n++)
{
if (n != 98)
{
printf("%i", n);
printf(", ");
}
else
printf("98");
}
n = 0;
}
if (a >= 98)
{
for (; a >= 98; a--)
{
if (a != 98)
{
printf("%i", a);
printf(", ");
}
else
printf("98");
}
}
printf("\n");
}
