#include "main.h"
/**
 *_isalpha - Prints out a string to 10.
 *Return: 0 if success.
 *@c: Variable.
 */
int _isalpha(int c)
{

if ((c > 65 && c < 90) || (c > 97 && c < 122))
{
return (1);
}
else
{
return (0);
}
}
