#include <stdio.h>
/**
 * main - program execution stage
 * Return: 0 when successful
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i < 1024; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
