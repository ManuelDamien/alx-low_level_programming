#include <stdlib.h>
#include "main.h"
/**
 * _memset - memory fill  with constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the s memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
/**
 * _calloc - array memory allocation
 * @nmemb: array number of elements
 * @size: element size for each
 * Return: allocated pointer memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pnt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pnt = malloc(size * nmemb);
	if (pnt == NULL)
		return (NULL);
	_memset(pnt, 0, nmemb * size);
	return (pnt);
}
