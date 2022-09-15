#include "main.h"
/**
 * print_most_numbers -  checks for digits from 0 through to 9
 * Return: 0 when successful
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
