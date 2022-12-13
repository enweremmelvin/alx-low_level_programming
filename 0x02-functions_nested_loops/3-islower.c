#include "main.h"

/**
 * _islower - find lowercase characters
 *
 * Return: 1 if true; 0 if false
 */
int _islower(int c)
{
	int return_value;

	if (c >= 'a' && c <= 'z')
		return_value = 1;
	else
		return_value = 0;

	return return_value;
}
