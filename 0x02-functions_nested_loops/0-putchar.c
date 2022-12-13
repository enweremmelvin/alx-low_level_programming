#include "main.h"
#include "_putchar.c"

/**
 * main - Entry point
 *
 * Return: In this program; 0 (Success)
 */
int main(void)
{
	char string[11] = "_putchar\n";
	int counter = 0;

	while (counter <= 11)
	{
		_putchar(string[counter]);
		counter++;
	}

	return (0);
}
