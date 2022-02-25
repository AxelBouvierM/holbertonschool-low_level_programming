#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Program that adds positive numbers
 * @argc: Length of argv
 * @argv: Pointer with the number of elements
 * Return: Return
 */
int main(int argc, char *argv[])
{
	int i;
	int c;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (c = 0; argv[i][c] != '\0'; c++)
	{
		if (!isdigit(argv[i][c]))
		{
			printf("Error\n");
			return (1);
		}
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
