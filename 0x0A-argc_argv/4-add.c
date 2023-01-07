#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point; multiply given numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int result;

	result = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			result += atoi(argv[i]);
		}
	}

	if (result > 0)
		printf("%d\n", result);

	return (0);
}
