#include <stdio.h>
/**
 *main - Prints out a string to stdout.
 *Return: 0 if success.
 */
int main(void)
{
int c;
for (c = 0; c <= 9 ; c++)
{
putchar(c % 10 + '0');
}
putchar('\n');
return (0);
}
