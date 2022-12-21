#include <stdio.h>

/**
 * reverse_array - reverse the elements of an array
 * @a: pointer of array to be reversed
 * @n: length of array
 */

void reverse_array(int *a, int n)
{
	int counter;
	int index;
	int result[1000];

	index = 0;

	for (counter = n - 1; counter >= 0; counter--)
	{
		result[index] = a[counter];

		printf("%d", result[index]);

		if (counter != 0)
			printf(", ");

		index++;
	}

	printf("\n");
}
