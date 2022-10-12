#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - printing each array element on a new line
 * @array: array
 * @size: numnber of element to print
 * @action: pointer to print in hexad or regular
 * Return: void or 0 when successful
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
