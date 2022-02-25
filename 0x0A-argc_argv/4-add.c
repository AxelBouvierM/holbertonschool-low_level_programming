#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Prints all arguments it receives.
 * @argc: Length of argv
 * @argv: Pointer with the number of elements
 * Return: Return
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv++) == 0)
		{
			return (0);
			printf("Error\n");
			return (1);
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
