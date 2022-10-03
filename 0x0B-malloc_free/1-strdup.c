#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: pointer to string being duplicated
 * Return: NULL if str is NULL
 * pointer to be duplicated string on success
 * NULL if memory was insufficient
 */
char *_strdup(char *str)
{
	char *xxx;
	int y, r = 0;

	if (str == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
		y++;
	xxx = malloc(sizeof(char) * (y + 1));
	if (xxx == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		xxx[r] = str[r];
	return (xxx);
}
