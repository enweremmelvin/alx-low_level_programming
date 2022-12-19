#include <stdio.h>
#include <string.h>

/**
 * puts_half - print the second half of a string
 * @str: string to be considered
 */
void puts_half(char *str)
{
	int min_len;
	int max_len;
	int counter;
	char newArray[1000];

	min_len = strlen(str) / 2;
	max_len = strlen(str);

	if (min_len > 0)
	{
		for (counter = 0; counter <= max_len / 2; counter++)
		{
			newArray[counter] = str[min_len];
			min_len++;
		}

		puts(newArray);
	}
}
