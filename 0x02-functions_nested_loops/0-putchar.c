#include "main.h"

/**
 * main - Entry point
 *
 * Return: In this program; 0 (Success)
 */
int main(void)
{
	char string[8] = "_putchar";
	int counter = 0;

	while (counter <= 8)
	{
		_putchar(string[counter]);
		counter++;
	}

	return (0);
}
