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
	int chknum;

	result = 0;
	chknum = 0;

	/* check if only one argument (function name) is passed*/
	if (argc == 1)
	{
		printf("0\n");
	}

	/* check if args are passed but don't contain a digit */
	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
			chknum++;
	}

	if (chknum == argc)
	{
		printf("0\n");
		return (0);
	}

	/* iterate over argc and print result or return error if char exists*/
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
