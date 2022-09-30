#include "main.h"
/**
 * _islower - function to check for lowercase letters
 * @c: is the int that will use for the arguement of the function
 * Return: 0 when successful
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
