#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Function that return the sum of all parameters
 * @n: Vaariable
 * Return: Return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list parameters;

	if (n == 0)
	{
		return (0);
	}

	va_start(parameters, n);
	sum = 0;


	for (i = 0; i < n; i++)
	{
		sum += va_arg(parameters, unsigned int);
	}
	va_end(parameters);
	return (sum);
}
