#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: Length of argv
 * @argv: Pointer with the number of elements
 * Return: Return
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
