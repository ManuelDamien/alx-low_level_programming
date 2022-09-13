#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i;
	int j, k;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; ++i)
	{
		for (j = 0; j <= n; ++j)
		{
			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				k = i * j;
				_putchar((k < 100) ? ' ' : ('0' + k / 100));
				_putchar((k <  10) ? ' ' : ('0' + k / 10 % 10));
				_putchar('0' + k % 10);
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
