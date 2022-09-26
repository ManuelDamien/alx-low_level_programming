#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: 0 when successful
 */
void print_diagsums(int *a, int size)
{
	int add1, add2, x;

	add1 = 0;
	add2 = 0;

	for (x = 0; x < size; x++)
	{
		add1 = add1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		add2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", add1, add2);
}
