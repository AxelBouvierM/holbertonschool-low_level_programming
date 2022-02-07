#include "main.h"
/**
 *main - Prints out a string to stdout.
 *Return: 0 if success.
 */
void print_alphabet(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
