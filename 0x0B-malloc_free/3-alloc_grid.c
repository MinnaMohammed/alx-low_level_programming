#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: grid width.
 *@height: grid height.
 *
 * Return: NULL (on failure) or if width or height is 0 or negative.
 * a pointer to a 2D array.
*/
int **alloc_grid(int width, int height)
{
	int **new_array;

	int i, j;

	if (width < 0 || height < 0 || width == 0 || height == 0)
	{
		return (NULL);
	}

	new_array = (int *)malloc((width * height) * sizeof(int));

	if (new_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			new_array[i][j] = 0;
		}
	}

	return (new_array);

}
