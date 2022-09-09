#include <stdio.h>
/**
 * main - program execution start point
 * printing all possible combination of two digits
 * in ascending and separated with a comma followed by a space
 * Return: 0 when successful
 */
int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 0; dig1 < 9; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 10; dig2++)
		{
			for (dig3 = dig2 + 1; dig3 < 10; dig3++)
			{
				putchar((dig1 % 10) + '0');
				putchar((dig2 % 10) + '0');
				putchar((dig3 % 10) + '0');

				if (dig1 == 7 && dig2 == 8 && dig3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
