#include "main.h"
/**
 * _evaluate - evaluate fuction sqrt
 * @i: integer
 * @n: integer
 * Return: 0 when successful
 */
int _evaluate(int i, int n)
{
	/*Evaluate function*/
	if (n == 0 || n == 1)
	return (n);
	else if (i * i < n)
		return (_evaluate(i + 1, n));
	else if (i * i == n) /*condiction base*/
		return (i);
	return (-1);
	return (-1);
}
/**
 * _sqrt_recursion - evaluate sqrt
 * @n: integer
 * Return: 0 when successful
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0) /*if n is negative*/
	{
		return (-1);
	else
		return (_evaluate(1, n)); /*Recursive call*/
	}
}
