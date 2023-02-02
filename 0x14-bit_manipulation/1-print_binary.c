#include "main.h"

/**
 * print_binary - print the binary representation of a number
 *
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int val;
	if (n > 1)
		print_binary(n >> 1);

	val = 1;
	write(1, &val, 1);
}
