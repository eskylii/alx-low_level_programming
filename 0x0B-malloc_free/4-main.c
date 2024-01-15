#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_grid - prints a grid of integers
 *@grid: the address of the two dimensional grid
 *@width: width of the grid
 *@height: height of the grid
 *Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
	int m;
	int b;

	b = 0;
	while (b < height)
	{
		m = 0;
		while (m < width)
		{
			printf("%d ", grid[b][m]);
			m++;
		}
		printf("\n");
		b++;
	}
}
