#include <stdio.h>
/**
 *main - Prints out a string to stdout.
 *Return: 0 if success.
 */
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (!((ch == 'q') || (ch == 'e')))
{
putchar(ch);
}
}
{
putchar('\n');
}
return (0);
}
