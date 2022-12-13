#include "main.h"

/**
 * main - Entry point
 *
 * Return: In this program; 0 (Success)
 */
int main(void)
{
	char string[10] = "_putchar\n";
	int counter = 0;

	while (counter <= 10)
	{
		_putchar(string[counter]);
		counter++;
	}

	return (0);
}
