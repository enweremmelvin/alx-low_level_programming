#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ddgt;

	for (ddgt = '00'; ddgt <= '89')
	{
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
