#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ddgt;

	for (ddgt = '0'; ddgt <= '89')
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
