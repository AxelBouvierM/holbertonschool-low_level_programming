#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers.
 * @argc: Length of argv
 * @argv: Pointer with the number of elements
 * Return: Return
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int mul;
	int result;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		result = mul;
		printf("%d\n", result);
		return (0);
	}
	else
		printf("Error\n");
	return (0);

}
