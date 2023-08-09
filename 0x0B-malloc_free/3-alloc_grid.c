#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensionsal array of
 * integers
 * @width: input of width
 * @height: input of height
 *
 * Return: a pointer to an array or null
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i-- ; i > 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}

