#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program execution phase
 * passwords for the program 101-crackme
 * Return: 0 when successful
 */
int main(void)
{
	int password[100];
	int x, add, y;

	add = 0;
	srand(time(NULL));
	for (x = 0; x < 100; x++)
	{
		password[x] = rand() % 78;
		add += (password[x] + '0');
		putchar(password[x] + '0');
		if ((2772 - add) - '0' < 78)
		{
			y = 2772 - add - '0';
			add += y;
			putchar(y + '0');
			break;
		}
	}
	return (0);
}
