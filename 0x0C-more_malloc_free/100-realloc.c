#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using free and malloc
 * @ptr: previously allocated pointer to memory by malloc
 * @old_size: size of the allocated memory for pointer
 * @new_size: new size of new memory block
 * Return: newly allocated memory block pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_pnt;
	char *old_pnt;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	new_pnt = malloc(new_size);
	if (!new_pnt)
		return (NULL);
	old_pnt = ptr;
	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			new_pnt[x] = old_pnt[x];
	}
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			new_pnt[x] = old_pnt[x];
	}
	free(ptr);
	return (new_pnt);
}
