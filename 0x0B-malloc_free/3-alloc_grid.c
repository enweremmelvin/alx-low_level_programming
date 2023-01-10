#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - initialize a 2-d array of variable dimensions
 *
 * @width: array rows
 * @height: array columns
 *
 * Return: pointer to 2-d array or null if one of param if <= 0
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, stop;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(width * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		array[i + 1] = malloc(height * sizeof(int));

		if (array[i] == NULL)
		{
			stop = 1;

			for (i = 0; i < width; i++)
				free(array[i]);
			break;
		}
	}

	if (stop == 1)
	{
		free(array);
		return (NULL);
	}

	for (j = 0; j < width; j++)
	{
		for (k = 0; k < height; k++)
		{
			array[j][k] = 0;
		}
	}

	return (array);
}
