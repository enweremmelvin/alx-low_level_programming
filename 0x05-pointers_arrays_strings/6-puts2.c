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
	char output[1000];

	stringLength = strlen(str);

	if (stringLength > 0)
	{
		if (!(stringLength % 2 == 0))
			stringLength++;

		for (counter = 0; counter <= stringLength / 2; counter++)
		{
			output[counter] = *(str + index);
			index += 2;
		}

		puts(output);
	}
	else
	{
		puts("\0");
	}
}
