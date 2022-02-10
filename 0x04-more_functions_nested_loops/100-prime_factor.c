#include <stdio.h>
/**
 *main - Prints out a string to 10.
 *Return: Returnn.
 */
int main(void)
{
long int i = 2;
long int n = 612852475143;

for (i = 2; i < n; i++)
{
if ((n % i) == 0)
{
n /= i;
i--;
}
}

printf("%ld\n", n);
return (0);
}
