#include "main.h"
/**
 * _sqrta - function that calculates if is natural square root.
 * @n: First variable.
 * @r: Second variable.
 * Return: Return the factorial of a given number.
 */
int _sqrta(int n, int r)
{
	if ((r * r) == n)
	{
		return (r);
	}
	if ((r * r) > n)
	{
		return (-1);
	}
	return (_sqrta(n, r + 1));
}

/**
  * _sqrt_recursion - function that natural square root of a number.
  * @n: First variable.
  * Return: Return the factorial of a given number.
 */
int _sqrt_recursion(int n)
{
	return (_sqrta(n, 0));
}
