#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first;
	int second;
	int third;

	for (first = '0'; fist <= '9'; first++)
	{
		for (second = '0'; second <= '9'; second++)
		{
			for (third = '0'; third <= '9'; third++)
			{
				if (!((first == second) || (second < first) || (third < second)))
				{
					putchar(first);
					putchar(second);
					putchar(third);

					if (!(third == '9' && second == '8' && first == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}
