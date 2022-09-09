#include <stdio.h>
/**
 * main-program execution stage
 * Return: 0 when successful
 */
int main(void)
{
	char b_16;

	for (b_16 = 48; b_16 <= 57; b_16++)
	{
		putchar(b_16);
	}
	for (b_16 = 97; b_16 <= 102; b_16++)
	{
		putchar(b_16);
	}
	putchar('\n');
	return (0);
}
