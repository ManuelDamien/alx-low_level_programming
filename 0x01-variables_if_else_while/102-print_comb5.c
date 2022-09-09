#include <stdio.h>
/**
 * main - program that prints all possible combinations of
 * two two-digit
 * The numbers should range from 0 to 99
 * Numbers must be separated by ,followed by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * Return: 0
 */

int main(void)
{
	int n1 = 0, n2;
while (n1 <= 99)
{
	n2 = n1;
	while (n2 <= 99)
	{
		if (n2 != n1)
		{
			putchar((n1 / 10) + 48);
			putchar((n1 % 10) + 48);
			putchar(' ');
			putchar((n2 / 10) + 48);
			putchar((n1 % 10) + 48);
			if (n1 != 98 || n2 != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		++n2;
	}
	++n1;
}
putch('\n');
return (0);
}
