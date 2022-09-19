#include "main.h"
/**
 * puts2 - function to print one char out of two
 * starting with the first charcter
 * @str: input
 * Return: 0 when successful
 */
void puts2(char *str)
{
	int length = 0;
	int x = 0;
	char *y = str;
	int a;

	while (*y != '\0')
	{
		y++;
		length;
	}
	x = length - 1;
	for (a = 0; a <= x; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
