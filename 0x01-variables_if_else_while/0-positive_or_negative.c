#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints out a string to stdout.
 * Return: 0 if success.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive %d/n", n);
}
else if (n == 0)
{
printf("is zero %d/n", n);
}
else
{
printf("is negative %d/n", n);
}
return (0);
}
