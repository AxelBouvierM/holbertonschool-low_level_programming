#include <stdio.h>
/**
 *main - Prints out a string to 10.
 *Return: Returnn.
 */
int main(void)
{
long int a;
a = 612852475143;
long int div = 2, var = 0, maxFact;

while (a != 0)
{
if (a % div != 0)
div = div + 1;
else
{
maxFact = a;
a = a / div;
if (a == 1)
{
printf("%ld", maxFact);
var = 1;
}
}
}
return (0);
}
