#include "main.h"

/**
 * _islower - find lowercase characters
 *
 * Return: 1 if true; 0 if false
 */
int _islower(int c)
{
	char alpha = 'a';
	int return_value;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (c == alpha)
			return_value = 1;
		else
			return_value = 0;
	}

	return return_value;
}
