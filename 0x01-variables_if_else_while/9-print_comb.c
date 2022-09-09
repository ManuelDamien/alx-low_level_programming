#include <stdio.h>
/**
 * main - program execution stage
 * Return: 0 when successful
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
