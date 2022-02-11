#include "main.h"
/**
 *swap_int - Prints out a string to 10.
 *@a: First variable
*@b: Second variable
 */
void swap_int(int *a, int *b)
{
	int var = *a;

*a = *b;
*b = var;
}
