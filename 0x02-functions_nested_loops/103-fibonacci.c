#include <stdio.h>
/**
 * main - program execution stage
 * Return: 0 when successful
 */
int main(void)
{
	int a = 1;
	int b = 2;
	long int sum = 0;

	do {
		if (b % 2 == 0)
			sum += b;
		b += a;
		a = b - a;
	} while (b <= 4000000);

	printf("%ld\n", sum);
	return (0);
}
