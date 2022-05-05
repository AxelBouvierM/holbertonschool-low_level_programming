#include <stdio.h>
#include <stdlib.h>
/**
  * main - print a valid key for the username
  * @argc: Numbers of arguments
  * @argv: Arguments
  * Return: 0 if it works
  */
int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s", argv[1]);
	return (0);
}
