#include <stdio.h>
#include <string.h>

/**
 * puts2 - print half the value of an array
 * @str: array to be considered
 */
void puts2(char *str)
{
	int stringLength;
	int counter;
	char index;

	stringLength = strlen(str);

	if (stringLength > 0)
	{
		for (counter = 0; counter <= stringLength / 2; counter++)
		{
			printf("%c", *(str + index));
			index += 2;
		}

		printf("\n");
	}
	else
	{
		puts("\0");
	}
}
