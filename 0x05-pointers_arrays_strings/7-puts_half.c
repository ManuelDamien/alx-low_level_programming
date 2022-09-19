#include "main.h"
/**
 * puts_half - prints half of a string
 * if odd length, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: 0 when successful
 */
void puts_half(char *str)
{
	int x, y, length;

	length = 0;

	for (x = 0; str[x] != '\0'; x++)
		length++;
	y = (length / 2);
	if ((length % 2) == 1)
		y = ((length + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
