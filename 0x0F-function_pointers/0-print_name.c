#include "function_pointers.h"
/**
 * print_name - Function that prints a name
 * @name: Name of...
 * @f: Pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
