#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fnum;
	int lnum;

	for (fnum = '0'; fnum <= '9'; fnum++)
	{
		for (lnum = '0'; lnum <= '9'; lnum++)
		{
			if (!((fnum == lnum) && (fnum > lnum)))
			{
				putchar(fnum);
				putchar(lnum);

				if ((fnum != '8') && (lnum != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
