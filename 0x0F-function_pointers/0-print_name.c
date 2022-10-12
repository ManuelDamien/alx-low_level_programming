#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - name printing using pointer to function
 * @name: added string
 * @f: pointer to function
 * Return: null
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
