#include "stdio.h"
#include "main.h"
/**
* print_diagsums - function that prints the sum of the two diagonals
* @size: First variable
* @a: Pointer
*/
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i + (j * size)];
		j++;
	}
	j = size - 1;
	for (i = 0; i < size; i++)
	{
		y += a[i + (j * size)];
		j--;
	}

	printf("%d, %d\n", x, y);
}
