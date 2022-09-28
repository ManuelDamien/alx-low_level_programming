#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: Block pointer of memory to fill
 * Return: 0 when successful
 */
int _strlen_recursion(char *s)
{
	/*Base Condition*/
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1)); /*sum 1*/
}
