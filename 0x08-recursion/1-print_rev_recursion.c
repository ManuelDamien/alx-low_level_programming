#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Block pointer memory to fill
 * Return: 0 when successful
 */
void _print_rev_recursion(char *s)
{
	if (*s) /*if statement*/
	{
		_print_rev_recursion(s + 1); /*add s*/
		_putchar(*s); /*print s*/
	}
}
