#include "main.h"
/**
 * _strncpy - copying a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest 0 when successful
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[j] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
