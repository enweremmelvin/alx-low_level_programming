#include "main.h"

/**
 * print_number - print integers
 * @n: integer to be printed
 */

void print_number(int n)
{
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 0)
	{
		_putchar('-');
		n *= -1;

		if (n > 9)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
		{
			_putchar(n + '0');
		}
	}
	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
