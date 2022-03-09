#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - Function sum a and b
 * @a: First number
 * @b: Second number
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Function difference of a and b
 * @a: First number
 * @b: Second number
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that return the product of a and b
 * @a: First number
 * @b: Second number
 * Return: Return the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that print the result of the division
 * @a: First number
 * @b: Second number
 * Return: The result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function that print the remainder of the division of a by b
 * @a: First number
 * @b: Second number
 * Return: The remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
