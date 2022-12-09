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

	fnum = '0';
	lnum = '0';

	while (fnum <= '9')
	{
		while (lnum <= '9')
		{
			if ((fnum < lnum) || (lnum != fnum))
			{
				putchar(fnum);
				putchar(lnum);

				if ((fnum != '8') && (lnum != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}

			lnum++;
		}

		fnum++;
	}

	putchar('\n');
	return (0);
}
