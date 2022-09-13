#include <stdio.h>
/**
 * main - program execution stage
 * Return: 0 when successful
 */
int main(void)
{
	int x = 1;
	int y = 2;
	long int sum = 0;

	do {
		if (y % 2 == 0)
			sum += y;
		y += x;
		x = y - a;
	}
	while (y <= 4000000)
		printf("%ld\n", sum);
	return (0);
}
