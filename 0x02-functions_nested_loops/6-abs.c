#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @c: is the unit that will use for the arguementof the function
 * Return: 0 when successful
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
