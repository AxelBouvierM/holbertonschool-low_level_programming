#include "main.h"
/**
 *print_alphabet_x10 - Prints out a string to 10.
 *Return: 0 if success.
 */
void print_alphabet_x10(void)
{
char ch;
int x;
for (x = 0 ; x < 10 ; x++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
