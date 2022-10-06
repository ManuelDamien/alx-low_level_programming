#include <stdlib.h>
#include "main.h"
/**
 * array_range - array creation of integers
 * @min: minimum values stored
 * @max: maximum values stored plus number of elements
 * Return: new array pointer
 */
int *array_range(int min, int max)
{
	int *pnt;
	int x, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	pnt = malloc(sizeof(int) * size);
	if (pnt == NULL)
		return (NULL);
	for (x = 0; min <= max; x++)
		pnt[x] = min++;
	return (pnt);
}
