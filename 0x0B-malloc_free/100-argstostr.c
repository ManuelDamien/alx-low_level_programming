#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument counts
 *  @av: pointer to array of size
 *  Return: 0 when successful
 */
char *argstostr(int ac, char **av)
{
	int x, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[x][n]; n++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[x][n]; n++)
		{
			str[r] = av[x][n];
			r++;
		}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
