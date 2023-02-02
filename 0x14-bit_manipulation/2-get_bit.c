#include "main.h"

/**
 * get_bit - get the bit at a given index
 *
 * @n: number to be converted to bits and parsed
 *     to get a bit at certain index
 *
 * @index: index of bit to be returned
 *
 * Return: bit found at given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int result;
	result = (n >> index) & 1;

	if (result != 1 && result != 0)
		return (-1);
	else
		return ((n >> index) & 1);
}
