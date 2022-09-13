#include "main.h"
/**
 * main - program execution
 * print_alphabet - prints lowercase alphabets
 * Return: 0 when successful
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
