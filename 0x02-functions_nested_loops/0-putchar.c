#include "main.h"
#include "_putchar.c"

/**
 * main - Entry point
 *
 * Return: In this program; 0 (Success)
 */
int main(void)
{
	char string[9] = "_putchar";
	int counter = 0;

	while (counter <= 8)
	{
		_putchar(string[counter]);
		counter++;
	}


	_putchar('\n');
	return (0);
}
