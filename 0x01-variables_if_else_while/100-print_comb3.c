#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ddgt;
	int high_ceil;

	high_ceil = '89';

	for (ddgt = '0'; ddgt <= high_ceil; ddgt++)
	{
		if (ddgt > 0 && ddgt <= 9)
			putchar('0');

		putchar(ddgt);

		if (ddgt != '89')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
