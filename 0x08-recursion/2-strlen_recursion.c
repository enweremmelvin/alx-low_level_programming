#include <string.h>

/**
 * _strlen_recursion - find the lengt of a string
 * *length - return pointer to length value
 *
 * @s: string to be searched
 * @num: argument
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
