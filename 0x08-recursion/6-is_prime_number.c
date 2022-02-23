#include "main.h"
/**
 * primen - function that calculates if is natural square root.
 * @n: First variable.
 * @r: Second variable.
 * Return: Return the factorial of a given number.
 */
int primen(int n, int r)
{
	if (r > 1)
	{
		if (n % r == 0)
		{
			return (0);
		}
		else
		{
			return (primen(n, r - 1));
		}
	}
	return (1);

}

/**
  * is_prime_number - function that natural square root of a number.
  * @n: First variable.
  * Return: Return the factorial of a given number.
 */
int is_prime_number(int n)
{
	int r;

	r = n - 1;

	if (n < 0 || n == 1)
	{
		return (0);
	}
	return (primen(n, r));
}
