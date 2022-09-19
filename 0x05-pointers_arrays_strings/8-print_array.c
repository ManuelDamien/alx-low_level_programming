#include "main.h"
/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements of the array printed
 * Return: 0 when successful
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (x - 1); x++)
	{
		printf("%d, ", a[x]);
	}
	if (x == (x - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

