#include "main.h"
/**
* _strlen_recursion - function that returns the length of a string
* @s: Pointer
* Return: Return numbers of characters
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

/**
 * palid - function with conditions to fulfill the main.
 * @s: Pointer
 * @start: Variable where start a string.
 * @end: Variable where end a string.
 * Return: Return recursion.
*/
int palid(char str[], int start, int end)
{
	if (start == end)
	{
		return (1);
	}
	if (str[start] != str[end])
	{
		return (0);
	}
	if (start < end + 1)
	{
		return (palid(str, start + 1, end - 1));
	}
	return (1);
}

/**
 * is_palindrome - function that returns the length of a string
 * @s: Pointer
 * Return: Return recursion.
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s) - 1;

	return (palid(s, 0, length));
}
