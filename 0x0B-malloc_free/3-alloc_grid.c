#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - nested loop to make grid
 *@width: width input
 *@height: height input
 *Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **be;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	be = malloc(sizeof(int *) * height);
	if (be == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		be[x] = malloc(sizeof(int) * width);
		if (be[x] == NULL)
		{
			for (; x >= 0; x--)
				free(be[x]);
			free(be);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			be[x][y] = 0;
	}
	return (be);
}
