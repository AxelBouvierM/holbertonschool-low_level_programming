#include <stdio.h>
/**
 *main - Prints out a string to stdout.
 *Return: 0 if success.
 */
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
{
putchar('\n');
}
return (0);
}
