#include "main.h"
/**
 * print_rev - string in reverse
 * @s: string
 * Return: 0 when successful
 */
void print_rev(char *s)
{
	int length = 0;
	int x;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (x = length; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
