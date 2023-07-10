#include "main.h"
/**
 * **alloc_grid -returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, c;

	arr = malloc(sizeof(*arr) * height);

	if (width <= 0 || height <= 0 || arr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(sizeof(**arr) * width);
			if (arr[i] == 0)
			{
				while (i--)
				{
					free(arr[i]);
				}
				free(arr);
				return (NULL);
			}
			for (c = 0; c < width; c++)
				arr[i][c] = 0;
		}
	}
	return (arr);
}
