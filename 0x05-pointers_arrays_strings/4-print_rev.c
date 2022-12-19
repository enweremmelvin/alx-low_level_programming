#include <stdio.h>
#include <string.h>

/**
 * print_rev - print a reversed string
 * @s: parameter to hold string
 */
void print_rev(char *s)
{
	int length;
	int counter;
	int index;
	char reversed[1000];

	length = strlen(s);
	index = 0;

	for (counter = length - 1; counter >= 0; counter--)
	{
		reversed[index] = s[counter];
		index++;
	}

	puts(reversed);
}
