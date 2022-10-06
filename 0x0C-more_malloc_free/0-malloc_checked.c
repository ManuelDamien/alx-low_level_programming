#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to e allocated
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pnt = malloc(b);

	if (pnt == NULL)
		exit(98);
	return (pnt);
}
