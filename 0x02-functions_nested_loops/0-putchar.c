#include "main.h"

/**
 * main - Entry point
 *
 * Return: In this program; 0 (Success)
 */
int main(void)
{
	char string[8] = "_putchar";
	int counter = 1;

	while (counter <= 8)
	{
		_putchar(string[counter]);
		counter++;
	}

	_putchar('\n');
	return (0);
}
