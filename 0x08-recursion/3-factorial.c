#include "main.h"
/**
 * factorial - Factors of a given number
 * block pointer of memory to fill
 * Return: 0 when successful
 */
int factorial(int n)
{
	if (n == 0) /*Base condition*/
		return (1);
	else if (n < 0) /*Base condition*/
		return (-1);
	else
		return (n * factorial(n - 1)); /*Recursive call*/
}
