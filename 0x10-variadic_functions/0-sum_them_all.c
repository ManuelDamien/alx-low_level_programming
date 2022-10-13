#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all parameters
 * @n: number of summed arguments
 * @...: A variable number of paramters to calculate the sum of.
 * Return: sum or 0 when successful
 * else - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arglst;
	unsigned int x, sum = 0;

	va_start(arglst, n);
	for (x = 0; x < n; x++)
		sum += va_arg(arglst, int);
	va_end(arglst);
	return (sum);
}
