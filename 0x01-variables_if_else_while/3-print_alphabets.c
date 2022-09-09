#include <stdio.h>

/**
 * main - program that prints the alphabetsin lowercase and later in uppercase.
 * using putchar only
 * Return: 0 when successful
 */

int main(void)
{
	char low = 'a';
	char upper = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low += 1;
	}
	while (upper <= 'Z')
	{
		putchar(upper)
			upper += 1;
	}
	putchar('\n');
	return (0);
}
