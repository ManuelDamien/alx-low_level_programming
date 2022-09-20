#include "main.h"
/**
 * reverse_array - reverse array for integers
 * @a: array
 * @n: number of elements of array
 * Return: void 0 when successful
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
