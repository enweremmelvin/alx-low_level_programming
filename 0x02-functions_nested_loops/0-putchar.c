#include "main.h"

/**
 * main - Entry point
 *
 * Return: In this program; 0 (Success)
 */
int main(void)
{
	char string[11] = "_putchar";
	int counter = 0;

	while (counter <= 11)
	{
		_putchar(string[counter]);
		counter++;
	}

	_putchar('\n');
	return (0);
}
