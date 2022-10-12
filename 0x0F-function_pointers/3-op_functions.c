#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Returns the adddition of two numbers
 * @a: first number
 * @b: second number
 * Return: the total of a nd b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @a: first number
 * @b: second number
 * Return: differences of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of the two numbers
 * @a: first number
 * @b: second number
 * Return: answer for the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - dividing two numbers a and b
 * @a: first number
 * @b: second number
 * Return: answer of the division a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of two numbers divided
 * @a: first number
 * @b: second number
 * Return: the remainder of the two numbers divided
 */
int op_mod(int a, int b)
{
	return (a % b);
}
