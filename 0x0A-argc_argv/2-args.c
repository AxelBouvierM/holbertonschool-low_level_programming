#include <stdio.h>
/**
 * main - Prints all arguments it receives.
 * @argc: Length of argv
 * @argv: Pointer with the number of elements
 * Return: Return
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
