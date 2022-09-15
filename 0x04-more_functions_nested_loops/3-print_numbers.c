#include "main.h"
/**
 * print_numbers - checks digit from 0 through to 9
 * Return: 0 when successful
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
