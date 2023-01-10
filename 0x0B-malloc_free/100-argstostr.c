#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - concatenate arguments
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: address to new string or null on failure
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int length;
	int total_length;

	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]);

	concat = malloc(total_length * sizeof(char) + ac);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		length = strlen(av[i]);

		for (j = 0; j < length; j++)
		{
			if (av[i][j] != '\0')
			{
				concat[k] = av[i][j];

				k++;
			}
		}

		concat[k] = '\n';
		k++;
	}

	return (concat);
}
