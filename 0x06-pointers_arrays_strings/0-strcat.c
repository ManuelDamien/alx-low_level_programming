#include "main.h"
/**
 * _strcat - contactenate two string together
 * @dest: input value
 * @src: input value
 * Return: void - 0 when successful
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
